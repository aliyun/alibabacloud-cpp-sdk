// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTACLUSTER_HPP_
#define ALIBABACLOUD_MODELS_QUOTACLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSource.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QuotaCluster() = default ;
    QuotaCluster(const QuotaCluster &) = default ;
    QuotaCluster(QuotaCluster &&) = default ;
    QuotaCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaCluster() = default ;
    QuotaCluster& operator=(const QuotaCluster &) = default ;
    QuotaCluster& operator=(QuotaCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->dataSources_ == nullptr && this->endpoints_ == nullptr && this->image_ == nullptr && this->status_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline QuotaCluster& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DataSource> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DataSource>) };
    inline vector<DataSource> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<DataSource>) };
    inline QuotaCluster& setDataSources(const vector<DataSource> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline QuotaCluster& setDataSources(vector<DataSource> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const map<string, string> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, map<string, string>) };
    inline map<string, string> getEndpoints() { DARABONBA_PTR_GET(endpoints_, map<string, string>) };
    inline QuotaCluster& setEndpoints(const map<string, string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline QuotaCluster& setEndpoints(map<string, string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline QuotaCluster& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuotaCluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> clusterType_ {};
    shared_ptr<vector<DataSource>> dataSources_ {};
    shared_ptr<map<string, string>> endpoints_ {};
    shared_ptr<string> image_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

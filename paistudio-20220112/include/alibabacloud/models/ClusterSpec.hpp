// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSPEC_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ClusterSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    ClusterSpec() = default ;
    ClusterSpec(const ClusterSpec &) = default ;
    ClusterSpec(ClusterSpec &&) = default ;
    ClusterSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterSpec() = default ;
    ClusterSpec& operator=(const ClusterSpec &) = default ;
    ClusterSpec& operator=(ClusterSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->dataSources_ == nullptr && this->image_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ClusterSpec& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DataSource> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DataSource>) };
    inline vector<DataSource> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<DataSource>) };
    inline ClusterSpec& setDataSources(const vector<DataSource> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline ClusterSpec& setDataSources(vector<DataSource> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ClusterSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    shared_ptr<string> clusterType_ {};
    shared_ptr<vector<DataSource>> dataSources_ {};
    shared_ptr<string> image_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

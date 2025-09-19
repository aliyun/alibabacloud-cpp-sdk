// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterCnnfStatusDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCnnfStatusDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCnnfStatusDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
    };
    ListClusterCnnfStatusDetailRequest() = default ;
    ListClusterCnnfStatusDetailRequest(const ListClusterCnnfStatusDetailRequest &) = default ;
    ListClusterCnnfStatusDetailRequest(ListClusterCnnfStatusDetailRequest &&) = default ;
    ListClusterCnnfStatusDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCnnfStatusDetailRequest() = default ;
    ListClusterCnnfStatusDetailRequest& operator=(const ListClusterCnnfStatusDetailRequest &) = default ;
    ListClusterCnnfStatusDetailRequest& operator=(ListClusterCnnfStatusDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterIds_ != nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & clusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> clusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline ListClusterCnnfStatusDetailRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline ListClusterCnnfStatusDetailRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


  protected:
    // An array that consists of the ID of the cluster.
    std::shared_ptr<vector<string>> clusterIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

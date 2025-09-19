// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPAPLUGINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPAPLUGINSTATUSREQUEST_HPP_
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
  class GetOpaPluginStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaPluginStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaPluginStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
    };
    GetOpaPluginStatusRequest() = default ;
    GetOpaPluginStatusRequest(const GetOpaPluginStatusRequest &) = default ;
    GetOpaPluginStatusRequest(GetOpaPluginStatusRequest &&) = default ;
    GetOpaPluginStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaPluginStatusRequest() = default ;
    GetOpaPluginStatusRequest& operator=(const GetOpaPluginStatusRequest &) = default ;
    GetOpaPluginStatusRequest& operator=(GetOpaPluginStatusRequest &&) = default ;
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
    inline GetOpaPluginStatusRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline GetOpaPluginStatusRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


  protected:
    // The cluster IDs.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> clusterIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

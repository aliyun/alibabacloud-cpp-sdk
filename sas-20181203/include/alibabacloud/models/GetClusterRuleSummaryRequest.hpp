// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterRuleSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRuleSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRuleSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    GetClusterRuleSummaryRequest() = default ;
    GetClusterRuleSummaryRequest(const GetClusterRuleSummaryRequest &) = default ;
    GetClusterRuleSummaryRequest(GetClusterRuleSummaryRequest &&) = default ;
    GetClusterRuleSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRuleSummaryRequest() = default ;
    GetClusterRuleSummaryRequest& operator=(const GetClusterRuleSummaryRequest &) = default ;
    GetClusterRuleSummaryRequest& operator=(GetClusterRuleSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterRuleSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

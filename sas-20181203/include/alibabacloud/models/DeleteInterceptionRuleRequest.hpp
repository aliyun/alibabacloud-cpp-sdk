// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTERCEPTIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTERCEPTIONRULEREQUEST_HPP_
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
  class DeleteInterceptionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    DeleteInterceptionRuleRequest() = default ;
    DeleteInterceptionRuleRequest(const DeleteInterceptionRuleRequest &) = default ;
    DeleteInterceptionRuleRequest(DeleteInterceptionRuleRequest &&) = default ;
    DeleteInterceptionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInterceptionRuleRequest() = default ;
    DeleteInterceptionRuleRequest& operator=(const DeleteInterceptionRuleRequest &) = default ;
    DeleteInterceptionRuleRequest& operator=(DeleteInterceptionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->ruleIds_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteInterceptionRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<int64_t> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
    inline vector<int64_t> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
    inline DeleteInterceptionRuleRequest& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DeleteInterceptionRuleRequest& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The ID of the cluster that you want to query.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IDs of the rules that you want to delete.
    std::shared_ptr<vector<int64_t>> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

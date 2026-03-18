// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMETRIGGERSCALINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMETRIGGERSCALINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeTimeTriggerScalingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimeTriggerScalingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimeTriggerScalingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
    };
    DescribeTimeTriggerScalingRulesRequest() = default ;
    DescribeTimeTriggerScalingRulesRequest(const DescribeTimeTriggerScalingRulesRequest &) = default ;
    DescribeTimeTriggerScalingRulesRequest(DescribeTimeTriggerScalingRulesRequest &&) = default ;
    DescribeTimeTriggerScalingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimeTriggerScalingRulesRequest() = default ;
    DescribeTimeTriggerScalingRulesRequest& operator=(const DescribeTimeTriggerScalingRulesRequest &) = default ;
    DescribeTimeTriggerScalingRulesRequest& operator=(DescribeTimeTriggerScalingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeTimeTriggerScalingRulesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    shared_ptr<string> nodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif

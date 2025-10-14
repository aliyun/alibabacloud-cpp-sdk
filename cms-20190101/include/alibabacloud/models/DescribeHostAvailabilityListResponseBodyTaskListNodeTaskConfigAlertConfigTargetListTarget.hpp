// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGTARGETLISTTARGET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGTARGETLISTTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->id_ == nullptr && return this->jsonParams_ == nullptr && return this->level_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonParams Field Functions 
    bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
    void deleteJsonParams() { this->jsonParams_ = nullptr;};
    inline string jsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the function.
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
    // 
    // *   Service: the service code
    // *   Region: the region ID
    // *   Account: the ID of the Alibaba Cloud account
    // *   ResourceType: the resource type
    // *   ResourceId: the resource ID.
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the resource that triggers the alert.
    std::shared_ptr<string> id_ = nullptr;
    // The JSON-formatted parameters of the alert callback.
    std::shared_ptr<string> jsonParams_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   INFO
    // *   WARN
    // *   CRITICAL
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

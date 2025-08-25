// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PICKOUTBOUNDNUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PICKOUTBOUNDNUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PickOutboundNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PickOutboundNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, PickOutboundNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    PickOutboundNumbersRequest() = default ;
    PickOutboundNumbersRequest(const PickOutboundNumbersRequest &) = default ;
    PickOutboundNumbersRequest(PickOutboundNumbersRequest &&) = default ;
    PickOutboundNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PickOutboundNumbersRequest() = default ;
    PickOutboundNumbersRequest& operator=(const PickOutboundNumbersRequest &) = default ;
    PickOutboundNumbersRequest& operator=(PickOutboundNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calledNumber_ != nullptr
        && this->count_ != nullptr && this->instanceId_ != nullptr && this->skillGroupIdList_ != nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline PickOutboundNumbersRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline PickOutboundNumbersRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PickOutboundNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline string skillGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIdList_, "") };
    inline PickOutboundNumbersRequest& setSkillGroupIdList(string skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

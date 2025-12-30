// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBACKTOBACKCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTBACKTOBACKCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class StartBackToBackCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBackToBackCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CallCenterNumber, callCenterNumber_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(MobileKey, mobileKey_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
    };
    friend void from_json(const Darabonba::Json& j, StartBackToBackCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CallCenterNumber, callCenterNumber_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(MobileKey, mobileKey_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
    };
    StartBackToBackCallRequest() = default ;
    StartBackToBackCallRequest(const StartBackToBackCallRequest &) = default ;
    StartBackToBackCallRequest(StartBackToBackCallRequest &&) = default ;
    StartBackToBackCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBackToBackCallRequest() = default ;
    StartBackToBackCallRequest& operator=(const StartBackToBackCallRequest &) = default ;
    StartBackToBackCallRequest& operator=(StartBackToBackCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->callCenterNumber_ == nullptr && this->caller_ == nullptr && this->mobileKey_ == nullptr && this->skillType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline StartBackToBackCallRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline StartBackToBackCallRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callCenterNumber Field Functions 
    bool hasCallCenterNumber() const { return this->callCenterNumber_ != nullptr;};
    void deleteCallCenterNumber() { this->callCenterNumber_ = nullptr;};
    inline string getCallCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(callCenterNumber_, "") };
    inline StartBackToBackCallRequest& setCallCenterNumber(string callCenterNumber) { DARABONBA_PTR_SET_VALUE(callCenterNumber_, callCenterNumber) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline StartBackToBackCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // mobileKey Field Functions 
    bool hasMobileKey() const { return this->mobileKey_ != nullptr;};
    void deleteMobileKey() { this->mobileKey_ = nullptr;};
    inline string getMobileKey() const { DARABONBA_PTR_GET_DEFAULT(mobileKey_, "") };
    inline StartBackToBackCallRequest& setMobileKey(string mobileKey) { DARABONBA_PTR_SET_VALUE(mobileKey_, mobileKey) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline int64_t getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, 0L) };
    inline StartBackToBackCallRequest& setSkillType(int64_t skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    shared_ptr<string> callCenterNumber_ {};
    // This parameter is required.
    shared_ptr<string> caller_ {};
    shared_ptr<string> mobileKey_ {};
    // This parameter is required.
    shared_ptr<int64_t> skillType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODYFAILLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODYFAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageUserInfoResponseBodyFailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageUserInfoResponseBodyFailList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageUserInfoResponseBodyFailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyLiveMessageUserInfoResponseBodyFailList() = default ;
    ModifyLiveMessageUserInfoResponseBodyFailList(const ModifyLiveMessageUserInfoResponseBodyFailList &) = default ;
    ModifyLiveMessageUserInfoResponseBodyFailList(ModifyLiveMessageUserInfoResponseBodyFailList &&) = default ;
    ModifyLiveMessageUserInfoResponseBodyFailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageUserInfoResponseBodyFailList() = default ;
    ModifyLiveMessageUserInfoResponseBodyFailList& operator=(const ModifyLiveMessageUserInfoResponseBodyFailList &) = default ;
    ModifyLiveMessageUserInfoResponseBodyFailList& operator=(ModifyLiveMessageUserInfoResponseBodyFailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->groupId_ == nullptr && return this->reason_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ModifyLiveMessageUserInfoResponseBodyFailList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageUserInfoResponseBodyFailList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyLiveMessageUserInfoResponseBodyFailList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyLiveMessageUserInfoResponseBodyFailList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The ID of the group to which the user belongs. For failed modification, the information of the user is not updated when you query the users in the group. You can try again after you check the failure reason and fix the issue.
    std::shared_ptr<string> groupId_ = nullptr;
    // The reason why the information of the user failed to be modified.
    std::shared_ptr<string> reason_ = nullptr;
    // Indicates whether the group to which the user belongs is modified. In this case, the group is not modified.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

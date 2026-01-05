// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    ModifyLiveMessageUserInfoResponseBody() = default ;
    ModifyLiveMessageUserInfoResponseBody(const ModifyLiveMessageUserInfoResponseBody &) = default ;
    ModifyLiveMessageUserInfoResponseBody(ModifyLiveMessageUserInfoResponseBody &&) = default ;
    ModifyLiveMessageUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageUserInfoResponseBody() = default ;
    ModifyLiveMessageUserInfoResponseBody& operator=(const ModifyLiveMessageUserInfoResponseBody &) = default ;
    ModifyLiveMessageUserInfoResponseBody& operator=(ModifyLiveMessageUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessList& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessList& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      SuccessList() = default ;
      SuccessList(const SuccessList &) = default ;
      SuccessList(SuccessList &&) = default ;
      SuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessList() = default ;
      SuccessList& operator=(const SuccessList &) = default ;
      SuccessList& operator=(SuccessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->success_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline SuccessList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline SuccessList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The ID of the group to which the user belongs. For successful modification, the information of the user is updated when you query the users in the group.
      shared_ptr<string> groupId_ {};
      // Indicates whether the group to which the user belongs is modified. In this case, the group is modified.
      shared_ptr<bool> success_ {};
    };

    class FailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, FailList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      FailList() = default ;
      FailList(const FailList &) = default ;
      FailList(FailList &&) = default ;
      FailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailList() = default ;
      FailList& operator=(const FailList &) = default ;
      FailList& operator=(FailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->groupId_ == nullptr && this->reason_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline FailList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline FailList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline FailList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline FailList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error code.
      shared_ptr<int32_t> code_ {};
      // The ID of the group to which the user belongs. For failed modification, the information of the user is not updated when you query the users in the group. You can try again after you check the failure reason and fix the issue.
      shared_ptr<string> groupId_ {};
      // The reason why the information of the user failed to be modified.
      shared_ptr<string> reason_ {};
      // Indicates whether the group to which the user belongs is modified. In this case, the group is not modified.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->failList_ == nullptr
        && this->requestId_ == nullptr && this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<ModifyLiveMessageUserInfoResponseBody::FailList> & getFailList() const { DARABONBA_PTR_GET_CONST(failList_, vector<ModifyLiveMessageUserInfoResponseBody::FailList>) };
    inline vector<ModifyLiveMessageUserInfoResponseBody::FailList> getFailList() { DARABONBA_PTR_GET(failList_, vector<ModifyLiveMessageUserInfoResponseBody::FailList>) };
    inline ModifyLiveMessageUserInfoResponseBody& setFailList(const vector<ModifyLiveMessageUserInfoResponseBody::FailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline ModifyLiveMessageUserInfoResponseBody& setFailList(vector<ModifyLiveMessageUserInfoResponseBody::FailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLiveMessageUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<ModifyLiveMessageUserInfoResponseBody::SuccessList> & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, vector<ModifyLiveMessageUserInfoResponseBody::SuccessList>) };
    inline vector<ModifyLiveMessageUserInfoResponseBody::SuccessList> getSuccessList() { DARABONBA_PTR_GET(successList_, vector<ModifyLiveMessageUserInfoResponseBody::SuccessList>) };
    inline ModifyLiveMessageUserInfoResponseBody& setSuccessList(const vector<ModifyLiveMessageUserInfoResponseBody::SuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline ModifyLiveMessageUserInfoResponseBody& setSuccessList(vector<ModifyLiveMessageUserInfoResponseBody::SuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    // The users whose information failed to be modified.
    shared_ptr<vector<ModifyLiveMessageUserInfoResponseBody::FailList>> failList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The users whose information was modified.
    shared_ptr<vector<ModifyLiveMessageUserInfoResponseBody::SuccessList>> successList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

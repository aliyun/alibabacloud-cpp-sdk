// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESKILLAUDITRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVESKILLAUDITRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class SaveSkillAuditRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSkillAuditRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSkillAuditRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    SaveSkillAuditRecordResponseBody() = default ;
    SaveSkillAuditRecordResponseBody(const SaveSkillAuditRecordResponseBody &) = default ;
    SaveSkillAuditRecordResponseBody(SaveSkillAuditRecordResponseBody &&) = default ;
    SaveSkillAuditRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSkillAuditRecordResponseBody() = default ;
    SaveSkillAuditRecordResponseBody& operator=(const SaveSkillAuditRecordResponseBody &) = default ;
    SaveSkillAuditRecordResponseBody& operator=(SaveSkillAuditRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline SaveSkillAuditRecordResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline SaveSkillAuditRecordResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SaveSkillAuditRecordResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveSkillAuditRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveSkillAuditRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For information about the fields, see the child parameters.
    shared_ptr<bool> data_ {};
    // The error message code.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values: true and false. If false is returned, check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif

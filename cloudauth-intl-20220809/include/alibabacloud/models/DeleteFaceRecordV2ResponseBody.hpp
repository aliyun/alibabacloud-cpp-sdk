// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACERECORDV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACERECORDV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeleteFaceRecordV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceRecordV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceRecordV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DeleteFaceRecordV2ResponseBody() = default ;
    DeleteFaceRecordV2ResponseBody(const DeleteFaceRecordV2ResponseBody &) = default ;
    DeleteFaceRecordV2ResponseBody(DeleteFaceRecordV2ResponseBody &&) = default ;
    DeleteFaceRecordV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceRecordV2ResponseBody() = default ;
    DeleteFaceRecordV2ResponseBody& operator=(const DeleteFaceRecordV2ResponseBody &) = default ;
    DeleteFaceRecordV2ResponseBody& operator=(DeleteFaceRecordV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(DeletedGroupCodes, deletedGroupCodes_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(DeletedGroupCodes, deletedGroupCodes_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleted_ == nullptr
        && this->deletedGroupCodes_ == nullptr; };
      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline string getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, "") };
      inline Result& setDeleted(string deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // deletedGroupCodes Field Functions 
      bool hasDeletedGroupCodes() const { return this->deletedGroupCodes_ != nullptr;};
      void deleteDeletedGroupCodes() { this->deletedGroupCodes_ = nullptr;};
      inline string getDeletedGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(deletedGroupCodes_, "") };
      inline Result& setDeletedGroupCodes(string deletedGroupCodes) { DARABONBA_PTR_SET_VALUE(deletedGroupCodes_, deletedGroupCodes) };


    protected:
      // The deletion result. Valid values:
      // - Y: Succeeded.
      // - N: Failed.
      shared_ptr<string> deleted_ {};
      // The list of face group codes from which the face data was actually deleted (comma-separated). This parameter is returned with all deleted group codes when FaceGroupCode is not specified.
      shared_ptr<string> deletedGroupCodes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteFaceRecordV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteFaceRecordV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFaceRecordV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DeleteFaceRecordV2ResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DeleteFaceRecordV2ResponseBody::Result) };
    inline DeleteFaceRecordV2ResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DeleteFaceRecordV2ResponseBody::Result) };
    inline DeleteFaceRecordV2ResponseBody& setResult(const DeleteFaceRecordV2ResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteFaceRecordV2ResponseBody& setResult(DeleteFaceRecordV2ResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The return code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The response result.
    shared_ptr<DeleteFaceRecordV2ResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

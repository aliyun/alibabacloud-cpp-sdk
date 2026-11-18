// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKVIDEOCHARACTERREPLACEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKVIDEOCHARACTERREPLACEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class PrecheckVideoCharacterReplaceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckVideoCharacterReplaceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckVideoCharacterReplaceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    PrecheckVideoCharacterReplaceJobResponseBody() = default ;
    PrecheckVideoCharacterReplaceJobResponseBody(const PrecheckVideoCharacterReplaceJobResponseBody &) = default ;
    PrecheckVideoCharacterReplaceJobResponseBody(PrecheckVideoCharacterReplaceJobResponseBody &&) = default ;
    PrecheckVideoCharacterReplaceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckVideoCharacterReplaceJobResponseBody() = default ;
    PrecheckVideoCharacterReplaceJobResponseBody& operator=(const PrecheckVideoCharacterReplaceJobResponseBody &) = default ;
    PrecheckVideoCharacterReplaceJobResponseBody& operator=(PrecheckVideoCharacterReplaceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Key, key_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
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
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->key_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Result& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Result& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    protected:
      // The validation error code for the input item. For example, ImageCheckFailed indicates that the image validation failed, and AudioCheckFailed indicates that the audio validation failed.
      shared_ptr<string> errorCode_ {};
      // The name of the input parameter that failed the validation, which matches the corresponding field name in AppParams.
      shared_ptr<string> key_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrecheckVideoCharacterReplaceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<PrecheckVideoCharacterReplaceJobResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<PrecheckVideoCharacterReplaceJobResponseBody::Result>) };
    inline vector<PrecheckVideoCharacterReplaceJobResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<PrecheckVideoCharacterReplaceJobResponseBody::Result>) };
    inline PrecheckVideoCharacterReplaceJobResponseBody& setResult(const vector<PrecheckVideoCharacterReplaceJobResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PrecheckVideoCharacterReplaceJobResponseBody& setResult(vector<PrecheckVideoCharacterReplaceJobResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PrecheckVideoCharacterReplaceJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // The list of items that failed the validation. This is an empty array if the validation passes.
    shared_ptr<vector<PrecheckVideoCharacterReplaceJobResponseBody::Result>> result_ {};
    // The pre-validation status. A value of Success indicates that the validation passed. A value of Failed indicates that one or more items failed the validation.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif

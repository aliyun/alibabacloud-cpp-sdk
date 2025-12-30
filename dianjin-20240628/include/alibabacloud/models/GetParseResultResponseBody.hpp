// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARSERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetParseResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetParseResultResponseBody() = default ;
    GetParseResultResponseBody(const GetParseResultResponseBody &) = default ;
    GetParseResultResponseBody(GetParseResultResponseBody &&) = default ;
    GetParseResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseResultResponseBody() = default ;
    GetParseResultResponseBody& operator=(const GetParseResultResponseBody &) = default ;
    GetParseResultResponseBody& operator=(GetParseResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fileType, fileType_);
        DARABONBA_PTR_TO_JSON(providerType, providerType_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_ANY_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(resultUrl, resultUrl_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fileType, fileType_);
        DARABONBA_PTR_FROM_JSON(providerType, providerType_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_ANY_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(resultUrl, resultUrl_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileType_ == nullptr
        && this->providerType_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->resultUrl_ == nullptr && this->status_ == nullptr; };
      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Data& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // providerType Field Functions 
      bool hasProviderType() const { return this->providerType_ != nullptr;};
      void deleteProviderType() { this->providerType_ = nullptr;};
      inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
      inline Data& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline Data& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline Data& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // resultUrl Field Functions 
      bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
      void deleteResultUrl() { this->resultUrl_ = nullptr;};
      inline string getResultUrl() const { DARABONBA_PTR_GET_DEFAULT(resultUrl_, "") };
      inline Data& setResultUrl(string resultUrl) { DARABONBA_PTR_SET_VALUE(resultUrl_, resultUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> fileType_ {};
      shared_ptr<string> providerType_ {};
      shared_ptr<string> requestId_ {};
      Darabonba::Json result_ {};
      shared_ptr<string> resultUrl_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetParseResultResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetParseResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetParseResultResponseBody::Data) };
    inline GetParseResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetParseResultResponseBody::Data) };
    inline GetParseResultResponseBody& setData(const GetParseResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetParseResultResponseBody& setData(GetParseResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetParseResultResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetParseResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetParseResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParseResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetParseResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetParseResultResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetParseResultResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

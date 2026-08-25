// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMRESOURCESTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMRESOURCESTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class GetCustomResourceStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomResourceStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomResourceStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomResourceStatsResponseBody() = default ;
    GetCustomResourceStatsResponseBody(const GetCustomResourceStatsResponseBody &) = default ;
    GetCustomResourceStatsResponseBody(GetCustomResourceStatsResponseBody &&) = default ;
    GetCustomResourceStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomResourceStatsResponseBody() = default ;
    GetCustomResourceStatsResponseBody& operator=(const GetCustomResourceStatsResponseBody &) = default ;
    GetCustomResourceStatsResponseBody& operator=(GetCustomResourceStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomResourceCount, customResourceCount_);
        DARABONBA_PTR_TO_JSON(EffectiveCount, effectiveCount_);
        DARABONBA_PTR_TO_JSON(NoCustomResourceCount, noCustomResourceCount_);
        DARABONBA_PTR_TO_JSON(UnEffectiveCount, unEffectiveCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomResourceCount, customResourceCount_);
        DARABONBA_PTR_FROM_JSON(EffectiveCount, effectiveCount_);
        DARABONBA_PTR_FROM_JSON(NoCustomResourceCount, noCustomResourceCount_);
        DARABONBA_PTR_FROM_JSON(UnEffectiveCount, unEffectiveCount_);
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
      virtual bool empty() const override { return this->customResourceCount_ == nullptr
        && this->effectiveCount_ == nullptr && this->noCustomResourceCount_ == nullptr && this->unEffectiveCount_ == nullptr; };
      // customResourceCount Field Functions 
      bool hasCustomResourceCount() const { return this->customResourceCount_ != nullptr;};
      void deleteCustomResourceCount() { this->customResourceCount_ = nullptr;};
      inline int64_t getCustomResourceCount() const { DARABONBA_PTR_GET_DEFAULT(customResourceCount_, 0L) };
      inline Data& setCustomResourceCount(int64_t customResourceCount) { DARABONBA_PTR_SET_VALUE(customResourceCount_, customResourceCount) };


      // effectiveCount Field Functions 
      bool hasEffectiveCount() const { return this->effectiveCount_ != nullptr;};
      void deleteEffectiveCount() { this->effectiveCount_ = nullptr;};
      inline int64_t getEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveCount_, 0L) };
      inline Data& setEffectiveCount(int64_t effectiveCount) { DARABONBA_PTR_SET_VALUE(effectiveCount_, effectiveCount) };


      // noCustomResourceCount Field Functions 
      bool hasNoCustomResourceCount() const { return this->noCustomResourceCount_ != nullptr;};
      void deleteNoCustomResourceCount() { this->noCustomResourceCount_ = nullptr;};
      inline int64_t getNoCustomResourceCount() const { DARABONBA_PTR_GET_DEFAULT(noCustomResourceCount_, 0L) };
      inline Data& setNoCustomResourceCount(int64_t noCustomResourceCount) { DARABONBA_PTR_SET_VALUE(noCustomResourceCount_, noCustomResourceCount) };


      // unEffectiveCount Field Functions 
      bool hasUnEffectiveCount() const { return this->unEffectiveCount_ != nullptr;};
      void deleteUnEffectiveCount() { this->unEffectiveCount_ = nullptr;};
      inline int64_t getUnEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(unEffectiveCount_, 0L) };
      inline Data& setUnEffectiveCount(int64_t unEffectiveCount) { DARABONBA_PTR_SET_VALUE(unEffectiveCount_, unEffectiveCount) };


    protected:
      // The number of terminals with custom resources configured.
      shared_ptr<int64_t> customResourceCount_ {};
      // The number of terminals on which custom resources have taken effect.
      shared_ptr<int64_t> effectiveCount_ {};
      // The number of terminals without custom resources configured.
      shared_ptr<int64_t> noCustomResourceCount_ {};
      // The number of terminals on which custom resources have not taken effect.
      shared_ptr<int64_t> unEffectiveCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomResourceStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomResourceStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomResourceStatsResponseBody::Data) };
    inline GetCustomResourceStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomResourceStatsResponseBody::Data) };
    inline GetCustomResourceStatsResponseBody& setData(const GetCustomResourceStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomResourceStatsResponseBody& setData(GetCustomResourceStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCustomResourceStatsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomResourceStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomResourceStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomResourceStatsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. 200 is returned if the call is successful. An error code is returned if the call fails.
    shared_ptr<string> code_ {};
    // The custom resource statistics information.
    shared_ptr<GetCustomResourceStatsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message. This parameter is empty if the call is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif

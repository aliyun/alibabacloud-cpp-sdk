// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDBATCHCREATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDBATCHCREATEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudBatchCreateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudBatchCreateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudBatchCreateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudBatchCreateAgentResponseBody() = default ;
    CloudBatchCreateAgentResponseBody(const CloudBatchCreateAgentResponseBody &) = default ;
    CloudBatchCreateAgentResponseBody(CloudBatchCreateAgentResponseBody &&) = default ;
    CloudBatchCreateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudBatchCreateAgentResponseBody() = default ;
    CloudBatchCreateAgentResponseBody& operator=(const CloudBatchCreateAgentResponseBody &) = default ;
    CloudBatchCreateAgentResponseBody& operator=(CloudBatchCreateAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cnos, cnos_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(Other, other_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(Other, other_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->cnos_ == nullptr
        && this->fail_ == nullptr && this->other_ == nullptr && this->success_ == nullptr; };
      // cnos Field Functions 
      bool hasCnos() const { return this->cnos_ != nullptr;};
      void deleteCnos() { this->cnos_ = nullptr;};
      inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
      inline Data& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline string getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, "") };
      inline Data& setFail(string fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // other Field Functions 
      bool hasOther() const { return this->other_ != nullptr;};
      void deleteOther() { this->other_ = nullptr;};
      inline string getOther() const { DARABONBA_PTR_GET_DEFAULT(other_, "") };
      inline Data& setOther(string other) { DARABONBA_PTR_SET_VALUE(other_, other) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline Data& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // 成功创建的座席号
      shared_ptr<string> cnos_ {};
      // 创建座席失败数量
      shared_ptr<string> fail_ {};
      // 座席创建成功,绑定技能失败的数量
      shared_ptr<string> other_ {};
      // 创建座席成功数量
      shared_ptr<string> success_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudBatchCreateAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudBatchCreateAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudBatchCreateAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudBatchCreateAgentResponseBody::Data) };
    inline CloudBatchCreateAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudBatchCreateAgentResponseBody::Data) };
    inline CloudBatchCreateAgentResponseBody& setData(const CloudBatchCreateAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudBatchCreateAgentResponseBody& setData(CloudBatchCreateAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudBatchCreateAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudBatchCreateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudBatchCreateAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif

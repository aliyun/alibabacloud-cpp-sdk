// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListFlashSmsProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFlashSmsProvidersResponseBody() = default ;
    ListFlashSmsProvidersResponseBody(const ListFlashSmsProvidersResponseBody &) = default ;
    ListFlashSmsProvidersResponseBody(ListFlashSmsProvidersResponseBody &&) = default ;
    ListFlashSmsProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsProvidersResponseBody() = default ;
    ListFlashSmsProvidersResponseBody& operator=(const ListFlashSmsProvidersResponseBody &) = default ;
    ListFlashSmsProvidersResponseBody& operator=(ListFlashSmsProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProfileSchema, profileSchema_);
        DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProfileSchema, profileSchema_);
        DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
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
      virtual bool empty() const override { return this->profileSchema_ == nullptr
        && this->providerId_ == nullptr && this->providerName_ == nullptr; };
      // profileSchema Field Functions 
      bool hasProfileSchema() const { return this->profileSchema_ != nullptr;};
      void deleteProfileSchema() { this->profileSchema_ = nullptr;};
      inline string getProfileSchema() const { DARABONBA_PTR_GET_DEFAULT(profileSchema_, "") };
      inline Data& setProfileSchema(string profileSchema) { DARABONBA_PTR_SET_VALUE(profileSchema_, profileSchema) };


      // providerId Field Functions 
      bool hasProviderId() const { return this->providerId_ != nullptr;};
      void deleteProviderId() { this->providerId_ = nullptr;};
      inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
      inline Data& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline Data& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    protected:
      // 配置schema
      shared_ptr<string> profileSchema_ {};
      // 供应商ID
      shared_ptr<string> providerId_ {};
      // 供应商名称
      shared_ptr<string> providerName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFlashSmsProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFlashSmsProvidersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFlashSmsProvidersResponseBody::Data>) };
    inline vector<ListFlashSmsProvidersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFlashSmsProvidersResponseBody::Data>) };
    inline ListFlashSmsProvidersResponseBody& setData(const vector<ListFlashSmsProvidersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFlashSmsProvidersResponseBody& setData(vector<ListFlashSmsProvidersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFlashSmsProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFlashSmsProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListFlashSmsProvidersResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListFlashSmsProvidersResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlashSmsProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFlashSmsProvidersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 返回码
    shared_ptr<string> code_ {};
    // 返回数据
    shared_ptr<vector<ListFlashSmsProvidersResponseBody::Data>> data_ {};
    // HTTP状态码
    shared_ptr<int32_t> httpStatusCode_ {};
    // 错误信息
    shared_ptr<string> message_ {};
    // 错误信息中的变量值列表
    shared_ptr<vector<string>> params_ {};
    // 请求ID
    shared_ptr<string> requestId_ {};
    // 是否调用成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif

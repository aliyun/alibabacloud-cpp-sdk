// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMOCKRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMOCKRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddMockRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMockRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddMockRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddMockRuleResponseBody() = default ;
    AddMockRuleResponseBody(const AddMockRuleResponseBody &) = default ;
    AddMockRuleResponseBody(AddMockRuleResponseBody &&) = default ;
    AddMockRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMockRuleResponseBody() = default ;
    AddMockRuleResponseBody& operator=(const AddMockRuleResponseBody &) = default ;
    AddMockRuleResponseBody& operator=(AddMockRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(ConsumerAppId, consumerAppId_);
        DARABONBA_PTR_TO_JSON(ConsumerAppName, consumerAppName_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(ExtraJson, extraJson_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MockType, mockType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(ProviderAppId, providerAppId_);
        DARABONBA_PTR_TO_JSON(ProviderAppName, providerAppName_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ScMockItemJson, scMockItemJson_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(ConsumerAppId, consumerAppId_);
        DARABONBA_PTR_FROM_JSON(ConsumerAppName, consumerAppName_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(ExtraJson, extraJson_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MockType, mockType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(ProviderAppId, providerAppId_);
        DARABONBA_PTR_FROM_JSON(ProviderAppName, providerAppName_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ScMockItemJson, scMockItemJson_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->consumerAppId_ == nullptr && this->consumerAppName_ == nullptr && this->enable_ == nullptr && this->extraJson_ == nullptr && this->id_ == nullptr
        && this->mockType_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->providerAppId_ == nullptr && this->providerAppName_ == nullptr
        && this->region_ == nullptr && this->scMockItemJson_ == nullptr && this->source_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // consumerAppId Field Functions 
      bool hasConsumerAppId() const { return this->consumerAppId_ != nullptr;};
      void deleteConsumerAppId() { this->consumerAppId_ = nullptr;};
      inline string getConsumerAppId() const { DARABONBA_PTR_GET_DEFAULT(consumerAppId_, "") };
      inline Data& setConsumerAppId(string consumerAppId) { DARABONBA_PTR_SET_VALUE(consumerAppId_, consumerAppId) };


      // consumerAppName Field Functions 
      bool hasConsumerAppName() const { return this->consumerAppName_ != nullptr;};
      void deleteConsumerAppName() { this->consumerAppName_ = nullptr;};
      inline string getConsumerAppName() const { DARABONBA_PTR_GET_DEFAULT(consumerAppName_, "") };
      inline Data& setConsumerAppName(string consumerAppName) { DARABONBA_PTR_SET_VALUE(consumerAppName_, consumerAppName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // extraJson Field Functions 
      bool hasExtraJson() const { return this->extraJson_ != nullptr;};
      void deleteExtraJson() { this->extraJson_ = nullptr;};
      inline string getExtraJson() const { DARABONBA_PTR_GET_DEFAULT(extraJson_, "") };
      inline Data& setExtraJson(string extraJson) { DARABONBA_PTR_SET_VALUE(extraJson_, extraJson) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mockType Field Functions 
      bool hasMockType() const { return this->mockType_ != nullptr;};
      void deleteMockType() { this->mockType_ = nullptr;};
      inline int64_t getMockType() const { DARABONBA_PTR_GET_DEFAULT(mockType_, 0L) };
      inline Data& setMockType(int64_t mockType) { DARABONBA_PTR_SET_VALUE(mockType_, mockType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // providerAppId Field Functions 
      bool hasProviderAppId() const { return this->providerAppId_ != nullptr;};
      void deleteProviderAppId() { this->providerAppId_ = nullptr;};
      inline string getProviderAppId() const { DARABONBA_PTR_GET_DEFAULT(providerAppId_, "") };
      inline Data& setProviderAppId(string providerAppId) { DARABONBA_PTR_SET_VALUE(providerAppId_, providerAppId) };


      // providerAppName Field Functions 
      bool hasProviderAppName() const { return this->providerAppName_ != nullptr;};
      void deleteProviderAppName() { this->providerAppName_ = nullptr;};
      inline string getProviderAppName() const { DARABONBA_PTR_GET_DEFAULT(providerAppName_, "") };
      inline Data& setProviderAppName(string providerAppName) { DARABONBA_PTR_SET_VALUE(providerAppName_, providerAppName) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // scMockItemJson Field Functions 
      bool hasScMockItemJson() const { return this->scMockItemJson_ != nullptr;};
      void deleteScMockItemJson() { this->scMockItemJson_ = nullptr;};
      inline string getScMockItemJson() const { DARABONBA_PTR_GET_DEFAULT(scMockItemJson_, "") };
      inline Data& setScMockItemJson(string scMockItemJson) { DARABONBA_PTR_SET_VALUE(scMockItemJson_, scMockItemJson) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> accountId_ {};
      // The ID of the consumer application.
      shared_ptr<string> consumerAppId_ {};
      // The name of the consumer application.
      shared_ptr<string> consumerAppName_ {};
      // Indicates whether the mock rule is enabled.
      // 
      // *   `true`: enabled
      // *   `false`: disabled
      shared_ptr<bool> enable_ {};
      // The description.
      shared_ptr<string> extraJson_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The mock type. Valid values:
      // 
      // *   \\- `[unk]0[unk]`: desktop client
      // *   \\- `[unk]1[unk]`: mobile client
      shared_ptr<int64_t> mockType_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The ID of the service provider application.
      shared_ptr<string> providerAppId_ {};
      // The name of the service provider application.
      shared_ptr<string> providerAppName_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The HTTP mock rule.
      shared_ptr<string> scMockItemJson_ {};
      // The service source.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddMockRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddMockRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddMockRuleResponseBody::Data) };
    inline AddMockRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddMockRuleResponseBody::Data) };
    inline AddMockRuleResponseBody& setData(const AddMockRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddMockRuleResponseBody& setData(AddMockRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddMockRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddMockRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMockRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddMockRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<AddMockRuleResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

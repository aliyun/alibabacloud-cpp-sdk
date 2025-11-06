// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMOCKRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDMOCKRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddMockRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMockRuleResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AddMockRuleResponseBodyData& obj) { 
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
    AddMockRuleResponseBodyData() = default ;
    AddMockRuleResponseBodyData(const AddMockRuleResponseBodyData &) = default ;
    AddMockRuleResponseBodyData(AddMockRuleResponseBodyData &&) = default ;
    AddMockRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMockRuleResponseBodyData() = default ;
    AddMockRuleResponseBodyData& operator=(const AddMockRuleResponseBodyData &) = default ;
    AddMockRuleResponseBodyData& operator=(AddMockRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->consumerAppId_ == nullptr && return this->consumerAppName_ == nullptr && return this->enable_ == nullptr && return this->extraJson_ == nullptr && return this->id_ == nullptr
        && return this->mockType_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->providerAppId_ == nullptr && return this->providerAppName_ == nullptr
        && return this->region_ == nullptr && return this->scMockItemJson_ == nullptr && return this->source_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline AddMockRuleResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // consumerAppId Field Functions 
    bool hasConsumerAppId() const { return this->consumerAppId_ != nullptr;};
    void deleteConsumerAppId() { this->consumerAppId_ = nullptr;};
    inline string consumerAppId() const { DARABONBA_PTR_GET_DEFAULT(consumerAppId_, "") };
    inline AddMockRuleResponseBodyData& setConsumerAppId(string consumerAppId) { DARABONBA_PTR_SET_VALUE(consumerAppId_, consumerAppId) };


    // consumerAppName Field Functions 
    bool hasConsumerAppName() const { return this->consumerAppName_ != nullptr;};
    void deleteConsumerAppName() { this->consumerAppName_ = nullptr;};
    inline string consumerAppName() const { DARABONBA_PTR_GET_DEFAULT(consumerAppName_, "") };
    inline AddMockRuleResponseBodyData& setConsumerAppName(string consumerAppName) { DARABONBA_PTR_SET_VALUE(consumerAppName_, consumerAppName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline AddMockRuleResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // extraJson Field Functions 
    bool hasExtraJson() const { return this->extraJson_ != nullptr;};
    void deleteExtraJson() { this->extraJson_ = nullptr;};
    inline string extraJson() const { DARABONBA_PTR_GET_DEFAULT(extraJson_, "") };
    inline AddMockRuleResponseBodyData& setExtraJson(string extraJson) { DARABONBA_PTR_SET_VALUE(extraJson_, extraJson) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddMockRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mockType Field Functions 
    bool hasMockType() const { return this->mockType_ != nullptr;};
    void deleteMockType() { this->mockType_ = nullptr;};
    inline int64_t mockType() const { DARABONBA_PTR_GET_DEFAULT(mockType_, 0L) };
    inline AddMockRuleResponseBodyData& setMockType(int64_t mockType) { DARABONBA_PTR_SET_VALUE(mockType_, mockType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMockRuleResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline AddMockRuleResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // providerAppId Field Functions 
    bool hasProviderAppId() const { return this->providerAppId_ != nullptr;};
    void deleteProviderAppId() { this->providerAppId_ = nullptr;};
    inline string providerAppId() const { DARABONBA_PTR_GET_DEFAULT(providerAppId_, "") };
    inline AddMockRuleResponseBodyData& setProviderAppId(string providerAppId) { DARABONBA_PTR_SET_VALUE(providerAppId_, providerAppId) };


    // providerAppName Field Functions 
    bool hasProviderAppName() const { return this->providerAppName_ != nullptr;};
    void deleteProviderAppName() { this->providerAppName_ = nullptr;};
    inline string providerAppName() const { DARABONBA_PTR_GET_DEFAULT(providerAppName_, "") };
    inline AddMockRuleResponseBodyData& setProviderAppName(string providerAppName) { DARABONBA_PTR_SET_VALUE(providerAppName_, providerAppName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddMockRuleResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scMockItemJson Field Functions 
    bool hasScMockItemJson() const { return this->scMockItemJson_ != nullptr;};
    void deleteScMockItemJson() { this->scMockItemJson_ = nullptr;};
    inline string scMockItemJson() const { DARABONBA_PTR_GET_DEFAULT(scMockItemJson_, "") };
    inline AddMockRuleResponseBodyData& setScMockItemJson(string scMockItemJson) { DARABONBA_PTR_SET_VALUE(scMockItemJson_, scMockItemJson) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddMockRuleResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the consumer application.
    std::shared_ptr<string> consumerAppId_ = nullptr;
    // The name of the consumer application.
    std::shared_ptr<string> consumerAppName_ = nullptr;
    // Indicates whether the mock rule is enabled.
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // The description.
    std::shared_ptr<string> extraJson_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The mock type. Valid values:
    // 
    // *   \\- `[unk]0[unk]`: desktop client
    // *   \\- `[unk]1[unk]`: mobile client
    std::shared_ptr<int64_t> mockType_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The ID of the service provider application.
    std::shared_ptr<string> providerAppId_ = nullptr;
    // The name of the service provider application.
    std::shared_ptr<string> providerAppName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The HTTP mock rule.
    std::shared_ptr<string> scMockItemJson_ = nullptr;
    // The service source.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

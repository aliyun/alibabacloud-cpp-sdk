// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMOCKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMOCKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddMockRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMockRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerAppIds, consumerAppIds_);
      DARABONBA_PTR_TO_JSON(DubboMockItems, dubboMockItems_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ExtraJson, extraJson_);
      DARABONBA_PTR_TO_JSON(MockType, mockType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProviderAppId, providerAppId_);
      DARABONBA_PTR_TO_JSON(ProviderAppName, providerAppName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ScMockItems, scMockItems_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, AddMockRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerAppIds, consumerAppIds_);
      DARABONBA_PTR_FROM_JSON(DubboMockItems, dubboMockItems_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ExtraJson, extraJson_);
      DARABONBA_PTR_FROM_JSON(MockType, mockType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProviderAppId, providerAppId_);
      DARABONBA_PTR_FROM_JSON(ProviderAppName, providerAppName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ScMockItems, scMockItems_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    AddMockRuleRequest() = default ;
    AddMockRuleRequest(const AddMockRuleRequest &) = default ;
    AddMockRuleRequest(AddMockRuleRequest &&) = default ;
    AddMockRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMockRuleRequest() = default ;
    AddMockRuleRequest& operator=(const AddMockRuleRequest &) = default ;
    AddMockRuleRequest& operator=(AddMockRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->consumerAppIds_ != nullptr && this->dubboMockItems_ != nullptr && this->enable_ != nullptr && this->extraJson_ != nullptr && this->mockType_ != nullptr
        && this->name_ != nullptr && this->providerAppId_ != nullptr && this->providerAppName_ != nullptr && this->region_ != nullptr && this->scMockItems_ != nullptr
        && this->source_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddMockRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerAppIds Field Functions 
    bool hasConsumerAppIds() const { return this->consumerAppIds_ != nullptr;};
    void deleteConsumerAppIds() { this->consumerAppIds_ = nullptr;};
    inline string consumerAppIds() const { DARABONBA_PTR_GET_DEFAULT(consumerAppIds_, "") };
    inline AddMockRuleRequest& setConsumerAppIds(string consumerAppIds) { DARABONBA_PTR_SET_VALUE(consumerAppIds_, consumerAppIds) };


    // dubboMockItems Field Functions 
    bool hasDubboMockItems() const { return this->dubboMockItems_ != nullptr;};
    void deleteDubboMockItems() { this->dubboMockItems_ = nullptr;};
    inline string dubboMockItems() const { DARABONBA_PTR_GET_DEFAULT(dubboMockItems_, "") };
    inline AddMockRuleRequest& setDubboMockItems(string dubboMockItems) { DARABONBA_PTR_SET_VALUE(dubboMockItems_, dubboMockItems) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline AddMockRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // extraJson Field Functions 
    bool hasExtraJson() const { return this->extraJson_ != nullptr;};
    void deleteExtraJson() { this->extraJson_ = nullptr;};
    inline string extraJson() const { DARABONBA_PTR_GET_DEFAULT(extraJson_, "") };
    inline AddMockRuleRequest& setExtraJson(string extraJson) { DARABONBA_PTR_SET_VALUE(extraJson_, extraJson) };


    // mockType Field Functions 
    bool hasMockType() const { return this->mockType_ != nullptr;};
    void deleteMockType() { this->mockType_ = nullptr;};
    inline int64_t mockType() const { DARABONBA_PTR_GET_DEFAULT(mockType_, 0L) };
    inline AddMockRuleRequest& setMockType(int64_t mockType) { DARABONBA_PTR_SET_VALUE(mockType_, mockType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMockRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // providerAppId Field Functions 
    bool hasProviderAppId() const { return this->providerAppId_ != nullptr;};
    void deleteProviderAppId() { this->providerAppId_ = nullptr;};
    inline string providerAppId() const { DARABONBA_PTR_GET_DEFAULT(providerAppId_, "") };
    inline AddMockRuleRequest& setProviderAppId(string providerAppId) { DARABONBA_PTR_SET_VALUE(providerAppId_, providerAppId) };


    // providerAppName Field Functions 
    bool hasProviderAppName() const { return this->providerAppName_ != nullptr;};
    void deleteProviderAppName() { this->providerAppName_ = nullptr;};
    inline string providerAppName() const { DARABONBA_PTR_GET_DEFAULT(providerAppName_, "") };
    inline AddMockRuleRequest& setProviderAppName(string providerAppName) { DARABONBA_PTR_SET_VALUE(providerAppName_, providerAppName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddMockRuleRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scMockItems Field Functions 
    bool hasScMockItems() const { return this->scMockItems_ != nullptr;};
    void deleteScMockItems() { this->scMockItems_ = nullptr;};
    inline string scMockItems() const { DARABONBA_PTR_GET_DEFAULT(scMockItems_, "") };
    inline AddMockRuleRequest& setScMockItems(string scMockItems) { DARABONBA_PTR_SET_VALUE(scMockItems_, scMockItems) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddMockRuleRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the custom application.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerAppIds_ = nullptr;
    // The items in the recycle bin.
    // 
    // This parameter is required.
    std::shared_ptr<string> dubboMockItems_ = nullptr;
    // Specifies whether to enable the alert rule. Valid values:
    // 
    // *   `true`: enables the alert rule.
    // *   `false`: disables the alert rule.
    std::shared_ptr<bool> enable_ = nullptr;
    // The description.
    // 
    // This parameter is required.
    std::shared_ptr<string> extraJson_ = nullptr;
    // The response time (RT) threshold of slow calls. Valid values:
    // 
    // *   \\- 15: 15 ms
    // *   \\- 30: 30 ms
    // *   \\- 60: 60 ms
    // *   \\- 120: 120 ms
    std::shared_ptr<int64_t> mockType_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the service provider application.
    std::shared_ptr<string> providerAppId_ = nullptr;
    // The name of the service provider application.
    std::shared_ptr<string> providerAppName_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The input parameters. The JSON format is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> scMockItems_ = nullptr;
    // The rule source.
    // 
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveDataSourceOrderConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveDataSourceOrderConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UserConfigDataSourceList, userConfigDataSourceListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveDataSourceOrderConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UserConfigDataSourceList, userConfigDataSourceListShrink_);
    };
    SaveDataSourceOrderConfigShrinkRequest() = default ;
    SaveDataSourceOrderConfigShrinkRequest(const SaveDataSourceOrderConfigShrinkRequest &) = default ;
    SaveDataSourceOrderConfigShrinkRequest(SaveDataSourceOrderConfigShrinkRequest &&) = default ;
    SaveDataSourceOrderConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveDataSourceOrderConfigShrinkRequest() = default ;
    SaveDataSourceOrderConfigShrinkRequest& operator=(const SaveDataSourceOrderConfigShrinkRequest &) = default ;
    SaveDataSourceOrderConfigShrinkRequest& operator=(SaveDataSourceOrderConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->generateTechnology_ == nullptr && this->productCode_ == nullptr && this->userConfigDataSourceListShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveDataSourceOrderConfigShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string getGenerateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline SaveDataSourceOrderConfigShrinkRequest& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline SaveDataSourceOrderConfigShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userConfigDataSourceListShrink Field Functions 
    bool hasUserConfigDataSourceListShrink() const { return this->userConfigDataSourceListShrink_ != nullptr;};
    void deleteUserConfigDataSourceListShrink() { this->userConfigDataSourceListShrink_ = nullptr;};
    inline string getUserConfigDataSourceListShrink() const { DARABONBA_PTR_GET_DEFAULT(userConfigDataSourceListShrink_, "") };
    inline SaveDataSourceOrderConfigShrinkRequest& setUserConfigDataSourceListShrink(string userConfigDataSourceListShrink) { DARABONBA_PTR_SET_VALUE(userConfigDataSourceListShrink_, userConfigDataSourceListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> generateTechnology_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // This parameter is required.
    shared_ptr<string> userConfigDataSourceListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

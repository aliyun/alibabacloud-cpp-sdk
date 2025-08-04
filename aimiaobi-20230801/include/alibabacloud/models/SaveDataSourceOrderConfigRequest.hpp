// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveDataSourceOrderConfigRequestUserConfigDataSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveDataSourceOrderConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveDataSourceOrderConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveDataSourceOrderConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
    };
    SaveDataSourceOrderConfigRequest() = default ;
    SaveDataSourceOrderConfigRequest(const SaveDataSourceOrderConfigRequest &) = default ;
    SaveDataSourceOrderConfigRequest(SaveDataSourceOrderConfigRequest &&) = default ;
    SaveDataSourceOrderConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveDataSourceOrderConfigRequest() = default ;
    SaveDataSourceOrderConfigRequest& operator=(const SaveDataSourceOrderConfigRequest &) = default ;
    SaveDataSourceOrderConfigRequest& operator=(SaveDataSourceOrderConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->generateTechnology_ != nullptr && this->productCode_ != nullptr && this->userConfigDataSourceList_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveDataSourceOrderConfigRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string generateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline SaveDataSourceOrderConfigRequest& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline SaveDataSourceOrderConfigRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userConfigDataSourceList Field Functions 
    bool hasUserConfigDataSourceList() const { return this->userConfigDataSourceList_ != nullptr;};
    void deleteUserConfigDataSourceList() { this->userConfigDataSourceList_ = nullptr;};
    inline const vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList> & userConfigDataSourceList() const { DARABONBA_PTR_GET_CONST(userConfigDataSourceList_, vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>) };
    inline vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList> userConfigDataSourceList() { DARABONBA_PTR_GET(userConfigDataSourceList_, vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>) };
    inline SaveDataSourceOrderConfigRequest& setUserConfigDataSourceList(const vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList> & userConfigDataSourceList) { DARABONBA_PTR_SET_VALUE(userConfigDataSourceList_, userConfigDataSourceList) };
    inline SaveDataSourceOrderConfigRequest& setUserConfigDataSourceList(vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList> && userConfigDataSourceList) { DARABONBA_PTR_SET_RVALUE(userConfigDataSourceList_, userConfigDataSourceList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> generateTechnology_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>> userConfigDataSourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDataSourceOrderConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceOrderConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceOrderConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    GetDataSourceOrderConfigRequest() = default ;
    GetDataSourceOrderConfigRequest(const GetDataSourceOrderConfigRequest &) = default ;
    GetDataSourceOrderConfigRequest(GetDataSourceOrderConfigRequest &&) = default ;
    GetDataSourceOrderConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceOrderConfigRequest() = default ;
    GetDataSourceOrderConfigRequest& operator=(const GetDataSourceOrderConfigRequest &) = default ;
    GetDataSourceOrderConfigRequest& operator=(GetDataSourceOrderConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->generateTechnology_ == nullptr && this->productCode_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetDataSourceOrderConfigRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string getGenerateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline GetDataSourceOrderConfigRequest& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetDataSourceOrderConfigRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> generateTechnology_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

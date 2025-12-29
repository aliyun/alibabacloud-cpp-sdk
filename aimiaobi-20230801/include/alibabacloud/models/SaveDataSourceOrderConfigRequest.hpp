// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEDATASOURCEORDERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class UserConfigDataSourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserConfigDataSourceList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UserConfigDataSourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UserConfigDataSourceList() = default ;
      UserConfigDataSourceList(const UserConfigDataSourceList &) = default ;
      UserConfigDataSourceList(UserConfigDataSourceList &&) = default ;
      UserConfigDataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserConfigDataSourceList() = default ;
      UserConfigDataSourceList& operator=(const UserConfigDataSourceList &) = default ;
      UserConfigDataSourceList& operator=(UserConfigDataSourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->enable_ == nullptr && this->name_ == nullptr && this->number_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UserConfigDataSourceList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline UserConfigDataSourceList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserConfigDataSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
      inline UserConfigDataSourceList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UserConfigDataSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<bool> enable_ {};
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<int32_t> number_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->generateTechnology_ == nullptr && this->productCode_ == nullptr && this->userConfigDataSourceList_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveDataSourceOrderConfigRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string getGenerateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline SaveDataSourceOrderConfigRequest& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline SaveDataSourceOrderConfigRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userConfigDataSourceList Field Functions 
    bool hasUserConfigDataSourceList() const { return this->userConfigDataSourceList_ != nullptr;};
    void deleteUserConfigDataSourceList() { this->userConfigDataSourceList_ = nullptr;};
    inline const vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList> & getUserConfigDataSourceList() const { DARABONBA_PTR_GET_CONST(userConfigDataSourceList_, vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList>) };
    inline vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList> getUserConfigDataSourceList() { DARABONBA_PTR_GET(userConfigDataSourceList_, vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList>) };
    inline SaveDataSourceOrderConfigRequest& setUserConfigDataSourceList(const vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList> & userConfigDataSourceList) { DARABONBA_PTR_SET_VALUE(userConfigDataSourceList_, userConfigDataSourceList) };
    inline SaveDataSourceOrderConfigRequest& setUserConfigDataSourceList(vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList> && userConfigDataSourceList) { DARABONBA_PTR_SET_RVALUE(userConfigDataSourceList_, userConfigDataSourceList) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> generateTechnology_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // This parameter is required.
    shared_ptr<vector<SaveDataSourceOrderConfigRequest::UserConfigDataSourceList>> userConfigDataSourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

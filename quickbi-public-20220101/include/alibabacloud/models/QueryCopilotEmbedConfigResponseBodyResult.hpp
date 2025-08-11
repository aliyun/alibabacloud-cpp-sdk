// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCopilotEmbedConfigResponseBodyResultDataRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCopilotEmbedConfigResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopilotEmbedConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(DataRange, dataRange_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopilotEmbedConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(DataRange, dataRange_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    QueryCopilotEmbedConfigResponseBodyResult() = default ;
    QueryCopilotEmbedConfigResponseBodyResult(const QueryCopilotEmbedConfigResponseBodyResult &) = default ;
    QueryCopilotEmbedConfigResponseBodyResult(QueryCopilotEmbedConfigResponseBodyResult &&) = default ;
    QueryCopilotEmbedConfigResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopilotEmbedConfigResponseBodyResult() = default ;
    QueryCopilotEmbedConfigResponseBodyResult& operator=(const QueryCopilotEmbedConfigResponseBodyResult &) = default ;
    QueryCopilotEmbedConfigResponseBodyResult& operator=(QueryCopilotEmbedConfigResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentName_ != nullptr
        && this->copilotId_ != nullptr && this->createUser_ != nullptr && this->createUserName_ != nullptr && this->dataRange_ != nullptr && this->modifyUser_ != nullptr
        && this->moduleName_ != nullptr && this->showName_ != nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // copilotId Field Functions 
    bool hasCopilotId() const { return this->copilotId_ != nullptr;};
    void deleteCopilotId() { this->copilotId_ = nullptr;};
    inline string copilotId() const { DARABONBA_PTR_GET_DEFAULT(copilotId_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setCopilotId(string copilotId) { DARABONBA_PTR_SET_VALUE(copilotId_, copilotId) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // dataRange Field Functions 
    bool hasDataRange() const { return this->dataRange_ != nullptr;};
    void deleteDataRange() { this->dataRange_ = nullptr;};
    inline const Models::QueryCopilotEmbedConfigResponseBodyResultDataRange & dataRange() const { DARABONBA_PTR_GET_CONST(dataRange_, Models::QueryCopilotEmbedConfigResponseBodyResultDataRange) };
    inline Models::QueryCopilotEmbedConfigResponseBodyResultDataRange dataRange() { DARABONBA_PTR_GET(dataRange_, Models::QueryCopilotEmbedConfigResponseBodyResultDataRange) };
    inline QueryCopilotEmbedConfigResponseBodyResult& setDataRange(const Models::QueryCopilotEmbedConfigResponseBodyResultDataRange & dataRange) { DARABONBA_PTR_SET_VALUE(dataRange_, dataRange) };
    inline QueryCopilotEmbedConfigResponseBodyResult& setDataRange(Models::QueryCopilotEmbedConfigResponseBodyResultDataRange && dataRange) { DARABONBA_PTR_SET_RVALUE(dataRange_, dataRange) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline QueryCopilotEmbedConfigResponseBodyResult& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // Robot\\"s nickname.
    std::shared_ptr<string> agentName_ = nullptr;
    // Embedding ID.
    std::shared_ptr<string> copilotId_ = nullptr;
    // ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // Nickname of the creator.
    std::shared_ptr<string> createUserName_ = nullptr;
    // Data range (analysis themes and question resources).
    std::shared_ptr<Models::QueryCopilotEmbedConfigResponseBodyResultDataRange> dataRange_ = nullptr;
    // ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // Module name.
    std::shared_ptr<string> moduleName_ = nullptr;
    // Name of the embedded module.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCopilotEmbedConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopilotEmbedConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopilotEmbedConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCopilotEmbedConfigResponseBody() = default ;
    QueryCopilotEmbedConfigResponseBody(const QueryCopilotEmbedConfigResponseBody &) = default ;
    QueryCopilotEmbedConfigResponseBody(QueryCopilotEmbedConfigResponseBody &&) = default ;
    QueryCopilotEmbedConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopilotEmbedConfigResponseBody() = default ;
    QueryCopilotEmbedConfigResponseBody& operator=(const QueryCopilotEmbedConfigResponseBody &) = default ;
    QueryCopilotEmbedConfigResponseBody& operator=(QueryCopilotEmbedConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(CopilotId, copilotId_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(DataRange, dataRange_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(CopilotId, copilotId_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(DataRange, dataRange_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataRange& obj) { 
          DARABONBA_PTR_TO_JSON(AllCube, allCube_);
          DARABONBA_PTR_TO_JSON(AllTheme, allTheme_);
          DARABONBA_PTR_TO_JSON(LlmCubes, llmCubes_);
          DARABONBA_PTR_TO_JSON(Themes, themes_);
        };
        friend void from_json(const Darabonba::Json& j, DataRange& obj) { 
          DARABONBA_PTR_FROM_JSON(AllCube, allCube_);
          DARABONBA_PTR_FROM_JSON(AllTheme, allTheme_);
          DARABONBA_PTR_FROM_JSON(LlmCubes, llmCubes_);
          DARABONBA_PTR_FROM_JSON(Themes, themes_);
        };
        DataRange() = default ;
        DataRange(const DataRange &) = default ;
        DataRange(DataRange &&) = default ;
        DataRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataRange() = default ;
        DataRange& operator=(const DataRange &) = default ;
        DataRange& operator=(DataRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allCube_ == nullptr
        && this->allTheme_ == nullptr && this->llmCubes_ == nullptr && this->themes_ == nullptr; };
        // allCube Field Functions 
        bool hasAllCube() const { return this->allCube_ != nullptr;};
        void deleteAllCube() { this->allCube_ = nullptr;};
        inline bool getAllCube() const { DARABONBA_PTR_GET_DEFAULT(allCube_, false) };
        inline DataRange& setAllCube(bool allCube) { DARABONBA_PTR_SET_VALUE(allCube_, allCube) };


        // allTheme Field Functions 
        bool hasAllTheme() const { return this->allTheme_ != nullptr;};
        void deleteAllTheme() { this->allTheme_ = nullptr;};
        inline bool getAllTheme() const { DARABONBA_PTR_GET_DEFAULT(allTheme_, false) };
        inline DataRange& setAllTheme(bool allTheme) { DARABONBA_PTR_SET_VALUE(allTheme_, allTheme) };


        // llmCubes Field Functions 
        bool hasLlmCubes() const { return this->llmCubes_ != nullptr;};
        void deleteLlmCubes() { this->llmCubes_ = nullptr;};
        inline const vector<string> & getLlmCubes() const { DARABONBA_PTR_GET_CONST(llmCubes_, vector<string>) };
        inline vector<string> getLlmCubes() { DARABONBA_PTR_GET(llmCubes_, vector<string>) };
        inline DataRange& setLlmCubes(const vector<string> & llmCubes) { DARABONBA_PTR_SET_VALUE(llmCubes_, llmCubes) };
        inline DataRange& setLlmCubes(vector<string> && llmCubes) { DARABONBA_PTR_SET_RVALUE(llmCubes_, llmCubes) };


        // themes Field Functions 
        bool hasThemes() const { return this->themes_ != nullptr;};
        void deleteThemes() { this->themes_ = nullptr;};
        inline const vector<string> & getThemes() const { DARABONBA_PTR_GET_CONST(themes_, vector<string>) };
        inline vector<string> getThemes() { DARABONBA_PTR_GET(themes_, vector<string>) };
        inline DataRange& setThemes(const vector<string> & themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };
        inline DataRange& setThemes(vector<string> && themes) { DARABONBA_PTR_SET_RVALUE(themes_, themes) };


      protected:
        // Whether all question resources are selected.
        shared_ptr<bool> allCube_ {};
        // Whether all analysis themes are selected.
        shared_ptr<bool> allTheme_ {};
        // Collection of question resource IDs.
        shared_ptr<vector<string>> llmCubes_ {};
        // Collection of analysis theme IDs.
        shared_ptr<vector<string>> themes_ {};
      };

      virtual bool empty() const override { return this->agentName_ == nullptr
        && this->copilotId_ == nullptr && this->createUser_ == nullptr && this->createUserName_ == nullptr && this->dataRange_ == nullptr && this->modifyUser_ == nullptr
        && this->moduleName_ == nullptr && this->showName_ == nullptr; };
      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Result& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // copilotId Field Functions 
      bool hasCopilotId() const { return this->copilotId_ != nullptr;};
      void deleteCopilotId() { this->copilotId_ = nullptr;};
      inline string getCopilotId() const { DARABONBA_PTR_GET_DEFAULT(copilotId_, "") };
      inline Result& setCopilotId(string copilotId) { DARABONBA_PTR_SET_VALUE(copilotId_, copilotId) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Result& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Result& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // dataRange Field Functions 
      bool hasDataRange() const { return this->dataRange_ != nullptr;};
      void deleteDataRange() { this->dataRange_ = nullptr;};
      inline const Result::DataRange & getDataRange() const { DARABONBA_PTR_GET_CONST(dataRange_, Result::DataRange) };
      inline Result::DataRange getDataRange() { DARABONBA_PTR_GET(dataRange_, Result::DataRange) };
      inline Result& setDataRange(const Result::DataRange & dataRange) { DARABONBA_PTR_SET_VALUE(dataRange_, dataRange) };
      inline Result& setDataRange(Result::DataRange && dataRange) { DARABONBA_PTR_SET_RVALUE(dataRange_, dataRange) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Result& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Result& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Result& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    protected:
      // Robot\\"s nickname.
      shared_ptr<string> agentName_ {};
      // Embedding ID.
      shared_ptr<string> copilotId_ {};
      // ID of the creator.
      shared_ptr<string> createUser_ {};
      // Nickname of the creator.
      shared_ptr<string> createUserName_ {};
      // Data range (analysis themes and question resources).
      shared_ptr<Result::DataRange> dataRange_ {};
      // ID of the modifier.
      shared_ptr<string> modifyUser_ {};
      // Module name.
      shared_ptr<string> moduleName_ {};
      // Name of the embedded module.
      shared_ptr<string> showName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCopilotEmbedConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryCopilotEmbedConfigResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryCopilotEmbedConfigResponseBody::Result>) };
    inline vector<QueryCopilotEmbedConfigResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryCopilotEmbedConfigResponseBody::Result>) };
    inline QueryCopilotEmbedConfigResponseBody& setResult(const vector<QueryCopilotEmbedConfigResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryCopilotEmbedConfigResponseBody& setResult(vector<QueryCopilotEmbedConfigResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCopilotEmbedConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of embedded configurations.
    shared_ptr<vector<QueryCopilotEmbedConfigResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

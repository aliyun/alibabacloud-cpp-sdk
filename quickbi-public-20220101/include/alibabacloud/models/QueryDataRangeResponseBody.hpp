// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODY_HPP_
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
  class QueryDataRangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDataRangeResponseBody() = default ;
    QueryDataRangeResponseBody(const QueryDataRangeResponseBody &) = default ;
    QueryDataRangeResponseBody(QueryDataRangeResponseBody &&) = default ;
    QueryDataRangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeResponseBody() = default ;
    QueryDataRangeResponseBody& operator=(const QueryDataRangeResponseBody &) = default ;
    QueryDataRangeResponseBody& operator=(QueryDataRangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
        DARABONBA_PTR_TO_JSON(ApiCopilotThemeModels, apiCopilotThemeModels_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
        DARABONBA_PTR_FROM_JSON(ApiCopilotThemeModels, apiCopilotThemeModels_);
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
      class ApiCopilotThemeModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiCopilotThemeModels& obj) { 
          DARABONBA_PTR_TO_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
          DARABONBA_PTR_TO_JSON(ThemeName, themeName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiCopilotThemeModels& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
          DARABONBA_PTR_FROM_JSON(ThemeName, themeName_);
        };
        ApiCopilotThemeModels() = default ;
        ApiCopilotThemeModels(const ApiCopilotThemeModels &) = default ;
        ApiCopilotThemeModels(ApiCopilotThemeModels &&) = default ;
        ApiCopilotThemeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiCopilotThemeModels() = default ;
        ApiCopilotThemeModels& operator=(const ApiCopilotThemeModels &) = default ;
        ApiCopilotThemeModels& operator=(ApiCopilotThemeModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ApiCopilotLlmCubeModels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApiCopilotLlmCubeModels& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
            DARABONBA_PTR_TO_JSON(LlmCubeId, llmCubeId_);
          };
          friend void from_json(const Darabonba::Json& j, ApiCopilotLlmCubeModels& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
            DARABONBA_PTR_FROM_JSON(LlmCubeId, llmCubeId_);
          };
          ApiCopilotLlmCubeModels() = default ;
          ApiCopilotLlmCubeModels(const ApiCopilotLlmCubeModels &) = default ;
          ApiCopilotLlmCubeModels(ApiCopilotLlmCubeModels &&) = default ;
          ApiCopilotLlmCubeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApiCopilotLlmCubeModels() = default ;
          ApiCopilotLlmCubeModels& operator=(const ApiCopilotLlmCubeModels &) = default ;
          ApiCopilotLlmCubeModels& operator=(ApiCopilotLlmCubeModels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->createUser_ == nullptr && this->llmCubeId_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline ApiCopilotLlmCubeModels& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // createUser Field Functions 
          bool hasCreateUser() const { return this->createUser_ != nullptr;};
          void deleteCreateUser() { this->createUser_ = nullptr;};
          inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
          inline ApiCopilotLlmCubeModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


          // llmCubeId Field Functions 
          bool hasLlmCubeId() const { return this->llmCubeId_ != nullptr;};
          void deleteLlmCubeId() { this->llmCubeId_ = nullptr;};
          inline string getLlmCubeId() const { DARABONBA_PTR_GET_DEFAULT(llmCubeId_, "") };
          inline ApiCopilotLlmCubeModels& setLlmCubeId(string llmCubeId) { DARABONBA_PTR_SET_VALUE(llmCubeId_, llmCubeId) };


        protected:
          // Alias of the LLM cube resource.
          shared_ptr<string> alias_ {};
          // Nickname of the creator.
          shared_ptr<string> createUser_ {};
          // LlmCube resource ID.
          shared_ptr<string> llmCubeId_ {};
        };

        virtual bool empty() const override { return this->apiCopilotLlmCubeModels_ == nullptr
        && this->createUser_ == nullptr && this->themeId_ == nullptr && this->themeName_ == nullptr; };
        // apiCopilotLlmCubeModels Field Functions 
        bool hasApiCopilotLlmCubeModels() const { return this->apiCopilotLlmCubeModels_ != nullptr;};
        void deleteApiCopilotLlmCubeModels() { this->apiCopilotLlmCubeModels_ = nullptr;};
        inline const vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels> & getApiCopilotLlmCubeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotLlmCubeModels_, vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels>) };
        inline vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels> getApiCopilotLlmCubeModels() { DARABONBA_PTR_GET(apiCopilotLlmCubeModels_, vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels>) };
        inline ApiCopilotThemeModels& setApiCopilotLlmCubeModels(const vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };
        inline ApiCopilotThemeModels& setApiCopilotLlmCubeModels(vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels> && apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline ApiCopilotThemeModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // themeId Field Functions 
        bool hasThemeId() const { return this->themeId_ != nullptr;};
        void deleteThemeId() { this->themeId_ = nullptr;};
        inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
        inline ApiCopilotThemeModels& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


        // themeName Field Functions 
        bool hasThemeName() const { return this->themeName_ != nullptr;};
        void deleteThemeName() { this->themeName_ = nullptr;};
        inline string getThemeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
        inline ApiCopilotThemeModels& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


      protected:
        // Array of LlmCube resources.
        shared_ptr<vector<ApiCopilotThemeModels::ApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels_ {};
        // Nickname of the creator.
        shared_ptr<string> createUser_ {};
        // Analysis theme ID.
        shared_ptr<string> themeId_ {};
        // Nickname of the analysis theme.
        shared_ptr<string> themeName_ {};
      };

      class ApiCopilotLlmCubeModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiCopilotLlmCubeModels& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(LlmCubeId, llmCubeId_);
        };
        friend void from_json(const Darabonba::Json& j, ApiCopilotLlmCubeModels& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(LlmCubeId, llmCubeId_);
        };
        ApiCopilotLlmCubeModels() = default ;
        ApiCopilotLlmCubeModels(const ApiCopilotLlmCubeModels &) = default ;
        ApiCopilotLlmCubeModels(ApiCopilotLlmCubeModels &&) = default ;
        ApiCopilotLlmCubeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiCopilotLlmCubeModels() = default ;
        ApiCopilotLlmCubeModels& operator=(const ApiCopilotLlmCubeModels &) = default ;
        ApiCopilotLlmCubeModels& operator=(ApiCopilotLlmCubeModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->createUser_ == nullptr && this->llmCubeId_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline ApiCopilotLlmCubeModels& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline ApiCopilotLlmCubeModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // llmCubeId Field Functions 
        bool hasLlmCubeId() const { return this->llmCubeId_ != nullptr;};
        void deleteLlmCubeId() { this->llmCubeId_ = nullptr;};
        inline string getLlmCubeId() const { DARABONBA_PTR_GET_DEFAULT(llmCubeId_, "") };
        inline ApiCopilotLlmCubeModels& setLlmCubeId(string llmCubeId) { DARABONBA_PTR_SET_VALUE(llmCubeId_, llmCubeId) };


      protected:
        // Alias of the LlmCube resource.
        shared_ptr<string> alias_ {};
        // Nickname of the creator.
        shared_ptr<string> createUser_ {};
        // LlmCube resource ID.
        shared_ptr<string> llmCubeId_ {};
      };

      virtual bool empty() const override { return this->apiCopilotLlmCubeModels_ == nullptr
        && this->apiCopilotThemeModels_ == nullptr; };
      // apiCopilotLlmCubeModels Field Functions 
      bool hasApiCopilotLlmCubeModels() const { return this->apiCopilotLlmCubeModels_ != nullptr;};
      void deleteApiCopilotLlmCubeModels() { this->apiCopilotLlmCubeModels_ = nullptr;};
      inline const vector<Result::ApiCopilotLlmCubeModels> & getApiCopilotLlmCubeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotLlmCubeModels_, vector<Result::ApiCopilotLlmCubeModels>) };
      inline vector<Result::ApiCopilotLlmCubeModels> getApiCopilotLlmCubeModels() { DARABONBA_PTR_GET(apiCopilotLlmCubeModels_, vector<Result::ApiCopilotLlmCubeModels>) };
      inline Result& setApiCopilotLlmCubeModels(const vector<Result::ApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };
      inline Result& setApiCopilotLlmCubeModels(vector<Result::ApiCopilotLlmCubeModels> && apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };


      // apiCopilotThemeModels Field Functions 
      bool hasApiCopilotThemeModels() const { return this->apiCopilotThemeModels_ != nullptr;};
      void deleteApiCopilotThemeModels() { this->apiCopilotThemeModels_ = nullptr;};
      inline const vector<Result::ApiCopilotThemeModels> & getApiCopilotThemeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotThemeModels_, vector<Result::ApiCopilotThemeModels>) };
      inline vector<Result::ApiCopilotThemeModels> getApiCopilotThemeModels() { DARABONBA_PTR_GET(apiCopilotThemeModels_, vector<Result::ApiCopilotThemeModels>) };
      inline Result& setApiCopilotThemeModels(const vector<Result::ApiCopilotThemeModels> & apiCopilotThemeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotThemeModels_, apiCopilotThemeModels) };
      inline Result& setApiCopilotThemeModels(vector<Result::ApiCopilotThemeModels> && apiCopilotThemeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotThemeModels_, apiCopilotThemeModels) };


    protected:
      // Array of LlmCube resources.
      shared_ptr<vector<Result::ApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels_ {};
      // Array of analysis themes.
      shared_ptr<vector<Result::ApiCopilotThemeModels>> apiCopilotThemeModels_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataRangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDataRangeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDataRangeResponseBody::Result) };
    inline QueryDataRangeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDataRangeResponseBody::Result) };
    inline QueryDataRangeResponseBody& setResult(const QueryDataRangeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDataRangeResponseBody& setResult(QueryDataRangeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDataRangeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Data range object.
    shared_ptr<QueryDataRangeResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

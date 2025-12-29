// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODY_HPP_
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
  class GetPropertiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPropertiesResponseBody() = default ;
    GetPropertiesResponseBody(const GetPropertiesResponseBody &) = default ;
    GetPropertiesResponseBody(GetPropertiesResponseBody &&) = default ;
    GetPropertiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBody() = default ;
    GetPropertiesResponseBody& operator=(const GetPropertiesResponseBody &) = default ;
    GetPropertiesResponseBody& operator=(GetPropertiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(ChatConfig, chatConfig_);
        DARABONBA_PTR_TO_JSON(ConsoleConfig, consoleConfig_);
        DARABONBA_ANY_TO_JSON(GeneralConfigMap, generalConfigMap_);
        DARABONBA_PTR_TO_JSON(IntelligentSearchConfig, intelligentSearchConfig_);
        DARABONBA_PTR_TO_JSON(MiaosouConfig, miaosouConfig_);
        DARABONBA_PTR_TO_JSON(SearchSourceList, searchSourceList_);
        DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
        DARABONBA_PTR_TO_JSON(SlrAuthorized, slrAuthorized_);
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
        DARABONBA_PTR_TO_JSON(WanxiangImageSizeConfig, wanxiangImageSizeConfig_);
        DARABONBA_PTR_TO_JSON(WanxiangImageStyleConfig, wanxiangImageStyleConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(ChatConfig, chatConfig_);
        DARABONBA_PTR_FROM_JSON(ConsoleConfig, consoleConfig_);
        DARABONBA_ANY_FROM_JSON(GeneralConfigMap, generalConfigMap_);
        DARABONBA_PTR_FROM_JSON(IntelligentSearchConfig, intelligentSearchConfig_);
        DARABONBA_PTR_FROM_JSON(MiaosouConfig, miaosouConfig_);
        DARABONBA_PTR_FROM_JSON(SearchSourceList, searchSourceList_);
        DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
        DARABONBA_PTR_FROM_JSON(SlrAuthorized, slrAuthorized_);
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
        DARABONBA_PTR_FROM_JSON(WanxiangImageSizeConfig, wanxiangImageSizeConfig_);
        DARABONBA_PTR_FROM_JSON(WanxiangImageStyleConfig, wanxiangImageStyleConfig_);
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
      class WanxiangImageStyleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WanxiangImageStyleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pic, pic_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, WanxiangImageStyleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pic, pic_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        WanxiangImageStyleConfig() = default ;
        WanxiangImageStyleConfig(const WanxiangImageStyleConfig &) = default ;
        WanxiangImageStyleConfig(WanxiangImageStyleConfig &&) = default ;
        WanxiangImageStyleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WanxiangImageStyleConfig() = default ;
        WanxiangImageStyleConfig& operator=(const WanxiangImageStyleConfig &) = default ;
        WanxiangImageStyleConfig& operator=(WanxiangImageStyleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->pic_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WanxiangImageStyleConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pic Field Functions 
        bool hasPic() const { return this->pic_ != nullptr;};
        void deletePic() { this->pic_ = nullptr;};
        inline string getPic() const { DARABONBA_PTR_GET_DEFAULT(pic_, "") };
        inline WanxiangImageStyleConfig& setPic(string pic) { DARABONBA_PTR_SET_VALUE(pic_, pic) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline WanxiangImageStyleConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> pic_ {};
        shared_ptr<string> value_ {};
      };

      class WanxiangImageSizeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WanxiangImageSizeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, WanxiangImageSizeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        WanxiangImageSizeConfig() = default ;
        WanxiangImageSizeConfig(const WanxiangImageSizeConfig &) = default ;
        WanxiangImageSizeConfig(WanxiangImageSizeConfig &&) = default ;
        WanxiangImageSizeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WanxiangImageSizeConfig() = default ;
        WanxiangImageSizeConfig& operator=(const WanxiangImageSizeConfig &) = default ;
        WanxiangImageSizeConfig& operator=(WanxiangImageSizeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WanxiangImageSizeConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline WanxiangImageSizeConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      class UserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        UserInfo() = default ;
        UserInfo(const UserInfo &) = default ;
        UserInfo(UserInfo &&) = default ;
        UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInfo() = default ;
        UserInfo& operator=(const UserInfo &) = default ;
        UserInfo& operator=(UserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr && this->username_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline UserInfo& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline UserInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline UserInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> username_ {};
      };

      class SearchSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchSources& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SearchSources& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SearchSources() = default ;
        SearchSources(const SearchSources &) = default ;
        SearchSources(SearchSources &&) = default ;
        SearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchSources() = default ;
        SearchSources& operator=(const SearchSources &) = default ;
        SearchSources& operator=(SearchSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline SearchSources& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline SearchSources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> label_ {};
        shared_ptr<string> value_ {};
      };

      class SearchSourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchSourceList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, SearchSourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        SearchSourceList() = default ;
        SearchSourceList(const SearchSourceList &) = default ;
        SearchSourceList(SearchSourceList &&) = default ;
        SearchSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchSourceList() = default ;
        SearchSourceList& operator=(const SearchSourceList &) = default ;
        SearchSourceList& operator=(SearchSourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->datasetName_ == nullptr && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SearchSourceList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // datasetName Field Functions 
        bool hasDatasetName() const { return this->datasetName_ != nullptr;};
        void deleteDatasetName() { this->datasetName_ = nullptr;};
        inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
        inline SearchSourceList& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SearchSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> datasetName_ {};
        shared_ptr<string> name_ {};
      };

      class MiaosouConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MiaosouConfig& obj) { 
          DARABONBA_PTR_TO_JSON(MaxDocSize, maxDocSize_);
          DARABONBA_PTR_TO_JSON(ModelInfos, modelInfos_);
          DARABONBA_PTR_TO_JSON(UseDocSize, useDocSize_);
        };
        friend void from_json(const Darabonba::Json& j, MiaosouConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxDocSize, maxDocSize_);
          DARABONBA_PTR_FROM_JSON(ModelInfos, modelInfos_);
          DARABONBA_PTR_FROM_JSON(UseDocSize, useDocSize_);
        };
        MiaosouConfig() = default ;
        MiaosouConfig(const MiaosouConfig &) = default ;
        MiaosouConfig(MiaosouConfig &&) = default ;
        MiaosouConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MiaosouConfig() = default ;
        MiaosouConfig& operator=(const MiaosouConfig &) = default ;
        MiaosouConfig& operator=(MiaosouConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModelInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelInfos& obj) { 
            DARABONBA_PTR_TO_JSON(ModelId, modelId_);
            DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          };
          friend void from_json(const Darabonba::Json& j, ModelInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
            DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          };
          ModelInfos() = default ;
          ModelInfos(const ModelInfos &) = default ;
          ModelInfos(ModelInfos &&) = default ;
          ModelInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelInfos() = default ;
          ModelInfos& operator=(const ModelInfos &) = default ;
          ModelInfos& operator=(ModelInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelId_ == nullptr
        && this->modelName_ == nullptr; };
          // modelId Field Functions 
          bool hasModelId() const { return this->modelId_ != nullptr;};
          void deleteModelId() { this->modelId_ = nullptr;};
          inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
          inline ModelInfos& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline ModelInfos& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        protected:
          shared_ptr<string> modelId_ {};
          shared_ptr<string> modelName_ {};
        };

        virtual bool empty() const override { return this->maxDocSize_ == nullptr
        && this->modelInfos_ == nullptr && this->useDocSize_ == nullptr; };
        // maxDocSize Field Functions 
        bool hasMaxDocSize() const { return this->maxDocSize_ != nullptr;};
        void deleteMaxDocSize() { this->maxDocSize_ = nullptr;};
        inline int64_t getMaxDocSize() const { DARABONBA_PTR_GET_DEFAULT(maxDocSize_, 0L) };
        inline MiaosouConfig& setMaxDocSize(int64_t maxDocSize) { DARABONBA_PTR_SET_VALUE(maxDocSize_, maxDocSize) };


        // modelInfos Field Functions 
        bool hasModelInfos() const { return this->modelInfos_ != nullptr;};
        void deleteModelInfos() { this->modelInfos_ = nullptr;};
        inline const vector<MiaosouConfig::ModelInfos> & getModelInfos() const { DARABONBA_PTR_GET_CONST(modelInfos_, vector<MiaosouConfig::ModelInfos>) };
        inline vector<MiaosouConfig::ModelInfos> getModelInfos() { DARABONBA_PTR_GET(modelInfos_, vector<MiaosouConfig::ModelInfos>) };
        inline MiaosouConfig& setModelInfos(const vector<MiaosouConfig::ModelInfos> & modelInfos) { DARABONBA_PTR_SET_VALUE(modelInfos_, modelInfos) };
        inline MiaosouConfig& setModelInfos(vector<MiaosouConfig::ModelInfos> && modelInfos) { DARABONBA_PTR_SET_RVALUE(modelInfos_, modelInfos) };


        // useDocSize Field Functions 
        bool hasUseDocSize() const { return this->useDocSize_ != nullptr;};
        void deleteUseDocSize() { this->useDocSize_ = nullptr;};
        inline int64_t getUseDocSize() const { DARABONBA_PTR_GET_DEFAULT(useDocSize_, 0L) };
        inline MiaosouConfig& setUseDocSize(int64_t useDocSize) { DARABONBA_PTR_SET_VALUE(useDocSize_, useDocSize) };


      protected:
        shared_ptr<int64_t> maxDocSize_ {};
        shared_ptr<vector<MiaosouConfig::ModelInfos>> modelInfos_ {};
        shared_ptr<int64_t> useDocSize_ {};
      };

      class IntelligentSearchConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IntelligentSearchConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CopilotPreciseSearchSources, copilotPreciseSearchSources_);
          DARABONBA_PTR_TO_JSON(ProductDescription, productDescription_);
          DARABONBA_PTR_TO_JSON(SearchSamples, searchSamples_);
          DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
        };
        friend void from_json(const Darabonba::Json& j, IntelligentSearchConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CopilotPreciseSearchSources, copilotPreciseSearchSources_);
          DARABONBA_PTR_FROM_JSON(ProductDescription, productDescription_);
          DARABONBA_PTR_FROM_JSON(SearchSamples, searchSamples_);
          DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
        };
        IntelligentSearchConfig() = default ;
        IntelligentSearchConfig(const IntelligentSearchConfig &) = default ;
        IntelligentSearchConfig(IntelligentSearchConfig &&) = default ;
        IntelligentSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IntelligentSearchConfig() = default ;
        IntelligentSearchConfig& operator=(const IntelligentSearchConfig &) = default ;
        IntelligentSearchConfig& operator=(IntelligentSearchConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SearchSources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchSources& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SearchSources& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          SearchSources() = default ;
          SearchSources(const SearchSources &) = default ;
          SearchSources(SearchSources &&) = default ;
          SearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchSources() = default ;
          SearchSources& operator=(const SearchSources &) = default ;
          SearchSources& operator=(SearchSources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->datasetName_ == nullptr && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline SearchSources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // datasetName Field Functions 
          bool hasDatasetName() const { return this->datasetName_ != nullptr;};
          void deleteDatasetName() { this->datasetName_ = nullptr;};
          inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
          inline SearchSources& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SearchSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> datasetName_ {};
          shared_ptr<string> name_ {};
        };

        class SearchSamples : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchSamples& obj) { 
            DARABONBA_PTR_TO_JSON(Articles, articles_);
            DARABONBA_PTR_TO_JSON(Prompt, prompt_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, SearchSamples& obj) { 
            DARABONBA_PTR_FROM_JSON(Articles, articles_);
            DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          SearchSamples() = default ;
          SearchSamples(const SearchSamples &) = default ;
          SearchSamples(SearchSamples &&) = default ;
          SearchSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SearchSamples() = default ;
          SearchSamples& operator=(const SearchSamples &) = default ;
          SearchSamples& operator=(SearchSamples &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Articles : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Articles& obj) { 
              DARABONBA_PTR_TO_JSON(Select, select_);
              DARABONBA_PTR_TO_JSON(Stared, stared_);
              DARABONBA_PTR_TO_JSON(Title, title_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Articles& obj) { 
              DARABONBA_PTR_FROM_JSON(Select, select_);
              DARABONBA_PTR_FROM_JSON(Stared, stared_);
              DARABONBA_PTR_FROM_JSON(Title, title_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            Articles() = default ;
            Articles(const Articles &) = default ;
            Articles(Articles &&) = default ;
            Articles(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Articles() = default ;
            Articles& operator=(const Articles &) = default ;
            Articles& operator=(Articles &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->select_ == nullptr
        && this->stared_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
            // select Field Functions 
            bool hasSelect() const { return this->select_ != nullptr;};
            void deleteSelect() { this->select_ = nullptr;};
            inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
            inline Articles& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


            // stared Field Functions 
            bool hasStared() const { return this->stared_ != nullptr;};
            void deleteStared() { this->stared_ = nullptr;};
            inline bool getStared() const { DARABONBA_PTR_GET_DEFAULT(stared_, false) };
            inline Articles& setStared(bool stared) { DARABONBA_PTR_SET_VALUE(stared_, stared) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline Articles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Articles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<bool> select_ {};
            shared_ptr<bool> stared_ {};
            shared_ptr<string> title_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->articles_ == nullptr
        && this->prompt_ == nullptr && this->text_ == nullptr; };
          // articles Field Functions 
          bool hasArticles() const { return this->articles_ != nullptr;};
          void deleteArticles() { this->articles_ = nullptr;};
          inline const vector<SearchSamples::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<SearchSamples::Articles>) };
          inline vector<SearchSamples::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<SearchSamples::Articles>) };
          inline SearchSamples& setArticles(const vector<SearchSamples::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
          inline SearchSamples& setArticles(vector<SearchSamples::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


          // prompt Field Functions 
          bool hasPrompt() const { return this->prompt_ != nullptr;};
          void deletePrompt() { this->prompt_ = nullptr;};
          inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
          inline SearchSamples& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline SearchSamples& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<vector<SearchSamples::Articles>> articles_ {};
          shared_ptr<string> prompt_ {};
          shared_ptr<string> text_ {};
        };

        class CopilotPreciseSearchSources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CopilotPreciseSearchSources& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, CopilotPreciseSearchSources& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          CopilotPreciseSearchSources() = default ;
          CopilotPreciseSearchSources(const CopilotPreciseSearchSources &) = default ;
          CopilotPreciseSearchSources(CopilotPreciseSearchSources &&) = default ;
          CopilotPreciseSearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CopilotPreciseSearchSources() = default ;
          CopilotPreciseSearchSources& operator=(const CopilotPreciseSearchSources &) = default ;
          CopilotPreciseSearchSources& operator=(CopilotPreciseSearchSources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->datasetName_ == nullptr && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline CopilotPreciseSearchSources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // datasetName Field Functions 
          bool hasDatasetName() const { return this->datasetName_ != nullptr;};
          void deleteDatasetName() { this->datasetName_ = nullptr;};
          inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
          inline CopilotPreciseSearchSources& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CopilotPreciseSearchSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> datasetName_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->copilotPreciseSearchSources_ == nullptr
        && this->productDescription_ == nullptr && this->searchSamples_ == nullptr && this->searchSources_ == nullptr; };
        // copilotPreciseSearchSources Field Functions 
        bool hasCopilotPreciseSearchSources() const { return this->copilotPreciseSearchSources_ != nullptr;};
        void deleteCopilotPreciseSearchSources() { this->copilotPreciseSearchSources_ = nullptr;};
        inline const vector<IntelligentSearchConfig::CopilotPreciseSearchSources> & getCopilotPreciseSearchSources() const { DARABONBA_PTR_GET_CONST(copilotPreciseSearchSources_, vector<IntelligentSearchConfig::CopilotPreciseSearchSources>) };
        inline vector<IntelligentSearchConfig::CopilotPreciseSearchSources> getCopilotPreciseSearchSources() { DARABONBA_PTR_GET(copilotPreciseSearchSources_, vector<IntelligentSearchConfig::CopilotPreciseSearchSources>) };
        inline IntelligentSearchConfig& setCopilotPreciseSearchSources(const vector<IntelligentSearchConfig::CopilotPreciseSearchSources> & copilotPreciseSearchSources) { DARABONBA_PTR_SET_VALUE(copilotPreciseSearchSources_, copilotPreciseSearchSources) };
        inline IntelligentSearchConfig& setCopilotPreciseSearchSources(vector<IntelligentSearchConfig::CopilotPreciseSearchSources> && copilotPreciseSearchSources) { DARABONBA_PTR_SET_RVALUE(copilotPreciseSearchSources_, copilotPreciseSearchSources) };


        // productDescription Field Functions 
        bool hasProductDescription() const { return this->productDescription_ != nullptr;};
        void deleteProductDescription() { this->productDescription_ = nullptr;};
        inline string getProductDescription() const { DARABONBA_PTR_GET_DEFAULT(productDescription_, "") };
        inline IntelligentSearchConfig& setProductDescription(string productDescription) { DARABONBA_PTR_SET_VALUE(productDescription_, productDescription) };


        // searchSamples Field Functions 
        bool hasSearchSamples() const { return this->searchSamples_ != nullptr;};
        void deleteSearchSamples() { this->searchSamples_ = nullptr;};
        inline const vector<IntelligentSearchConfig::SearchSamples> & getSearchSamples() const { DARABONBA_PTR_GET_CONST(searchSamples_, vector<IntelligentSearchConfig::SearchSamples>) };
        inline vector<IntelligentSearchConfig::SearchSamples> getSearchSamples() { DARABONBA_PTR_GET(searchSamples_, vector<IntelligentSearchConfig::SearchSamples>) };
        inline IntelligentSearchConfig& setSearchSamples(const vector<IntelligentSearchConfig::SearchSamples> & searchSamples) { DARABONBA_PTR_SET_VALUE(searchSamples_, searchSamples) };
        inline IntelligentSearchConfig& setSearchSamples(vector<IntelligentSearchConfig::SearchSamples> && searchSamples) { DARABONBA_PTR_SET_RVALUE(searchSamples_, searchSamples) };


        // searchSources Field Functions 
        bool hasSearchSources() const { return this->searchSources_ != nullptr;};
        void deleteSearchSources() { this->searchSources_ = nullptr;};
        inline const vector<IntelligentSearchConfig::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<IntelligentSearchConfig::SearchSources>) };
        inline vector<IntelligentSearchConfig::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<IntelligentSearchConfig::SearchSources>) };
        inline IntelligentSearchConfig& setSearchSources(const vector<IntelligentSearchConfig::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
        inline IntelligentSearchConfig& setSearchSources(vector<IntelligentSearchConfig::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


      protected:
        shared_ptr<vector<IntelligentSearchConfig::CopilotPreciseSearchSources>> copilotPreciseSearchSources_ {};
        shared_ptr<string> productDescription_ {};
        shared_ptr<vector<IntelligentSearchConfig::SearchSamples>> searchSamples_ {};
        shared_ptr<vector<IntelligentSearchConfig::SearchSources>> searchSources_ {};
      };

      class ConsoleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsoleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(TipContent, tipContent_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, ConsoleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(TipContent, tipContent_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        ConsoleConfig() = default ;
        ConsoleConfig(const ConsoleConfig &) = default ;
        ConsoleConfig(ConsoleConfig &&) = default ;
        ConsoleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsoleConfig() = default ;
        ConsoleConfig& operator=(const ConsoleConfig &) = default ;
        ConsoleConfig& operator=(ConsoleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tipContent_ == nullptr
        && this->title_ == nullptr; };
        // tipContent Field Functions 
        bool hasTipContent() const { return this->tipContent_ != nullptr;};
        void deleteTipContent() { this->tipContent_ = nullptr;};
        inline string getTipContent() const { DARABONBA_PTR_GET_DEFAULT(tipContent_, "") };
        inline ConsoleConfig& setTipContent(string tipContent) { DARABONBA_PTR_SET_VALUE(tipContent_, tipContent) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ConsoleConfig& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> tipContent_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->chatConfig_ == nullptr
        && this->consoleConfig_ == nullptr && this->generalConfigMap_ == nullptr && this->intelligentSearchConfig_ == nullptr && this->miaosouConfig_ == nullptr && this->searchSourceList_ == nullptr
        && this->searchSources_ == nullptr && this->slrAuthorized_ == nullptr && this->userInfo_ == nullptr && this->wanxiangImageSizeConfig_ == nullptr && this->wanxiangImageStyleConfig_ == nullptr; };
      // chatConfig Field Functions 
      bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
      void deleteChatConfig() { this->chatConfig_ = nullptr;};
      inline       const Darabonba::Json & getChatConfig() const { DARABONBA_GET(chatConfig_) };
      Darabonba::Json & getChatConfig() { DARABONBA_GET(chatConfig_) };
      inline Data& setChatConfig(const Darabonba::Json & chatConfig) { DARABONBA_SET_VALUE(chatConfig_, chatConfig) };
      inline Data& setChatConfig(Darabonba::Json && chatConfig) { DARABONBA_SET_RVALUE(chatConfig_, chatConfig) };


      // consoleConfig Field Functions 
      bool hasConsoleConfig() const { return this->consoleConfig_ != nullptr;};
      void deleteConsoleConfig() { this->consoleConfig_ = nullptr;};
      inline const Data::ConsoleConfig & getConsoleConfig() const { DARABONBA_PTR_GET_CONST(consoleConfig_, Data::ConsoleConfig) };
      inline Data::ConsoleConfig getConsoleConfig() { DARABONBA_PTR_GET(consoleConfig_, Data::ConsoleConfig) };
      inline Data& setConsoleConfig(const Data::ConsoleConfig & consoleConfig) { DARABONBA_PTR_SET_VALUE(consoleConfig_, consoleConfig) };
      inline Data& setConsoleConfig(Data::ConsoleConfig && consoleConfig) { DARABONBA_PTR_SET_RVALUE(consoleConfig_, consoleConfig) };


      // generalConfigMap Field Functions 
      bool hasGeneralConfigMap() const { return this->generalConfigMap_ != nullptr;};
      void deleteGeneralConfigMap() { this->generalConfigMap_ = nullptr;};
      inline       const Darabonba::Json & getGeneralConfigMap() const { DARABONBA_GET(generalConfigMap_) };
      Darabonba::Json & getGeneralConfigMap() { DARABONBA_GET(generalConfigMap_) };
      inline Data& setGeneralConfigMap(const Darabonba::Json & generalConfigMap) { DARABONBA_SET_VALUE(generalConfigMap_, generalConfigMap) };
      inline Data& setGeneralConfigMap(Darabonba::Json && generalConfigMap) { DARABONBA_SET_RVALUE(generalConfigMap_, generalConfigMap) };


      // intelligentSearchConfig Field Functions 
      bool hasIntelligentSearchConfig() const { return this->intelligentSearchConfig_ != nullptr;};
      void deleteIntelligentSearchConfig() { this->intelligentSearchConfig_ = nullptr;};
      inline const Data::IntelligentSearchConfig & getIntelligentSearchConfig() const { DARABONBA_PTR_GET_CONST(intelligentSearchConfig_, Data::IntelligentSearchConfig) };
      inline Data::IntelligentSearchConfig getIntelligentSearchConfig() { DARABONBA_PTR_GET(intelligentSearchConfig_, Data::IntelligentSearchConfig) };
      inline Data& setIntelligentSearchConfig(const Data::IntelligentSearchConfig & intelligentSearchConfig) { DARABONBA_PTR_SET_VALUE(intelligentSearchConfig_, intelligentSearchConfig) };
      inline Data& setIntelligentSearchConfig(Data::IntelligentSearchConfig && intelligentSearchConfig) { DARABONBA_PTR_SET_RVALUE(intelligentSearchConfig_, intelligentSearchConfig) };


      // miaosouConfig Field Functions 
      bool hasMiaosouConfig() const { return this->miaosouConfig_ != nullptr;};
      void deleteMiaosouConfig() { this->miaosouConfig_ = nullptr;};
      inline const Data::MiaosouConfig & getMiaosouConfig() const { DARABONBA_PTR_GET_CONST(miaosouConfig_, Data::MiaosouConfig) };
      inline Data::MiaosouConfig getMiaosouConfig() { DARABONBA_PTR_GET(miaosouConfig_, Data::MiaosouConfig) };
      inline Data& setMiaosouConfig(const Data::MiaosouConfig & miaosouConfig) { DARABONBA_PTR_SET_VALUE(miaosouConfig_, miaosouConfig) };
      inline Data& setMiaosouConfig(Data::MiaosouConfig && miaosouConfig) { DARABONBA_PTR_SET_RVALUE(miaosouConfig_, miaosouConfig) };


      // searchSourceList Field Functions 
      bool hasSearchSourceList() const { return this->searchSourceList_ != nullptr;};
      void deleteSearchSourceList() { this->searchSourceList_ = nullptr;};
      inline const vector<Data::SearchSourceList> & getSearchSourceList() const { DARABONBA_PTR_GET_CONST(searchSourceList_, vector<Data::SearchSourceList>) };
      inline vector<Data::SearchSourceList> getSearchSourceList() { DARABONBA_PTR_GET(searchSourceList_, vector<Data::SearchSourceList>) };
      inline Data& setSearchSourceList(const vector<Data::SearchSourceList> & searchSourceList) { DARABONBA_PTR_SET_VALUE(searchSourceList_, searchSourceList) };
      inline Data& setSearchSourceList(vector<Data::SearchSourceList> && searchSourceList) { DARABONBA_PTR_SET_RVALUE(searchSourceList_, searchSourceList) };


      // searchSources Field Functions 
      bool hasSearchSources() const { return this->searchSources_ != nullptr;};
      void deleteSearchSources() { this->searchSources_ = nullptr;};
      inline const vector<Data::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Data::SearchSources>) };
      inline vector<Data::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<Data::SearchSources>) };
      inline Data& setSearchSources(const vector<Data::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
      inline Data& setSearchSources(vector<Data::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


      // slrAuthorized Field Functions 
      bool hasSlrAuthorized() const { return this->slrAuthorized_ != nullptr;};
      void deleteSlrAuthorized() { this->slrAuthorized_ = nullptr;};
      inline bool getSlrAuthorized() const { DARABONBA_PTR_GET_DEFAULT(slrAuthorized_, false) };
      inline Data& setSlrAuthorized(bool slrAuthorized) { DARABONBA_PTR_SET_VALUE(slrAuthorized_, slrAuthorized) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline const Data::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Data::UserInfo) };
      inline Data::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, Data::UserInfo) };
      inline Data& setUserInfo(const Data::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
      inline Data& setUserInfo(Data::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


      // wanxiangImageSizeConfig Field Functions 
      bool hasWanxiangImageSizeConfig() const { return this->wanxiangImageSizeConfig_ != nullptr;};
      void deleteWanxiangImageSizeConfig() { this->wanxiangImageSizeConfig_ = nullptr;};
      inline const vector<Data::WanxiangImageSizeConfig> & getWanxiangImageSizeConfig() const { DARABONBA_PTR_GET_CONST(wanxiangImageSizeConfig_, vector<Data::WanxiangImageSizeConfig>) };
      inline vector<Data::WanxiangImageSizeConfig> getWanxiangImageSizeConfig() { DARABONBA_PTR_GET(wanxiangImageSizeConfig_, vector<Data::WanxiangImageSizeConfig>) };
      inline Data& setWanxiangImageSizeConfig(const vector<Data::WanxiangImageSizeConfig> & wanxiangImageSizeConfig) { DARABONBA_PTR_SET_VALUE(wanxiangImageSizeConfig_, wanxiangImageSizeConfig) };
      inline Data& setWanxiangImageSizeConfig(vector<Data::WanxiangImageSizeConfig> && wanxiangImageSizeConfig) { DARABONBA_PTR_SET_RVALUE(wanxiangImageSizeConfig_, wanxiangImageSizeConfig) };


      // wanxiangImageStyleConfig Field Functions 
      bool hasWanxiangImageStyleConfig() const { return this->wanxiangImageStyleConfig_ != nullptr;};
      void deleteWanxiangImageStyleConfig() { this->wanxiangImageStyleConfig_ = nullptr;};
      inline const vector<Data::WanxiangImageStyleConfig> & getWanxiangImageStyleConfig() const { DARABONBA_PTR_GET_CONST(wanxiangImageStyleConfig_, vector<Data::WanxiangImageStyleConfig>) };
      inline vector<Data::WanxiangImageStyleConfig> getWanxiangImageStyleConfig() { DARABONBA_PTR_GET(wanxiangImageStyleConfig_, vector<Data::WanxiangImageStyleConfig>) };
      inline Data& setWanxiangImageStyleConfig(const vector<Data::WanxiangImageStyleConfig> & wanxiangImageStyleConfig) { DARABONBA_PTR_SET_VALUE(wanxiangImageStyleConfig_, wanxiangImageStyleConfig) };
      inline Data& setWanxiangImageStyleConfig(vector<Data::WanxiangImageStyleConfig> && wanxiangImageStyleConfig) { DARABONBA_PTR_SET_RVALUE(wanxiangImageStyleConfig_, wanxiangImageStyleConfig) };


    protected:
      Darabonba::Json chatConfig_ {};
      shared_ptr<Data::ConsoleConfig> consoleConfig_ {};
      Darabonba::Json generalConfigMap_ {};
      shared_ptr<Data::IntelligentSearchConfig> intelligentSearchConfig_ {};
      shared_ptr<Data::MiaosouConfig> miaosouConfig_ {};
      shared_ptr<vector<Data::SearchSourceList>> searchSourceList_ {};
      shared_ptr<vector<Data::SearchSources>> searchSources_ {};
      shared_ptr<bool> slrAuthorized_ {};
      shared_ptr<Data::UserInfo> userInfo_ {};
      shared_ptr<vector<Data::WanxiangImageSizeConfig>> wanxiangImageSizeConfig_ {};
      shared_ptr<vector<Data::WanxiangImageStyleConfig>> wanxiangImageStyleConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPropertiesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPropertiesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPropertiesResponseBody::Data) };
    inline GetPropertiesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPropertiesResponseBody::Data) };
    inline GetPropertiesResponseBody& setData(const GetPropertiesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPropertiesResponseBody& setData(GetPropertiesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPropertiesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPropertiesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPropertiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPropertiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPropertiesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

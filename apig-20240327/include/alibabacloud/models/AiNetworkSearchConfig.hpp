// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AINETWORKSEARCHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AINETWORKSEARCHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiPluginStatus.hpp>
#include <alibabacloud/models/AiNetworkConfigSearchEngine.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiNetworkSearchConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiNetworkSearchConfig& obj) { 
      DARABONBA_PTR_TO_JSON(defaultEnable, defaultEnable_);
      DARABONBA_PTR_TO_JSON(defaultLang, defaultLang_);
      DARABONBA_PTR_TO_JSON(needReference, needReference_);
      DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_TO_JSON(referenceFormat, referenceFormat_);
      DARABONBA_PTR_TO_JSON(referenceLocation, referenceLocation_);
      DARABONBA_PTR_TO_JSON(searchEngineConfig, searchEngineConfig_);
      DARABONBA_PTR_TO_JSON(searchFrom, searchFrom_);
      DARABONBA_PTR_TO_JSON(searchRewrite, searchRewrite_);
    };
    friend void from_json(const Darabonba::Json& j, AiNetworkSearchConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultEnable, defaultEnable_);
      DARABONBA_PTR_FROM_JSON(defaultLang, defaultLang_);
      DARABONBA_PTR_FROM_JSON(needReference, needReference_);
      DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_FROM_JSON(referenceFormat, referenceFormat_);
      DARABONBA_PTR_FROM_JSON(referenceLocation, referenceLocation_);
      DARABONBA_PTR_FROM_JSON(searchEngineConfig, searchEngineConfig_);
      DARABONBA_PTR_FROM_JSON(searchFrom, searchFrom_);
      DARABONBA_PTR_FROM_JSON(searchRewrite, searchRewrite_);
    };
    AiNetworkSearchConfig() = default ;
    AiNetworkSearchConfig(const AiNetworkSearchConfig &) = default ;
    AiNetworkSearchConfig(AiNetworkSearchConfig &&) = default ;
    AiNetworkSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiNetworkSearchConfig() = default ;
    AiNetworkSearchConfig& operator=(const AiNetworkSearchConfig &) = default ;
    AiNetworkSearchConfig& operator=(AiNetworkSearchConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchRewrite : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchRewrite& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(maxCount, maxCount_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
      };
      friend void from_json(const Darabonba::Json& j, SearchRewrite& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(maxCount, maxCount_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
      };
      SearchRewrite() = default ;
      SearchRewrite(const SearchRewrite &) = default ;
      SearchRewrite(SearchRewrite &&) = default ;
      SearchRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchRewrite() = default ;
      SearchRewrite& operator=(const SearchRewrite &) = default ;
      SearchRewrite& operator=(SearchRewrite &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->maxCount_ == nullptr && this->modelName_ == nullptr && this->serviceId_ == nullptr && this->timeoutMillisecond_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline SearchRewrite& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // maxCount Field Functions 
      bool hasMaxCount() const { return this->maxCount_ != nullptr;};
      void deleteMaxCount() { this->maxCount_ = nullptr;};
      inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
      inline SearchRewrite& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline SearchRewrite& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline SearchRewrite& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // timeoutMillisecond Field Functions 
      bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
      void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
      inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
      inline SearchRewrite& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


    protected:
      // Whether to enable the search query rewrite feature.
      shared_ptr<bool> enable_ {};
      // The maximum number of rewritten queries to generate.
      shared_ptr<int32_t> maxCount_ {};
      // The name of the model to use for query rewriting.
      shared_ptr<string> modelName_ {};
      // The ID of the query rewriting service.
      shared_ptr<string> serviceId_ {};
      // Timeout for the query rewriting operation, in milliseconds.
      shared_ptr<int32_t> timeoutMillisecond_ {};
    };

    virtual bool empty() const override { return this->defaultEnable_ == nullptr
        && this->defaultLang_ == nullptr && this->needReference_ == nullptr && this->pluginStatus_ == nullptr && this->referenceFormat_ == nullptr && this->referenceLocation_ == nullptr
        && this->searchEngineConfig_ == nullptr && this->searchFrom_ == nullptr && this->searchRewrite_ == nullptr; };
    // defaultEnable Field Functions 
    bool hasDefaultEnable() const { return this->defaultEnable_ != nullptr;};
    void deleteDefaultEnable() { this->defaultEnable_ = nullptr;};
    inline bool getDefaultEnable() const { DARABONBA_PTR_GET_DEFAULT(defaultEnable_, false) };
    inline AiNetworkSearchConfig& setDefaultEnable(bool defaultEnable) { DARABONBA_PTR_SET_VALUE(defaultEnable_, defaultEnable) };


    // defaultLang Field Functions 
    bool hasDefaultLang() const { return this->defaultLang_ != nullptr;};
    void deleteDefaultLang() { this->defaultLang_ = nullptr;};
    inline string getDefaultLang() const { DARABONBA_PTR_GET_DEFAULT(defaultLang_, "") };
    inline AiNetworkSearchConfig& setDefaultLang(string defaultLang) { DARABONBA_PTR_SET_VALUE(defaultLang_, defaultLang) };


    // needReference Field Functions 
    bool hasNeedReference() const { return this->needReference_ != nullptr;};
    void deleteNeedReference() { this->needReference_ = nullptr;};
    inline bool getNeedReference() const { DARABONBA_PTR_GET_DEFAULT(needReference_, false) };
    inline AiNetworkSearchConfig& setNeedReference(bool needReference) { DARABONBA_PTR_SET_VALUE(needReference_, needReference) };


    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline const AiPluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiPluginStatus) };
    inline AiPluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiPluginStatus) };
    inline AiNetworkSearchConfig& setPluginStatus(const AiPluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline AiNetworkSearchConfig& setPluginStatus(AiPluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


    // referenceFormat Field Functions 
    bool hasReferenceFormat() const { return this->referenceFormat_ != nullptr;};
    void deleteReferenceFormat() { this->referenceFormat_ = nullptr;};
    inline string getReferenceFormat() const { DARABONBA_PTR_GET_DEFAULT(referenceFormat_, "") };
    inline AiNetworkSearchConfig& setReferenceFormat(string referenceFormat) { DARABONBA_PTR_SET_VALUE(referenceFormat_, referenceFormat) };


    // referenceLocation Field Functions 
    bool hasReferenceLocation() const { return this->referenceLocation_ != nullptr;};
    void deleteReferenceLocation() { this->referenceLocation_ = nullptr;};
    inline string getReferenceLocation() const { DARABONBA_PTR_GET_DEFAULT(referenceLocation_, "") };
    inline AiNetworkSearchConfig& setReferenceLocation(string referenceLocation) { DARABONBA_PTR_SET_VALUE(referenceLocation_, referenceLocation) };


    // searchEngineConfig Field Functions 
    bool hasSearchEngineConfig() const { return this->searchEngineConfig_ != nullptr;};
    void deleteSearchEngineConfig() { this->searchEngineConfig_ = nullptr;};
    inline const AiNetworkConfigSearchEngine & getSearchEngineConfig() const { DARABONBA_PTR_GET_CONST(searchEngineConfig_, AiNetworkConfigSearchEngine) };
    inline AiNetworkConfigSearchEngine getSearchEngineConfig() { DARABONBA_PTR_GET(searchEngineConfig_, AiNetworkConfigSearchEngine) };
    inline AiNetworkSearchConfig& setSearchEngineConfig(const AiNetworkConfigSearchEngine & searchEngineConfig) { DARABONBA_PTR_SET_VALUE(searchEngineConfig_, searchEngineConfig) };
    inline AiNetworkSearchConfig& setSearchEngineConfig(AiNetworkConfigSearchEngine && searchEngineConfig) { DARABONBA_PTR_SET_RVALUE(searchEngineConfig_, searchEngineConfig) };


    // searchFrom Field Functions 
    bool hasSearchFrom() const { return this->searchFrom_ != nullptr;};
    void deleteSearchFrom() { this->searchFrom_ = nullptr;};
    inline const vector<AiNetworkConfigSearchEngine> & getSearchFrom() const { DARABONBA_PTR_GET_CONST(searchFrom_, vector<AiNetworkConfigSearchEngine>) };
    inline vector<AiNetworkConfigSearchEngine> getSearchFrom() { DARABONBA_PTR_GET(searchFrom_, vector<AiNetworkConfigSearchEngine>) };
    inline AiNetworkSearchConfig& setSearchFrom(const vector<AiNetworkConfigSearchEngine> & searchFrom) { DARABONBA_PTR_SET_VALUE(searchFrom_, searchFrom) };
    inline AiNetworkSearchConfig& setSearchFrom(vector<AiNetworkConfigSearchEngine> && searchFrom) { DARABONBA_PTR_SET_RVALUE(searchFrom_, searchFrom) };


    // searchRewrite Field Functions 
    bool hasSearchRewrite() const { return this->searchRewrite_ != nullptr;};
    void deleteSearchRewrite() { this->searchRewrite_ = nullptr;};
    inline const AiNetworkSearchConfig::SearchRewrite & getSearchRewrite() const { DARABONBA_PTR_GET_CONST(searchRewrite_, AiNetworkSearchConfig::SearchRewrite) };
    inline AiNetworkSearchConfig::SearchRewrite getSearchRewrite() { DARABONBA_PTR_GET(searchRewrite_, AiNetworkSearchConfig::SearchRewrite) };
    inline AiNetworkSearchConfig& setSearchRewrite(const AiNetworkSearchConfig::SearchRewrite & searchRewrite) { DARABONBA_PTR_SET_VALUE(searchRewrite_, searchRewrite) };
    inline AiNetworkSearchConfig& setSearchRewrite(AiNetworkSearchConfig::SearchRewrite && searchRewrite) { DARABONBA_PTR_SET_RVALUE(searchRewrite_, searchRewrite) };


  protected:
    // Whether the network search feature is enabled by default.
    shared_ptr<bool> defaultEnable_ {};
    // The default language for the search query.
    shared_ptr<string> defaultLang_ {};
    // Whether to include references in the search results.
    shared_ptr<bool> needReference_ {};
    // The status of the AI plugin.
    shared_ptr<AiPluginStatus> pluginStatus_ {};
    // The format of the references.
    shared_ptr<string> referenceFormat_ {};
    // The location of the references in the response.
    shared_ptr<string> referenceLocation_ {};
    // The search engine configuration.
    shared_ptr<AiNetworkConfigSearchEngine> searchEngineConfig_ {};
    // A list of search engine configurations for the network search.
    shared_ptr<vector<AiNetworkConfigSearchEngine>> searchFrom_ {};
    // Configuration for search query rewriting.
    shared_ptr<AiNetworkSearchConfig::SearchRewrite> searchRewrite_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

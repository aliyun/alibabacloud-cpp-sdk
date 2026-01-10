// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
    };
    ProxyConfig() = default ;
    ProxyConfig(const ProxyConfig &) = default ;
    ProxyConfig(ProxyConfig &&) = default ;
    ProxyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfig() = default ;
    ProxyConfig& operator=(const ProxyConfig &) = default ;
    ProxyConfig& operator=(ProxyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(aiGuardrailConfig, aiGuardrailConfig_);
        DARABONBA_PTR_TO_JSON(cache, cache_);
        DARABONBA_PTR_TO_JSON(concurrencyLimit, concurrencyLimit_);
        DARABONBA_PTR_TO_JSON(fallbacks, fallbacks_);
        DARABONBA_PTR_TO_JSON(numRetries, numRetries_);
        DARABONBA_PTR_TO_JSON(requestTimeout, requestTimeout_);
        DARABONBA_PTR_TO_JSON(tokenRateLimiter, tokenRateLimiter_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(aiGuardrailConfig, aiGuardrailConfig_);
        DARABONBA_PTR_FROM_JSON(cache, cache_);
        DARABONBA_PTR_FROM_JSON(concurrencyLimit, concurrencyLimit_);
        DARABONBA_PTR_FROM_JSON(fallbacks, fallbacks_);
        DARABONBA_PTR_FROM_JSON(numRetries, numRetries_);
        DARABONBA_PTR_FROM_JSON(requestTimeout, requestTimeout_);
        DARABONBA_PTR_FROM_JSON(tokenRateLimiter, tokenRateLimiter_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TokenRateLimiter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TokenRateLimiter& obj) { 
          DARABONBA_PTR_TO_JSON(tpd, tpd_);
          DARABONBA_PTR_TO_JSON(tph, tph_);
          DARABONBA_PTR_TO_JSON(tpm, tpm_);
          DARABONBA_PTR_TO_JSON(tps, tps_);
        };
        friend void from_json(const Darabonba::Json& j, TokenRateLimiter& obj) { 
          DARABONBA_PTR_FROM_JSON(tpd, tpd_);
          DARABONBA_PTR_FROM_JSON(tph, tph_);
          DARABONBA_PTR_FROM_JSON(tpm, tpm_);
          DARABONBA_PTR_FROM_JSON(tps, tps_);
        };
        TokenRateLimiter() = default ;
        TokenRateLimiter(const TokenRateLimiter &) = default ;
        TokenRateLimiter(TokenRateLimiter &&) = default ;
        TokenRateLimiter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TokenRateLimiter() = default ;
        TokenRateLimiter& operator=(const TokenRateLimiter &) = default ;
        TokenRateLimiter& operator=(TokenRateLimiter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tpd_ == nullptr
        && this->tph_ == nullptr && this->tpm_ == nullptr && this->tps_ == nullptr; };
        // tpd Field Functions 
        bool hasTpd() const { return this->tpd_ != nullptr;};
        void deleteTpd() { this->tpd_ = nullptr;};
        inline int32_t getTpd() const { DARABONBA_PTR_GET_DEFAULT(tpd_, 0) };
        inline TokenRateLimiter& setTpd(int32_t tpd) { DARABONBA_PTR_SET_VALUE(tpd_, tpd) };


        // tph Field Functions 
        bool hasTph() const { return this->tph_ != nullptr;};
        void deleteTph() { this->tph_ = nullptr;};
        inline int32_t getTph() const { DARABONBA_PTR_GET_DEFAULT(tph_, 0) };
        inline TokenRateLimiter& setTph(int32_t tph) { DARABONBA_PTR_SET_VALUE(tph_, tph) };


        // tpm Field Functions 
        bool hasTpm() const { return this->tpm_ != nullptr;};
        void deleteTpm() { this->tpm_ = nullptr;};
        inline int32_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0) };
        inline TokenRateLimiter& setTpm(int32_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


        // tps Field Functions 
        bool hasTps() const { return this->tps_ != nullptr;};
        void deleteTps() { this->tps_ = nullptr;};
        inline int32_t getTps() const { DARABONBA_PTR_GET_DEFAULT(tps_, 0) };
        inline TokenRateLimiter& setTps(int32_t tps) { DARABONBA_PTR_SET_VALUE(tps_, tps) };


      protected:
        shared_ptr<int32_t> tpd_ {};
        shared_ptr<int32_t> tph_ {};
        shared_ptr<int32_t> tpm_ {};
        shared_ptr<int32_t> tps_ {};
      };

      class Fallbacks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fallbacks& obj) { 
          DARABONBA_PTR_TO_JSON(modelName, modelName_);
          DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
        };
        friend void from_json(const Darabonba::Json& j, Fallbacks& obj) { 
          DARABONBA_PTR_FROM_JSON(modelName, modelName_);
          DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
        };
        Fallbacks() = default ;
        Fallbacks(const Fallbacks &) = default ;
        Fallbacks(Fallbacks &&) = default ;
        Fallbacks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fallbacks() = default ;
        Fallbacks& operator=(const Fallbacks &) = default ;
        Fallbacks& operator=(Fallbacks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modelName_ == nullptr
        && this->modelServiceName_ == nullptr; };
        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline Fallbacks& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelServiceName Field Functions 
        bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
        void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
        inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
        inline Fallbacks& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


      protected:
        shared_ptr<string> modelName_ {};
        shared_ptr<string> modelServiceName_ {};
      };

      class AiGuardrailConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiGuardrailConfig& obj) { 
          DARABONBA_PTR_TO_JSON(blockOnContentModeration, blockOnContentModeration_);
          DARABONBA_PTR_TO_JSON(blockOnMaliciousUrl, blockOnMaliciousUrl_);
          DARABONBA_PTR_TO_JSON(blockOnModelHallucination, blockOnModelHallucination_);
          DARABONBA_PTR_TO_JSON(blockOnPromptAttack, blockOnPromptAttack_);
          DARABONBA_PTR_TO_JSON(blockOnSensitiveData, blockOnSensitiveData_);
          DARABONBA_PTR_TO_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_TO_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(maxTextLength, maxTextLength_);
        };
        friend void from_json(const Darabonba::Json& j, AiGuardrailConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(blockOnContentModeration, blockOnContentModeration_);
          DARABONBA_PTR_FROM_JSON(blockOnMaliciousUrl, blockOnMaliciousUrl_);
          DARABONBA_PTR_FROM_JSON(blockOnModelHallucination, blockOnModelHallucination_);
          DARABONBA_PTR_FROM_JSON(blockOnPromptAttack, blockOnPromptAttack_);
          DARABONBA_PTR_FROM_JSON(blockOnSensitiveData, blockOnSensitiveData_);
          DARABONBA_PTR_FROM_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_FROM_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(maxTextLength, maxTextLength_);
        };
        AiGuardrailConfig() = default ;
        AiGuardrailConfig(const AiGuardrailConfig &) = default ;
        AiGuardrailConfig(AiGuardrailConfig &&) = default ;
        AiGuardrailConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiGuardrailConfig() = default ;
        AiGuardrailConfig& operator=(const AiGuardrailConfig &) = default ;
        AiGuardrailConfig& operator=(AiGuardrailConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blockOnContentModeration_ == nullptr
        && this->blockOnMaliciousUrl_ == nullptr && this->blockOnModelHallucination_ == nullptr && this->blockOnPromptAttack_ == nullptr && this->blockOnSensitiveData_ == nullptr && this->checkRequest_ == nullptr
        && this->checkResponse_ == nullptr && this->level_ == nullptr && this->maxTextLength_ == nullptr; };
        // blockOnContentModeration Field Functions 
        bool hasBlockOnContentModeration() const { return this->blockOnContentModeration_ != nullptr;};
        void deleteBlockOnContentModeration() { this->blockOnContentModeration_ = nullptr;};
        inline bool getBlockOnContentModeration() const { DARABONBA_PTR_GET_DEFAULT(blockOnContentModeration_, false) };
        inline AiGuardrailConfig& setBlockOnContentModeration(bool blockOnContentModeration) { DARABONBA_PTR_SET_VALUE(blockOnContentModeration_, blockOnContentModeration) };


        // blockOnMaliciousUrl Field Functions 
        bool hasBlockOnMaliciousUrl() const { return this->blockOnMaliciousUrl_ != nullptr;};
        void deleteBlockOnMaliciousUrl() { this->blockOnMaliciousUrl_ = nullptr;};
        inline bool getBlockOnMaliciousUrl() const { DARABONBA_PTR_GET_DEFAULT(blockOnMaliciousUrl_, false) };
        inline AiGuardrailConfig& setBlockOnMaliciousUrl(bool blockOnMaliciousUrl) { DARABONBA_PTR_SET_VALUE(blockOnMaliciousUrl_, blockOnMaliciousUrl) };


        // blockOnModelHallucination Field Functions 
        bool hasBlockOnModelHallucination() const { return this->blockOnModelHallucination_ != nullptr;};
        void deleteBlockOnModelHallucination() { this->blockOnModelHallucination_ = nullptr;};
        inline bool getBlockOnModelHallucination() const { DARABONBA_PTR_GET_DEFAULT(blockOnModelHallucination_, false) };
        inline AiGuardrailConfig& setBlockOnModelHallucination(bool blockOnModelHallucination) { DARABONBA_PTR_SET_VALUE(blockOnModelHallucination_, blockOnModelHallucination) };


        // blockOnPromptAttack Field Functions 
        bool hasBlockOnPromptAttack() const { return this->blockOnPromptAttack_ != nullptr;};
        void deleteBlockOnPromptAttack() { this->blockOnPromptAttack_ = nullptr;};
        inline bool getBlockOnPromptAttack() const { DARABONBA_PTR_GET_DEFAULT(blockOnPromptAttack_, false) };
        inline AiGuardrailConfig& setBlockOnPromptAttack(bool blockOnPromptAttack) { DARABONBA_PTR_SET_VALUE(blockOnPromptAttack_, blockOnPromptAttack) };


        // blockOnSensitiveData Field Functions 
        bool hasBlockOnSensitiveData() const { return this->blockOnSensitiveData_ != nullptr;};
        void deleteBlockOnSensitiveData() { this->blockOnSensitiveData_ = nullptr;};
        inline bool getBlockOnSensitiveData() const { DARABONBA_PTR_GET_DEFAULT(blockOnSensitiveData_, false) };
        inline AiGuardrailConfig& setBlockOnSensitiveData(bool blockOnSensitiveData) { DARABONBA_PTR_SET_VALUE(blockOnSensitiveData_, blockOnSensitiveData) };


        // checkRequest Field Functions 
        bool hasCheckRequest() const { return this->checkRequest_ != nullptr;};
        void deleteCheckRequest() { this->checkRequest_ = nullptr;};
        inline bool getCheckRequest() const { DARABONBA_PTR_GET_DEFAULT(checkRequest_, false) };
        inline AiGuardrailConfig& setCheckRequest(bool checkRequest) { DARABONBA_PTR_SET_VALUE(checkRequest_, checkRequest) };


        // checkResponse Field Functions 
        bool hasCheckResponse() const { return this->checkResponse_ != nullptr;};
        void deleteCheckResponse() { this->checkResponse_ = nullptr;};
        inline bool getCheckResponse() const { DARABONBA_PTR_GET_DEFAULT(checkResponse_, false) };
        inline AiGuardrailConfig& setCheckResponse(bool checkResponse) { DARABONBA_PTR_SET_VALUE(checkResponse_, checkResponse) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline AiGuardrailConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // maxTextLength Field Functions 
        bool hasMaxTextLength() const { return this->maxTextLength_ != nullptr;};
        void deleteMaxTextLength() { this->maxTextLength_ = nullptr;};
        inline int32_t getMaxTextLength() const { DARABONBA_PTR_GET_DEFAULT(maxTextLength_, 0) };
        inline AiGuardrailConfig& setMaxTextLength(int32_t maxTextLength) { DARABONBA_PTR_SET_VALUE(maxTextLength_, maxTextLength) };


      protected:
        shared_ptr<bool> blockOnContentModeration_ {};
        shared_ptr<bool> blockOnMaliciousUrl_ {};
        shared_ptr<bool> blockOnModelHallucination_ {};
        shared_ptr<bool> blockOnPromptAttack_ {};
        shared_ptr<bool> blockOnSensitiveData_ {};
        shared_ptr<bool> checkRequest_ {};
        shared_ptr<bool> checkResponse_ {};
        shared_ptr<string> level_ {};
        shared_ptr<int32_t> maxTextLength_ {};
      };

      virtual bool empty() const override { return this->aiGuardrailConfig_ == nullptr
        && this->cache_ == nullptr && this->concurrencyLimit_ == nullptr && this->fallbacks_ == nullptr && this->numRetries_ == nullptr && this->requestTimeout_ == nullptr
        && this->tokenRateLimiter_ == nullptr; };
      // aiGuardrailConfig Field Functions 
      bool hasAiGuardrailConfig() const { return this->aiGuardrailConfig_ != nullptr;};
      void deleteAiGuardrailConfig() { this->aiGuardrailConfig_ = nullptr;};
      inline const Policies::AiGuardrailConfig & getAiGuardrailConfig() const { DARABONBA_PTR_GET_CONST(aiGuardrailConfig_, Policies::AiGuardrailConfig) };
      inline Policies::AiGuardrailConfig getAiGuardrailConfig() { DARABONBA_PTR_GET(aiGuardrailConfig_, Policies::AiGuardrailConfig) };
      inline Policies& setAiGuardrailConfig(const Policies::AiGuardrailConfig & aiGuardrailConfig) { DARABONBA_PTR_SET_VALUE(aiGuardrailConfig_, aiGuardrailConfig) };
      inline Policies& setAiGuardrailConfig(Policies::AiGuardrailConfig && aiGuardrailConfig) { DARABONBA_PTR_SET_RVALUE(aiGuardrailConfig_, aiGuardrailConfig) };


      // cache Field Functions 
      bool hasCache() const { return this->cache_ != nullptr;};
      void deleteCache() { this->cache_ = nullptr;};
      inline bool getCache() const { DARABONBA_PTR_GET_DEFAULT(cache_, false) };
      inline Policies& setCache(bool cache) { DARABONBA_PTR_SET_VALUE(cache_, cache) };


      // concurrencyLimit Field Functions 
      bool hasConcurrencyLimit() const { return this->concurrencyLimit_ != nullptr;};
      void deleteConcurrencyLimit() { this->concurrencyLimit_ = nullptr;};
      inline int32_t getConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(concurrencyLimit_, 0) };
      inline Policies& setConcurrencyLimit(int32_t concurrencyLimit) { DARABONBA_PTR_SET_VALUE(concurrencyLimit_, concurrencyLimit) };


      // fallbacks Field Functions 
      bool hasFallbacks() const { return this->fallbacks_ != nullptr;};
      void deleteFallbacks() { this->fallbacks_ = nullptr;};
      inline const vector<Policies::Fallbacks> & getFallbacks() const { DARABONBA_PTR_GET_CONST(fallbacks_, vector<Policies::Fallbacks>) };
      inline vector<Policies::Fallbacks> getFallbacks() { DARABONBA_PTR_GET(fallbacks_, vector<Policies::Fallbacks>) };
      inline Policies& setFallbacks(const vector<Policies::Fallbacks> & fallbacks) { DARABONBA_PTR_SET_VALUE(fallbacks_, fallbacks) };
      inline Policies& setFallbacks(vector<Policies::Fallbacks> && fallbacks) { DARABONBA_PTR_SET_RVALUE(fallbacks_, fallbacks) };


      // numRetries Field Functions 
      bool hasNumRetries() const { return this->numRetries_ != nullptr;};
      void deleteNumRetries() { this->numRetries_ = nullptr;};
      inline int32_t getNumRetries() const { DARABONBA_PTR_GET_DEFAULT(numRetries_, 0) };
      inline Policies& setNumRetries(int32_t numRetries) { DARABONBA_PTR_SET_VALUE(numRetries_, numRetries) };


      // requestTimeout Field Functions 
      bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
      void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
      inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
      inline Policies& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


      // tokenRateLimiter Field Functions 
      bool hasTokenRateLimiter() const { return this->tokenRateLimiter_ != nullptr;};
      void deleteTokenRateLimiter() { this->tokenRateLimiter_ = nullptr;};
      inline const Policies::TokenRateLimiter & getTokenRateLimiter() const { DARABONBA_PTR_GET_CONST(tokenRateLimiter_, Policies::TokenRateLimiter) };
      inline Policies::TokenRateLimiter getTokenRateLimiter() { DARABONBA_PTR_GET(tokenRateLimiter_, Policies::TokenRateLimiter) };
      inline Policies& setTokenRateLimiter(const Policies::TokenRateLimiter & tokenRateLimiter) { DARABONBA_PTR_SET_VALUE(tokenRateLimiter_, tokenRateLimiter) };
      inline Policies& setTokenRateLimiter(Policies::TokenRateLimiter && tokenRateLimiter) { DARABONBA_PTR_SET_RVALUE(tokenRateLimiter_, tokenRateLimiter) };


    protected:
      shared_ptr<Policies::AiGuardrailConfig> aiGuardrailConfig_ {};
      shared_ptr<bool> cache_ {};
      shared_ptr<int32_t> concurrencyLimit_ {};
      shared_ptr<vector<Policies::Fallbacks>> fallbacks_ {};
      shared_ptr<int32_t> numRetries_ {};
      shared_ptr<int32_t> requestTimeout_ {};
      shared_ptr<Policies::TokenRateLimiter> tokenRateLimiter_ {};
    };

    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
        DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
        DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->modelNames_ == nullptr && this->modelServiceName_ == nullptr && this->weight_ == nullptr; };
      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Endpoints& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // modelNames Field Functions 
      bool hasModelNames() const { return this->modelNames_ != nullptr;};
      void deleteModelNames() { this->modelNames_ = nullptr;};
      inline const vector<string> & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
      inline vector<string> getModelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
      inline Endpoints& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
      inline Endpoints& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


      // modelServiceName Field Functions 
      bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
      void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
      inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
      inline Endpoints& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Endpoints& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> baseUrl_ {};
      shared_ptr<vector<string>> modelNames_ {};
      shared_ptr<string> modelServiceName_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->policies_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ProxyConfig::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ProxyConfig::Endpoints>) };
    inline vector<ProxyConfig::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ProxyConfig::Endpoints>) };
    inline ProxyConfig& setEndpoints(const vector<ProxyConfig::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ProxyConfig& setEndpoints(vector<ProxyConfig::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const ProxyConfig::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, ProxyConfig::Policies) };
    inline ProxyConfig::Policies getPolicies() { DARABONBA_PTR_GET(policies_, ProxyConfig::Policies) };
    inline ProxyConfig& setPolicies(const ProxyConfig::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ProxyConfig& setPolicies(ProxyConfig::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


  protected:
    shared_ptr<vector<ProxyConfig::Endpoints>> endpoints_ {};
    shared_ptr<ProxyConfig::Policies> policies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

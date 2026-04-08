// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISECURITYGUARDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISECURITYGUARDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AiPluginStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiSecurityGuardConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSecurityGuardConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bufferLimit, bufferLimit_);
      DARABONBA_PTR_TO_JSON(checkRequest, checkRequest_);
      DARABONBA_PTR_TO_JSON(checkRequestImage, checkRequestImage_);
      DARABONBA_PTR_TO_JSON(checkResponse, checkResponse_);
      DARABONBA_PTR_TO_JSON(checkResponseImage, checkResponseImage_);
      DARABONBA_PTR_TO_JSON(consumerRequestCheckService, consumerRequestCheckService_);
      DARABONBA_PTR_TO_JSON(consumerResponseCheckService, consumerResponseCheckService_);
      DARABONBA_PTR_TO_JSON(consumerRiskLevel, consumerRiskLevel_);
      DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
      DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
      DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
      DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
      DARABONBA_PTR_TO_JSON(riskAlertLevel, riskAlertLevel_);
      DARABONBA_PTR_TO_JSON(riskConfig, riskConfig_);
      DARABONBA_PTR_TO_JSON(serviceAddress, serviceAddress_);
    };
    friend void from_json(const Darabonba::Json& j, AiSecurityGuardConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bufferLimit, bufferLimit_);
      DARABONBA_PTR_FROM_JSON(checkRequest, checkRequest_);
      DARABONBA_PTR_FROM_JSON(checkRequestImage, checkRequestImage_);
      DARABONBA_PTR_FROM_JSON(checkResponse, checkResponse_);
      DARABONBA_PTR_FROM_JSON(checkResponseImage, checkResponseImage_);
      DARABONBA_PTR_FROM_JSON(consumerRequestCheckService, consumerRequestCheckService_);
      DARABONBA_PTR_FROM_JSON(consumerResponseCheckService, consumerResponseCheckService_);
      DARABONBA_PTR_FROM_JSON(consumerRiskLevel, consumerRiskLevel_);
      DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
      DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
      DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
      DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
      DARABONBA_PTR_FROM_JSON(riskAlertLevel, riskAlertLevel_);
      DARABONBA_PTR_FROM_JSON(riskConfig, riskConfig_);
      DARABONBA_PTR_FROM_JSON(serviceAddress, serviceAddress_);
    };
    AiSecurityGuardConfig() = default ;
    AiSecurityGuardConfig(const AiSecurityGuardConfig &) = default ;
    AiSecurityGuardConfig(AiSecurityGuardConfig &&) = default ;
    AiSecurityGuardConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSecurityGuardConfig() = default ;
    AiSecurityGuardConfig& operator=(const AiSecurityGuardConfig &) = default ;
    AiSecurityGuardConfig& operator=(AiSecurityGuardConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskConfig& obj) { 
        DARABONBA_PTR_TO_JSON(consumerRules, consumerRules_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RiskConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerRules, consumerRules_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      RiskConfig() = default ;
      RiskConfig(const RiskConfig &) = default ;
      RiskConfig(RiskConfig &&) = default ;
      RiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskConfig() = default ;
      RiskConfig& operator=(const RiskConfig &) = default ;
      RiskConfig& operator=(RiskConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConsumerRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumerRules& obj) { 
          DARABONBA_PTR_TO_JSON(matchType, matchType_);
          DARABONBA_PTR_TO_JSON(pattern, pattern_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumerRules& obj) { 
          DARABONBA_PTR_FROM_JSON(matchType, matchType_);
          DARABONBA_PTR_FROM_JSON(pattern, pattern_);
        };
        ConsumerRules() = default ;
        ConsumerRules(const ConsumerRules &) = default ;
        ConsumerRules(ConsumerRules &&) = default ;
        ConsumerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumerRules() = default ;
        ConsumerRules& operator=(const ConsumerRules &) = default ;
        ConsumerRules& operator=(ConsumerRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->matchType_ == nullptr
        && this->pattern_ == nullptr; };
        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
        inline ConsumerRules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline ConsumerRules& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      protected:
        shared_ptr<string> matchType_ {};
        shared_ptr<string> pattern_ {};
      };

      virtual bool empty() const override { return this->consumerRules_ == nullptr
        && this->level_ == nullptr && this->type_ == nullptr; };
      // consumerRules Field Functions 
      bool hasConsumerRules() const { return this->consumerRules_ != nullptr;};
      void deleteConsumerRules() { this->consumerRules_ = nullptr;};
      inline const RiskConfig::ConsumerRules & getConsumerRules() const { DARABONBA_PTR_GET_CONST(consumerRules_, RiskConfig::ConsumerRules) };
      inline RiskConfig::ConsumerRules getConsumerRules() { DARABONBA_PTR_GET(consumerRules_, RiskConfig::ConsumerRules) };
      inline RiskConfig& setConsumerRules(const RiskConfig::ConsumerRules & consumerRules) { DARABONBA_PTR_SET_VALUE(consumerRules_, consumerRules) };
      inline RiskConfig& setConsumerRules(RiskConfig::ConsumerRules && consumerRules) { DARABONBA_PTR_SET_RVALUE(consumerRules_, consumerRules) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline RiskConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RiskConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<RiskConfig::ConsumerRules> consumerRules_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> type_ {};
    };

    class ConsumerRiskLevel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerRiskLevel& obj) { 
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(matchType, matchType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerRiskLevel& obj) { 
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(matchType, matchType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ConsumerRiskLevel() = default ;
      ConsumerRiskLevel(const ConsumerRiskLevel &) = default ;
      ConsumerRiskLevel(ConsumerRiskLevel &&) = default ;
      ConsumerRiskLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerRiskLevel() = default ;
      ConsumerRiskLevel& operator=(const ConsumerRiskLevel &) = default ;
      ConsumerRiskLevel& operator=(ConsumerRiskLevel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->level_ == nullptr
        && this->matchType_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ConsumerRiskLevel& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline ConsumerRiskLevel& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConsumerRiskLevel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ConsumerRiskLevel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> level_ {};
      shared_ptr<string> matchType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    class ConsumerResponseCheckService : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerResponseCheckService& obj) { 
        DARABONBA_PTR_TO_JSON(matchType, matchType_);
        DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
        DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerResponseCheckService& obj) { 
        DARABONBA_PTR_FROM_JSON(matchType, matchType_);
        DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
        DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
      };
      ConsumerResponseCheckService() = default ;
      ConsumerResponseCheckService(const ConsumerResponseCheckService &) = default ;
      ConsumerResponseCheckService(ConsumerResponseCheckService &&) = default ;
      ConsumerResponseCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerResponseCheckService() = default ;
      ConsumerResponseCheckService& operator=(const ConsumerResponseCheckService &) = default ;
      ConsumerResponseCheckService& operator=(ConsumerResponseCheckService &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->responseCheckService_ == nullptr && this->responseImageCheckService_ == nullptr; };
      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline ConsumerResponseCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // modalityType Field Functions 
      bool hasModalityType() const { return this->modalityType_ != nullptr;};
      void deleteModalityType() { this->modalityType_ = nullptr;};
      inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
      inline ConsumerResponseCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConsumerResponseCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // responseCheckService Field Functions 
      bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
      void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
      inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
      inline ConsumerResponseCheckService& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


      // responseImageCheckService Field Functions 
      bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
      void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
      inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
      inline ConsumerResponseCheckService& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


    protected:
      shared_ptr<string> matchType_ {};
      shared_ptr<string> modalityType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> responseCheckService_ {};
      shared_ptr<string> responseImageCheckService_ {};
    };

    class ConsumerRequestCheckService : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerRequestCheckService& obj) { 
        DARABONBA_PTR_TO_JSON(matchType, matchType_);
        DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
        DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerRequestCheckService& obj) { 
        DARABONBA_PTR_FROM_JSON(matchType, matchType_);
        DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
        DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
      };
      ConsumerRequestCheckService() = default ;
      ConsumerRequestCheckService(const ConsumerRequestCheckService &) = default ;
      ConsumerRequestCheckService(ConsumerRequestCheckService &&) = default ;
      ConsumerRequestCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerRequestCheckService() = default ;
      ConsumerRequestCheckService& operator=(const ConsumerRequestCheckService &) = default ;
      ConsumerRequestCheckService& operator=(ConsumerRequestCheckService &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr; };
      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline ConsumerRequestCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // modalityType Field Functions 
      bool hasModalityType() const { return this->modalityType_ != nullptr;};
      void deleteModalityType() { this->modalityType_ = nullptr;};
      inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
      inline ConsumerRequestCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConsumerRequestCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requestCheckService Field Functions 
      bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
      void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
      inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
      inline ConsumerRequestCheckService& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


      // requestImageCheckService Field Functions 
      bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
      void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
      inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
      inline ConsumerRequestCheckService& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


    protected:
      shared_ptr<string> matchType_ {};
      shared_ptr<string> modalityType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> requestCheckService_ {};
      shared_ptr<string> requestImageCheckService_ {};
    };

    virtual bool empty() const override { return this->bufferLimit_ == nullptr
        && this->checkRequest_ == nullptr && this->checkRequestImage_ == nullptr && this->checkResponse_ == nullptr && this->checkResponseImage_ == nullptr && this->consumerRequestCheckService_ == nullptr
        && this->consumerResponseCheckService_ == nullptr && this->consumerRiskLevel_ == nullptr && this->pluginStatus_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr
        && this->responseCheckService_ == nullptr && this->responseImageCheckService_ == nullptr && this->riskAlertLevel_ == nullptr && this->riskConfig_ == nullptr && this->serviceAddress_ == nullptr; };
    // bufferLimit Field Functions 
    bool hasBufferLimit() const { return this->bufferLimit_ != nullptr;};
    void deleteBufferLimit() { this->bufferLimit_ = nullptr;};
    inline int32_t getBufferLimit() const { DARABONBA_PTR_GET_DEFAULT(bufferLimit_, 0) };
    inline AiSecurityGuardConfig& setBufferLimit(int32_t bufferLimit) { DARABONBA_PTR_SET_VALUE(bufferLimit_, bufferLimit) };


    // checkRequest Field Functions 
    bool hasCheckRequest() const { return this->checkRequest_ != nullptr;};
    void deleteCheckRequest() { this->checkRequest_ = nullptr;};
    inline bool getCheckRequest() const { DARABONBA_PTR_GET_DEFAULT(checkRequest_, false) };
    inline AiSecurityGuardConfig& setCheckRequest(bool checkRequest) { DARABONBA_PTR_SET_VALUE(checkRequest_, checkRequest) };


    // checkRequestImage Field Functions 
    bool hasCheckRequestImage() const { return this->checkRequestImage_ != nullptr;};
    void deleteCheckRequestImage() { this->checkRequestImage_ = nullptr;};
    inline bool getCheckRequestImage() const { DARABONBA_PTR_GET_DEFAULT(checkRequestImage_, false) };
    inline AiSecurityGuardConfig& setCheckRequestImage(bool checkRequestImage) { DARABONBA_PTR_SET_VALUE(checkRequestImage_, checkRequestImage) };


    // checkResponse Field Functions 
    bool hasCheckResponse() const { return this->checkResponse_ != nullptr;};
    void deleteCheckResponse() { this->checkResponse_ = nullptr;};
    inline bool getCheckResponse() const { DARABONBA_PTR_GET_DEFAULT(checkResponse_, false) };
    inline AiSecurityGuardConfig& setCheckResponse(bool checkResponse) { DARABONBA_PTR_SET_VALUE(checkResponse_, checkResponse) };


    // checkResponseImage Field Functions 
    bool hasCheckResponseImage() const { return this->checkResponseImage_ != nullptr;};
    void deleteCheckResponseImage() { this->checkResponseImage_ = nullptr;};
    inline bool getCheckResponseImage() const { DARABONBA_PTR_GET_DEFAULT(checkResponseImage_, false) };
    inline AiSecurityGuardConfig& setCheckResponseImage(bool checkResponseImage) { DARABONBA_PTR_SET_VALUE(checkResponseImage_, checkResponseImage) };


    // consumerRequestCheckService Field Functions 
    bool hasConsumerRequestCheckService() const { return this->consumerRequestCheckService_ != nullptr;};
    void deleteConsumerRequestCheckService() { this->consumerRequestCheckService_ = nullptr;};
    inline const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & getConsumerRequestCheckService() const { DARABONBA_PTR_GET_CONST(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
    inline vector<AiSecurityGuardConfig::ConsumerRequestCheckService> getConsumerRequestCheckService() { DARABONBA_PTR_GET(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
    inline AiSecurityGuardConfig& setConsumerRequestCheckService(const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & consumerRequestCheckService) { DARABONBA_PTR_SET_VALUE(consumerRequestCheckService_, consumerRequestCheckService) };
    inline AiSecurityGuardConfig& setConsumerRequestCheckService(vector<AiSecurityGuardConfig::ConsumerRequestCheckService> && consumerRequestCheckService) { DARABONBA_PTR_SET_RVALUE(consumerRequestCheckService_, consumerRequestCheckService) };


    // consumerResponseCheckService Field Functions 
    bool hasConsumerResponseCheckService() const { return this->consumerResponseCheckService_ != nullptr;};
    void deleteConsumerResponseCheckService() { this->consumerResponseCheckService_ = nullptr;};
    inline const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & getConsumerResponseCheckService() const { DARABONBA_PTR_GET_CONST(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
    inline vector<AiSecurityGuardConfig::ConsumerResponseCheckService> getConsumerResponseCheckService() { DARABONBA_PTR_GET(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
    inline AiSecurityGuardConfig& setConsumerResponseCheckService(const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & consumerResponseCheckService) { DARABONBA_PTR_SET_VALUE(consumerResponseCheckService_, consumerResponseCheckService) };
    inline AiSecurityGuardConfig& setConsumerResponseCheckService(vector<AiSecurityGuardConfig::ConsumerResponseCheckService> && consumerResponseCheckService) { DARABONBA_PTR_SET_RVALUE(consumerResponseCheckService_, consumerResponseCheckService) };


    // consumerRiskLevel Field Functions 
    bool hasConsumerRiskLevel() const { return this->consumerRiskLevel_ != nullptr;};
    void deleteConsumerRiskLevel() { this->consumerRiskLevel_ = nullptr;};
    inline const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & getConsumerRiskLevel() const { DARABONBA_PTR_GET_CONST(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
    inline vector<AiSecurityGuardConfig::ConsumerRiskLevel> getConsumerRiskLevel() { DARABONBA_PTR_GET(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
    inline AiSecurityGuardConfig& setConsumerRiskLevel(const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & consumerRiskLevel) { DARABONBA_PTR_SET_VALUE(consumerRiskLevel_, consumerRiskLevel) };
    inline AiSecurityGuardConfig& setConsumerRiskLevel(vector<AiSecurityGuardConfig::ConsumerRiskLevel> && consumerRiskLevel) { DARABONBA_PTR_SET_RVALUE(consumerRiskLevel_, consumerRiskLevel) };


    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline const AiPluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiPluginStatus) };
    inline AiPluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiPluginStatus) };
    inline AiSecurityGuardConfig& setPluginStatus(const AiPluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline AiSecurityGuardConfig& setPluginStatus(AiPluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


    // requestCheckService Field Functions 
    bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
    void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
    inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
    inline AiSecurityGuardConfig& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


    // requestImageCheckService Field Functions 
    bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
    void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
    inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
    inline AiSecurityGuardConfig& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


    // responseCheckService Field Functions 
    bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
    void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
    inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
    inline AiSecurityGuardConfig& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


    // responseImageCheckService Field Functions 
    bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
    void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
    inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
    inline AiSecurityGuardConfig& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


    // riskAlertLevel Field Functions 
    bool hasRiskAlertLevel() const { return this->riskAlertLevel_ != nullptr;};
    void deleteRiskAlertLevel() { this->riskAlertLevel_ = nullptr;};
    inline string getRiskAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(riskAlertLevel_, "") };
    inline AiSecurityGuardConfig& setRiskAlertLevel(string riskAlertLevel) { DARABONBA_PTR_SET_VALUE(riskAlertLevel_, riskAlertLevel) };


    // riskConfig Field Functions 
    bool hasRiskConfig() const { return this->riskConfig_ != nullptr;};
    void deleteRiskConfig() { this->riskConfig_ = nullptr;};
    inline const vector<AiSecurityGuardConfig::RiskConfig> & getRiskConfig() const { DARABONBA_PTR_GET_CONST(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
    inline vector<AiSecurityGuardConfig::RiskConfig> getRiskConfig() { DARABONBA_PTR_GET(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
    inline AiSecurityGuardConfig& setRiskConfig(const vector<AiSecurityGuardConfig::RiskConfig> & riskConfig) { DARABONBA_PTR_SET_VALUE(riskConfig_, riskConfig) };
    inline AiSecurityGuardConfig& setRiskConfig(vector<AiSecurityGuardConfig::RiskConfig> && riskConfig) { DARABONBA_PTR_SET_RVALUE(riskConfig_, riskConfig) };


    // serviceAddress Field Functions 
    bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
    void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
    inline string getServiceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
    inline AiSecurityGuardConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


  protected:
    shared_ptr<int32_t> bufferLimit_ {};
    shared_ptr<bool> checkRequest_ {};
    shared_ptr<bool> checkRequestImage_ {};
    shared_ptr<bool> checkResponse_ {};
    shared_ptr<bool> checkResponseImage_ {};
    shared_ptr<vector<AiSecurityGuardConfig::ConsumerRequestCheckService>> consumerRequestCheckService_ {};
    shared_ptr<vector<AiSecurityGuardConfig::ConsumerResponseCheckService>> consumerResponseCheckService_ {};
    shared_ptr<vector<AiSecurityGuardConfig::ConsumerRiskLevel>> consumerRiskLevel_ {};
    shared_ptr<AiPluginStatus> pluginStatus_ {};
    shared_ptr<string> requestCheckService_ {};
    shared_ptr<string> requestImageCheckService_ {};
    shared_ptr<string> responseCheckService_ {};
    shared_ptr<string> responseImageCheckService_ {};
    shared_ptr<string> riskAlertLevel_ {};
    shared_ptr<vector<AiSecurityGuardConfig::RiskConfig>> riskConfig_ {};
    shared_ptr<string> serviceAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

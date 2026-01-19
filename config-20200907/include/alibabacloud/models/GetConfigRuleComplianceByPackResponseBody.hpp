// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRuleComplianceByPackResponseBody() = default ;
    GetConfigRuleComplianceByPackResponseBody(const GetConfigRuleComplianceByPackResponseBody &) = default ;
    GetConfigRuleComplianceByPackResponseBody(GetConfigRuleComplianceByPackResponseBody &&) = default ;
    GetConfigRuleComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleComplianceByPackResponseBody() = default ;
    GetConfigRuleComplianceByPackResponseBody& operator=(const GetConfigRuleComplianceByPackResponseBody &) = default ;
    GetConfigRuleComplianceByPackResponseBody& operator=(GetConfigRuleComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigRuleComplianceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRuleComplianceResult& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_TO_JSON(ConfigRuleCompliances, configRuleCompliances_);
        DARABONBA_PTR_TO_JSON(IgnoredCount, ignoredCount_);
        DARABONBA_PTR_TO_JSON(InsufficientDataCount, insufficientDataCount_);
        DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_TO_JSON(NotApplicableCount, notApplicableCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRuleComplianceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleCompliances, configRuleCompliances_);
        DARABONBA_PTR_FROM_JSON(IgnoredCount, ignoredCount_);
        DARABONBA_PTR_FROM_JSON(InsufficientDataCount, insufficientDataCount_);
        DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_FROM_JSON(NotApplicableCount, notApplicableCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ConfigRuleComplianceResult() = default ;
      ConfigRuleComplianceResult(const ConfigRuleComplianceResult &) = default ;
      ConfigRuleComplianceResult(ConfigRuleComplianceResult &&) = default ;
      ConfigRuleComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRuleComplianceResult() = default ;
      ConfigRuleComplianceResult& operator=(const ConfigRuleComplianceResult &) = default ;
      ConfigRuleComplianceResult& operator=(ConfigRuleComplianceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigRuleCompliances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigRuleCompliances& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigRuleCompliances& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        };
        ConfigRuleCompliances() = default ;
        ConfigRuleCompliances(const ConfigRuleCompliances &) = default ;
        ConfigRuleCompliances(ConfigRuleCompliances &&) = default ;
        ConfigRuleCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigRuleCompliances() = default ;
        ConfigRuleCompliances& operator=(const ConfigRuleCompliances &) = default ;
        ConfigRuleCompliances& operator=(ConfigRuleCompliances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->configRuleId_ == nullptr && this->configRuleName_ == nullptr; };
        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline ConfigRuleCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


        // configRuleId Field Functions 
        bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
        void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
        inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
        inline ConfigRuleCompliances& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


        // configRuleName Field Functions 
        bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
        void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
        inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
        inline ConfigRuleCompliances& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      protected:
        // The compliance evaluation result. Valid values:
        // 
        // *   COMPLIANT: The relevant resources are evaluated as compliant.
        // *   NON_COMPLIANT: The relevant resources are evaluated as non-compliant.
        // *   NOT_APPLICABLE: The rule does not apply to your resources.
        // *   INSUFFICIENT_DATA: No resource data is available.
        shared_ptr<string> complianceType_ {};
        // The ID of the rule enabled in the compliance package.
        shared_ptr<string> configRuleId_ {};
        // The name of the rule enabled in the compliance package.
        shared_ptr<string> configRuleName_ {};
      };

      virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->compliantCount_ == nullptr && this->configRuleCompliances_ == nullptr && this->ignoredCount_ == nullptr && this->insufficientDataCount_ == nullptr && this->nonCompliantCount_ == nullptr
        && this->notApplicableCount_ == nullptr && this->totalCount_ == nullptr; };
      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline ConfigRuleComplianceResult& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // compliantCount Field Functions 
      bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
      void deleteCompliantCount() { this->compliantCount_ = nullptr;};
      inline int32_t getCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
      inline ConfigRuleComplianceResult& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


      // configRuleCompliances Field Functions 
      bool hasConfigRuleCompliances() const { return this->configRuleCompliances_ != nullptr;};
      void deleteConfigRuleCompliances() { this->configRuleCompliances_ = nullptr;};
      inline const vector<ConfigRuleComplianceResult::ConfigRuleCompliances> & getConfigRuleCompliances() const { DARABONBA_PTR_GET_CONST(configRuleCompliances_, vector<ConfigRuleComplianceResult::ConfigRuleCompliances>) };
      inline vector<ConfigRuleComplianceResult::ConfigRuleCompliances> getConfigRuleCompliances() { DARABONBA_PTR_GET(configRuleCompliances_, vector<ConfigRuleComplianceResult::ConfigRuleCompliances>) };
      inline ConfigRuleComplianceResult& setConfigRuleCompliances(const vector<ConfigRuleComplianceResult::ConfigRuleCompliances> & configRuleCompliances) { DARABONBA_PTR_SET_VALUE(configRuleCompliances_, configRuleCompliances) };
      inline ConfigRuleComplianceResult& setConfigRuleCompliances(vector<ConfigRuleComplianceResult::ConfigRuleCompliances> && configRuleCompliances) { DARABONBA_PTR_SET_RVALUE(configRuleCompliances_, configRuleCompliances) };


      // ignoredCount Field Functions 
      bool hasIgnoredCount() const { return this->ignoredCount_ != nullptr;};
      void deleteIgnoredCount() { this->ignoredCount_ = nullptr;};
      inline int32_t getIgnoredCount() const { DARABONBA_PTR_GET_DEFAULT(ignoredCount_, 0) };
      inline ConfigRuleComplianceResult& setIgnoredCount(int32_t ignoredCount) { DARABONBA_PTR_SET_VALUE(ignoredCount_, ignoredCount) };


      // insufficientDataCount Field Functions 
      bool hasInsufficientDataCount() const { return this->insufficientDataCount_ != nullptr;};
      void deleteInsufficientDataCount() { this->insufficientDataCount_ = nullptr;};
      inline int32_t getInsufficientDataCount() const { DARABONBA_PTR_GET_DEFAULT(insufficientDataCount_, 0) };
      inline ConfigRuleComplianceResult& setInsufficientDataCount(int32_t insufficientDataCount) { DARABONBA_PTR_SET_VALUE(insufficientDataCount_, insufficientDataCount) };


      // nonCompliantCount Field Functions 
      bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
      void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
      inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
      inline ConfigRuleComplianceResult& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


      // notApplicableCount Field Functions 
      bool hasNotApplicableCount() const { return this->notApplicableCount_ != nullptr;};
      void deleteNotApplicableCount() { this->notApplicableCount_ = nullptr;};
      inline int32_t getNotApplicableCount() const { DARABONBA_PTR_GET_DEFAULT(notApplicableCount_, 0) };
      inline ConfigRuleComplianceResult& setNotApplicableCount(int32_t notApplicableCount) { DARABONBA_PTR_SET_VALUE(notApplicableCount_, notApplicableCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ConfigRuleComplianceResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The ID of the compliance package.
      shared_ptr<string> compliancePackId_ {};
      shared_ptr<int32_t> compliantCount_ {};
      // The rule enabled in the compliance package and the compliance evaluation result returned by the rule.
      shared_ptr<vector<ConfigRuleComplianceResult::ConfigRuleCompliances>> configRuleCompliances_ {};
      shared_ptr<int32_t> ignoredCount_ {};
      shared_ptr<int32_t> insufficientDataCount_ {};
      // The number of rules against which specific resources are evaluated as non-compliant.
      shared_ptr<int32_t> nonCompliantCount_ {};
      shared_ptr<int32_t> notApplicableCount_ {};
      // The total number of rules enabled in the compliance package.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->configRuleComplianceResult_ == nullptr
        && this->requestId_ == nullptr; };
    // configRuleComplianceResult Field Functions 
    bool hasConfigRuleComplianceResult() const { return this->configRuleComplianceResult_ != nullptr;};
    void deleteConfigRuleComplianceResult() { this->configRuleComplianceResult_ = nullptr;};
    inline const GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult & getConfigRuleComplianceResult() const { DARABONBA_PTR_GET_CONST(configRuleComplianceResult_, GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult getConfigRuleComplianceResult() { DARABONBA_PTR_GET(configRuleComplianceResult_, GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(const GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult & configRuleComplianceResult) { DARABONBA_PTR_SET_VALUE(configRuleComplianceResult_, configRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult && configRuleComplianceResult) { DARABONBA_PTR_SET_RVALUE(configRuleComplianceResult_, configRuleComplianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRuleComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation results returned.
    shared_ptr<GetConfigRuleComplianceByPackResponseBody::ConfigRuleComplianceResult> configRuleComplianceResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

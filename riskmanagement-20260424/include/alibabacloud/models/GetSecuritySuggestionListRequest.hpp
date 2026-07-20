// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetSecuritySuggestionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecuritySuggestionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListConfigRulesRequest, listConfigRulesRequest_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecuritySuggestionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListConfigRulesRequest, listConfigRulesRequest_);
    };
    GetSecuritySuggestionListRequest() = default ;
    GetSecuritySuggestionListRequest(const GetSecuritySuggestionListRequest &) = default ;
    GetSecuritySuggestionListRequest(GetSecuritySuggestionListRequest &&) = default ;
    GetSecuritySuggestionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecuritySuggestionListRequest() = default ;
    GetSecuritySuggestionListRequest& operator=(const GetSecuritySuggestionListRequest &) = default ;
    GetSecuritySuggestionListRequest& operator=(GetSecuritySuggestionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListConfigRulesRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListConfigRulesRequest& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ListConfigRulesRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      ListConfigRulesRequest() = default ;
      ListConfigRulesRequest(const ListConfigRulesRequest &) = default ;
      ListConfigRulesRequest(ListConfigRulesRequest &&) = default ;
      ListConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListConfigRulesRequest() = default ;
      ListConfigRulesRequest& operator=(const ListConfigRulesRequest &) = default ;
      ListConfigRulesRequest& operator=(ListConfigRulesRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->complianceType_ == nullptr && this->configRuleName_ == nullptr && this->configRuleState_ == nullptr && this->keyword_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceTypes_ == nullptr && this->riskLevel_ == nullptr; };
      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline ListConfigRulesRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // complianceType Field Functions 
      bool hasComplianceType() const { return this->complianceType_ != nullptr;};
      void deleteComplianceType() { this->complianceType_ = nullptr;};
      inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
      inline ListConfigRulesRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


      // configRuleName Field Functions 
      bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
      void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
      inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
      inline ListConfigRulesRequest& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      // configRuleState Field Functions 
      bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
      void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
      inline string getConfigRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
      inline ListConfigRulesRequest& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListConfigRulesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ListConfigRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListConfigRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resourceTypes Field Functions 
      bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
      void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
      inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
      inline ListConfigRulesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline ListConfigRulesRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      shared_ptr<string> compliancePackId_ {};
      shared_ptr<string> complianceType_ {};
      shared_ptr<string> configRuleName_ {};
      shared_ptr<string> configRuleState_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> resourceTypes_ {};
      shared_ptr<int32_t> riskLevel_ {};
    };

    virtual bool empty() const override { return this->listConfigRulesRequest_ == nullptr; };
    // listConfigRulesRequest Field Functions 
    bool hasListConfigRulesRequest() const { return this->listConfigRulesRequest_ != nullptr;};
    void deleteListConfigRulesRequest() { this->listConfigRulesRequest_ = nullptr;};
    inline const GetSecuritySuggestionListRequest::ListConfigRulesRequest & getListConfigRulesRequest() const { DARABONBA_PTR_GET_CONST(listConfigRulesRequest_, GetSecuritySuggestionListRequest::ListConfigRulesRequest) };
    inline GetSecuritySuggestionListRequest::ListConfigRulesRequest getListConfigRulesRequest() { DARABONBA_PTR_GET(listConfigRulesRequest_, GetSecuritySuggestionListRequest::ListConfigRulesRequest) };
    inline GetSecuritySuggestionListRequest& setListConfigRulesRequest(const GetSecuritySuggestionListRequest::ListConfigRulesRequest & listConfigRulesRequest) { DARABONBA_PTR_SET_VALUE(listConfigRulesRequest_, listConfigRulesRequest) };
    inline GetSecuritySuggestionListRequest& setListConfigRulesRequest(GetSecuritySuggestionListRequest::ListConfigRulesRequest && listConfigRulesRequest) { DARABONBA_PTR_SET_RVALUE(listConfigRulesRequest_, listConfigRulesRequest) };


  protected:
    shared_ptr<GetSecuritySuggestionListRequest::ListConfigRulesRequest> listConfigRulesRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif

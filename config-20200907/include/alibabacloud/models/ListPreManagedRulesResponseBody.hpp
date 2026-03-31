// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODY_HPP_
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
  class ListPreManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPreManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPreManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPreManagedRulesResponseBody() = default ;
    ListPreManagedRulesResponseBody(const ListPreManagedRulesResponseBody &) = default ;
    ListPreManagedRulesResponseBody(ListPreManagedRulesResponseBody &&) = default ;
    ListPreManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPreManagedRulesResponseBody() = default ;
    ListPreManagedRulesResponseBody& operator=(const ListPreManagedRulesResponseBody &) = default ;
    ListPreManagedRulesResponseBody& operator=(ListPreManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ManagedRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedRules& obj) { 
        DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
        DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedRules& obj) { 
        DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ManagedRules() = default ;
      ManagedRules(const ManagedRules &) = default ;
      ManagedRules(ManagedRules &&) = default ;
      ManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedRules() = default ;
      ManagedRules& operator=(const ManagedRules &) = default ;
      ManagedRules& operator=(ManagedRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && this->configRuleName_ == nullptr && this->description_ == nullptr && this->helpUrls_ == nullptr && this->identifier_ == nullptr && this->optionalInputParameterDetails_ == nullptr
        && this->resourceType_ == nullptr; };
      // compulsoryInputParameterDetails Field Functions 
      bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
      void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
      inline       const Darabonba::Json & getCompulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
      Darabonba::Json & getCompulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
      inline ManagedRules& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
      inline ManagedRules& setCompulsoryInputParameterDetails(Darabonba::Json && compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


      // configRuleName Field Functions 
      bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
      void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
      inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
      inline ManagedRules& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ManagedRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // helpUrls Field Functions 
      bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
      void deleteHelpUrls() { this->helpUrls_ = nullptr;};
      inline string getHelpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
      inline ManagedRules& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline ManagedRules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // optionalInputParameterDetails Field Functions 
      bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
      void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
      inline       const Darabonba::Json & getOptionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
      Darabonba::Json & getOptionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
      inline ManagedRules& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
      inline ManagedRules& setOptionalInputParameterDetails(Darabonba::Json && optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ManagedRules& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The details of the required input parameters of the rule.
      Darabonba::Json compulsoryInputParameterDetails_ {};
      // The name of the rule.
      shared_ptr<string> configRuleName_ {};
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The URL of the topic that describes how the evaluation rule remediates the incompliant configurations.
      shared_ptr<string> helpUrls_ {};
      // The identifier of the rule.
      shared_ptr<string> identifier_ {};
      // The details of the optional input parameters of the rule.
      Darabonba::Json optionalInputParameterDetails_ {};
      // The type of resource.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->managedRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const vector<ListPreManagedRulesResponseBody::ManagedRules> & getManagedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<ListPreManagedRulesResponseBody::ManagedRules>) };
    inline vector<ListPreManagedRulesResponseBody::ManagedRules> getManagedRules() { DARABONBA_PTR_GET(managedRules_, vector<ListPreManagedRulesResponseBody::ManagedRules>) };
    inline ListPreManagedRulesResponseBody& setManagedRules(const vector<ListPreManagedRulesResponseBody::ManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline ListPreManagedRulesResponseBody& setManagedRules(vector<ListPreManagedRulesResponseBody::ManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPreManagedRulesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPreManagedRulesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPreManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The evaluation rules.
    shared_ptr<vector<ListPreManagedRulesResponseBody::ManagedRules>> managedRules_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

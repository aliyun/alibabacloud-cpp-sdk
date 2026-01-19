// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateComplianceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateComplianceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummary, complianceSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateComplianceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummary, complianceSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateComplianceSummaryResponseBody() = default ;
    GetAggregateComplianceSummaryResponseBody(const GetAggregateComplianceSummaryResponseBody &) = default ;
    GetAggregateComplianceSummaryResponseBody(GetAggregateComplianceSummaryResponseBody &&) = default ;
    GetAggregateComplianceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateComplianceSummaryResponseBody() = default ;
    GetAggregateComplianceSummaryResponseBody& operator=(const GetAggregateComplianceSummaryResponseBody &) = default ;
    GetAggregateComplianceSummaryResponseBody& operator=(GetAggregateComplianceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComplianceSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplianceSummary& obj) { 
        DARABONBA_PTR_TO_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
        DARABONBA_PTR_TO_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
      };
      friend void from_json(const Darabonba::Json& j, ComplianceSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
        DARABONBA_PTR_FROM_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
      };
      ComplianceSummary() = default ;
      ComplianceSummary(const ComplianceSummary &) = default ;
      ComplianceSummary(ComplianceSummary &&) = default ;
      ComplianceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComplianceSummary() = default ;
      ComplianceSummary& operator=(const ComplianceSummary &) = default ;
      ComplianceSummary& operator=(ComplianceSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComplianceSummaryByResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComplianceSummaryByResource& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
          DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
          DARABONBA_PTR_TO_JSON(HighRiskRuleNonCompliantResourceCount, highRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_TO_JSON(LowRiskRuleNonCompliantResourceCount, lowRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_TO_JSON(MediumRiskRuleNonCompliantResourceCount, mediumRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, ComplianceSummaryByResource& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
          DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
          DARABONBA_PTR_FROM_JSON(HighRiskRuleNonCompliantResourceCount, highRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_FROM_JSON(LowRiskRuleNonCompliantResourceCount, lowRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_FROM_JSON(MediumRiskRuleNonCompliantResourceCount, mediumRiskRuleNonCompliantResourceCount_);
          DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        ComplianceSummaryByResource() = default ;
        ComplianceSummaryByResource(const ComplianceSummaryByResource &) = default ;
        ComplianceSummaryByResource(ComplianceSummaryByResource &&) = default ;
        ComplianceSummaryByResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComplianceSummaryByResource() = default ;
        ComplianceSummaryByResource& operator=(const ComplianceSummaryByResource &) = default ;
        ComplianceSummaryByResource& operator=(ComplianceSummaryByResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceSummaryTimestamp_ == nullptr
        && this->compliantCount_ == nullptr && this->highRiskRuleNonCompliantResourceCount_ == nullptr && this->lowRiskRuleNonCompliantResourceCount_ == nullptr && this->mediumRiskRuleNonCompliantResourceCount_ == nullptr && this->nonCompliantCount_ == nullptr
        && this->totalCount_ == nullptr; };
        // complianceSummaryTimestamp Field Functions 
        bool hasComplianceSummaryTimestamp() const { return this->complianceSummaryTimestamp_ != nullptr;};
        void deleteComplianceSummaryTimestamp() { this->complianceSummaryTimestamp_ = nullptr;};
        inline int64_t getComplianceSummaryTimestamp() const { DARABONBA_PTR_GET_DEFAULT(complianceSummaryTimestamp_, 0L) };
        inline ComplianceSummaryByResource& setComplianceSummaryTimestamp(int64_t complianceSummaryTimestamp) { DARABONBA_PTR_SET_VALUE(complianceSummaryTimestamp_, complianceSummaryTimestamp) };


        // compliantCount Field Functions 
        bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
        void deleteCompliantCount() { this->compliantCount_ = nullptr;};
        inline int32_t getCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
        inline ComplianceSummaryByResource& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


        // highRiskRuleNonCompliantResourceCount Field Functions 
        bool hasHighRiskRuleNonCompliantResourceCount() const { return this->highRiskRuleNonCompliantResourceCount_ != nullptr;};
        void deleteHighRiskRuleNonCompliantResourceCount() { this->highRiskRuleNonCompliantResourceCount_ = nullptr;};
        inline int32_t getHighRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskRuleNonCompliantResourceCount_, 0) };
        inline ComplianceSummaryByResource& setHighRiskRuleNonCompliantResourceCount(int32_t highRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(highRiskRuleNonCompliantResourceCount_, highRiskRuleNonCompliantResourceCount) };


        // lowRiskRuleNonCompliantResourceCount Field Functions 
        bool hasLowRiskRuleNonCompliantResourceCount() const { return this->lowRiskRuleNonCompliantResourceCount_ != nullptr;};
        void deleteLowRiskRuleNonCompliantResourceCount() { this->lowRiskRuleNonCompliantResourceCount_ = nullptr;};
        inline int32_t getLowRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskRuleNonCompliantResourceCount_, 0) };
        inline ComplianceSummaryByResource& setLowRiskRuleNonCompliantResourceCount(int32_t lowRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(lowRiskRuleNonCompliantResourceCount_, lowRiskRuleNonCompliantResourceCount) };


        // mediumRiskRuleNonCompliantResourceCount Field Functions 
        bool hasMediumRiskRuleNonCompliantResourceCount() const { return this->mediumRiskRuleNonCompliantResourceCount_ != nullptr;};
        void deleteMediumRiskRuleNonCompliantResourceCount() { this->mediumRiskRuleNonCompliantResourceCount_ = nullptr;};
        inline int32_t getMediumRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(mediumRiskRuleNonCompliantResourceCount_, 0) };
        inline ComplianceSummaryByResource& setMediumRiskRuleNonCompliantResourceCount(int32_t mediumRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(mediumRiskRuleNonCompliantResourceCount_, mediumRiskRuleNonCompliantResourceCount) };


        // nonCompliantCount Field Functions 
        bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
        void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
        inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
        inline ComplianceSummaryByResource& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline ComplianceSummaryByResource& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The time when the compliance statistics were collected. Unit: milliseconds.
        shared_ptr<int64_t> complianceSummaryTimestamp_ {};
        // The number of compliant resources.
        shared_ptr<int32_t> compliantCount_ {};
        shared_ptr<int32_t> highRiskRuleNonCompliantResourceCount_ {};
        shared_ptr<int32_t> lowRiskRuleNonCompliantResourceCount_ {};
        shared_ptr<int32_t> mediumRiskRuleNonCompliantResourceCount_ {};
        // The number of non-compliant resources.
        shared_ptr<int32_t> nonCompliantCount_ {};
        // The total number of resources.
        shared_ptr<int64_t> totalCount_ {};
      };

      class ComplianceSummaryByConfigRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComplianceSummaryByConfigRule& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
          DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
          DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, ComplianceSummaryByConfigRule& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
          DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
          DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        ComplianceSummaryByConfigRule() = default ;
        ComplianceSummaryByConfigRule(const ComplianceSummaryByConfigRule &) = default ;
        ComplianceSummaryByConfigRule(ComplianceSummaryByConfigRule &&) = default ;
        ComplianceSummaryByConfigRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComplianceSummaryByConfigRule() = default ;
        ComplianceSummaryByConfigRule& operator=(const ComplianceSummaryByConfigRule &) = default ;
        ComplianceSummaryByConfigRule& operator=(ComplianceSummaryByConfigRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceSummaryTimestamp_ == nullptr
        && this->compliantCount_ == nullptr && this->nonCompliantCount_ == nullptr && this->totalCount_ == nullptr; };
        // complianceSummaryTimestamp Field Functions 
        bool hasComplianceSummaryTimestamp() const { return this->complianceSummaryTimestamp_ != nullptr;};
        void deleteComplianceSummaryTimestamp() { this->complianceSummaryTimestamp_ = nullptr;};
        inline int64_t getComplianceSummaryTimestamp() const { DARABONBA_PTR_GET_DEFAULT(complianceSummaryTimestamp_, 0L) };
        inline ComplianceSummaryByConfigRule& setComplianceSummaryTimestamp(int64_t complianceSummaryTimestamp) { DARABONBA_PTR_SET_VALUE(complianceSummaryTimestamp_, complianceSummaryTimestamp) };


        // compliantCount Field Functions 
        bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
        void deleteCompliantCount() { this->compliantCount_ = nullptr;};
        inline int32_t getCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
        inline ComplianceSummaryByConfigRule& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


        // nonCompliantCount Field Functions 
        bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
        void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
        inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
        inline ComplianceSummaryByConfigRule& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline ComplianceSummaryByConfigRule& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The time when the compliance statistics were collected. Unit: milliseconds.
        shared_ptr<int64_t> complianceSummaryTimestamp_ {};
        // The number of compliant rules.
        shared_ptr<int32_t> compliantCount_ {};
        // The number of non-compliant rules.
        shared_ptr<int32_t> nonCompliantCount_ {};
        // The total number of rules.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->complianceSummaryByConfigRule_ == nullptr
        && this->complianceSummaryByResource_ == nullptr; };
      // complianceSummaryByConfigRule Field Functions 
      bool hasComplianceSummaryByConfigRule() const { return this->complianceSummaryByConfigRule_ != nullptr;};
      void deleteComplianceSummaryByConfigRule() { this->complianceSummaryByConfigRule_ = nullptr;};
      inline const ComplianceSummary::ComplianceSummaryByConfigRule & getComplianceSummaryByConfigRule() const { DARABONBA_PTR_GET_CONST(complianceSummaryByConfigRule_, ComplianceSummary::ComplianceSummaryByConfigRule) };
      inline ComplianceSummary::ComplianceSummaryByConfigRule getComplianceSummaryByConfigRule() { DARABONBA_PTR_GET(complianceSummaryByConfigRule_, ComplianceSummary::ComplianceSummaryByConfigRule) };
      inline ComplianceSummary& setComplianceSummaryByConfigRule(const ComplianceSummary::ComplianceSummaryByConfigRule & complianceSummaryByConfigRule) { DARABONBA_PTR_SET_VALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };
      inline ComplianceSummary& setComplianceSummaryByConfigRule(ComplianceSummary::ComplianceSummaryByConfigRule && complianceSummaryByConfigRule) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };


      // complianceSummaryByResource Field Functions 
      bool hasComplianceSummaryByResource() const { return this->complianceSummaryByResource_ != nullptr;};
      void deleteComplianceSummaryByResource() { this->complianceSummaryByResource_ = nullptr;};
      inline const ComplianceSummary::ComplianceSummaryByResource & getComplianceSummaryByResource() const { DARABONBA_PTR_GET_CONST(complianceSummaryByResource_, ComplianceSummary::ComplianceSummaryByResource) };
      inline ComplianceSummary::ComplianceSummaryByResource getComplianceSummaryByResource() { DARABONBA_PTR_GET(complianceSummaryByResource_, ComplianceSummary::ComplianceSummaryByResource) };
      inline ComplianceSummary& setComplianceSummaryByResource(const ComplianceSummary::ComplianceSummaryByResource & complianceSummaryByResource) { DARABONBA_PTR_SET_VALUE(complianceSummaryByResource_, complianceSummaryByResource) };
      inline ComplianceSummary& setComplianceSummaryByResource(ComplianceSummary::ComplianceSummaryByResource && complianceSummaryByResource) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByResource_, complianceSummaryByResource) };


    protected:
      // The summary of compliance statistics from the rule dimension.
      shared_ptr<ComplianceSummary::ComplianceSummaryByConfigRule> complianceSummaryByConfigRule_ {};
      // The summary of compliance statistics from the resource dimension.
      shared_ptr<ComplianceSummary::ComplianceSummaryByResource> complianceSummaryByResource_ {};
    };

    virtual bool empty() const override { return this->complianceSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // complianceSummary Field Functions 
    bool hasComplianceSummary() const { return this->complianceSummary_ != nullptr;};
    void deleteComplianceSummary() { this->complianceSummary_ = nullptr;};
    inline const GetAggregateComplianceSummaryResponseBody::ComplianceSummary & getComplianceSummary() const { DARABONBA_PTR_GET_CONST(complianceSummary_, GetAggregateComplianceSummaryResponseBody::ComplianceSummary) };
    inline GetAggregateComplianceSummaryResponseBody::ComplianceSummary getComplianceSummary() { DARABONBA_PTR_GET(complianceSummary_, GetAggregateComplianceSummaryResponseBody::ComplianceSummary) };
    inline GetAggregateComplianceSummaryResponseBody& setComplianceSummary(const GetAggregateComplianceSummaryResponseBody::ComplianceSummary & complianceSummary) { DARABONBA_PTR_SET_VALUE(complianceSummary_, complianceSummary) };
    inline GetAggregateComplianceSummaryResponseBody& setComplianceSummary(GetAggregateComplianceSummaryResponseBody::ComplianceSummary && complianceSummary) { DARABONBA_PTR_SET_RVALUE(complianceSummary_, complianceSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateComplianceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance statistics.
    shared_ptr<GetAggregateComplianceSummaryResponseBody::ComplianceSummary> complianceSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

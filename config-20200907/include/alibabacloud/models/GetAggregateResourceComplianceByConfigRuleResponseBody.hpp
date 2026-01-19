// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODY_HPP_
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
  class GetAggregateResourceComplianceByConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceComplianceByConfigRuleResponseBody() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(const GetAggregateResourceComplianceByConfigRuleResponseBody &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(GetAggregateResourceComplianceByConfigRuleResponseBody &&) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByConfigRuleResponseBody() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody& operator=(const GetAggregateResourceComplianceByConfigRuleResponseBody &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody& operator=(GetAggregateResourceComplianceByConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComplianceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplianceResult& obj) { 
        DARABONBA_PTR_TO_JSON(Compliances, compliances_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ComplianceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ComplianceResult() = default ;
      ComplianceResult(const ComplianceResult &) = default ;
      ComplianceResult(ComplianceResult &&) = default ;
      ComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComplianceResult() = default ;
      ComplianceResult& operator=(const ComplianceResult &) = default ;
      ComplianceResult& operator=(ComplianceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Compliances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Compliances& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, Compliances& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        Compliances() = default ;
        Compliances(const Compliances &) = default ;
        Compliances(Compliances &&) = default ;
        Compliances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Compliances() = default ;
        Compliances& operator=(const Compliances &) = default ;
        Compliances& operator=(Compliances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->count_ == nullptr; };
        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline Compliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Compliances& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        // The compliance evaluation results of the resources. Valid values:
        // 
        // *   COMPLIANT: The resource was evaluated as compliant.
        // *   NON_COMPLIANT: The resource was evaluated as incompliant.
        // *   NOT_APPLICABLE: The rule did not apply to your resources.
        // *   INSUFFICIENT_DATA: No resource data was available.
        shared_ptr<string> complianceType_ {};
        // The number of resources that have compliance evaluation results. For example, if the value of the `ComplianceType` parameter is `COMPLIANT`, this parameter value indicates the number of compliant resources.
        shared_ptr<int32_t> count_ {};
      };

      virtual bool empty() const override { return this->compliances_ == nullptr
        && this->totalCount_ == nullptr; };
      // compliances Field Functions 
      bool hasCompliances() const { return this->compliances_ != nullptr;};
      void deleteCompliances() { this->compliances_ = nullptr;};
      inline const vector<ComplianceResult::Compliances> & getCompliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<ComplianceResult::Compliances>) };
      inline vector<ComplianceResult::Compliances> getCompliances() { DARABONBA_PTR_GET(compliances_, vector<ComplianceResult::Compliances>) };
      inline ComplianceResult& setCompliances(const vector<ComplianceResult::Compliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
      inline ComplianceResult& setCompliances(vector<ComplianceResult::Compliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ComplianceResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The compliance list result.
      shared_ptr<vector<ComplianceResult::Compliances>> compliances_ {};
      // The total number of evaluated resources.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->complianceResult_ == nullptr
        && this->requestId_ == nullptr; };
    // complianceResult Field Functions 
    bool hasComplianceResult() const { return this->complianceResult_ != nullptr;};
    void deleteComplianceResult() { this->complianceResult_ = nullptr;};
    inline const GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult & getComplianceResult() const { DARABONBA_PTR_GET_CONST(complianceResult_, GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult getComplianceResult() { DARABONBA_PTR_GET(complianceResult_, GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setComplianceResult(const GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult & complianceResult) { DARABONBA_PTR_SET_VALUE(complianceResult_, complianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setComplianceResult(GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult && complianceResult) { DARABONBA_PTR_SET_RVALUE(complianceResult_, complianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance result.
    shared_ptr<GetAggregateResourceComplianceByConfigRuleResponseBody::ComplianceResult> complianceResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

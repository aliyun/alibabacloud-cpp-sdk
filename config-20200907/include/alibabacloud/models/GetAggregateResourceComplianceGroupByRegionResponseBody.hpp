// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
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
  class GetAggregateResourceComplianceGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceComplianceGroupByRegionResponseBody() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(const GetAggregateResourceComplianceGroupByRegionResponseBody &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(GetAggregateResourceComplianceGroupByRegionResponseBody &&) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByRegionResponseBody() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody& operator=(const GetAggregateResourceComplianceGroupByRegionResponseBody &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody& operator=(GetAggregateResourceComplianceGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComplianceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplianceResult& obj) { 
        DARABONBA_PTR_TO_JSON(ComplianceResultList, complianceResultList_);
      };
      friend void from_json(const Darabonba::Json& j, ComplianceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ComplianceResultList, complianceResultList_);
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
      class ComplianceResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComplianceResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Compliances, compliances_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, ComplianceResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        ComplianceResultList() = default ;
        ComplianceResultList(const ComplianceResultList &) = default ;
        ComplianceResultList(ComplianceResultList &&) = default ;
        ComplianceResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComplianceResultList() = default ;
        ComplianceResultList& operator=(const ComplianceResultList &) = default ;
        ComplianceResultList& operator=(ComplianceResultList &&) = default ;
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
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline Compliances& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        protected:
          // The evaluation result. Valid values:
          // 
          // *   COMPLIANT: The resource is evaluated as compliant.
          // *   NON_COMPLIANT: The resource is evaluated as non-compliant.
          // *   NOT_APPLICABLE: The rule does not apply to the resource.
          // *   INSUFFICIENT_DATA: No data is available.
          shared_ptr<string> complianceType_ {};
          // The total number of evaluation results.
          shared_ptr<int64_t> count_ {};
        };

        virtual bool empty() const override { return this->compliances_ == nullptr
        && this->regionId_ == nullptr; };
        // compliances Field Functions 
        bool hasCompliances() const { return this->compliances_ != nullptr;};
        void deleteCompliances() { this->compliances_ = nullptr;};
        inline const vector<ComplianceResultList::Compliances> & getCompliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<ComplianceResultList::Compliances>) };
        inline vector<ComplianceResultList::Compliances> getCompliances() { DARABONBA_PTR_GET(compliances_, vector<ComplianceResultList::Compliances>) };
        inline ComplianceResultList& setCompliances(const vector<ComplianceResultList::Compliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
        inline ComplianceResultList& setCompliances(vector<ComplianceResultList::Compliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ComplianceResultList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The queried evaluation results.
        shared_ptr<vector<ComplianceResultList::Compliances>> compliances_ {};
        // The region ID of the evaluated resource.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->complianceResultList_ == nullptr; };
      // complianceResultList Field Functions 
      bool hasComplianceResultList() const { return this->complianceResultList_ != nullptr;};
      void deleteComplianceResultList() { this->complianceResultList_ = nullptr;};
      inline const vector<ComplianceResult::ComplianceResultList> & getComplianceResultList() const { DARABONBA_PTR_GET_CONST(complianceResultList_, vector<ComplianceResult::ComplianceResultList>) };
      inline vector<ComplianceResult::ComplianceResultList> getComplianceResultList() { DARABONBA_PTR_GET(complianceResultList_, vector<ComplianceResult::ComplianceResultList>) };
      inline ComplianceResult& setComplianceResultList(const vector<ComplianceResult::ComplianceResultList> & complianceResultList) { DARABONBA_PTR_SET_VALUE(complianceResultList_, complianceResultList) };
      inline ComplianceResult& setComplianceResultList(vector<ComplianceResult::ComplianceResultList> && complianceResultList) { DARABONBA_PTR_SET_RVALUE(complianceResultList_, complianceResultList) };


    protected:
      // The evaluation results grouped by region.
      shared_ptr<vector<ComplianceResult::ComplianceResultList>> complianceResultList_ {};
    };

    virtual bool empty() const override { return this->complianceResult_ == nullptr
        && this->requestId_ == nullptr; };
    // complianceResult Field Functions 
    bool hasComplianceResult() const { return this->complianceResult_ != nullptr;};
    void deleteComplianceResult() { this->complianceResult_ = nullptr;};
    inline const GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult & getComplianceResult() const { DARABONBA_PTR_GET_CONST(complianceResult_, GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult getComplianceResult() { DARABONBA_PTR_GET(complianceResult_, GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setComplianceResult(const GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult & complianceResult) { DARABONBA_PTR_SET_VALUE(complianceResult_, complianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setComplianceResult(GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult && complianceResult) { DARABONBA_PTR_SET_RVALUE(complianceResult_, complianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried evaluation results.
    shared_ptr<GetAggregateResourceComplianceGroupByRegionResponseBody::ComplianceResult> complianceResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

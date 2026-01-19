// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceComplianceResult, resourceComplianceResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceComplianceResult, resourceComplianceResult_);
    };
    GetResourceComplianceByPackResponseBody() = default ;
    GetResourceComplianceByPackResponseBody(const GetResourceComplianceByPackResponseBody &) = default ;
    GetResourceComplianceByPackResponseBody(GetResourceComplianceByPackResponseBody &&) = default ;
    GetResourceComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceByPackResponseBody() = default ;
    GetResourceComplianceByPackResponseBody& operator=(const GetResourceComplianceByPackResponseBody &) = default ;
    GetResourceComplianceByPackResponseBody& operator=(GetResourceComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceComplianceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceComplianceResult& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_TO_JSON(IgnoredCount, ignoredCount_);
        DARABONBA_PTR_TO_JSON(InsufficientDataCount, insufficientDataCount_);
        DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_TO_JSON(NotApplicableCount, notApplicableCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceComplianceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_FROM_JSON(IgnoredCount, ignoredCount_);
        DARABONBA_PTR_FROM_JSON(InsufficientDataCount, insufficientDataCount_);
        DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_FROM_JSON(NotApplicableCount, notApplicableCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ResourceComplianceResult() = default ;
      ResourceComplianceResult(const ResourceComplianceResult &) = default ;
      ResourceComplianceResult(ResourceComplianceResult &&) = default ;
      ResourceComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceComplianceResult() = default ;
      ResourceComplianceResult& operator=(const ResourceComplianceResult &) = default ;
      ResourceComplianceResult& operator=(ResourceComplianceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->compliantCount_ == nullptr && this->ignoredCount_ == nullptr && this->insufficientDataCount_ == nullptr && this->nonCompliantCount_ == nullptr && this->notApplicableCount_ == nullptr
        && this->totalCount_ == nullptr; };
      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline ResourceComplianceResult& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // compliantCount Field Functions 
      bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
      void deleteCompliantCount() { this->compliantCount_ = nullptr;};
      inline int32_t getCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
      inline ResourceComplianceResult& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


      // ignoredCount Field Functions 
      bool hasIgnoredCount() const { return this->ignoredCount_ != nullptr;};
      void deleteIgnoredCount() { this->ignoredCount_ = nullptr;};
      inline int32_t getIgnoredCount() const { DARABONBA_PTR_GET_DEFAULT(ignoredCount_, 0) };
      inline ResourceComplianceResult& setIgnoredCount(int32_t ignoredCount) { DARABONBA_PTR_SET_VALUE(ignoredCount_, ignoredCount) };


      // insufficientDataCount Field Functions 
      bool hasInsufficientDataCount() const { return this->insufficientDataCount_ != nullptr;};
      void deleteInsufficientDataCount() { this->insufficientDataCount_ = nullptr;};
      inline int32_t getInsufficientDataCount() const { DARABONBA_PTR_GET_DEFAULT(insufficientDataCount_, 0) };
      inline ResourceComplianceResult& setInsufficientDataCount(int32_t insufficientDataCount) { DARABONBA_PTR_SET_VALUE(insufficientDataCount_, insufficientDataCount) };


      // nonCompliantCount Field Functions 
      bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
      void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
      inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
      inline ResourceComplianceResult& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


      // notApplicableCount Field Functions 
      bool hasNotApplicableCount() const { return this->notApplicableCount_ != nullptr;};
      void deleteNotApplicableCount() { this->notApplicableCount_ = nullptr;};
      inline int32_t getNotApplicableCount() const { DARABONBA_PTR_GET_DEFAULT(notApplicableCount_, 0) };
      inline ResourceComplianceResult& setNotApplicableCount(int32_t notApplicableCount) { DARABONBA_PTR_SET_VALUE(notApplicableCount_, notApplicableCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ResourceComplianceResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The ID of the compliance package.
      shared_ptr<string> compliancePackId_ {};
      shared_ptr<int32_t> compliantCount_ {};
      shared_ptr<int32_t> ignoredCount_ {};
      shared_ptr<int32_t> insufficientDataCount_ {};
      // The number of non-compliant resources.
      shared_ptr<int32_t> nonCompliantCount_ {};
      shared_ptr<int32_t> notApplicableCount_ {};
      // The total number of resources.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceComplianceResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceComplianceResult Field Functions 
    bool hasResourceComplianceResult() const { return this->resourceComplianceResult_ != nullptr;};
    void deleteResourceComplianceResult() { this->resourceComplianceResult_ = nullptr;};
    inline const GetResourceComplianceByPackResponseBody::ResourceComplianceResult & getResourceComplianceResult() const { DARABONBA_PTR_GET_CONST(resourceComplianceResult_, GetResourceComplianceByPackResponseBody::ResourceComplianceResult) };
    inline GetResourceComplianceByPackResponseBody::ResourceComplianceResult getResourceComplianceResult() { DARABONBA_PTR_GET(resourceComplianceResult_, GetResourceComplianceByPackResponseBody::ResourceComplianceResult) };
    inline GetResourceComplianceByPackResponseBody& setResourceComplianceResult(const GetResourceComplianceByPackResponseBody::ResourceComplianceResult & resourceComplianceResult) { DARABONBA_PTR_SET_VALUE(resourceComplianceResult_, resourceComplianceResult) };
    inline GetResourceComplianceByPackResponseBody& setResourceComplianceResult(GetResourceComplianceByPackResponseBody::ResourceComplianceResult && resourceComplianceResult) { DARABONBA_PTR_SET_RVALUE(resourceComplianceResult_, resourceComplianceResult) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The compliance evaluation results returned.
    shared_ptr<GetResourceComplianceByPackResponseBody::ResourceComplianceResult> resourceComplianceResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

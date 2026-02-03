// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionRecommendationResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionRecommendationResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionRecommendationResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNisInspectionRecommendationResourcesResponseBody() = default ;
    DescribeNisInspectionRecommendationResourcesResponseBody(const DescribeNisInspectionRecommendationResourcesResponseBody &) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBody(DescribeNisInspectionRecommendationResourcesResponseBody &&) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionRecommendationResourcesResponseBody() = default ;
    DescribeNisInspectionRecommendationResourcesResponseBody& operator=(const DescribeNisInspectionRecommendationResourcesResponseBody &) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBody& operator=(DescribeNisInspectionRecommendationResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(AnalysisData, analysisData_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AnalysisData, analysisData_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      };
      ResourceList() = default ;
      ResourceList(const ResourceList &) = default ;
      ResourceList(ResourceList &&) = default ;
      ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceList() = default ;
      ResourceList& operator=(const ResourceList &) = default ;
      ResourceList& operator=(ResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->analysisData_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr; };
      // analysisData Field Functions 
      bool hasAnalysisData() const { return this->analysisData_ != nullptr;};
      void deleteAnalysisData() { this->analysisData_ = nullptr;};
      inline string getAnalysisData() const { DARABONBA_PTR_GET_DEFAULT(analysisData_, "") };
      inline ResourceList& setAnalysisData(string analysisData) { DARABONBA_PTR_SET_VALUE(analysisData_, analysisData) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ResourceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    protected:
      shared_ptr<string> analysisData_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
    };

    virtual bool empty() const override { return this->inspectionReportId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceList_ == nullptr && this->totalCount_ == nullptr; };
    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList>) };
    inline vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList>) };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setResourceList(const vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setResourceList(vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNisInspectionRecommendationResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> inspectionReportId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeNisInspectionRecommendationResourcesResponseBody::ResourceList>> resourceList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif

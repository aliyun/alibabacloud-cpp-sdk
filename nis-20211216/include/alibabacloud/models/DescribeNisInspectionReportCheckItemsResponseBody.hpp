// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItemList, checkItemList_);
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItemList, checkItemList_);
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNisInspectionReportCheckItemsResponseBody() = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(const DescribeNisInspectionReportCheckItemsResponseBody &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(DescribeNisInspectionReportCheckItemsResponseBody &&) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsResponseBody() = default ;
    DescribeNisInspectionReportCheckItemsResponseBody& operator=(const DescribeNisInspectionReportCheckItemsResponseBody &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody& operator=(DescribeNisInspectionReportCheckItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItemList_ == nullptr
        && return this->inspectionReportId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // checkItemList Field Functions 
    bool hasCheckItemList() const { return this->checkItemList_ != nullptr;};
    void deleteCheckItemList() { this->checkItemList_ = nullptr;};
    inline const vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList> & checkItemList() const { DARABONBA_PTR_GET_CONST(checkItemList_, vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList>) };
    inline vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList> checkItemList() { DARABONBA_PTR_GET(checkItemList_, vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList>) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setCheckItemList(const vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList> & checkItemList) { DARABONBA_PTR_SET_VALUE(checkItemList_, checkItemList) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setCheckItemList(vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList> && checkItemList) { DARABONBA_PTR_SET_RVALUE(checkItemList_, checkItemList) };


    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string inspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList>> checkItemList_ = nullptr;
    std::shared_ptr<string> inspectionReportId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif

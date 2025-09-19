// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBaselineItemListResponseBodyBaselineItemInfos.hpp>
#include <alibabacloud/models/DescribeImageBaselineItemListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineItemListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineItemListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItemInfos, baselineItemInfos_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineItemListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItemInfos, baselineItemInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineItemListResponseBody() = default ;
    DescribeImageBaselineItemListResponseBody(const DescribeImageBaselineItemListResponseBody &) = default ;
    DescribeImageBaselineItemListResponseBody(DescribeImageBaselineItemListResponseBody &&) = default ;
    DescribeImageBaselineItemListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineItemListResponseBody() = default ;
    DescribeImageBaselineItemListResponseBody& operator=(const DescribeImageBaselineItemListResponseBody &) = default ;
    DescribeImageBaselineItemListResponseBody& operator=(DescribeImageBaselineItemListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineItemInfos_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // baselineItemInfos Field Functions 
    bool hasBaselineItemInfos() const { return this->baselineItemInfos_ != nullptr;};
    void deleteBaselineItemInfos() { this->baselineItemInfos_ = nullptr;};
    inline const vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos> & baselineItemInfos() const { DARABONBA_PTR_GET_CONST(baselineItemInfos_, vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos>) };
    inline vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos> baselineItemInfos() { DARABONBA_PTR_GET(baselineItemInfos_, vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos>) };
    inline DescribeImageBaselineItemListResponseBody& setBaselineItemInfos(const vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos> & baselineItemInfos) { DARABONBA_PTR_SET_VALUE(baselineItemInfos_, baselineItemInfos) };
    inline DescribeImageBaselineItemListResponseBody& setBaselineItemInfos(vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos> && baselineItemInfos) { DARABONBA_PTR_SET_RVALUE(baselineItemInfos_, baselineItemInfos) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineItemListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineItemListResponseBodyPageInfo) };
    inline DescribeImageBaselineItemListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineItemListResponseBodyPageInfo) };
    inline DescribeImageBaselineItemListResponseBody& setPageInfo(const DescribeImageBaselineItemListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineItemListResponseBody& setPageInfo(DescribeImageBaselineItemListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineItemListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of baseline check items.
    std::shared_ptr<vector<DescribeImageBaselineItemListResponseBodyBaselineItemInfos>> baselineItemInfos_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageBaselineItemListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

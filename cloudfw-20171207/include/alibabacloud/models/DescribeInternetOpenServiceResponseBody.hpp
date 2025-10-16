// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetOpenServiceResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeInternetOpenServiceResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenServiceResponseBody() = default ;
    DescribeInternetOpenServiceResponseBody(const DescribeInternetOpenServiceResponseBody &) = default ;
    DescribeInternetOpenServiceResponseBody(DescribeInternetOpenServiceResponseBody &&) = default ;
    DescribeInternetOpenServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenServiceResponseBody() = default ;
    DescribeInternetOpenServiceResponseBody& operator=(const DescribeInternetOpenServiceResponseBody &) = default ;
    DescribeInternetOpenServiceResponseBody& operator=(DescribeInternetOpenServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetOpenServiceResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetOpenServiceResponseBodyDataList>) };
    inline vector<DescribeInternetOpenServiceResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetOpenServiceResponseBodyDataList>) };
    inline DescribeInternetOpenServiceResponseBody& setDataList(const vector<DescribeInternetOpenServiceResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetOpenServiceResponseBody& setDataList(vector<DescribeInternetOpenServiceResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetOpenServiceResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetOpenServiceResponseBodyPageInfo) };
    inline DescribeInternetOpenServiceResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetOpenServiceResponseBodyPageInfo) };
    inline DescribeInternetOpenServiceResponseBody& setPageInfo(const DescribeInternetOpenServiceResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetOpenServiceResponseBody& setPageInfo(DescribeInternetOpenServiceResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeInternetOpenServiceResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<DescribeInternetOpenServiceResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

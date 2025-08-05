// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetOpenIpResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeInternetOpenIpResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenIpResponseBody() = default ;
    DescribeInternetOpenIpResponseBody(const DescribeInternetOpenIpResponseBody &) = default ;
    DescribeInternetOpenIpResponseBody(DescribeInternetOpenIpResponseBody &&) = default ;
    DescribeInternetOpenIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenIpResponseBody() = default ;
    DescribeInternetOpenIpResponseBody& operator=(const DescribeInternetOpenIpResponseBody &) = default ;
    DescribeInternetOpenIpResponseBody& operator=(DescribeInternetOpenIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetOpenIpResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetOpenIpResponseBodyDataList>) };
    inline vector<DescribeInternetOpenIpResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetOpenIpResponseBodyDataList>) };
    inline DescribeInternetOpenIpResponseBody& setDataList(const vector<DescribeInternetOpenIpResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetOpenIpResponseBody& setDataList(vector<DescribeInternetOpenIpResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetOpenIpResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetOpenIpResponseBodyPageInfo) };
    inline DescribeInternetOpenIpResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetOpenIpResponseBodyPageInfo) };
    inline DescribeInternetOpenIpResponseBody& setPageInfo(const DescribeInternetOpenIpResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetOpenIpResponseBody& setPageInfo(DescribeInternetOpenIpResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<DescribeInternetOpenIpResponseBodyDataList>> dataList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeInternetOpenIpResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

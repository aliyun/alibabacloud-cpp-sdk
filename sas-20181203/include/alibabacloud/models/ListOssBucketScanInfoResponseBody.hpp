// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOssBucketScanInfoResponseBodyData.hpp>
#include <alibabacloud/models/ListOssBucketScanInfoResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketScanInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketScanInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketScanInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOssBucketScanInfoResponseBody() = default ;
    ListOssBucketScanInfoResponseBody(const ListOssBucketScanInfoResponseBody &) = default ;
    ListOssBucketScanInfoResponseBody(ListOssBucketScanInfoResponseBody &&) = default ;
    ListOssBucketScanInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketScanInfoResponseBody() = default ;
    ListOssBucketScanInfoResponseBody& operator=(const ListOssBucketScanInfoResponseBody &) = default ;
    ListOssBucketScanInfoResponseBody& operator=(ListOssBucketScanInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOssBucketScanInfoResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOssBucketScanInfoResponseBodyData>) };
    inline vector<ListOssBucketScanInfoResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListOssBucketScanInfoResponseBodyData>) };
    inline ListOssBucketScanInfoResponseBody& setData(const vector<ListOssBucketScanInfoResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOssBucketScanInfoResponseBody& setData(vector<ListOssBucketScanInfoResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOssBucketScanInfoResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOssBucketScanInfoResponseBodyPageInfo) };
    inline ListOssBucketScanInfoResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOssBucketScanInfoResponseBodyPageInfo) };
    inline ListOssBucketScanInfoResponseBody& setPageInfo(const ListOssBucketScanInfoResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOssBucketScanInfoResponseBody& setPageInfo(ListOssBucketScanInfoResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOssBucketScanInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListOssBucketScanInfoResponseBodyData>> data_ = nullptr;
    // The page information.
    std::shared_ptr<ListOssBucketScanInfoResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

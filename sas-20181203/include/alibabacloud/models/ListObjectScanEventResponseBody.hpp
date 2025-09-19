// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListObjectScanEventResponseBodyData.hpp>
#include <alibabacloud/models/ListObjectScanEventResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListObjectScanEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListObjectScanEventResponseBody() = default ;
    ListObjectScanEventResponseBody(const ListObjectScanEventResponseBody &) = default ;
    ListObjectScanEventResponseBody(ListObjectScanEventResponseBody &&) = default ;
    ListObjectScanEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectScanEventResponseBody() = default ;
    ListObjectScanEventResponseBody& operator=(const ListObjectScanEventResponseBody &) = default ;
    ListObjectScanEventResponseBody& operator=(ListObjectScanEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListObjectScanEventResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListObjectScanEventResponseBodyData>) };
    inline vector<ListObjectScanEventResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListObjectScanEventResponseBodyData>) };
    inline ListObjectScanEventResponseBody& setData(const vector<ListObjectScanEventResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListObjectScanEventResponseBody& setData(vector<ListObjectScanEventResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListObjectScanEventResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListObjectScanEventResponseBodyPageInfo) };
    inline ListObjectScanEventResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListObjectScanEventResponseBodyPageInfo) };
    inline ListObjectScanEventResponseBody& setPageInfo(const ListObjectScanEventResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListObjectScanEventResponseBody& setPageInfo(ListObjectScanEventResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListObjectScanEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListObjectScanEventResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListObjectScanEventResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

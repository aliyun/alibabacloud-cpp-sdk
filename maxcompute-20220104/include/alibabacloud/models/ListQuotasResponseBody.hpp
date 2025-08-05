// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQuotasResponseBodyData.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotasResponseBodyQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(quotaInfoList, quotaInfoList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(quotaInfoList, quotaInfoList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListQuotasResponseBody() = default ;
    ListQuotasResponseBody(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody(ListQuotasResponseBody &&) = default ;
    ListQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBody() = default ;
    ListQuotasResponseBody& operator=(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody& operator=(ListQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->data_ != nullptr && this->marker_ != nullptr && this->maxItem_ != nullptr && this->quotaInfoList_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQuotasResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListQuotasResponseBodyData) };
    inline ListQuotasResponseBodyData data() { DARABONBA_PTR_GET(data_, ListQuotasResponseBodyData) };
    inline ListQuotasResponseBody& setData(const ListQuotasResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQuotasResponseBody& setData(ListQuotasResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListQuotasResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int64_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0L) };
    inline ListQuotasResponseBody& setMaxItem(int64_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // quotaInfoList Field Functions 
    bool hasQuotaInfoList() const { return this->quotaInfoList_ != nullptr;};
    void deleteQuotaInfoList() { this->quotaInfoList_ = nullptr;};
    inline const vector<ListQuotasResponseBodyQuotaInfoList> & quotaInfoList() const { DARABONBA_PTR_GET_CONST(quotaInfoList_, vector<ListQuotasResponseBodyQuotaInfoList>) };
    inline vector<ListQuotasResponseBodyQuotaInfoList> quotaInfoList() { DARABONBA_PTR_GET(quotaInfoList_, vector<ListQuotasResponseBodyQuotaInfoList>) };
    inline ListQuotasResponseBody& setQuotaInfoList(const vector<ListQuotasResponseBodyQuotaInfoList> & quotaInfoList) { DARABONBA_PTR_SET_VALUE(quotaInfoList_, quotaInfoList) };
    inline ListQuotasResponseBody& setQuotaInfoList(vector<ListQuotasResponseBodyQuotaInfoList> && quotaInfoList) { DARABONBA_PTR_SET_RVALUE(quotaInfoList_, quotaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. Only continuous page turning is supported. If NextToken is not empty, the next page exists. The value of NextToken can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The returned data.
    std::shared_ptr<ListQuotasResponseBodyData> data_ = nullptr;
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int64_t> maxItem_ = nullptr;
    // The list of quotas.
    std::shared_ptr<vector<ListQuotasResponseBodyQuotaInfoList>> quotaInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

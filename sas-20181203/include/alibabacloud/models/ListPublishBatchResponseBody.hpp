// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublishBatchResponseBodyBatchList.hpp>
#include <alibabacloud/models/ListPublishBatchResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPublishBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchList, batchList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchList, batchList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishBatchResponseBody() = default ;
    ListPublishBatchResponseBody(const ListPublishBatchResponseBody &) = default ;
    ListPublishBatchResponseBody(ListPublishBatchResponseBody &&) = default ;
    ListPublishBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishBatchResponseBody() = default ;
    ListPublishBatchResponseBody& operator=(const ListPublishBatchResponseBody &) = default ;
    ListPublishBatchResponseBody& operator=(ListPublishBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // batchList Field Functions 
    bool hasBatchList() const { return this->batchList_ != nullptr;};
    void deleteBatchList() { this->batchList_ = nullptr;};
    inline const vector<ListPublishBatchResponseBodyBatchList> & batchList() const { DARABONBA_PTR_GET_CONST(batchList_, vector<ListPublishBatchResponseBodyBatchList>) };
    inline vector<ListPublishBatchResponseBodyBatchList> batchList() { DARABONBA_PTR_GET(batchList_, vector<ListPublishBatchResponseBodyBatchList>) };
    inline ListPublishBatchResponseBody& setBatchList(const vector<ListPublishBatchResponseBodyBatchList> & batchList) { DARABONBA_PTR_SET_VALUE(batchList_, batchList) };
    inline ListPublishBatchResponseBody& setBatchList(vector<ListPublishBatchResponseBodyBatchList> && batchList) { DARABONBA_PTR_SET_RVALUE(batchList_, batchList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListPublishBatchResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListPublishBatchResponseBodyPageInfo) };
    inline ListPublishBatchResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListPublishBatchResponseBodyPageInfo) };
    inline ListPublishBatchResponseBody& setPageInfo(const ListPublishBatchResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListPublishBatchResponseBody& setPageInfo(ListPublishBatchResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the release batches.
    std::shared_ptr<vector<ListPublishBatchResponseBodyBatchList>> batchList_ = nullptr;
    // The page information.
    std::shared_ptr<ListPublishBatchResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

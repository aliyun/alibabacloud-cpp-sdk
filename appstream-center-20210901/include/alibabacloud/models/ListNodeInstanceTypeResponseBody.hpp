// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodeInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInstanceTypeModels, nodeInstanceTypeModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInstanceTypeModels, nodeInstanceTypeModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodeInstanceTypeResponseBody() = default ;
    ListNodeInstanceTypeResponseBody(const ListNodeInstanceTypeResponseBody &) = default ;
    ListNodeInstanceTypeResponseBody(ListNodeInstanceTypeResponseBody &&) = default ;
    ListNodeInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInstanceTypeResponseBody() = default ;
    ListNodeInstanceTypeResponseBody& operator=(const ListNodeInstanceTypeResponseBody &) = default ;
    ListNodeInstanceTypeResponseBody& operator=(ListNodeInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeInstanceTypeModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // nodeInstanceTypeModels Field Functions 
    bool hasNodeInstanceTypeModels() const { return this->nodeInstanceTypeModels_ != nullptr;};
    void deleteNodeInstanceTypeModels() { this->nodeInstanceTypeModels_ = nullptr;};
    inline const vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> & nodeInstanceTypeModels() const { DARABONBA_PTR_GET_CONST(nodeInstanceTypeModels_, vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>) };
    inline vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> nodeInstanceTypeModels() { DARABONBA_PTR_GET(nodeInstanceTypeModels_, vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>) };
    inline ListNodeInstanceTypeResponseBody& setNodeInstanceTypeModels(const vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> & nodeInstanceTypeModels) { DARABONBA_PTR_SET_VALUE(nodeInstanceTypeModels_, nodeInstanceTypeModels) };
    inline ListNodeInstanceTypeResponseBody& setNodeInstanceTypeModels(vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> && nodeInstanceTypeModels) { DARABONBA_PTR_SET_RVALUE(nodeInstanceTypeModels_, nodeInstanceTypeModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodeInstanceTypeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodeInstanceTypeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodeInstanceTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The resource types.
    std::shared_ptr<vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>> nodeInstanceTypeModels_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

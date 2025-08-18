// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyNodeModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NodeModels, nodeModels_);
      DARABONBA_PTR_TO_JSON(PerPageSize, perPageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToPage, toPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NodeModels, nodeModels_);
      DARABONBA_PTR_FROM_JSON(PerPageSize, perPageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToPage, toPage_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->nodeModels_ != nullptr && this->perPageSize_ != nullptr && this->requestId_ != nullptr && this->toPage_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListNodesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nodeModels Field Functions 
    bool hasNodeModels() const { return this->nodeModels_ != nullptr;};
    void deleteNodeModels() { this->nodeModels_ = nullptr;};
    inline const vector<ListNodesResponseBodyNodeModels> & nodeModels() const { DARABONBA_PTR_GET_CONST(nodeModels_, vector<ListNodesResponseBodyNodeModels>) };
    inline vector<ListNodesResponseBodyNodeModels> nodeModels() { DARABONBA_PTR_GET(nodeModels_, vector<ListNodesResponseBodyNodeModels>) };
    inline ListNodesResponseBody& setNodeModels(const vector<ListNodesResponseBodyNodeModels> & nodeModels) { DARABONBA_PTR_SET_VALUE(nodeModels_, nodeModels) };
    inline ListNodesResponseBody& setNodeModels(vector<ListNodesResponseBodyNodeModels> && nodeModels) { DARABONBA_PTR_SET_RVALUE(nodeModels_, nodeModels) };


    // perPageSize Field Functions 
    bool hasPerPageSize() const { return this->perPageSize_ != nullptr;};
    void deletePerPageSize() { this->perPageSize_ = nullptr;};
    inline int32_t perPageSize() const { DARABONBA_PTR_GET_DEFAULT(perPageSize_, 0) };
    inline ListNodesResponseBody& setPerPageSize(int32_t perPageSize) { DARABONBA_PTR_SET_VALUE(perPageSize_, perPageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toPage Field Functions 
    bool hasToPage() const { return this->toPage_ != nullptr;};
    void deleteToPage() { this->toPage_ = nullptr;};
    inline int32_t toPage() const { DARABONBA_PTR_GET_DEFAULT(toPage_, 0) };
    inline ListNodesResponseBody& setToPage(int32_t toPage) { DARABONBA_PTR_SET_VALUE(toPage_, toPage) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The resource nodes.
    std::shared_ptr<vector<ListNodesResponseBodyNodeModels>> nodeModels_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> perPageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> toPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

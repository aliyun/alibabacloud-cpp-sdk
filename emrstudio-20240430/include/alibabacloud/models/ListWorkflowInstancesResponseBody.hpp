// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowInstancesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListWorkflowInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
    };
    ListWorkflowInstancesResponseBody() = default ;
    ListWorkflowInstancesResponseBody(const ListWorkflowInstancesResponseBody &) = default ;
    ListWorkflowInstancesResponseBody(ListWorkflowInstancesResponseBody &&) = default ;
    ListWorkflowInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesResponseBody() = default ;
    ListWorkflowInstancesResponseBody& operator=(const ListWorkflowInstancesResponseBody &) = default ;
    ListWorkflowInstancesResponseBody& operator=(ListWorkflowInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalSize_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListWorkflowInstancesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListWorkflowInstancesResponseBodyData>) };
    inline vector<ListWorkflowInstancesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListWorkflowInstancesResponseBodyData>) };
    inline ListWorkflowInstancesResponseBody& setData(const vector<ListWorkflowInstancesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWorkflowInstancesResponseBody& setData(vector<ListWorkflowInstancesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkflowInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListWorkflowInstancesResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<vector<ListWorkflowInstancesResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif

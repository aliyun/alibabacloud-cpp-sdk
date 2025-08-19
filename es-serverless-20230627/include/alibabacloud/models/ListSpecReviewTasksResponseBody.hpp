// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSpecReviewTasksResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListSpecReviewTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpecReviewTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpecReviewTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListSpecReviewTasksResponseBody() = default ;
    ListSpecReviewTasksResponseBody(const ListSpecReviewTasksResponseBody &) = default ;
    ListSpecReviewTasksResponseBody(ListSpecReviewTasksResponseBody &&) = default ;
    ListSpecReviewTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpecReviewTasksResponseBody() = default ;
    ListSpecReviewTasksResponseBody& operator=(const ListSpecReviewTasksResponseBody &) = default ;
    ListSpecReviewTasksResponseBody& operator=(ListSpecReviewTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSpecReviewTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListSpecReviewTasksResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListSpecReviewTasksResponseBodyResult>) };
    inline vector<ListSpecReviewTasksResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListSpecReviewTasksResponseBodyResult>) };
    inline ListSpecReviewTasksResponseBody& setResult(const vector<ListSpecReviewTasksResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSpecReviewTasksResponseBody& setResult(vector<ListSpecReviewTasksResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSpecReviewTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSpecReviewTasksResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif

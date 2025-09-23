// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAsyncTaskResponseBodyAsyncTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListAsyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAsyncTaskResponseBody() = default ;
    ListAsyncTaskResponseBody(const ListAsyncTaskResponseBody &) = default ;
    ListAsyncTaskResponseBody(ListAsyncTaskResponseBody &&) = default ;
    ListAsyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTaskResponseBody() = default ;
    ListAsyncTaskResponseBody& operator=(const ListAsyncTaskResponseBody &) = default ;
    ListAsyncTaskResponseBody& operator=(ListAsyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTasks_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // asyncTasks Field Functions 
    bool hasAsyncTasks() const { return this->asyncTasks_ != nullptr;};
    void deleteAsyncTasks() { this->asyncTasks_ = nullptr;};
    inline const vector<ListAsyncTaskResponseBodyAsyncTasks> & asyncTasks() const { DARABONBA_PTR_GET_CONST(asyncTasks_, vector<ListAsyncTaskResponseBodyAsyncTasks>) };
    inline vector<ListAsyncTaskResponseBodyAsyncTasks> asyncTasks() { DARABONBA_PTR_GET(asyncTasks_, vector<ListAsyncTaskResponseBodyAsyncTasks>) };
    inline ListAsyncTaskResponseBody& setAsyncTasks(const vector<ListAsyncTaskResponseBodyAsyncTasks> & asyncTasks) { DARABONBA_PTR_SET_VALUE(asyncTasks_, asyncTasks) };
    inline ListAsyncTaskResponseBody& setAsyncTasks(vector<ListAsyncTaskResponseBodyAsyncTasks> && asyncTasks) { DARABONBA_PTR_SET_RVALUE(asyncTasks_, asyncTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAsyncTaskResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListAsyncTaskResponseBodyAsyncTasks>> asyncTasks_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EnvironmentVariablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineEnvironmentVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoutineEnvironmentVariablesResponseBody() = default ;
    ListRoutineEnvironmentVariablesResponseBody(const ListRoutineEnvironmentVariablesResponseBody &) = default ;
    ListRoutineEnvironmentVariablesResponseBody(ListRoutineEnvironmentVariablesResponseBody &&) = default ;
    ListRoutineEnvironmentVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineEnvironmentVariablesResponseBody() = default ;
    ListRoutineEnvironmentVariablesResponseBody& operator=(const ListRoutineEnvironmentVariablesResponseBody &) = default ;
    ListRoutineEnvironmentVariablesResponseBody& operator=(ListRoutineEnvironmentVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->environmentVariables_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRoutineEnvironmentVariablesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, EnvironmentVariablesValue> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, EnvironmentVariablesValue>) };
    inline map<string, EnvironmentVariablesValue> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, EnvironmentVariablesValue>) };
    inline ListRoutineEnvironmentVariablesResponseBody& setEnvironmentVariables(const map<string, EnvironmentVariablesValue> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline ListRoutineEnvironmentVariablesResponseBody& setEnvironmentVariables(map<string, EnvironmentVariablesValue> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineEnvironmentVariablesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineEnvironmentVariablesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineEnvironmentVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineEnvironmentVariablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of environment variables.
    shared_ptr<int64_t> count_ {};
    // The environment variable dictionary.
    shared_ptr<map<string, EnvironmentVariablesValue>> environmentVariables_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of environment variables.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

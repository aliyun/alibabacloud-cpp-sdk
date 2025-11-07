// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutionRiskyTasksResponseBodyRiskyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionRiskyTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionRiskyTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskyTasks, riskyTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionRiskyTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskyTasks, riskyTasks_);
    };
    ListExecutionRiskyTasksResponseBody() = default ;
    ListExecutionRiskyTasksResponseBody(const ListExecutionRiskyTasksResponseBody &) = default ;
    ListExecutionRiskyTasksResponseBody(ListExecutionRiskyTasksResponseBody &&) = default ;
    ListExecutionRiskyTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionRiskyTasksResponseBody() = default ;
    ListExecutionRiskyTasksResponseBody& operator=(const ListExecutionRiskyTasksResponseBody &) = default ;
    ListExecutionRiskyTasksResponseBody& operator=(ListExecutionRiskyTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskyTasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionRiskyTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskyTasks Field Functions 
    bool hasRiskyTasks() const { return this->riskyTasks_ != nullptr;};
    void deleteRiskyTasks() { this->riskyTasks_ = nullptr;};
    inline const vector<ListExecutionRiskyTasksResponseBodyRiskyTasks> & riskyTasks() const { DARABONBA_PTR_GET_CONST(riskyTasks_, vector<ListExecutionRiskyTasksResponseBodyRiskyTasks>) };
    inline vector<ListExecutionRiskyTasksResponseBodyRiskyTasks> riskyTasks() { DARABONBA_PTR_GET(riskyTasks_, vector<ListExecutionRiskyTasksResponseBodyRiskyTasks>) };
    inline ListExecutionRiskyTasksResponseBody& setRiskyTasks(const vector<ListExecutionRiskyTasksResponseBodyRiskyTasks> & riskyTasks) { DARABONBA_PTR_SET_VALUE(riskyTasks_, riskyTasks) };
    inline ListExecutionRiskyTasksResponseBody& setRiskyTasks(vector<ListExecutionRiskyTasksResponseBodyRiskyTasks> && riskyTasks) { DARABONBA_PTR_SET_RVALUE(riskyTasks_, riskyTasks) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about high-risk tasks.
    std::shared_ptr<vector<ListExecutionRiskyTasksResponseBodyRiskyTasks>> riskyTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif

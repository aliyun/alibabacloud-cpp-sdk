// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHTASKPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHTASKPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAICoachTaskPageResponseBodyTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachTaskPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachTaskPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachTaskPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskList, taskList_);
    };
    ListAICoachTaskPageResponseBody() = default ;
    ListAICoachTaskPageResponseBody(const ListAICoachTaskPageResponseBody &) = default ;
    ListAICoachTaskPageResponseBody(ListAICoachTaskPageResponseBody &&) = default ;
    ListAICoachTaskPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachTaskPageResponseBody() = default ;
    ListAICoachTaskPageResponseBody& operator=(const ListAICoachTaskPageResponseBody &) = default ;
    ListAICoachTaskPageResponseBody& operator=(ListAICoachTaskPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICoachTaskPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<ListAICoachTaskPageResponseBodyTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<ListAICoachTaskPageResponseBodyTaskList>) };
    inline vector<ListAICoachTaskPageResponseBodyTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<ListAICoachTaskPageResponseBodyTaskList>) };
    inline ListAICoachTaskPageResponseBody& setTaskList(const vector<ListAICoachTaskPageResponseBodyTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline ListAICoachTaskPageResponseBody& setTaskList(vector<ListAICoachTaskPageResponseBodyTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListAICoachTaskPageResponseBodyTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachInstancesResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class AttachInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    AttachInstancesResponseBody() = default ;
    AttachInstancesResponseBody(const AttachInstancesResponseBody &) = default ;
    AttachInstancesResponseBody(AttachInstancesResponseBody &&) = default ;
    AttachInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesResponseBody() = default ;
    AttachInstancesResponseBody& operator=(const AttachInstancesResponseBody &) = default ;
    AttachInstancesResponseBody& operator=(AttachInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->taskId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<AttachInstancesResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<AttachInstancesResponseBodyList>) };
    inline vector<AttachInstancesResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<AttachInstancesResponseBodyList>) };
    inline AttachInstancesResponseBody& setList(const vector<AttachInstancesResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline AttachInstancesResponseBody& setList(vector<AttachInstancesResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AttachInstancesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The details of the added nodes.
    std::shared_ptr<vector<AttachInstancesResponseBodyList>> list_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

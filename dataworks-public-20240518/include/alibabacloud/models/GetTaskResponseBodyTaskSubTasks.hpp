// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSUBTASKS_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSUBTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskResponseBodyTaskSubTasksSubTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskSubTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskSubTasks& obj) { 
      DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskSubTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTaskResponseBodyTaskSubTasks() = default ;
    GetTaskResponseBodyTaskSubTasks(const GetTaskResponseBodyTaskSubTasks &) = default ;
    GetTaskResponseBodyTaskSubTasks(GetTaskResponseBodyTaskSubTasks &&) = default ;
    GetTaskResponseBodyTaskSubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskSubTasks() = default ;
    GetTaskResponseBodyTaskSubTasks& operator=(const GetTaskResponseBodyTaskSubTasks &) = default ;
    GetTaskResponseBodyTaskSubTasks& operator=(GetTaskResponseBodyTaskSubTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subTasks_ == nullptr
        && return this->type_ == nullptr; };
    // subTasks Field Functions 
    bool hasSubTasks() const { return this->subTasks_ != nullptr;};
    void deleteSubTasks() { this->subTasks_ = nullptr;};
    inline const vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks> & subTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks>) };
    inline vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks> subTasks() { DARABONBA_PTR_GET(subTasks_, vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks>) };
    inline GetTaskResponseBodyTaskSubTasks& setSubTasks(const vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
    inline GetTaskResponseBodyTaskSubTasks& setSubTasks(vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTaskResponseBodyTaskSubTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The subtasks.
    std::shared_ptr<vector<Models::GetTaskResponseBodyTaskSubTasksSubTasks>> subTasks_ = nullptr;
    // The type of the subtask. Valid values:
    // 
    // *   DoWhile: do-while node
    // *   Combined: node group
    // *   ForEach: for-each node
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

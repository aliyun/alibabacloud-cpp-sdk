// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUESTTABLECOLUMNLINEAGEBYTASKIDQUERY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUESTTABLECOLUMNLINEAGEBYTASKIDQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& obj) { 
      DARABONBA_PTR_TO_JSON(NeedNotExistObject, needNotExistObject_);
      DARABONBA_PTR_TO_JSON(TaskEnv, taskEnv_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedNotExistObject, needNotExistObject_);
      DARABONBA_PTR_FROM_JSON(TaskEnv, taskEnv_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery() = default ;
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery(const GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery &) = default ;
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery(GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery &&) = default ;
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery() = default ;
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& operator=(const GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery &) = default ;
    GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& operator=(GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->needNotExistObject_ == nullptr
        && return this->taskEnv_ == nullptr && return this->taskId_ == nullptr; };
    // needNotExistObject Field Functions 
    bool hasNeedNotExistObject() const { return this->needNotExistObject_ != nullptr;};
    void deleteNeedNotExistObject() { this->needNotExistObject_ = nullptr;};
    inline bool needNotExistObject() const { DARABONBA_PTR_GET_DEFAULT(needNotExistObject_, false) };
    inline GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& setNeedNotExistObject(bool needNotExistObject) { DARABONBA_PTR_SET_VALUE(needNotExistObject_, needNotExistObject) };


    // taskEnv Field Functions 
    bool hasTaskEnv() const { return this->taskEnv_ != nullptr;};
    void deleteTaskEnv() { this->taskEnv_ = nullptr;};
    inline string taskEnv() const { DARABONBA_PTR_GET_DEFAULT(taskEnv_, "") };
    inline GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& setTaskEnv(string taskEnv) { DARABONBA_PTR_SET_VALUE(taskEnv_, taskEnv) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<bool> needNotExistObject_ = nullptr;
    std::shared_ptr<string> taskEnv_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

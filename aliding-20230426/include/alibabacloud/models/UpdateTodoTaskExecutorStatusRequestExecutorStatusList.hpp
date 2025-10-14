// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUESTEXECUTORSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUESTEXECUTORSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateTodoTaskExecutorStatusRequestExecutorStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTodoTaskExecutorStatusRequestExecutorStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isDone, isDone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTodoTaskExecutorStatusRequestExecutorStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isDone, isDone_);
    };
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList() = default ;
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList(const UpdateTodoTaskExecutorStatusRequestExecutorStatusList &) = default ;
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList(UpdateTodoTaskExecutorStatusRequestExecutorStatusList &&) = default ;
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTodoTaskExecutorStatusRequestExecutorStatusList() = default ;
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList& operator=(const UpdateTodoTaskExecutorStatusRequestExecutorStatusList &) = default ;
    UpdateTodoTaskExecutorStatusRequestExecutorStatusList& operator=(UpdateTodoTaskExecutorStatusRequestExecutorStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->isDone_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateTodoTaskExecutorStatusRequestExecutorStatusList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDone Field Functions 
    bool hasIsDone() const { return this->isDone_ != nullptr;};
    void deleteIsDone() { this->isDone_ = nullptr;};
    inline bool isDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
    inline UpdateTodoTaskExecutorStatusRequestExecutorStatusList& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isDone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

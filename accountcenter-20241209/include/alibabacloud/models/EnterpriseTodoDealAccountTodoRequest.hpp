// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISETODODEALACCOUNTTODOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISETODODEALACCOUNTTODOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseTodoDealAccountTodoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseTodoDealAccountTodoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TodoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseTodoDealAccountTodoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TodoId, todoId_);
    };
    EnterpriseTodoDealAccountTodoRequest() = default ;
    EnterpriseTodoDealAccountTodoRequest(const EnterpriseTodoDealAccountTodoRequest &) = default ;
    EnterpriseTodoDealAccountTodoRequest(EnterpriseTodoDealAccountTodoRequest &&) = default ;
    EnterpriseTodoDealAccountTodoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseTodoDealAccountTodoRequest() = default ;
    EnterpriseTodoDealAccountTodoRequest& operator=(const EnterpriseTodoDealAccountTodoRequest &) = default ;
    EnterpriseTodoDealAccountTodoRequest& operator=(EnterpriseTodoDealAccountTodoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr
        && this->todoId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline EnterpriseTodoDealAccountTodoRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif

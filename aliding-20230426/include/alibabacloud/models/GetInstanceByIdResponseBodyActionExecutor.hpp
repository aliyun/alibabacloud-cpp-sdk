// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODYACTIONEXECUTOR_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODYACTIONEXECUTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceByIdResponseBodyActionExecutorName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstanceByIdResponseBodyActionExecutor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceByIdResponseBodyActionExecutor& obj) { 
      DARABONBA_PTR_TO_JSON(DeptName, deptName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceByIdResponseBodyActionExecutor& obj) { 
      DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetInstanceByIdResponseBodyActionExecutor() = default ;
    GetInstanceByIdResponseBodyActionExecutor(const GetInstanceByIdResponseBodyActionExecutor &) = default ;
    GetInstanceByIdResponseBodyActionExecutor(GetInstanceByIdResponseBodyActionExecutor &&) = default ;
    GetInstanceByIdResponseBodyActionExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceByIdResponseBodyActionExecutor() = default ;
    GetInstanceByIdResponseBodyActionExecutor& operator=(const GetInstanceByIdResponseBodyActionExecutor &) = default ;
    GetInstanceByIdResponseBodyActionExecutor& operator=(GetInstanceByIdResponseBodyActionExecutor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptName_ != nullptr
        && this->email_ != nullptr && this->name_ != nullptr && this->userId_ != nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline GetInstanceByIdResponseBodyActionExecutor& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetInstanceByIdResponseBodyActionExecutor& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::GetInstanceByIdResponseBodyActionExecutorName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::GetInstanceByIdResponseBodyActionExecutorName) };
    inline Models::GetInstanceByIdResponseBodyActionExecutorName name() { DARABONBA_PTR_GET(name_, Models::GetInstanceByIdResponseBodyActionExecutorName) };
    inline GetInstanceByIdResponseBodyActionExecutor& setName(const Models::GetInstanceByIdResponseBodyActionExecutorName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline GetInstanceByIdResponseBodyActionExecutor& setName(Models::GetInstanceByIdResponseBodyActionExecutorName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstanceByIdResponseBodyActionExecutor& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<Models::GetInstanceByIdResponseBodyActionExecutorName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

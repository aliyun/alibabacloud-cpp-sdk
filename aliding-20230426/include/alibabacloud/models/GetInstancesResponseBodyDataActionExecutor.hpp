// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAACTIONEXECUTOR_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAACTIONEXECUTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstancesResponseBodyDataActionExecutorName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesResponseBodyDataActionExecutor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesResponseBodyDataActionExecutor& obj) { 
      DARABONBA_PTR_TO_JSON(DeptName, deptName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesResponseBodyDataActionExecutor& obj) { 
      DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetInstancesResponseBodyDataActionExecutor() = default ;
    GetInstancesResponseBodyDataActionExecutor(const GetInstancesResponseBodyDataActionExecutor &) = default ;
    GetInstancesResponseBodyDataActionExecutor(GetInstancesResponseBodyDataActionExecutor &&) = default ;
    GetInstancesResponseBodyDataActionExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesResponseBodyDataActionExecutor() = default ;
    GetInstancesResponseBodyDataActionExecutor& operator=(const GetInstancesResponseBodyDataActionExecutor &) = default ;
    GetInstancesResponseBodyDataActionExecutor& operator=(GetInstancesResponseBodyDataActionExecutor &&) = default ;
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
    inline GetInstancesResponseBodyDataActionExecutor& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetInstancesResponseBodyDataActionExecutor& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::GetInstancesResponseBodyDataActionExecutorName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::GetInstancesResponseBodyDataActionExecutorName) };
    inline Models::GetInstancesResponseBodyDataActionExecutorName name() { DARABONBA_PTR_GET(name_, Models::GetInstancesResponseBodyDataActionExecutorName) };
    inline GetInstancesResponseBodyDataActionExecutor& setName(const Models::GetInstancesResponseBodyDataActionExecutorName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline GetInstancesResponseBodyDataActionExecutor& setName(Models::GetInstancesResponseBodyDataActionExecutorName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstancesResponseBodyDataActionExecutor& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<Models::GetInstancesResponseBodyDataActionExecutorName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

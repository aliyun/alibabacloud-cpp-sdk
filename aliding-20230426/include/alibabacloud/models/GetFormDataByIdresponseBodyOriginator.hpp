// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODYORIGINATOR_HPP_
#define ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODYORIGINATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFormDataByIDResponseBodyOriginatorName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormDataByIDResponseBodyOriginator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormDataByIDResponseBodyOriginator& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormDataByIDResponseBodyOriginator& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetFormDataByIDResponseBodyOriginator() = default ;
    GetFormDataByIDResponseBodyOriginator(const GetFormDataByIDResponseBodyOriginator &) = default ;
    GetFormDataByIDResponseBodyOriginator(GetFormDataByIDResponseBodyOriginator &&) = default ;
    GetFormDataByIDResponseBodyOriginator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormDataByIDResponseBodyOriginator() = default ;
    GetFormDataByIDResponseBodyOriginator& operator=(const GetFormDataByIDResponseBodyOriginator &) = default ;
    GetFormDataByIDResponseBodyOriginator& operator=(GetFormDataByIDResponseBodyOriginator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departmentName_ != nullptr
        && this->email_ != nullptr && this->name_ != nullptr && this->userId_ != nullptr; };
    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline GetFormDataByIDResponseBodyOriginator& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetFormDataByIDResponseBodyOriginator& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::GetFormDataByIDResponseBodyOriginatorName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::GetFormDataByIDResponseBodyOriginatorName) };
    inline Models::GetFormDataByIDResponseBodyOriginatorName name() { DARABONBA_PTR_GET(name_, Models::GetFormDataByIDResponseBodyOriginatorName) };
    inline GetFormDataByIDResponseBodyOriginator& setName(const Models::GetFormDataByIDResponseBodyOriginatorName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline GetFormDataByIDResponseBodyOriginator& setName(Models::GetFormDataByIDResponseBodyOriginatorName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetFormDataByIDResponseBodyOriginator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> departmentName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<Models::GetFormDataByIDResponseBodyOriginatorName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

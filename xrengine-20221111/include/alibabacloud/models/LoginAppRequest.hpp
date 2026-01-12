// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOGINAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class LoginAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EmpId, empId_);
      DARABONBA_PTR_TO_JSON(EmpName, empName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LoginAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EmpId, empId_);
      DARABONBA_PTR_FROM_JSON(EmpName, empName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    LoginAppRequest() = default ;
    LoginAppRequest(const LoginAppRequest &) = default ;
    LoginAppRequest(LoginAppRequest &&) = default ;
    LoginAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginAppRequest() = default ;
    LoginAppRequest& operator=(const LoginAppRequest &) = default ;
    LoginAppRequest& operator=(LoginAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->empId_ == nullptr
        && this->empName_ == nullptr && this->token_ == nullptr && this->type_ == nullptr; };
    // empId Field Functions 
    bool hasEmpId() const { return this->empId_ != nullptr;};
    void deleteEmpId() { this->empId_ = nullptr;};
    inline string getEmpId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
    inline LoginAppRequest& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


    // empName Field Functions 
    bool hasEmpName() const { return this->empName_ != nullptr;};
    void deleteEmpName() { this->empName_ = nullptr;};
    inline string getEmpName() const { DARABONBA_PTR_GET_DEFAULT(empName_, "") };
    inline LoginAppRequest& setEmpName(string empName) { DARABONBA_PTR_SET_VALUE(empName_, empName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline LoginAppRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LoginAppRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> empId_ {};
    shared_ptr<string> empName_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif

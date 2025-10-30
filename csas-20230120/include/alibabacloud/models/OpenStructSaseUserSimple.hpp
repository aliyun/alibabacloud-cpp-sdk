// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLE_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructSaseUserSimpleDepartments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructSaseUserSimple : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructSaseUserSimple& obj) { 
      DARABONBA_PTR_TO_JSON(Departments, departments_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseUserSimple& obj) { 
      DARABONBA_PTR_FROM_JSON(Departments, departments_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    OpenStructSaseUserSimple() = default ;
    OpenStructSaseUserSimple(const OpenStructSaseUserSimple &) = default ;
    OpenStructSaseUserSimple(OpenStructSaseUserSimple &&) = default ;
    OpenStructSaseUserSimple(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructSaseUserSimple() = default ;
    OpenStructSaseUserSimple& operator=(const OpenStructSaseUserSimple &) = default ;
    OpenStructSaseUserSimple& operator=(OpenStructSaseUserSimple &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departments_ == nullptr
        && return this->email_ == nullptr && return this->idpConfigId_ == nullptr && return this->saseUserId_ == nullptr && return this->telephone_ == nullptr && return this->username_ == nullptr; };
    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<OpenStructSaseUserSimpleDepartments> & departments() const { DARABONBA_PTR_GET_CONST(departments_, vector<OpenStructSaseUserSimpleDepartments>) };
    inline vector<OpenStructSaseUserSimpleDepartments> departments() { DARABONBA_PTR_GET(departments_, vector<OpenStructSaseUserSimpleDepartments>) };
    inline OpenStructSaseUserSimple& setDepartments(const vector<OpenStructSaseUserSimpleDepartments> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline OpenStructSaseUserSimple& setDepartments(vector<OpenStructSaseUserSimpleDepartments> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline OpenStructSaseUserSimple& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline OpenStructSaseUserSimple& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline OpenStructSaseUserSimple& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline OpenStructSaseUserSimple& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline OpenStructSaseUserSimple& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<vector<OpenStructSaseUserSimpleDepartments>> departments_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

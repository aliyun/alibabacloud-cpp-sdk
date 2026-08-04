// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAGACCOUNTNATIONALITYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAGACCOUNTNATIONALITYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ChangeAgAccountNationalityCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAgAccountNationalityCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(NationalityCode, nationalityCode_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAgAccountNationalityCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(NationalityCode, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
    };
    ChangeAgAccountNationalityCodeRequest() = default ;
    ChangeAgAccountNationalityCodeRequest(const ChangeAgAccountNationalityCodeRequest &) = default ;
    ChangeAgAccountNationalityCodeRequest(ChangeAgAccountNationalityCodeRequest &&) = default ;
    ChangeAgAccountNationalityCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAgAccountNationalityCodeRequest() = default ;
    ChangeAgAccountNationalityCodeRequest& operator=(const ChangeAgAccountNationalityCodeRequest &) = default ;
    ChangeAgAccountNationalityCodeRequest& operator=(ChangeAgAccountNationalityCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->mpk_ == nullptr && this->nationalityCode_ == nullptr && this->PK_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ChangeAgAccountNationalityCodeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline ChangeAgAccountNationalityCodeRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline ChangeAgAccountNationalityCodeRequest& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline ChangeAgAccountNationalityCodeRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> mpk_ {};
    shared_ptr<string> nationalityCode_ {};
    shared_ptr<string> PK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

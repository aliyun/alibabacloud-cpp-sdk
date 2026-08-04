// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCMODIFYAGLOGINEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCMODIFYAGLOGINEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AsyncModifyAgLoginEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncModifyAgLoginEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(NewLoginEmail, newLoginEmail_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncModifyAgLoginEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(NewLoginEmail, newLoginEmail_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    AsyncModifyAgLoginEmailRequest() = default ;
    AsyncModifyAgLoginEmailRequest(const AsyncModifyAgLoginEmailRequest &) = default ;
    AsyncModifyAgLoginEmailRequest(AsyncModifyAgLoginEmailRequest &&) = default ;
    AsyncModifyAgLoginEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncModifyAgLoginEmailRequest() = default ;
    AsyncModifyAgLoginEmailRequest& operator=(const AsyncModifyAgLoginEmailRequest &) = default ;
    AsyncModifyAgLoginEmailRequest& operator=(AsyncModifyAgLoginEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mpk_ == nullptr
        && this->newLoginEmail_ == nullptr && this->pk_ == nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline AsyncModifyAgLoginEmailRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // newLoginEmail Field Functions 
    bool hasNewLoginEmail() const { return this->newLoginEmail_ != nullptr;};
    void deleteNewLoginEmail() { this->newLoginEmail_ = nullptr;};
    inline string getNewLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(newLoginEmail_, "") };
    inline AsyncModifyAgLoginEmailRequest& setNewLoginEmail(string newLoginEmail) { DARABONBA_PTR_SET_VALUE(newLoginEmail_, newLoginEmail) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline AsyncModifyAgLoginEmailRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> newLoginEmail_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

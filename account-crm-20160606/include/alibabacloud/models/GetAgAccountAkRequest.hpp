// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGACCOUNTAKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGACCOUNTAKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAgAccountAkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgAccountAkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgAccountAkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    GetAgAccountAkRequest() = default ;
    GetAgAccountAkRequest(const GetAgAccountAkRequest &) = default ;
    GetAgAccountAkRequest(GetAgAccountAkRequest &&) = default ;
    GetAgAccountAkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgAccountAkRequest() = default ;
    GetAgAccountAkRequest& operator=(const GetAgAccountAkRequest &) = default ;
    GetAgAccountAkRequest& operator=(GetAgAccountAkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agAccountType_ == nullptr
        && this->mpk_ == nullptr && this->pk_ == nullptr; };
    // agAccountType Field Functions 
    bool hasAgAccountType() const { return this->agAccountType_ != nullptr;};
    void deleteAgAccountType() { this->agAccountType_ = nullptr;};
    inline string getAgAccountType() const { DARABONBA_PTR_GET_DEFAULT(agAccountType_, "") };
    inline GetAgAccountAkRequest& setAgAccountType(string agAccountType) { DARABONBA_PTR_SET_VALUE(agAccountType_, agAccountType) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline GetAgAccountAkRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline GetAgAccountAkRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    shared_ptr<string> agAccountType_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

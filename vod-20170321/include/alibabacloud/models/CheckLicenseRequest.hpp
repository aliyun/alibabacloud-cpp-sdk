// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CheckLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Nonce, nonce_);
      DARABONBA_PTR_TO_JSON(Sign, sign_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(Sign, sign_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    CheckLicenseRequest() = default ;
    CheckLicenseRequest(const CheckLicenseRequest &) = default ;
    CheckLicenseRequest(CheckLicenseRequest &&) = default ;
    CheckLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLicenseRequest() = default ;
    CheckLicenseRequest& operator=(const CheckLicenseRequest &) = default ;
    CheckLicenseRequest& operator=(CheckLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->filter_ != nullptr && this->nonce_ != nullptr && this->sign_ != nullptr && this->time_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CheckLicenseRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline CheckLicenseRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline CheckLicenseRequest& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline CheckLicenseRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline CheckLicenseRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nonce_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sign_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

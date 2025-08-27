// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULEAPPLICANT_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULEAPPLICANT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderDetailResponseBodyModuleApplicant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderDetailResponseBodyModuleApplicant& obj) { 
      DARABONBA_PTR_TO_JSON(cert_name, certName_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderDetailResponseBodyModuleApplicant& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_name, certName_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    InsureOrderDetailResponseBodyModuleApplicant() = default ;
    InsureOrderDetailResponseBodyModuleApplicant(const InsureOrderDetailResponseBodyModuleApplicant &) = default ;
    InsureOrderDetailResponseBodyModuleApplicant(InsureOrderDetailResponseBodyModuleApplicant &&) = default ;
    InsureOrderDetailResponseBodyModuleApplicant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderDetailResponseBodyModuleApplicant() = default ;
    InsureOrderDetailResponseBodyModuleApplicant& operator=(const InsureOrderDetailResponseBodyModuleApplicant &) = default ;
    InsureOrderDetailResponseBodyModuleApplicant& operator=(InsureOrderDetailResponseBodyModuleApplicant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certName_ != nullptr
        && this->certNo_ != nullptr && this->certType_ != nullptr && this->phone_ != nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline InsureOrderDetailResponseBodyModuleApplicant& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline InsureOrderDetailResponseBodyModuleApplicant& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline InsureOrderDetailResponseBodyModuleApplicant& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline InsureOrderDetailResponseBodyModuleApplicant& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

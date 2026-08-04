// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEFINANCETAXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEFINANCETAXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class OperateFinanceTaxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateFinanceTaxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FinanceTax, financeTax_);
      DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
      DARABONBA_PTR_TO_JSON(HId, HId_);
      DARABONBA_PTR_TO_JSON(SecondFinanceTax, secondFinanceTax_);
      DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
      DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
      DARABONBA_PTR_TO_JSON(financeTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
    };
    friend void from_json(const Darabonba::Json& j, OperateFinanceTaxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FinanceTax, financeTax_);
      DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
      DARABONBA_PTR_FROM_JSON(HId, HId_);
      DARABONBA_PTR_FROM_JSON(SecondFinanceTax, secondFinanceTax_);
      DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
      DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
      DARABONBA_PTR_FROM_JSON(financeTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
    };
    OperateFinanceTaxRequest() = default ;
    OperateFinanceTaxRequest(const OperateFinanceTaxRequest &) = default ;
    OperateFinanceTaxRequest(OperateFinanceTaxRequest &&) = default ;
    OperateFinanceTaxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateFinanceTaxRequest() = default ;
    OperateFinanceTaxRequest& operator=(const OperateFinanceTaxRequest &) = default ;
    OperateFinanceTaxRequest& operator=(OperateFinanceTaxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->financeTax_ == nullptr
        && this->financeTaxCertificateImgName_ == nullptr && this->HId_ == nullptr && this->secondFinanceTax_ == nullptr && this->secondFinanceTaxCertificateImgName_ == nullptr && this->secondFinanceTaxCertificateImgUrl_ == nullptr
        && this->financeTaxCertificateImgUrl_ == nullptr; };
    // financeTax Field Functions 
    bool hasFinanceTax() const { return this->financeTax_ != nullptr;};
    void deleteFinanceTax() { this->financeTax_ = nullptr;};
    inline string getFinanceTax() const { DARABONBA_PTR_GET_DEFAULT(financeTax_, "") };
    inline OperateFinanceTaxRequest& setFinanceTax(string financeTax) { DARABONBA_PTR_SET_VALUE(financeTax_, financeTax) };


    // financeTaxCertificateImgName Field Functions 
    bool hasFinanceTaxCertificateImgName() const { return this->financeTaxCertificateImgName_ != nullptr;};
    void deleteFinanceTaxCertificateImgName() { this->financeTaxCertificateImgName_ = nullptr;};
    inline string getFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgName_, "") };
    inline OperateFinanceTaxRequest& setFinanceTaxCertificateImgName(string financeTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgName_, financeTaxCertificateImgName) };


    // HId Field Functions 
    bool hasHId() const { return this->HId_ != nullptr;};
    void deleteHId() { this->HId_ = nullptr;};
    inline int64_t getHId() const { DARABONBA_PTR_GET_DEFAULT(HId_, 0L) };
    inline OperateFinanceTaxRequest& setHId(int64_t HId) { DARABONBA_PTR_SET_VALUE(HId_, HId) };


    // secondFinanceTax Field Functions 
    bool hasSecondFinanceTax() const { return this->secondFinanceTax_ != nullptr;};
    void deleteSecondFinanceTax() { this->secondFinanceTax_ = nullptr;};
    inline string getSecondFinanceTax() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTax_, "") };
    inline OperateFinanceTaxRequest& setSecondFinanceTax(string secondFinanceTax) { DARABONBA_PTR_SET_VALUE(secondFinanceTax_, secondFinanceTax) };


    // secondFinanceTaxCertificateImgName Field Functions 
    bool hasSecondFinanceTaxCertificateImgName() const { return this->secondFinanceTaxCertificateImgName_ != nullptr;};
    void deleteSecondFinanceTaxCertificateImgName() { this->secondFinanceTaxCertificateImgName_ = nullptr;};
    inline string getSecondFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgName_, "") };
    inline OperateFinanceTaxRequest& setSecondFinanceTaxCertificateImgName(string secondFinanceTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgName_, secondFinanceTaxCertificateImgName) };


    // secondFinanceTaxCertificateImgUrl Field Functions 
    bool hasSecondFinanceTaxCertificateImgUrl() const { return this->secondFinanceTaxCertificateImgUrl_ != nullptr;};
    void deleteSecondFinanceTaxCertificateImgUrl() { this->secondFinanceTaxCertificateImgUrl_ = nullptr;};
    inline string getSecondFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgUrl_, "") };
    inline OperateFinanceTaxRequest& setSecondFinanceTaxCertificateImgUrl(string secondFinanceTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgUrl_, secondFinanceTaxCertificateImgUrl) };


    // financeTaxCertificateImgUrl Field Functions 
    bool hasFinanceTaxCertificateImgUrl() const { return this->financeTaxCertificateImgUrl_ != nullptr;};
    void deleteFinanceTaxCertificateImgUrl() { this->financeTaxCertificateImgUrl_ = nullptr;};
    inline string getFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgUrl_, "") };
    inline OperateFinanceTaxRequest& setFinanceTaxCertificateImgUrl(string financeTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgUrl_, financeTaxCertificateImgUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> financeTax_ {};
    shared_ptr<string> financeTaxCertificateImgName_ {};
    // This parameter is required.
    shared_ptr<int64_t> HId_ {};
    shared_ptr<string> secondFinanceTax_ {};
    shared_ptr<string> secondFinanceTaxCertificateImgName_ {};
    shared_ptr<string> secondFinanceTaxCertificateImgUrl_ {};
    shared_ptr<string> financeTaxCertificateImgUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

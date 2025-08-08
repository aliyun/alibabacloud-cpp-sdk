// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINVOICEFORISVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINVOICEFORISVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class ModifyInvoiceForIsvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInvoiceForIsvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckNotice, checkNotice_);
      DARABONBA_PTR_TO_JSON(ElectronUrl, electronUrl_);
      DARABONBA_PTR_TO_JSON(InvoiceId, invoiceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInvoiceForIsvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckNotice, checkNotice_);
      DARABONBA_PTR_FROM_JSON(ElectronUrl, electronUrl_);
      DARABONBA_PTR_FROM_JSON(InvoiceId, invoiceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyInvoiceForIsvRequest() = default ;
    ModifyInvoiceForIsvRequest(const ModifyInvoiceForIsvRequest &) = default ;
    ModifyInvoiceForIsvRequest(ModifyInvoiceForIsvRequest &&) = default ;
    ModifyInvoiceForIsvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInvoiceForIsvRequest() = default ;
    ModifyInvoiceForIsvRequest& operator=(const ModifyInvoiceForIsvRequest &) = default ;
    ModifyInvoiceForIsvRequest& operator=(ModifyInvoiceForIsvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkNotice_ != nullptr
        && this->electronUrl_ != nullptr && this->invoiceId_ != nullptr && this->number_ != nullptr && this->operateType_ != nullptr && this->type_ != nullptr; };
    // checkNotice Field Functions 
    bool hasCheckNotice() const { return this->checkNotice_ != nullptr;};
    void deleteCheckNotice() { this->checkNotice_ = nullptr;};
    inline string checkNotice() const { DARABONBA_PTR_GET_DEFAULT(checkNotice_, "") };
    inline ModifyInvoiceForIsvRequest& setCheckNotice(string checkNotice) { DARABONBA_PTR_SET_VALUE(checkNotice_, checkNotice) };


    // electronUrl Field Functions 
    bool hasElectronUrl() const { return this->electronUrl_ != nullptr;};
    void deleteElectronUrl() { this->electronUrl_ = nullptr;};
    inline string electronUrl() const { DARABONBA_PTR_GET_DEFAULT(electronUrl_, "") };
    inline ModifyInvoiceForIsvRequest& setElectronUrl(string electronUrl) { DARABONBA_PTR_SET_VALUE(electronUrl_, electronUrl) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline ModifyInvoiceForIsvRequest& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ModifyInvoiceForIsvRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline int32_t operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, 0) };
    inline ModifyInvoiceForIsvRequest& setOperateType(int32_t operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ModifyInvoiceForIsvRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> checkNotice_ = nullptr;
    std::shared_ptr<string> electronUrl_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> operateType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

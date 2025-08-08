// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTRECEIPTUSERINFODTO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTRECEIPTUSERINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto& obj) { 
      DARABONBA_PTR_TO_JSON(TaxNumber, taxNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto& obj) { 
      DARABONBA_PTR_FROM_JSON(TaxNumber, taxNumber_);
    };
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto() = default ;
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto(const DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto &) = default ;
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto(DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto &&) = default ;
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto() = default ;
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto& operator=(const DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto &) = default ;
    DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto& operator=(DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taxNumber_ != nullptr; };
    // taxNumber Field Functions 
    bool hasTaxNumber() const { return this->taxNumber_ != nullptr;};
    void deleteTaxNumber() { this->taxNumber_ = nullptr;};
    inline string taxNumber() const { DARABONBA_PTR_GET_DEFAULT(taxNumber_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto& setTaxNumber(string taxNumber) { DARABONBA_PTR_SET_VALUE(taxNumber_, taxNumber) };


  protected:
    std::shared_ptr<string> taxNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

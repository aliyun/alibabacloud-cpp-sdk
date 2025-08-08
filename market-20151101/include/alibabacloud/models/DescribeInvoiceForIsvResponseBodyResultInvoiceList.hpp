// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTINVOICELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTINVOICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBodyResultInvoiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBodyResultInvoiceList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InvoiceAmount, invoiceAmount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBodyResultInvoiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InvoiceAmount, invoiceAmount_);
    };
    DescribeInvoiceForIsvResponseBodyResultInvoiceList() = default ;
    DescribeInvoiceForIsvResponseBodyResultInvoiceList(const DescribeInvoiceForIsvResponseBodyResultInvoiceList &) = default ;
    DescribeInvoiceForIsvResponseBodyResultInvoiceList(DescribeInvoiceForIsvResponseBodyResultInvoiceList &&) = default ;
    DescribeInvoiceForIsvResponseBodyResultInvoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBodyResultInvoiceList() = default ;
    DescribeInvoiceForIsvResponseBodyResultInvoiceList& operator=(const DescribeInvoiceForIsvResponseBodyResultInvoiceList &) = default ;
    DescribeInvoiceForIsvResponseBodyResultInvoiceList& operator=(DescribeInvoiceForIsvResponseBodyResultInvoiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->invoiceAmount_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultInvoiceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceAmount Field Functions 
    bool hasInvoiceAmount() const { return this->invoiceAmount_ != nullptr;};
    void deleteInvoiceAmount() { this->invoiceAmount_ = nullptr;};
    inline string invoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceAmount_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultInvoiceList& setInvoiceAmount(string invoiceAmount) { DARABONBA_PTR_SET_VALUE(invoiceAmount_, invoiceAmount) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInvoicingCustomerListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvoicingCustomerListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerInvoiceList, customerInvoiceList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvoicingCustomerListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerInvoiceList, customerInvoiceList_);
    };
    QueryInvoicingCustomerListResponseBodyData() = default ;
    QueryInvoicingCustomerListResponseBodyData(const QueryInvoicingCustomerListResponseBodyData &) = default ;
    QueryInvoicingCustomerListResponseBodyData(QueryInvoicingCustomerListResponseBodyData &&) = default ;
    QueryInvoicingCustomerListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvoicingCustomerListResponseBodyData() = default ;
    QueryInvoicingCustomerListResponseBodyData& operator=(const QueryInvoicingCustomerListResponseBodyData &) = default ;
    QueryInvoicingCustomerListResponseBodyData& operator=(QueryInvoicingCustomerListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerInvoiceList_ != nullptr; };
    // customerInvoiceList Field Functions 
    bool hasCustomerInvoiceList() const { return this->customerInvoiceList_ != nullptr;};
    void deleteCustomerInvoiceList() { this->customerInvoiceList_ = nullptr;};
    inline const Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList & customerInvoiceList() const { DARABONBA_PTR_GET_CONST(customerInvoiceList_, Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList) };
    inline Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList customerInvoiceList() { DARABONBA_PTR_GET(customerInvoiceList_, Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList) };
    inline QueryInvoicingCustomerListResponseBodyData& setCustomerInvoiceList(const Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList & customerInvoiceList) { DARABONBA_PTR_SET_VALUE(customerInvoiceList_, customerInvoiceList) };
    inline QueryInvoicingCustomerListResponseBodyData& setCustomerInvoiceList(Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList && customerInvoiceList) { DARABONBA_PTR_SET_RVALUE(customerInvoiceList_, customerInvoiceList) };


  protected:
    // The information about the invoice.
    std::shared_ptr<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList> customerInvoiceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

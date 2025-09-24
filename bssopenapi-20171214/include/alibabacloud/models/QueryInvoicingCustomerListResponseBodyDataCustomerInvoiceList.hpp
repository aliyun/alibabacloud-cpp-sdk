// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATACUSTOMERINVOICELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATACUSTOMERINVOICELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerInvoice, customerInvoice_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerInvoice, customerInvoice_);
    };
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList() = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList(const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList &) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList(QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList &&) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList() = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& operator=(const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList &) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& operator=(QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerInvoice_ != nullptr; };
    // customerInvoice Field Functions 
    bool hasCustomerInvoice() const { return this->customerInvoice_ != nullptr;};
    void deleteCustomerInvoice() { this->customerInvoice_ = nullptr;};
    inline const vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice> & customerInvoice() const { DARABONBA_PTR_GET_CONST(customerInvoice_, vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice>) };
    inline vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice> customerInvoice() { DARABONBA_PTR_GET(customerInvoice_, vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice>) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& setCustomerInvoice(const vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice> & customerInvoice) { DARABONBA_PTR_SET_VALUE(customerInvoice_, customerInvoice) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList& setCustomerInvoice(vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice> && customerInvoice) { DARABONBA_PTR_SET_RVALUE(customerInvoice_, customerInvoice) };


  protected:
    std::shared_ptr<vector<Models::QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice>> customerInvoice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

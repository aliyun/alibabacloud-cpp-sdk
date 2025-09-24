// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCustomerAddressListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerAddressListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerInvoiceAddressList, customerInvoiceAddressList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerAddressListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerInvoiceAddressList, customerInvoiceAddressList_);
    };
    QueryCustomerAddressListResponseBodyData() = default ;
    QueryCustomerAddressListResponseBodyData(const QueryCustomerAddressListResponseBodyData &) = default ;
    QueryCustomerAddressListResponseBodyData(QueryCustomerAddressListResponseBodyData &&) = default ;
    QueryCustomerAddressListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerAddressListResponseBodyData() = default ;
    QueryCustomerAddressListResponseBodyData& operator=(const QueryCustomerAddressListResponseBodyData &) = default ;
    QueryCustomerAddressListResponseBodyData& operator=(QueryCustomerAddressListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerInvoiceAddressList_ != nullptr; };
    // customerInvoiceAddressList Field Functions 
    bool hasCustomerInvoiceAddressList() const { return this->customerInvoiceAddressList_ != nullptr;};
    void deleteCustomerInvoiceAddressList() { this->customerInvoiceAddressList_ = nullptr;};
    inline const Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList & customerInvoiceAddressList() const { DARABONBA_PTR_GET_CONST(customerInvoiceAddressList_, Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList) };
    inline Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList customerInvoiceAddressList() { DARABONBA_PTR_GET(customerInvoiceAddressList_, Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList) };
    inline QueryCustomerAddressListResponseBodyData& setCustomerInvoiceAddressList(const Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList & customerInvoiceAddressList) { DARABONBA_PTR_SET_VALUE(customerInvoiceAddressList_, customerInvoiceAddressList) };
    inline QueryCustomerAddressListResponseBodyData& setCustomerInvoiceAddressList(Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList && customerInvoiceAddressList) { DARABONBA_PTR_SET_RVALUE(customerInvoiceAddressList_, customerInvoiceAddressList) };


  protected:
    // The details of addresses to which invoices are mailed.
    std::shared_ptr<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList> customerInvoiceAddressList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

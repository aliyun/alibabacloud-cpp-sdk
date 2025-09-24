// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATACUSTOMERINVOICEADDRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATACUSTOMERINVOICEADDRESSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerInvoiceAddress, customerInvoiceAddress_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerInvoiceAddress, customerInvoiceAddress_);
    };
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList() = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList(const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList &) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList(QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList &&) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList() = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& operator=(const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList &) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& operator=(QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerInvoiceAddress_ != nullptr; };
    // customerInvoiceAddress Field Functions 
    bool hasCustomerInvoiceAddress() const { return this->customerInvoiceAddress_ != nullptr;};
    void deleteCustomerInvoiceAddress() { this->customerInvoiceAddress_ = nullptr;};
    inline const vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress> & customerInvoiceAddress() const { DARABONBA_PTR_GET_CONST(customerInvoiceAddress_, vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress>) };
    inline vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress> customerInvoiceAddress() { DARABONBA_PTR_GET(customerInvoiceAddress_, vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress>) };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& setCustomerInvoiceAddress(const vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress> & customerInvoiceAddress) { DARABONBA_PTR_SET_VALUE(customerInvoiceAddress_, customerInvoiceAddress) };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList& setCustomerInvoiceAddress(vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress> && customerInvoiceAddress) { DARABONBA_PTR_SET_RVALUE(customerInvoiceAddress_, customerInvoiceAddress) };


  protected:
    std::shared_ptr<vector<Models::QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress>> customerInvoiceAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

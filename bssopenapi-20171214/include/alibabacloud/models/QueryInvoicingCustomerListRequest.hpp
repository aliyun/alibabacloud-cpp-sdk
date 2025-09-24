// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInvoicingCustomerListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvoicingCustomerListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvoicingCustomerListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    QueryInvoicingCustomerListRequest() = default ;
    QueryInvoicingCustomerListRequest(const QueryInvoicingCustomerListRequest &) = default ;
    QueryInvoicingCustomerListRequest(QueryInvoicingCustomerListRequest &&) = default ;
    QueryInvoicingCustomerListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvoicingCustomerListRequest() = default ;
    QueryInvoicingCustomerListRequest& operator=(const QueryInvoicingCustomerListRequest &) = default ;
    QueryInvoicingCustomerListRequest& operator=(QueryInvoicingCustomerListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryInvoicingCustomerListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

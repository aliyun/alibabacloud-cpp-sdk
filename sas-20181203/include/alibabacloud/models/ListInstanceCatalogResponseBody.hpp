// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceCatalogResponseBodyVendors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ListInstanceCatalogResponseBody() = default ;
    ListInstanceCatalogResponseBody(const ListInstanceCatalogResponseBody &) = default ;
    ListInstanceCatalogResponseBody(ListInstanceCatalogResponseBody &&) = default ;
    ListInstanceCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogResponseBody() = default ;
    ListInstanceCatalogResponseBody& operator=(const ListInstanceCatalogResponseBody &) = default ;
    ListInstanceCatalogResponseBody& operator=(ListInstanceCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vendors_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<ListInstanceCatalogResponseBodyVendors> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<ListInstanceCatalogResponseBodyVendors>) };
    inline vector<ListInstanceCatalogResponseBodyVendors> vendors() { DARABONBA_PTR_GET(vendors_, vector<ListInstanceCatalogResponseBodyVendors>) };
    inline ListInstanceCatalogResponseBody& setVendors(const vector<ListInstanceCatalogResponseBodyVendors> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ListInstanceCatalogResponseBody& setVendors(vector<ListInstanceCatalogResponseBodyVendors> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The asset types by service provider.
    std::shared_ptr<vector<ListInstanceCatalogResponseBodyVendors>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

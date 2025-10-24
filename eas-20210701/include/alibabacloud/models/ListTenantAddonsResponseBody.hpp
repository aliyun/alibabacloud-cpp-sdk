// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTenantAddonsResponseBodyAddons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListTenantAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTenantAddonsResponseBody() = default ;
    ListTenantAddonsResponseBody(const ListTenantAddonsResponseBody &) = default ;
    ListTenantAddonsResponseBody(ListTenantAddonsResponseBody &&) = default ;
    ListTenantAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantAddonsResponseBody() = default ;
    ListTenantAddonsResponseBody& operator=(const ListTenantAddonsResponseBody &) = default ;
    ListTenantAddonsResponseBody& operator=(ListTenantAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addons_ == nullptr
        && return this->requestId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListTenantAddonsResponseBodyAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListTenantAddonsResponseBodyAddons>) };
    inline vector<ListTenantAddonsResponseBodyAddons> addons() { DARABONBA_PTR_GET(addons_, vector<ListTenantAddonsResponseBodyAddons>) };
    inline ListTenantAddonsResponseBody& setAddons(const vector<ListTenantAddonsResponseBodyAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListTenantAddonsResponseBody& setAddons(vector<ListTenantAddonsResponseBodyAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantAddonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the plug-in.
    std::shared_ptr<vector<ListTenantAddonsResponseBodyAddons>> addons_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif

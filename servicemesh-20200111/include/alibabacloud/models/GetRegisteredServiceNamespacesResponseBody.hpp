// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICENAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICENAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRegisteredServiceNamespacesResponseBody() = default ;
    GetRegisteredServiceNamespacesResponseBody(const GetRegisteredServiceNamespacesResponseBody &) = default ;
    GetRegisteredServiceNamespacesResponseBody(GetRegisteredServiceNamespacesResponseBody &&) = default ;
    GetRegisteredServiceNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceNamespacesResponseBody() = default ;
    GetRegisteredServiceNamespacesResponseBody& operator=(const GetRegisteredServiceNamespacesResponseBody &) = default ;
    GetRegisteredServiceNamespacesResponseBody& operator=(GetRegisteredServiceNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaces_ == nullptr
        && return this->requestId_ == nullptr; };
    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline GetRegisteredServiceNamespacesResponseBody& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline GetRegisteredServiceNamespacesResponseBody& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegisteredServiceNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the queried namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif

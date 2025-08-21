// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListOIDCProvidersResponseBodyOIDCProviders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListOIDCProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOIDCProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(OIDCProviders, OIDCProviders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOIDCProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(OIDCProviders, OIDCProviders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOIDCProvidersResponseBody() = default ;
    ListOIDCProvidersResponseBody(const ListOIDCProvidersResponseBody &) = default ;
    ListOIDCProvidersResponseBody(ListOIDCProvidersResponseBody &&) = default ;
    ListOIDCProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOIDCProvidersResponseBody() = default ;
    ListOIDCProvidersResponseBody& operator=(const ListOIDCProvidersResponseBody &) = default ;
    ListOIDCProvidersResponseBody& operator=(ListOIDCProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTruncated_ != nullptr
        && this->marker_ != nullptr && this->OIDCProviders_ != nullptr && this->requestId_ != nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListOIDCProvidersResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListOIDCProvidersResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // OIDCProviders Field Functions 
    bool hasOIDCProviders() const { return this->OIDCProviders_ != nullptr;};
    void deleteOIDCProviders() { this->OIDCProviders_ = nullptr;};
    inline const ListOIDCProvidersResponseBodyOIDCProviders & OIDCProviders() const { DARABONBA_PTR_GET_CONST(OIDCProviders_, ListOIDCProvidersResponseBodyOIDCProviders) };
    inline ListOIDCProvidersResponseBodyOIDCProviders OIDCProviders() { DARABONBA_PTR_GET(OIDCProviders_, ListOIDCProvidersResponseBodyOIDCProviders) };
    inline ListOIDCProvidersResponseBody& setOIDCProviders(const ListOIDCProvidersResponseBodyOIDCProviders & OIDCProviders) { DARABONBA_PTR_SET_VALUE(OIDCProviders_, OIDCProviders) };
    inline ListOIDCProvidersResponseBody& setOIDCProviders(ListOIDCProvidersResponseBodyOIDCProviders && OIDCProviders) { DARABONBA_PTR_SET_RVALUE(OIDCProviders_, OIDCProviders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOIDCProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    std::shared_ptr<string> marker_ = nullptr;
    // The information about the OIDC IdP.
    std::shared_ptr<ListOIDCProvidersResponseBodyOIDCProviders> OIDCProviders_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

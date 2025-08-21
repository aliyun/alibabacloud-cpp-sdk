// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSAMLProvidersResponseBodySAMLProviders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListSAMLProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSAMLProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLProviders, SAMLProviders_);
    };
    friend void from_json(const Darabonba::Json& j, ListSAMLProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLProviders, SAMLProviders_);
    };
    ListSAMLProvidersResponseBody() = default ;
    ListSAMLProvidersResponseBody(const ListSAMLProvidersResponseBody &) = default ;
    ListSAMLProvidersResponseBody(ListSAMLProvidersResponseBody &&) = default ;
    ListSAMLProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSAMLProvidersResponseBody() = default ;
    ListSAMLProvidersResponseBody& operator=(const ListSAMLProvidersResponseBody &) = default ;
    ListSAMLProvidersResponseBody& operator=(ListSAMLProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTruncated_ != nullptr
        && this->marker_ != nullptr && this->requestId_ != nullptr && this->SAMLProviders_ != nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListSAMLProvidersResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListSAMLProvidersResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSAMLProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLProviders Field Functions 
    bool hasSAMLProviders() const { return this->SAMLProviders_ != nullptr;};
    void deleteSAMLProviders() { this->SAMLProviders_ = nullptr;};
    inline const ListSAMLProvidersResponseBodySAMLProviders & SAMLProviders() const { DARABONBA_PTR_GET_CONST(SAMLProviders_, ListSAMLProvidersResponseBodySAMLProviders) };
    inline ListSAMLProvidersResponseBodySAMLProviders SAMLProviders() { DARABONBA_PTR_GET(SAMLProviders_, ListSAMLProvidersResponseBodySAMLProviders) };
    inline ListSAMLProvidersResponseBody& setSAMLProviders(const ListSAMLProvidersResponseBodySAMLProviders & SAMLProviders) { DARABONBA_PTR_SET_VALUE(SAMLProviders_, SAMLProviders) };
    inline ListSAMLProvidersResponseBody& setSAMLProviders(ListSAMLProvidersResponseBodySAMLProviders && SAMLProviders) { DARABONBA_PTR_SET_RVALUE(SAMLProviders_, SAMLProviders) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    std::shared_ptr<string> marker_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about IdPs.
    std::shared_ptr<ListSAMLProvidersResponseBodySAMLProviders> SAMLProviders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

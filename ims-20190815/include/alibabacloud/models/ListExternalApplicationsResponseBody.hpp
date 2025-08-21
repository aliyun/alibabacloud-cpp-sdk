// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExternalApplicationsResponseBodyExternalApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListExternalApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalApplications, externalApplications_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalApplications, externalApplications_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExternalApplicationsResponseBody() = default ;
    ListExternalApplicationsResponseBody(const ListExternalApplicationsResponseBody &) = default ;
    ListExternalApplicationsResponseBody(ListExternalApplicationsResponseBody &&) = default ;
    ListExternalApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalApplicationsResponseBody() = default ;
    ListExternalApplicationsResponseBody& operator=(const ListExternalApplicationsResponseBody &) = default ;
    ListExternalApplicationsResponseBody& operator=(ListExternalApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalApplications_ != nullptr
        && this->isTruncated_ != nullptr && this->marker_ != nullptr && this->requestId_ != nullptr; };
    // externalApplications Field Functions 
    bool hasExternalApplications() const { return this->externalApplications_ != nullptr;};
    void deleteExternalApplications() { this->externalApplications_ = nullptr;};
    inline const ListExternalApplicationsResponseBodyExternalApplications & externalApplications() const { DARABONBA_PTR_GET_CONST(externalApplications_, ListExternalApplicationsResponseBodyExternalApplications) };
    inline ListExternalApplicationsResponseBodyExternalApplications externalApplications() { DARABONBA_PTR_GET(externalApplications_, ListExternalApplicationsResponseBodyExternalApplications) };
    inline ListExternalApplicationsResponseBody& setExternalApplications(const ListExternalApplicationsResponseBodyExternalApplications & externalApplications) { DARABONBA_PTR_SET_VALUE(externalApplications_, externalApplications) };
    inline ListExternalApplicationsResponseBody& setExternalApplications(ListExternalApplicationsResponseBodyExternalApplications && externalApplications) { DARABONBA_PTR_SET_RVALUE(externalApplications_, externalApplications) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListExternalApplicationsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListExternalApplicationsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the external applications.
    std::shared_ptr<ListExternalApplicationsResponseBodyExternalApplications> externalApplications_ = nullptr;
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when `IsTruncated` is `true`.
    std::shared_ptr<string> marker_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

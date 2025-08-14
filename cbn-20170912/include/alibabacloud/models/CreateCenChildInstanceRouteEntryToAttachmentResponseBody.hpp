// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENCHILDINSTANCEROUTEENTRYTOATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECENCHILDINSTANCEROUTEENTRYTOATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenChildInstanceRouteEntryToAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenChildInstanceRouteEntryToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenChildInstanceRouteEntryToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody() = default ;
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody(const CreateCenChildInstanceRouteEntryToAttachmentResponseBody &) = default ;
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody(CreateCenChildInstanceRouteEntryToAttachmentResponseBody &&) = default ;
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenChildInstanceRouteEntryToAttachmentResponseBody() = default ;
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody& operator=(const CreateCenChildInstanceRouteEntryToAttachmentResponseBody &) = default ;
    CreateCenChildInstanceRouteEntryToAttachmentResponseBody& operator=(CreateCenChildInstanceRouteEntryToAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCenChildInstanceRouteEntryToAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

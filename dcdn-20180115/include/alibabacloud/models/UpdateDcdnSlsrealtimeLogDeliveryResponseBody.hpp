// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnSLSRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnSLSRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnSLSRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody(const UpdateDcdnSLSRealtimeLogDeliveryResponseBody &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody(UpdateDcdnSLSRealtimeLogDeliveryResponseBody &&) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnSLSRealtimeLogDeliveryResponseBody() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody& operator=(const UpdateDcdnSLSRealtimeLogDeliveryResponseBody &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBody& operator=(UpdateDcdnSLSRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent) };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent content() { DARABONBA_PTR_GET(content_, UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent) };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBody& setContent(const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBody& setContent(UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration results of the domain name.
    std::shared_ptr<UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

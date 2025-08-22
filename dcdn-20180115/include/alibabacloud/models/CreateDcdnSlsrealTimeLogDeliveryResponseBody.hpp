// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnSLSRealTimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSLSRealTimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSLSRealTimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDcdnSLSRealTimeLogDeliveryResponseBody() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(const CreateDcdnSLSRealTimeLogDeliveryResponseBody &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(CreateDcdnSLSRealTimeLogDeliveryResponseBody &&) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSLSRealTimeLogDeliveryResponseBody() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody& operator=(const CreateDcdnSLSRealTimeLogDeliveryResponseBody &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody& operator=(CreateDcdnSLSRealTimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent content() { DARABONBA_PTR_GET(content_, CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setContent(const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setContent(CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration results of the domain name.
    std::shared_ptr<CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssistantCapabilityResponseBodyCapabilityAssessment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(assistantDescription, assistantDescription_);
      DARABONBA_PTR_TO_JSON(canHandle, canHandle_);
      DARABONBA_PTR_TO_JSON(capabilityAssessment, capabilityAssessment_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(assistantDescription, assistantDescription_);
      DARABONBA_PTR_FROM_JSON(canHandle, canHandle_);
      DARABONBA_PTR_FROM_JSON(capabilityAssessment, capabilityAssessment_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAssistantCapabilityResponseBody() = default ;
    GetAssistantCapabilityResponseBody(const GetAssistantCapabilityResponseBody &) = default ;
    GetAssistantCapabilityResponseBody(GetAssistantCapabilityResponseBody &&) = default ;
    GetAssistantCapabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityResponseBody() = default ;
    GetAssistantCapabilityResponseBody& operator=(const GetAssistantCapabilityResponseBody &) = default ;
    GetAssistantCapabilityResponseBody& operator=(GetAssistantCapabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistantDescription_ == nullptr
        && return this->canHandle_ == nullptr && return this->capabilityAssessment_ == nullptr && return this->requestId_ == nullptr; };
    // assistantDescription Field Functions 
    bool hasAssistantDescription() const { return this->assistantDescription_ != nullptr;};
    void deleteAssistantDescription() { this->assistantDescription_ = nullptr;};
    inline string assistantDescription() const { DARABONBA_PTR_GET_DEFAULT(assistantDescription_, "") };
    inline GetAssistantCapabilityResponseBody& setAssistantDescription(string assistantDescription) { DARABONBA_PTR_SET_VALUE(assistantDescription_, assistantDescription) };


    // canHandle Field Functions 
    bool hasCanHandle() const { return this->canHandle_ != nullptr;};
    void deleteCanHandle() { this->canHandle_ = nullptr;};
    inline bool canHandle() const { DARABONBA_PTR_GET_DEFAULT(canHandle_, false) };
    inline GetAssistantCapabilityResponseBody& setCanHandle(bool canHandle) { DARABONBA_PTR_SET_VALUE(canHandle_, canHandle) };


    // capabilityAssessment Field Functions 
    bool hasCapabilityAssessment() const { return this->capabilityAssessment_ != nullptr;};
    void deleteCapabilityAssessment() { this->capabilityAssessment_ = nullptr;};
    inline const GetAssistantCapabilityResponseBodyCapabilityAssessment & capabilityAssessment() const { DARABONBA_PTR_GET_CONST(capabilityAssessment_, GetAssistantCapabilityResponseBodyCapabilityAssessment) };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessment capabilityAssessment() { DARABONBA_PTR_GET(capabilityAssessment_, GetAssistantCapabilityResponseBodyCapabilityAssessment) };
    inline GetAssistantCapabilityResponseBody& setCapabilityAssessment(const GetAssistantCapabilityResponseBodyCapabilityAssessment & capabilityAssessment) { DARABONBA_PTR_SET_VALUE(capabilityAssessment_, capabilityAssessment) };
    inline GetAssistantCapabilityResponseBody& setCapabilityAssessment(GetAssistantCapabilityResponseBodyCapabilityAssessment && capabilityAssessment) { DARABONBA_PTR_SET_RVALUE(capabilityAssessment_, capabilityAssessment) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssistantCapabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> assistantDescription_ = nullptr;
    std::shared_ptr<bool> canHandle_ = nullptr;
    std::shared_ptr<GetAssistantCapabilityResponseBodyCapabilityAssessment> capabilityAssessment_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

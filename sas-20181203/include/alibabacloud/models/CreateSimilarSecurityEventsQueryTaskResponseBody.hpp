// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSimilarSecurityEventsQueryTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSimilarSecurityEventsQueryTaskResponse, createSimilarSecurityEventsQueryTaskResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSimilarSecurityEventsQueryTaskResponse, createSimilarSecurityEventsQueryTaskResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSimilarSecurityEventsQueryTaskResponseBody() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(const CreateSimilarSecurityEventsQueryTaskResponseBody &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(CreateSimilarSecurityEventsQueryTaskResponseBody &&) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimilarSecurityEventsQueryTaskResponseBody() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody& operator=(const CreateSimilarSecurityEventsQueryTaskResponseBody &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody& operator=(CreateSimilarSecurityEventsQueryTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSimilarSecurityEventsQueryTaskResponse_ == nullptr
        && return this->requestId_ == nullptr; };
    // createSimilarSecurityEventsQueryTaskResponse Field Functions 
    bool hasCreateSimilarSecurityEventsQueryTaskResponse() const { return this->createSimilarSecurityEventsQueryTaskResponse_ != nullptr;};
    void deleteCreateSimilarSecurityEventsQueryTaskResponse() { this->createSimilarSecurityEventsQueryTaskResponse_ = nullptr;};
    inline const CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse & createSimilarSecurityEventsQueryTaskResponse() const { DARABONBA_PTR_GET_CONST(createSimilarSecurityEventsQueryTaskResponse_, CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse createSimilarSecurityEventsQueryTaskResponse() { DARABONBA_PTR_GET(createSimilarSecurityEventsQueryTaskResponse_, CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setCreateSimilarSecurityEventsQueryTaskResponse(const CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse & createSimilarSecurityEventsQueryTaskResponse) { DARABONBA_PTR_SET_VALUE(createSimilarSecurityEventsQueryTaskResponse_, createSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setCreateSimilarSecurityEventsQueryTaskResponse(CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse && createSimilarSecurityEventsQueryTaskResponse) { DARABONBA_PTR_SET_RVALUE(createSimilarSecurityEventsQueryTaskResponse_, createSimilarSecurityEventsQueryTaskResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the task that queries alert events of the same alert type.
    std::shared_ptr<CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse> createSimilarSecurityEventsQueryTaskResponse_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

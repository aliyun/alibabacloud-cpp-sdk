// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody(CreateApplicationResponseBody &&) = default ;
    CreateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody& operator=(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody& operator=(CreateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

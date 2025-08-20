// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPrivateAccessApplicationResponseBodyApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPrivateAccessApplicationResponseBody() = default ;
    GetPrivateAccessApplicationResponseBody(const GetPrivateAccessApplicationResponseBody &) = default ;
    GetPrivateAccessApplicationResponseBody(GetPrivateAccessApplicationResponseBody &&) = default ;
    GetPrivateAccessApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessApplicationResponseBody() = default ;
    GetPrivateAccessApplicationResponseBody& operator=(const GetPrivateAccessApplicationResponseBody &) = default ;
    GetPrivateAccessApplicationResponseBody& operator=(GetPrivateAccessApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->application_ != nullptr
        && this->requestId_ != nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetPrivateAccessApplicationResponseBodyApplication & application() const { DARABONBA_PTR_GET_CONST(application_, GetPrivateAccessApplicationResponseBodyApplication) };
    inline GetPrivateAccessApplicationResponseBodyApplication application() { DARABONBA_PTR_GET(application_, GetPrivateAccessApplicationResponseBodyApplication) };
    inline GetPrivateAccessApplicationResponseBody& setApplication(const GetPrivateAccessApplicationResponseBodyApplication & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetPrivateAccessApplicationResponseBody& setApplication(GetPrivateAccessApplicationResponseBodyApplication && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrivateAccessApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The office application.
    std::shared_ptr<GetPrivateAccessApplicationResponseBodyApplication> application_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

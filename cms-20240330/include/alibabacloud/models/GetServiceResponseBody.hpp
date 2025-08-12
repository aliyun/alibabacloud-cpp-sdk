// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceResponseBodyService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    GetServiceResponseBody() = default ;
    GetServiceResponseBody(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody(GetServiceResponseBody &&) = default ;
    GetServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBody() = default ;
    GetServiceResponseBody& operator=(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody& operator=(GetServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->service_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const GetServiceResponseBodyService & service() const { DARABONBA_PTR_GET_CONST(service_, GetServiceResponseBodyService) };
    inline GetServiceResponseBodyService service() { DARABONBA_PTR_GET(service_, GetServiceResponseBodyService) };
    inline GetServiceResponseBody& setService(const GetServiceResponseBodyService & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline GetServiceResponseBody& setService(GetServiceResponseBodyService && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetServiceResponseBodyService> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

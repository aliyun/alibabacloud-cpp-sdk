// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALDATASERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALDATASERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateExternalDataServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalDataServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalDataServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    CreateExternalDataServiceResponseBody() = default ;
    CreateExternalDataServiceResponseBody(const CreateExternalDataServiceResponseBody &) = default ;
    CreateExternalDataServiceResponseBody(CreateExternalDataServiceResponseBody &&) = default ;
    CreateExternalDataServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalDataServiceResponseBody() = default ;
    CreateExternalDataServiceResponseBody& operator=(const CreateExternalDataServiceResponseBody &) = default ;
    CreateExternalDataServiceResponseBody& operator=(CreateExternalDataServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->serviceId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExternalDataServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int32_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0) };
    inline CreateExternalDataServiceResponseBody& setServiceId(int32_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Service ID.
    std::shared_ptr<int32_t> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

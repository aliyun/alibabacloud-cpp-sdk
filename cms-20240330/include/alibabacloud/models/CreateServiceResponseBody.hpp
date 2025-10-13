// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    CreateServiceResponseBody() = default ;
    CreateServiceResponseBody(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody(CreateServiceResponseBody &&) = default ;
    CreateServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceResponseBody() = default ;
    CreateServiceResponseBody& operator=(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody& operator=(CreateServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pid_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceId_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CreateServiceResponseBody& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    std::shared_ptr<string> pid_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

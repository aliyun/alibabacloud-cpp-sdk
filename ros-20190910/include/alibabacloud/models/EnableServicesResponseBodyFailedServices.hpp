// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODYFAILEDSERVICES_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODYFAILEDSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServicesResponseBodyFailedServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServicesResponseBodyFailedServices& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServicesResponseBodyFailedServices& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    EnableServicesResponseBodyFailedServices() = default ;
    EnableServicesResponseBodyFailedServices(const EnableServicesResponseBodyFailedServices &) = default ;
    EnableServicesResponseBodyFailedServices(EnableServicesResponseBodyFailedServices &&) = default ;
    EnableServicesResponseBodyFailedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServicesResponseBodyFailedServices() = default ;
    EnableServicesResponseBodyFailedServices& operator=(const EnableServicesResponseBodyFailedServices &) = default ;
    EnableServicesResponseBodyFailedServices& operator=(EnableServicesResponseBodyFailedServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->serviceName_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnableServicesResponseBodyFailedServices& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnableServicesResponseBodyFailedServices& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline EnableServicesResponseBodyFailedServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

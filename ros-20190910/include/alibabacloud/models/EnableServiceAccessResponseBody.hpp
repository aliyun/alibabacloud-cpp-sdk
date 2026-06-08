// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICEACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICEACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServiceAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServiceAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceAccessInfo, serviceAccessInfo_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServiceAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessInfo, serviceAccessInfo_);
    };
    EnableServiceAccessResponseBody() = default ;
    EnableServiceAccessResponseBody(const EnableServiceAccessResponseBody &) = default ;
    EnableServiceAccessResponseBody(EnableServiceAccessResponseBody &&) = default ;
    EnableServiceAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServiceAccessResponseBody() = default ;
    EnableServiceAccessResponseBody& operator=(const EnableServiceAccessResponseBody &) = default ;
    EnableServiceAccessResponseBody& operator=(EnableServiceAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceAccessInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceAccessInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceAccessInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ServiceAccessInfo() = default ;
      ServiceAccessInfo(const ServiceAccessInfo &) = default ;
      ServiceAccessInfo(ServiceAccessInfo &&) = default ;
      ServiceAccessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceAccessInfo() = default ;
      ServiceAccessInfo& operator=(const ServiceAccessInfo &) = default ;
      ServiceAccessInfo& operator=(ServiceAccessInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceAccessInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceAccessInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableServiceAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceAccessInfo Field Functions 
    bool hasServiceAccessInfo() const { return this->serviceAccessInfo_ != nullptr;};
    void deleteServiceAccessInfo() { this->serviceAccessInfo_ = nullptr;};
    inline const EnableServiceAccessResponseBody::ServiceAccessInfo & getServiceAccessInfo() const { DARABONBA_PTR_GET_CONST(serviceAccessInfo_, EnableServiceAccessResponseBody::ServiceAccessInfo) };
    inline EnableServiceAccessResponseBody::ServiceAccessInfo getServiceAccessInfo() { DARABONBA_PTR_GET(serviceAccessInfo_, EnableServiceAccessResponseBody::ServiceAccessInfo) };
    inline EnableServiceAccessResponseBody& setServiceAccessInfo(const EnableServiceAccessResponseBody::ServiceAccessInfo & serviceAccessInfo) { DARABONBA_PTR_SET_VALUE(serviceAccessInfo_, serviceAccessInfo) };
    inline EnableServiceAccessResponseBody& setServiceAccessInfo(EnableServiceAccessResponseBody::ServiceAccessInfo && serviceAccessInfo) { DARABONBA_PTR_SET_RVALUE(serviceAccessInfo_, serviceAccessInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<EnableServiceAccessResponseBody::ServiceAccessInfo> serviceAccessInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

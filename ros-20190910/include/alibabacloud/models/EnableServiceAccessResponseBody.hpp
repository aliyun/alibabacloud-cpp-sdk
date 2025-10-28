// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICEACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICEACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnableServiceAccessResponseBodyServiceAccessInfo.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceAccessInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableServiceAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceAccessInfo Field Functions 
    bool hasServiceAccessInfo() const { return this->serviceAccessInfo_ != nullptr;};
    void deleteServiceAccessInfo() { this->serviceAccessInfo_ = nullptr;};
    inline const EnableServiceAccessResponseBodyServiceAccessInfo & serviceAccessInfo() const { DARABONBA_PTR_GET_CONST(serviceAccessInfo_, EnableServiceAccessResponseBodyServiceAccessInfo) };
    inline EnableServiceAccessResponseBodyServiceAccessInfo serviceAccessInfo() { DARABONBA_PTR_GET(serviceAccessInfo_, EnableServiceAccessResponseBodyServiceAccessInfo) };
    inline EnableServiceAccessResponseBody& setServiceAccessInfo(const EnableServiceAccessResponseBodyServiceAccessInfo & serviceAccessInfo) { DARABONBA_PTR_SET_VALUE(serviceAccessInfo_, serviceAccessInfo) };
    inline EnableServiceAccessResponseBody& setServiceAccessInfo(EnableServiceAccessResponseBodyServiceAccessInfo && serviceAccessInfo) { DARABONBA_PTR_SET_RVALUE(serviceAccessInfo_, serviceAccessInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<EnableServiceAccessResponseBodyServiceAccessInfo> serviceAccessInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

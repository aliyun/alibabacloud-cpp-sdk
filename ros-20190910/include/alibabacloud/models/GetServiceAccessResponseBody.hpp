// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceAccessResponseBodyServiceAccessInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetServiceAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceAccessInfo, serviceAccessInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessInfo, serviceAccessInfo_);
    };
    GetServiceAccessResponseBody() = default ;
    GetServiceAccessResponseBody(const GetServiceAccessResponseBody &) = default ;
    GetServiceAccessResponseBody(GetServiceAccessResponseBody &&) = default ;
    GetServiceAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceAccessResponseBody() = default ;
    GetServiceAccessResponseBody& operator=(const GetServiceAccessResponseBody &) = default ;
    GetServiceAccessResponseBody& operator=(GetServiceAccessResponseBody &&) = default ;
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
    inline GetServiceAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceAccessInfo Field Functions 
    bool hasServiceAccessInfo() const { return this->serviceAccessInfo_ != nullptr;};
    void deleteServiceAccessInfo() { this->serviceAccessInfo_ = nullptr;};
    inline const GetServiceAccessResponseBodyServiceAccessInfo & serviceAccessInfo() const { DARABONBA_PTR_GET_CONST(serviceAccessInfo_, GetServiceAccessResponseBodyServiceAccessInfo) };
    inline GetServiceAccessResponseBodyServiceAccessInfo serviceAccessInfo() { DARABONBA_PTR_GET(serviceAccessInfo_, GetServiceAccessResponseBodyServiceAccessInfo) };
    inline GetServiceAccessResponseBody& setServiceAccessInfo(const GetServiceAccessResponseBodyServiceAccessInfo & serviceAccessInfo) { DARABONBA_PTR_SET_VALUE(serviceAccessInfo_, serviceAccessInfo) };
    inline GetServiceAccessResponseBody& setServiceAccessInfo(GetServiceAccessResponseBodyServiceAccessInfo && serviceAccessInfo) { DARABONBA_PTR_SET_RVALUE(serviceAccessInfo_, serviceAccessInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetServiceAccessResponseBodyServiceAccessInfo> serviceAccessInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

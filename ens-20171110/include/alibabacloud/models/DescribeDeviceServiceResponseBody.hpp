// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyAppMetaData.hpp>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyAppStatus.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceDetailInfos.hpp>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppMetaData, appMetaData_);
      DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDetailInfos, resourceDetailInfos_);
      DARABONBA_PTR_TO_JSON(ResourceInfos, resourceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppMetaData, appMetaData_);
      DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDetailInfos, resourceDetailInfos_);
      DARABONBA_PTR_FROM_JSON(ResourceInfos, resourceInfos_);
    };
    DescribeDeviceServiceResponseBody() = default ;
    DescribeDeviceServiceResponseBody(const DescribeDeviceServiceResponseBody &) = default ;
    DescribeDeviceServiceResponseBody(DescribeDeviceServiceResponseBody &&) = default ;
    DescribeDeviceServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBody() = default ;
    DescribeDeviceServiceResponseBody& operator=(const DescribeDeviceServiceResponseBody &) = default ;
    DescribeDeviceServiceResponseBody& operator=(DescribeDeviceServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appMetaData_ != nullptr
        && this->appStatus_ != nullptr && this->requestId_ != nullptr && this->resourceDetailInfos_ != nullptr && this->resourceInfos_ != nullptr; };
    // appMetaData Field Functions 
    bool hasAppMetaData() const { return this->appMetaData_ != nullptr;};
    void deleteAppMetaData() { this->appMetaData_ = nullptr;};
    inline const DescribeDeviceServiceResponseBodyAppMetaData & appMetaData() const { DARABONBA_PTR_GET_CONST(appMetaData_, DescribeDeviceServiceResponseBodyAppMetaData) };
    inline DescribeDeviceServiceResponseBodyAppMetaData appMetaData() { DARABONBA_PTR_GET(appMetaData_, DescribeDeviceServiceResponseBodyAppMetaData) };
    inline DescribeDeviceServiceResponseBody& setAppMetaData(const DescribeDeviceServiceResponseBodyAppMetaData & appMetaData) { DARABONBA_PTR_SET_VALUE(appMetaData_, appMetaData) };
    inline DescribeDeviceServiceResponseBody& setAppMetaData(DescribeDeviceServiceResponseBodyAppMetaData && appMetaData) { DARABONBA_PTR_SET_RVALUE(appMetaData_, appMetaData) };


    // appStatus Field Functions 
    bool hasAppStatus() const { return this->appStatus_ != nullptr;};
    void deleteAppStatus() { this->appStatus_ = nullptr;};
    inline const DescribeDeviceServiceResponseBodyAppStatus & appStatus() const { DARABONBA_PTR_GET_CONST(appStatus_, DescribeDeviceServiceResponseBodyAppStatus) };
    inline DescribeDeviceServiceResponseBodyAppStatus appStatus() { DARABONBA_PTR_GET(appStatus_, DescribeDeviceServiceResponseBodyAppStatus) };
    inline DescribeDeviceServiceResponseBody& setAppStatus(const DescribeDeviceServiceResponseBodyAppStatus & appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };
    inline DescribeDeviceServiceResponseBody& setAppStatus(DescribeDeviceServiceResponseBodyAppStatus && appStatus) { DARABONBA_PTR_SET_RVALUE(appStatus_, appStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDetailInfos Field Functions 
    bool hasResourceDetailInfos() const { return this->resourceDetailInfos_ != nullptr;};
    void deleteResourceDetailInfos() { this->resourceDetailInfos_ = nullptr;};
    inline const vector<DescribeDeviceServiceResponseBodyResourceDetailInfos> & resourceDetailInfos() const { DARABONBA_PTR_GET_CONST(resourceDetailInfos_, vector<DescribeDeviceServiceResponseBodyResourceDetailInfos>) };
    inline vector<DescribeDeviceServiceResponseBodyResourceDetailInfos> resourceDetailInfos() { DARABONBA_PTR_GET(resourceDetailInfos_, vector<DescribeDeviceServiceResponseBodyResourceDetailInfos>) };
    inline DescribeDeviceServiceResponseBody& setResourceDetailInfos(const vector<DescribeDeviceServiceResponseBodyResourceDetailInfos> & resourceDetailInfos) { DARABONBA_PTR_SET_VALUE(resourceDetailInfos_, resourceDetailInfos) };
    inline DescribeDeviceServiceResponseBody& setResourceDetailInfos(vector<DescribeDeviceServiceResponseBodyResourceDetailInfos> && resourceDetailInfos) { DARABONBA_PTR_SET_RVALUE(resourceDetailInfos_, resourceDetailInfos) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<DescribeDeviceServiceResponseBodyResourceInfos> & resourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<DescribeDeviceServiceResponseBodyResourceInfos>) };
    inline vector<DescribeDeviceServiceResponseBodyResourceInfos> resourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<DescribeDeviceServiceResponseBodyResourceInfos>) };
    inline DescribeDeviceServiceResponseBody& setResourceInfos(const vector<DescribeDeviceServiceResponseBodyResourceInfos> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline DescribeDeviceServiceResponseBody& setResourceInfos(vector<DescribeDeviceServiceResponseBodyResourceInfos> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


  protected:
    // The basic properties of the application.
    std::shared_ptr<DescribeDeviceServiceResponseBodyAppMetaData> appMetaData_ = nullptr;
    // The status information of the application.
    std::shared_ptr<DescribeDeviceServiceResponseBodyAppStatus> appStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the devices.
    std::shared_ptr<vector<DescribeDeviceServiceResponseBodyResourceDetailInfos>> resourceDetailInfos_ = nullptr;
    // The information about the instances.
    std::shared_ptr<vector<DescribeDeviceServiceResponseBodyResourceInfos>> resourceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

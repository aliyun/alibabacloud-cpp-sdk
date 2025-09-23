// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OBJECTDET20191230_HPP_
#define ALIBABACLOUD_OBJECTDET20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Objectdet20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Objectdet20191230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary IPC目标检测
       *
       * @param request DetectIPCObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectIPCObjectResponse
       */
      Models::DetectIPCObjectResponse detectIPCObjectWithOptions(const Models::DetectIPCObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IPC目标检测
       *
       * @param request DetectIPCObjectRequest
       * @return DetectIPCObjectResponse
       */
      Models::DetectIPCObjectResponse detectIPCObject(const Models::DetectIPCObjectRequest &request);

      Models::DetectIPCObjectResponse detectIPCObjectAdvance(const Models::DetectIPCObjectAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 猫鼠识别
       *
       * @param request DetectKitchenAnimalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectKitchenAnimalsResponse
       */
      Models::DetectKitchenAnimalsResponse detectKitchenAnimalsWithOptions(const Models::DetectKitchenAnimalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 猫鼠识别
       *
       * @param request DetectKitchenAnimalsRequest
       * @return DetectKitchenAnimalsResponse
       */
      Models::DetectKitchenAnimalsResponse detectKitchenAnimals(const Models::DetectKitchenAnimalsRequest &request);

      Models::DetectKitchenAnimalsResponse detectKitchenAnimalsAdvance(const Models::DetectKitchenAnimalsAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectMainBodyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectMainBodyResponse
       */
      Models::DetectMainBodyResponse detectMainBodyWithOptions(const Models::DetectMainBodyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectMainBodyRequest
       * @return DetectMainBodyResponse
       */
      Models::DetectMainBodyResponse detectMainBody(const Models::DetectMainBodyRequest &request);

      Models::DetectMainBodyResponse detectMainBodyAdvance(const Models::DetectMainBodyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectObjectResponse
       */
      Models::DetectObjectResponse detectObjectWithOptions(const Models::DetectObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectObjectRequest
       * @return DetectObjectResponse
       */
      Models::DetectObjectResponse detectObject(const Models::DetectObjectRequest &request);

      Models::DetectObjectResponse detectObjectAdvance(const Models::DetectObjectAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 车辆拥堵检测
       *
       * @param tmpReq DetectVehicleICongestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectVehicleICongestionResponse
       */
      Models::DetectVehicleICongestionResponse detectVehicleICongestionWithOptions(const Models::DetectVehicleICongestionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 车辆拥堵检测
       *
       * @param request DetectVehicleICongestionRequest
       * @return DetectVehicleICongestionResponse
       */
      Models::DetectVehicleICongestionResponse detectVehicleICongestion(const Models::DetectVehicleICongestionRequest &request);

      Models::DetectVehicleICongestionResponse detectVehicleICongestionAdvance(const Models::DetectVehicleICongestionAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 车辆违停检测
       *
       * @param tmpReq DetectVehicleIllegalParkingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectVehicleIllegalParkingResponse
       */
      Models::DetectVehicleIllegalParkingResponse detectVehicleIllegalParkingWithOptions(const Models::DetectVehicleIllegalParkingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 车辆违停检测
       *
       * @param request DetectVehicleIllegalParkingRequest
       * @return DetectVehicleIllegalParkingResponse
       */
      Models::DetectVehicleIllegalParkingResponse detectVehicleIllegalParking(const Models::DetectVehicleIllegalParkingRequest &request);

      Models::DetectVehicleIllegalParkingResponse detectVehicleIllegalParkingAdvance(const Models::DetectVehicleIllegalParkingAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IPC视频文件目标检测
       *
       * @param request DetectVideoIPCObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectVideoIPCObjectResponse
       */
      Models::DetectVideoIPCObjectResponse detectVideoIPCObjectWithOptions(const Models::DetectVideoIPCObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IPC视频文件目标检测
       *
       * @param request DetectVideoIPCObjectRequest
       * @return DetectVideoIPCObjectResponse
       */
      Models::DetectVideoIPCObjectResponse detectVideoIPCObject(const Models::DetectVideoIPCObjectRequest &request);

      Models::DetectVideoIPCObjectResponse detectVideoIPCObjectAdvance(const Models::DetectVideoIPCObjectAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectWhiteBaseImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectWhiteBaseImageResponse
       */
      Models::DetectWhiteBaseImageResponse detectWhiteBaseImageWithOptions(const Models::DetectWhiteBaseImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectWhiteBaseImageRequest
       * @return DetectWhiteBaseImageResponse
       */
      Models::DetectWhiteBaseImageResponse detectWhiteBaseImage(const Models::DetectWhiteBaseImageRequest &request);

      Models::DetectWhiteBaseImageResponse detectWhiteBaseImageAdvance(const Models::DetectWhiteBaseImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 着装检测
       *
       * @param tmpReq DetectWorkwearRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectWorkwearResponse
       */
      Models::DetectWorkwearResponse detectWorkwearWithOptions(const Models::DetectWorkwearRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 着装检测
       *
       * @param request DetectWorkwearRequest
       * @return DetectWorkwearResponse
       */
      Models::DetectWorkwearResponse detectWorkwear(const Models::DetectWorkwearRequest &request);

      Models::DetectWorkwearResponse detectWorkwearAdvance(const Models::DetectWorkwearAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步任务结果
       *
       * @param request GetAsyncJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResultWithOptions(const Models::GetAsyncJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步任务结果
       *
       * @param request GetAsyncJobResultRequest
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResult(const Models::GetAsyncJobResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMAGEAUDIT20191230_HPP_
#define ALIBABACLOUD_IMAGEAUDIT20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Imageaudit20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Imageaudit20191230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 图片审核接口
       *
       * @param request ScanImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanImageResponse
       */
      Models::ScanImageResponse scanImageWithOptions(const Models::ScanImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片审核接口
       *
       * @param request ScanImageRequest
       * @return ScanImageResponse
       */
      Models::ScanImageResponse scanImage(const Models::ScanImageRequest &request);

      Models::ScanImageResponse scanImageAdvance(const Models::ScanImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ScanTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanTextResponse
       */
      Models::ScanTextResponse scanTextWithOptions(const Models::ScanTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ScanTextRequest
       * @return ScanTextResponse
       */
      Models::ScanTextResponse scanText(const Models::ScanTextRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif

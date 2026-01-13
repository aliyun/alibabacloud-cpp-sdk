// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAFCONSOLE20250521_HPP_
#define ALIBABACLOUD_SAFCONSOLE20250521_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Safconsole20250521Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Safconsole20250521.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Create basic model information
       *
       * @param request CreateCustomerModuleBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleBasicInfoResponse
       */
      Models::CreateCustomerModuleBasicInfoResponse createCustomerModuleBasicInfoWithOptions(const Models::CreateCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create basic model information
       *
       * @param request CreateCustomerModuleBasicInfoRequest
       * @return CreateCustomerModuleBasicInfoResponse
       */
      Models::CreateCustomerModuleBasicInfoResponse createCustomerModuleBasicInfo(const Models::CreateCustomerModuleBasicInfoRequest &request);

      /**
       * @summary Save Model Feature Configuration
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
       *
       * @param request CreateCustomerModuleMetaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleMetaInfoResponse
       */
      Models::CreateCustomerModuleMetaInfoResponse createCustomerModuleMetaInfoWithOptions(const Models::CreateCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save Model Feature Configuration
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
       *
       * @param request CreateCustomerModuleMetaInfoRequest
       * @return CreateCustomerModuleMetaInfoResponse
       */
      Models::CreateCustomerModuleMetaInfoResponse createCustomerModuleMetaInfo(const Models::CreateCustomerModuleMetaInfoRequest &request);

      /**
       * @summary Create Model Output Information
       *
       * @param request CreateCustomerModuleOutputInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleOutputInfoResponse
       */
      Models::CreateCustomerModuleOutputInfoResponse createCustomerModuleOutputInfoWithOptions(const Models::CreateCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Model Output Information
       *
       * @param request CreateCustomerModuleOutputInfoRequest
       * @return CreateCustomerModuleOutputInfoResponse
       */
      Models::CreateCustomerModuleOutputInfoResponse createCustomerModuleOutputInfo(const Models::CreateCustomerModuleOutputInfoRequest &request);

      /**
       * @summary Deletes the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request DeleteModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const Models::DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const Models::DeleteModelRequest &request);

      /**
       * @summary Query basic model information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleBasicInfoResponse
       */
      Models::DescribeCustomerModuleBasicInfoResponse describeCustomerModuleBasicInfoWithOptions(const Models::DescribeCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query basic model information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleBasicInfoRequest
       * @return DescribeCustomerModuleBasicInfoResponse
       */
      Models::DescribeCustomerModuleBasicInfoResponse describeCustomerModuleBasicInfo(const Models::DescribeCustomerModuleBasicInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif

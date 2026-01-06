// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STS20150401_HPP_
#define ALIBABACLOUD_STS20150401_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sts20150401Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sts20150401.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role.
       *
       * @description ### Prerequisites
       * You cannot use an Alibaba Cloud account to call this operation. The requester of this operation can only be a RAM user or RAM role. Make sure that the AliyunSTSAssumeRoleAccess policy is attached to the requester. After this policy is attached to the requester, the requester has the management permissions on STS.
       * If you do not attach the AliyunSTSAssumeRoleAccess policy to the requester, the following error message is returned:
       * `You are not authorized to do this action. You should be authorized by RAM.`
       * You can refer to the following information to troubleshoot the error:
       * *   Cause of the error: The policy that is required to assume a RAM role is not attached to the requester. To resolve this issue, attach the AliyunSTSAssumeRoleAccess policy or a custom policy to the requester. For more information, see [Can I specify the RAM role that a RAM user can assume?](https://help.aliyun.com/document_detail/39744.html) and [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Cause of the error: The requester is not authorized to assume the RAM role. To resolve this issue, add the requester to the Principal element in the trust policy of the RAM role For more information, see [Edit the trust policy of a RAM role](https://help.aliyun.com/document_detail/116819.html).
       * ### Best practices
       * An STS token is valid for a period of time after it is issued, and the number of STS tokens that can be issued within an interval is also limited. Therefore, we recommend that you configure a proper validity period for an STS token and repeatedly use the token within this period. This prevents frequent issuing of STS tokens from adversely affecting your services if a large number of requests are sent. For more information about the limit, see [Is the number of STS API requests limited?](https://help.aliyun.com/document_detail/39744.html) You can configure the `DurationSeconds` parameter to specify a validity period for an STS token.
       * When you upload or download Object Storage Service (OSS) objects on mobile devices, a large number of STS API requests are sent. In this case, repeated use of an STS token may not meet your business requirements. To avoid the limit on STS API requests from affecting access to OSS, you can **add a signature to the URL of an OSS object**. For more information, see [Add signatures to URLs](https://help.aliyun.com/document_detail/31952.html) and [Obtain signature information from the server and upload data to OSS](https://help.aliyun.com/document_detail/31926.html).
       *
       * @param request AssumeRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssumeRoleResponse
       */
      Models::AssumeRoleResponse assumeRoleWithOptions(const Models::AssumeRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role.
       *
       * @description ### Prerequisites
       * You cannot use an Alibaba Cloud account to call this operation. The requester of this operation can only be a RAM user or RAM role. Make sure that the AliyunSTSAssumeRoleAccess policy is attached to the requester. After this policy is attached to the requester, the requester has the management permissions on STS.
       * If you do not attach the AliyunSTSAssumeRoleAccess policy to the requester, the following error message is returned:
       * `You are not authorized to do this action. You should be authorized by RAM.`
       * You can refer to the following information to troubleshoot the error:
       * *   Cause of the error: The policy that is required to assume a RAM role is not attached to the requester. To resolve this issue, attach the AliyunSTSAssumeRoleAccess policy or a custom policy to the requester. For more information, see [Can I specify the RAM role that a RAM user can assume?](https://help.aliyun.com/document_detail/39744.html) and [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
       * *   Cause of the error: The requester is not authorized to assume the RAM role. To resolve this issue, add the requester to the Principal element in the trust policy of the RAM role For more information, see [Edit the trust policy of a RAM role](https://help.aliyun.com/document_detail/116819.html).
       * ### Best practices
       * An STS token is valid for a period of time after it is issued, and the number of STS tokens that can be issued within an interval is also limited. Therefore, we recommend that you configure a proper validity period for an STS token and repeatedly use the token within this period. This prevents frequent issuing of STS tokens from adversely affecting your services if a large number of requests are sent. For more information about the limit, see [Is the number of STS API requests limited?](https://help.aliyun.com/document_detail/39744.html) You can configure the `DurationSeconds` parameter to specify a validity period for an STS token.
       * When you upload or download Object Storage Service (OSS) objects on mobile devices, a large number of STS API requests are sent. In this case, repeated use of an STS token may not meet your business requirements. To avoid the limit on STS API requests from affecting access to OSS, you can **add a signature to the URL of an OSS object**. For more information, see [Add signatures to URLs](https://help.aliyun.com/document_detail/31952.html) and [Obtain signature information from the server and upload data to OSS](https://help.aliyun.com/document_detail/31926.html).
       *
       * @param request AssumeRoleRequest
       * @return AssumeRoleResponse
       */
      Models::AssumeRoleResponse assumeRole(const Models::AssumeRoleRequest &request);

      /**
       * @summary Queries a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using OpenID Connect (OIDC).
       *
       * @description ### Prerequisites
       * *   An OIDC token is obtained from an external identity provider (IdP).
       * *   An OIDC IdP is created in the RAM console. For more information, see [Create an OIDC IdP](https://help.aliyun.com/document_detail/327123.html) or [CreateOIDCProvider](https://help.aliyun.com/document_detail/327135.html).
       * *   A RAM role whose trusted entity is an OIDC IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
       *
       * @param request AssumeRoleWithOIDCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssumeRoleWithOIDCResponse
       */
      Models::AssumeRoleWithOIDCResponse assumeRoleWithOIDCWithOptions(const Models::AssumeRoleWithOIDCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using OpenID Connect (OIDC).
       *
       * @description ### Prerequisites
       * *   An OIDC token is obtained from an external identity provider (IdP).
       * *   An OIDC IdP is created in the RAM console. For more information, see [Create an OIDC IdP](https://help.aliyun.com/document_detail/327123.html) or [CreateOIDCProvider](https://help.aliyun.com/document_detail/327135.html).
       * *   A RAM role whose trusted entity is an OIDC IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
       *
       * @param request AssumeRoleWithOIDCRequest
       * @return AssumeRoleWithOIDCResponse
       */
      Models::AssumeRoleWithOIDCResponse assumeRoleWithOIDC(const Models::AssumeRoleWithOIDCRequest &request);

      /**
       * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using Security Assertion Markup Language (SAML).
       *
       * @description ###
       * *   A SAML response is obtained from an external identity provider (IdP).
       * *   A SAML IdP is created in the RAM console. For more information, see [Create a SAML IdP](https://help.aliyun.com/document_detail/116083.html) or [CreateSAMLProvider](https://help.aliyun.com/document_detail/186846.html).
       * *   A RAM role whose trusted entity is a SAML IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
       *
       * @param request AssumeRoleWithSAMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssumeRoleWithSAMLResponse
       */
      Models::AssumeRoleWithSAMLResponse assumeRoleWithSAMLWithOptions(const Models::AssumeRoleWithSAMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using Security Assertion Markup Language (SAML).
       *
       * @description ###
       * *   A SAML response is obtained from an external identity provider (IdP).
       * *   A SAML IdP is created in the RAM console. For more information, see [Create a SAML IdP](https://help.aliyun.com/document_detail/116083.html) or [CreateSAMLProvider](https://help.aliyun.com/document_detail/186846.html).
       * *   A RAM role whose trusted entity is a SAML IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
       *
       * @param request AssumeRoleWithSAMLRequest
       * @return AssumeRoleWithSAMLResponse
       */
      Models::AssumeRoleWithSAMLResponse assumeRoleWithSAML(const Models::AssumeRoleWithSAMLRequest &request);

      /**
       * @summary The ID of the Alibaba Cloud account to which the current requester belongs.
       *
       * @param request GetCallerIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallerIdentityResponse
       */
      Models::GetCallerIdentityResponse getCallerIdentityWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the Alibaba Cloud account to which the current requester belongs.
       *
       * @return GetCallerIdentityResponse
       */
      Models::GetCallerIdentityResponse getCallerIdentity();
  };
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif

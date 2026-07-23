// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_KMS20160120_HPP_
#define ALIBABACLOUD_KMS20160120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Kms20160120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Kms20160120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Decrypts data by using the private key of an asymmetric CMK.
       *
       * @description ### Usage notes
       * - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway, the queries per second (QPS) limit for each Alibaba Cloud account is 200. If the QPS exceeds the limit, the API call is throttled. This can affect your business. We recommend that you plan your calls to avoid exceeding this limit.
       * - If you use a dedicated gateway, the QPS limit for each Alibaba Cloud account is subject to the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table describes the supported encryption algorithms.
       * | KeySpec   | Algorithm             | Description                                        | Ciphertext length (bytes) |
       * | --------- | --------------------- | -------------------------------------------------- | ------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 256                       |
       * | RSA_2048 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 256                       |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 384                       |
       * | RSA_3072 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 384                       |
       * | EC_SM2   | SM2PKE                | SM2 elliptic curve public key encryption algorithm | Maximum 6,144             |
       * This topic provides an example of how to use the asymmetric key whose ID is `key-hzz630494463ejqjx****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` to decrypt the ciphertext `BQKP+1zK6+ZEMxTP5qaVzcsgXtWplYBKm0NXdSnB5FzliFxE1bSiu4dnEIlca2JpeH7yz1/S6fed630H+hIH6DoM25fTLNcKj+mFB0Xnh9m2+HN59Mn4qyTfcUeadnfCXSWcGBouhXFwcdd2rJ3n337bzTf4jm659gZu3L0i6PLuxM9p7mqdwO0cKJPfGVfhnfMz+f4alMg79WB/NNyE2lyX7/qxvV49ObNrrJbKSFiz8Djocaf0IESNLMbfYI5bXjWkJlX92DQbKhibtQW8ZOJ//ZC6t0AWcUoKL6QDm/dg5koQalcleRinpB+QadFm894sLbVZ9+N4GVsv1W****==` using the `RSAES_OAEP_SHA_1` decryption algorithm.
       *
       * @param request AsymmetricDecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricDecryptResponse
       */
      Models::AsymmetricDecryptResponse asymmetricDecryptWithOptions(const Models::AsymmetricDecryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts data by using the private key of an asymmetric CMK.
       *
       * @description ### Usage notes
       * - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway, the queries per second (QPS) limit for each Alibaba Cloud account is 200. If the QPS exceeds the limit, the API call is throttled. This can affect your business. We recommend that you plan your calls to avoid exceeding this limit.
       * - If you use a dedicated gateway, the QPS limit for each Alibaba Cloud account is subject to the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table describes the supported encryption algorithms.
       * | KeySpec   | Algorithm             | Description                                        | Ciphertext length (bytes) |
       * | --------- | --------------------- | -------------------------------------------------- | ------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 256                       |
       * | RSA_2048 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 256                       |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 384                       |
       * | RSA_3072 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 384                       |
       * | EC_SM2   | SM2PKE                | SM2 elliptic curve public key encryption algorithm | Maximum 6,144             |
       * This topic provides an example of how to use the asymmetric key whose ID is `key-hzz630494463ejqjx****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` to decrypt the ciphertext `BQKP+1zK6+ZEMxTP5qaVzcsgXtWplYBKm0NXdSnB5FzliFxE1bSiu4dnEIlca2JpeH7yz1/S6fed630H+hIH6DoM25fTLNcKj+mFB0Xnh9m2+HN59Mn4qyTfcUeadnfCXSWcGBouhXFwcdd2rJ3n337bzTf4jm659gZu3L0i6PLuxM9p7mqdwO0cKJPfGVfhnfMz+f4alMg79WB/NNyE2lyX7/qxvV49ObNrrJbKSFiz8Djocaf0IESNLMbfYI5bXjWkJlX92DQbKhibtQW8ZOJ//ZC6t0AWcUoKL6QDm/dg5koQalcleRinpB+QadFm894sLbVZ9+N4GVsv1W****==` using the `RSAES_OAEP_SHA_1` decryption algorithm.
       *
       * @param request AsymmetricDecryptRequest
       * @return AsymmetricDecryptResponse
       */
      Models::AsymmetricDecryptResponse asymmetricDecrypt(const Models::AsymmetricDecryptRequest &request);

      /**
       * @summary Encrypts data by using the public key of an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the permissions that are required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. To access KMS over the Internet, you must enable Internet access. For more information, see [Access a key in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway: The number of queries per second (QPS) for a single user is limited to 200. If the limit is exceeded, API calls are throttled. This may affect your business. We recommend that you plan your API calls to avoid exceeding this limit.
       * - If you use a dedicated gateway: The QPS limit for a single user depends on the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys that have the **Usage** parameter set to **ENCRYPT/DECRYPT**. The following table describes the supported encryption algorithms.
       * | KeySpec   | Algorithm             | Description                                        | Maximum number of bytes that can be encrypted |
       * | --------- | --------------------- | -------------------------------------------------- | --------------------------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 190                                           |
       * | RSA_2048 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 214                                           |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 318                                           |
       * | RSA_3072 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 342                                           |
       * | EC_SM2   | SM2PKE                | SM2 elliptic curve public key encryption algorithm | 6047                                          |
       * In this example, the plaintext `SGVsbG8gd29ybGQ=` is encrypted using an asymmetric key with the key ID `key-hzz630494463ejqjx****`, the key version ID `2ab1a983-7072-4bbc-a582-584b5bd8****`, and the `RSAES_OAEP_SHA_1` encryption algorithm.
       *
       * @param request AsymmetricEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricEncryptResponse
       */
      Models::AsymmetricEncryptResponse asymmetricEncryptWithOptions(const Models::AsymmetricEncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts data by using the public key of an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the permissions that are required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. To access KMS over the Internet, you must enable Internet access. For more information, see [Access a key in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway: The number of queries per second (QPS) for a single user is limited to 200. If the limit is exceeded, API calls are throttled. This may affect your business. We recommend that you plan your API calls to avoid exceeding this limit.
       * - If you use a dedicated gateway: The QPS limit for a single user depends on the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys that have the **Usage** parameter set to **ENCRYPT/DECRYPT**. The following table describes the supported encryption algorithms.
       * | KeySpec   | Algorithm             | Description                                        | Maximum number of bytes that can be encrypted |
       * | --------- | --------------------- | -------------------------------------------------- | --------------------------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 190                                           |
       * | RSA_2048 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 214                                           |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256     | 318                                           |
       * | RSA_3072 | RSAES_OAEP_SHA_1   | RSAES-OAEP using SHA1 and MGF1 with SHA1           | 342                                           |
       * | EC_SM2   | SM2PKE                | SM2 elliptic curve public key encryption algorithm | 6047                                          |
       * In this example, the plaintext `SGVsbG8gd29ybGQ=` is encrypted using an asymmetric key with the key ID `key-hzz630494463ejqjx****`, the key version ID `2ab1a983-7072-4bbc-a582-584b5bd8****`, and the `RSAES_OAEP_SHA_1` encryption algorithm.
       *
       * @param request AsymmetricEncryptRequest
       * @return AsymmetricEncryptResponse
       */
      Models::AsymmetricEncryptResponse asymmetricEncrypt(const Models::AsymmetricEncryptRequest &request);

      /**
       * @summary Generates a digital signature by using an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policies that are required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. This method requires you to enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Shared gateway: This operation is limited to 200 queries per second (QPS) for each user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       * - Dedicated gateway: The QPS for each user is limited by the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table describes the supported signature algorithms.
       * | KeySpec   | Algorithm            | Description                                                |
       * | --------- | -------------------- | ---------------------------------------------------------- |
       * | RSA_2048 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | RSA_3072 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | EC_P256  | ECDSA_SHA_256      | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest  |
       * | EC_P256K | ECDSA_SHA_256      | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2   | SM2DSA               | SM2 elliptic curve digital signature algorithm             |
       * > According to the GB/T 32918.2 standard "Information security technology - SM2 elliptic curve public key cryptography - Part 2: Digital signature algorithm", when you calculate an SM2 signature, the value of the **Digest** parameter is not the SM3 hash value of the original message. Instead, the value is the SM3 hash value of the result of concatenating Z(A) and M. M is the original message to be signed. Z(A) is the hash value of user A, as defined in GB/T 32918.2.
       * This topic provides an example of how to use an asymmetric key with the key ID `5c438b18-05be-40ad-b6c2-3be6752c****` and the key version ID `2ab1a983-7072-4bbc-a582-584b5bd8****` to sign the digest `ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuy****=` using the `RSA_PSS_SHA_256` signature algorithm.
       *
       * @param request AsymmetricSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricSignResponse
       */
      Models::AsymmetricSignResponse asymmetricSignWithOptions(const Models::AsymmetricSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a digital signature by using an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policies that are required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. This method requires you to enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Shared gateway: This operation is limited to 200 queries per second (QPS) for each user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       * - Dedicated gateway: The QPS for each user is limited by the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table describes the supported signature algorithms.
       * | KeySpec   | Algorithm            | Description                                                |
       * | --------- | -------------------- | ---------------------------------------------------------- |
       * | RSA_2048 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | RSA_3072 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | EC_P256  | ECDSA_SHA_256      | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest  |
       * | EC_P256K | ECDSA_SHA_256      | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2   | SM2DSA               | SM2 elliptic curve digital signature algorithm             |
       * > According to the GB/T 32918.2 standard "Information security technology - SM2 elliptic curve public key cryptography - Part 2: Digital signature algorithm", when you calculate an SM2 signature, the value of the **Digest** parameter is not the SM3 hash value of the original message. Instead, the value is the SM3 hash value of the result of concatenating Z(A) and M. M is the original message to be signed. Z(A) is the hash value of user A, as defined in GB/T 32918.2.
       * This topic provides an example of how to use an asymmetric key with the key ID `5c438b18-05be-40ad-b6c2-3be6752c****` and the key version ID `2ab1a983-7072-4bbc-a582-584b5bd8****` to sign the digest `ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuy****=` using the `RSA_PSS_SHA_256` signature algorithm.
       *
       * @param request AsymmetricSignRequest
       * @return AsymmetricSignResponse
       */
      Models::AsymmetricSignResponse asymmetricSign(const Models::AsymmetricSignRequest &request);

      /**
       * @summary Verifies a digital signature by using the public key of an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or through a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access KMS instances over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway, the queries per second (QPS) limit for this operation is 200 for a single user. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you manage your call frequency to stay within the QPS limit.
       * - If you use a dedicated gateway, the QPS limit for this operation for a single user is determined by the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table lists the supported signature algorithms.
       * | KeySpec   | Algorithm            | Description                                                |
       * | --------- | -------------------- | ---------------------------------------------------------- |
       * | RSA_2048 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | RSA_3072 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | EC_P256  | ECDSA_SHA_256      | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest  |
       * | EC_P256K | ECDSA_SHA_256      | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2   | SM2DSA               | SM2 elliptic curve digital signature algorithm             |
       * > In accordance with the GBT32918 standard, when an SM2 signature is calculated, the value of the **Digest** parameter is not the SM3 hash value of the original message. Instead, the value is the SM3 hash value of the result generated by concatenating Z(A) and M. In this formula, M is the original message to be signed, and Z(A) is the hash value of user A as defined in GBT32918.
       * This topic provides an example of how to use an asymmetric key with the key ID \\`5c438b18-05be-40ad-b6c2-3be6752c\\*\\*\\*\\*\\` and the key version ID \\`2ab1a983-7072-4bbc-a582-584b5bd8\\*\\*\\*\\*\\` to verify the signature \\`M2CceNZH00ZgL9ED/ZHFp21YRAvYeZHknJUc207OCZ0N9wNn9As4z2bON3FF3je+1Nu+2+/8Zj50HpMTpzYpMp2R93cYmACCmhaYoKydxylbyGzJR8y9likZRCrkD38lRoS40aBBvv/6iRKzQuo9EGYVcel36cMNg00VmYNBy3pa1rwg3gA4l3cy6kjayZja1WGPkVhrVKsrJMdbpl0ApLjXKuD8rw1n1XLCwCUEL5eLPljTZaAveqdOFQOiZnZEGI27qIiZe7I1fN8tcz6anS/gTM7xRKE++5egEvRWlTQQTJeApnPSiUPA+8ZykNdelQsOQh5SrGoyI4A5pq\\*\\*\\*\\*==\\` for the digest \\`ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuyjfzw=\\` using the RSA_PSS_SHA_256 signature algorithm.
       *
       * @param request AsymmetricVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricVerifyResponse
       */
      Models::AsymmetricVerifyResponse asymmetricVerifyWithOptions(const Models::AsymmetricVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a digital signature by using the public key of an asymmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or through a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access KMS instances over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway, the queries per second (QPS) limit for this operation is 200 for a single user. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you manage your call frequency to stay within the QPS limit.
       * - If you use a dedicated gateway, the QPS limit for this operation for a single user is determined by the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table lists the supported signature algorithms.
       * | KeySpec   | Algorithm            | Description                                                |
       * | --------- | -------------------- | ---------------------------------------------------------- |
       * | RSA_2048 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | RSA_3072 | RSA_PSS_SHA_256   | RSASSA-PSS using SHA-256 and MGF1 with SHA-256             |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256                           |
       * | EC_P256  | ECDSA_SHA_256      | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest  |
       * | EC_P256K | ECDSA_SHA_256      | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2   | SM2DSA               | SM2 elliptic curve digital signature algorithm             |
       * > In accordance with the GBT32918 standard, when an SM2 signature is calculated, the value of the **Digest** parameter is not the SM3 hash value of the original message. Instead, the value is the SM3 hash value of the result generated by concatenating Z(A) and M. In this formula, M is the original message to be signed, and Z(A) is the hash value of user A as defined in GBT32918.
       * This topic provides an example of how to use an asymmetric key with the key ID \\`5c438b18-05be-40ad-b6c2-3be6752c\\*\\*\\*\\*\\` and the key version ID \\`2ab1a983-7072-4bbc-a582-584b5bd8\\*\\*\\*\\*\\` to verify the signature \\`M2CceNZH00ZgL9ED/ZHFp21YRAvYeZHknJUc207OCZ0N9wNn9As4z2bON3FF3je+1Nu+2+/8Zj50HpMTpzYpMp2R93cYmACCmhaYoKydxylbyGzJR8y9likZRCrkD38lRoS40aBBvv/6iRKzQuo9EGYVcel36cMNg00VmYNBy3pa1rwg3gA4l3cy6kjayZja1WGPkVhrVKsrJMdbpl0ApLjXKuD8rw1n1XLCwCUEL5eLPljTZaAveqdOFQOiZnZEGI27qIiZe7I1fN8tcz6anS/gTM7xRKE++5egEvRWlTQQTJeApnPSiUPA+8ZykNdelQsOQh5SrGoyI4A5pq\\*\\*\\*\\*==\\` for the digest \\`ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuyjfzw=\\` using the RSA_PSS_SHA_256 signature algorithm.
       *
       * @param request AsymmetricVerifyRequest
       * @return AsymmetricVerifyResponse
       */
      Models::AsymmetricVerifyResponse asymmetricVerify(const Models::AsymmetricVerifyRequest &request);

      /**
       * @summary Cancels the deletion task of a CMK.
       *
       * @description If the deletion task of a CMK is canceled, the CMK returns to the Enabled state.
       *
       * @param request CancelKeyDeletionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelKeyDeletionResponse
       */
      Models::CancelKeyDeletionResponse cancelKeyDeletionWithOptions(const Models::CancelKeyDeletionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the deletion task of a CMK.
       *
       * @description If the deletion task of a CMK is canceled, the CMK returns to the Enabled state.
       *
       * @param request CancelKeyDeletionRequest
       * @return CancelKeyDeletionResponse
       */
      Models::CancelKeyDeletionResponse cancelKeyDeletion(const Models::CancelKeyDeletionRequest &request);

      /**
       * @summary Enables a Key Management Service (KMS) instance.
       *
       * @description ### [](#)Limits
       * You can enable only instances of the software key management type. You cannot enable instances of the hardware key management type.
       *
       * @param request ConnectKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConnectKmsInstanceResponse
       */
      Models::ConnectKmsInstanceResponse connectKmsInstanceWithOptions(const Models::ConnectKmsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a Key Management Service (KMS) instance.
       *
       * @description ### [](#)Limits
       * You can enable only instances of the software key management type. You cannot enable instances of the hardware key management type.
       *
       * @param request ConnectKmsInstanceRequest
       * @return ConnectKmsInstanceResponse
       */
      Models::ConnectKmsInstanceResponse connectKmsInstance(const Models::ConnectKmsInstanceRequest &request);

      /**
       * @summary Creates an alias for a key.
       *
       * @description *   Each alias can be bound to only one CMK at a time.
       * *   The aliases of CMKs in the same region must be unique.
       * In this topic, an alias named `alias/example` is created for a CMK named `7906979c-8e06-46a2-be2d-68e3ccbc****`.
       *
       * @param request CreateAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAliasWithOptions(const Models::CreateAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alias for a key.
       *
       * @description *   Each alias can be bound to only one CMK at a time.
       * *   The aliases of CMKs in the same region must be unique.
       * In this topic, an alias named `alias/example` is created for a CMK named `7906979c-8e06-46a2-be2d-68e3ccbc****`.
       *
       * @param request CreateAliasRequest
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAlias(const Models::CreateAliasRequest &request);

      /**
       * @summary Creates an application access point (AAP)
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based AAP:
       * 1.Create a network access rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access KMS. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind network access rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. This topic describes how to create an AAP.
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreateApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationAccessPointResponse
       */
      Models::CreateApplicationAccessPointResponse createApplicationAccessPointWithOptions(const Models::CreateApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application access point (AAP)
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based AAP:
       * 1.Create a network access rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access KMS. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind network access rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. This topic describes how to create an AAP.
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreateApplicationAccessPointRequest
       * @return CreateApplicationAccessPointResponse
       */
      Models::CreateApplicationAccessPointResponse createApplicationAccessPoint(const Models::CreateApplicationAccessPointRequest &request);

      /**
       * @summary Creates a client key.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP.
       * ### Precautions
       * A client key has a validity period. After a client key expires, applications into which the client key is integrated cannot access the required KMS instance. You must replace the client key before the client key expires. We recommend that you delete the expired client key in KMS after the new client key is used.
       *
       * @param request CreateClientKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientKeyResponse
       */
      Models::CreateClientKeyResponse createClientKeyWithOptions(const Models::CreateClientKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a client key.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP.
       * ### Precautions
       * A client key has a validity period. After a client key expires, applications into which the client key is integrated cannot access the required KMS instance. You must replace the client key before the client key expires. We recommend that you delete the expired client key in KMS after the new client key is used.
       *
       * @param request CreateClientKeyRequest
       * @return CreateClientKeyResponse
       */
      Models::CreateClientKeyResponse createClientKey(const Models::CreateClientKeyRequest &request);

      /**
       * @summary Creates a customer master key (CMK) for envelope encryption, digital signatures, or other cryptographic operations.
       *
       * @description - For information about the access policies required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Alibaba Cloud Key Management Service (KMS) supports common specifications for symmetric and asymmetric keys. For more information, see [Key management types and key specifications](https://help.aliyun.com/document_detail/480161.html).
       *
       * @param request CreateKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyResponse
       */
      Models::CreateKeyResponse createKeyWithOptions(const Models::CreateKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a customer master key (CMK) for envelope encryption, digital signatures, or other cryptographic operations.
       *
       * @description - For information about the access policies required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Alibaba Cloud Key Management Service (KMS) supports common specifications for symmetric and asymmetric keys. For more information, see [Key management types and key specifications](https://help.aliyun.com/document_detail/480161.html).
       *
       * @param request CreateKeyRequest
       * @return CreateKeyResponse
       */
      Models::CreateKeyResponse createKey(const Models::CreateKeyRequest &request);

      /**
       * @summary Creates a version for a customer master key (CMK).
       *
       * @description - You can create a version only for an asymmetric CMK that is in the Enabled state. You can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation to create an asymmetric CMK and the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status of the CMK. The status is specified by the KeyState parameter.
       * - The minimum interval for creating a version of the same CMK is seven days. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the time when the last version of a CMK was created. The time is specified by the LastRotationDate parameter.
       * - If a CMK is in a private key store, you cannot create a version for the CMK.
       * - You can create a maximum of 50 versions for a CMK in the same region.
       * You can create a version for the CMK whose ID is `0b30658a-ed1a-4922-b8f7-a673ca9c****` by using the parameter settings provided in this topic.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request CreateKeyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyVersionResponse
       */
      Models::CreateKeyVersionResponse createKeyVersionWithOptions(const Models::CreateKeyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version for a customer master key (CMK).
       *
       * @description - You can create a version only for an asymmetric CMK that is in the Enabled state. You can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation to create an asymmetric CMK and the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status of the CMK. The status is specified by the KeyState parameter.
       * - The minimum interval for creating a version of the same CMK is seven days. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the time when the last version of a CMK was created. The time is specified by the LastRotationDate parameter.
       * - If a CMK is in a private key store, you cannot create a version for the CMK.
       * - You can create a maximum of 50 versions for a CMK in the same region.
       * You can create a version for the CMK whose ID is `0b30658a-ed1a-4922-b8f7-a673ca9c****` by using the parameter settings provided in this topic.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request CreateKeyVersionRequest
       * @return CreateKeyVersionResponse
       */
      Models::CreateKeyVersionResponse createKeyVersion(const Models::CreateKeyVersionRequest &request);

      /**
       * @summary Creates a network access rule to configure the private IP addresses or private CIDR blocks that are allowed to access a Key Management Service (KMS) instance.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a KMS instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance.
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreateNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkRuleResponse
       */
      Models::CreateNetworkRuleResponse createNetworkRuleWithOptions(const Models::CreateNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access rule to configure the private IP addresses or private CIDR blocks that are allowed to access a Key Management Service (KMS) instance.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a KMS instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance.
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets. For more information, see [CreatePolicy](https://help.aliyun.com/document_detail/2539454.html).
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreateNetworkRuleRequest
       * @return CreateNetworkRuleResponse
       */
      Models::CreateNetworkRuleResponse createNetworkRule(const Models::CreateNetworkRuleRequest &request);

      /**
       * @summary Creates a permission policy to configure the keys and secrets that are allowed to access.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets.
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission policy to configure the keys and secrets that are allowed to access.
       *
       * @description To perform cryptographic operations and retrieve secret values, self-managed applications must use a client key to access a Key Management Service (KMS) instance. The following process shows how to create a client key-based application access point (AAP):
       * 1.Create an access control rule: You can configure the private IP addresses or private CIDR blocks that are allowed to access a KMS instance. For more information, see [CreateNetworkRule](https://help.aliyun.com/document_detail/2539407.html).
       * 2.Create a permission policy: You can configure the keys and secrets that are allowed to access and bind access control rules to the keys and secrets.
       * 3.Create an AAP: You can configure an authentication method and bind a permission policy to an AAP. For more information, see [CreateApplicationAccessPoint](https://help.aliyun.com/document_detail/2539467.html).
       * 4.Create a client key: You can configure the encryption password and validity period of a client key and bind the client key to an AAP. For more information, see [CreateClientKey](https://help.aliyun.com/document_detail/2539509.html).
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates a secret and stores its initial version.
       *
       * @description - For information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Specify the secret name, the secret value for the initial version, and the version number. The initial version is marked with the ACSCurrent stage label.
       * - Key Management Service (KMS) uses the key that you specify to encrypt the secret value. The key and the secret must be in the same KMS instance. The key must be a symmetric key.
       *   > KMS encrypts the secret value of each version. Metadata such as the secret name, version number, and version stage labels are not encrypted.
       * - Before you encrypt the secret value, you must have the `kms:GenerateDataKey` permission on the key.
       * This topic provides an example of how to create an RDS secret. The secret is named `mydbconninfo`. The `VersionId` of the initial version is `v1`. The `SecretData` is `{"Accounts":[{"AccountName":"user1","AccountPassword":"****"}]}`.
       *
       * @param tmpReq CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a secret and stores its initial version.
       *
       * @description - For information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Specify the secret name, the secret value for the initial version, and the version number. The initial version is marked with the ACSCurrent stage label.
       * - Key Management Service (KMS) uses the key that you specify to encrypt the secret value. The key and the secret must be in the same KMS instance. The key must be a symmetric key.
       *   > KMS encrypts the secret value of each version. Metadata such as the secret name, version number, and version stage labels are not encrypted.
       * - Before you encrypt the secret value, you must have the `kms:GenerateDataKey` permission on the key.
       * This topic provides an example of how to create an RDS secret. The secret is named `mydbconninfo`. The `VersionId` of the initial version is `v1`. The `SecretData` is `{"Accounts":[{"AccountName":"user1","AccountPassword":"****"}]}`.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Decrypts ciphertext that was encrypted by using a CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. To use a shared gateway, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Shared gateway: The queries per second (QPS) limit for a single user for this operation is 1,000. If this limit is exceeded, API calls are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       * - Dedicated gateway: The QPS limit for a single user for this operation is subject to the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       *
       * @param tmpReq DecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptResponse
       */
      Models::DecryptResponse decryptWithOptions(const Models::DecryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts ciphertext that was encrypted by using a CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. To use a shared gateway, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Shared gateway: The queries per second (QPS) limit for a single user for this operation is 1,000. If this limit is exceeded, API calls are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       * - Dedicated gateway: The QPS limit for a single user for this operation is subject to the performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       *
       * @param request DecryptRequest
       * @return DecryptResponse
       */
      Models::DecryptResponse decrypt(const Models::DecryptRequest &request);

      /**
       * @summary Deletes an alias.
       *
       * @param request DeleteAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAliasWithOptions(const Models::DeleteAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alias.
       *
       * @param request DeleteAliasRequest
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAlias(const Models::DeleteAliasRequest &request);

      /**
       * @summary Deletes an application access point (AAP).
       *
       * @description - For information about the access policy that a RAM user or RAM role requires to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before you delete an AAP, make sure that it is no longer in use. If you delete an AAP that is in use, related applications cannot access KMS. Proceed with caution.
       *
       * @param request DeleteApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationAccessPointResponse
       */
      Models::DeleteApplicationAccessPointResponse deleteApplicationAccessPointWithOptions(const Models::DeleteApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application access point (AAP).
       *
       * @description - For information about the access policy that a RAM user or RAM role requires to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before you delete an AAP, make sure that it is no longer in use. If you delete an AAP that is in use, related applications cannot access KMS. Proceed with caution.
       *
       * @param request DeleteApplicationAccessPointRequest
       * @return DeleteApplicationAccessPointResponse
       */
      Models::DeleteApplicationAccessPointResponse deleteApplicationAccessPoint(const Models::DeleteApplicationAccessPointRequest &request);

      /**
       * @summary Deletes a client key.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before you delete a ClientKey, make sure that it is no longer in use. Deleting a ClientKey that is in use prevents related applications from accessing KMS. Proceed with caution.
       *
       * @param request DeleteClientKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientKeyResponse
       */
      Models::DeleteClientKeyResponse deleteClientKeyWithOptions(const Models::DeleteClientKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client key.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before you delete a ClientKey, make sure that it is no longer in use. Deleting a ClientKey that is in use prevents related applications from accessing KMS. Proceed with caution.
       *
       * @param request DeleteClientKeyRequest
       * @return DeleteClientKeyResponse
       */
      Models::DeleteClientKeyResponse deleteClientKey(const Models::DeleteClientKeyRequest &request);

      /**
       * @summary Deletes the imported key material from a CMK. After deletion, the CMK enters the PendingImport state until you re-import key material.
       *
       * @description This operation does not delete the CMK that is created by using the key material.
       * If the CMK is in the PendingDeletion state, the state of the CMK and the scheduled deletion time do not change after you call this operation. If the CMK is not in the PendingDeletion state, the state of the CMK changes to PendingImport after you call this operation.
       * After you delete the key material, you can upload only the same key material into the CMK.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DeleteKeyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyMaterialResponse
       */
      Models::DeleteKeyMaterialResponse deleteKeyMaterialWithOptions(const Models::DeleteKeyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the imported key material from a CMK. After deletion, the CMK enters the PendingImport state until you re-import key material.
       *
       * @description This operation does not delete the CMK that is created by using the key material.
       * If the CMK is in the PendingDeletion state, the state of the CMK and the scheduled deletion time do not change after you call this operation. If the CMK is not in the PendingDeletion state, the state of the CMK changes to PendingImport after you call this operation.
       * After you delete the key material, you can upload only the same key material into the CMK.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DeleteKeyMaterialRequest
       * @return DeleteKeyMaterialResponse
       */
      Models::DeleteKeyMaterialResponse deleteKeyMaterial(const Models::DeleteKeyMaterialRequest &request);

      /**
       * @summary Deletes a network access rule.
       *
       * @description - For information about the access policy that is required to call this OpenAPI as a Resource Access Management (RAM) user or RAM role, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before deleting the network control rule, ensure that it is not attached to any access policies. Otherwise, related applications cannot access KMS as expected.
       *
       * @param request DeleteNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkRuleResponse
       */
      Models::DeleteNetworkRuleResponse deleteNetworkRuleWithOptions(const Models::DeleteNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network access rule.
       *
       * @description - For information about the access policy that is required to call this OpenAPI as a Resource Access Management (RAM) user or RAM role, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Before deleting the network control rule, ensure that it is not attached to any access policies. Otherwise, related applications cannot access KMS as expected.
       *
       * @param request DeleteNetworkRuleRequest
       * @return DeleteNetworkRuleResponse
       */
      Models::DeleteNetworkRuleResponse deleteNetworkRule(const Models::DeleteNetworkRuleRequest &request);

      /**
       * @summary Deletes a permission policy.
       *
       * @description Before you delete a permission policy, make sure that the permission policy is not associated with application access points (AAPs). Otherwise, related applications cannot access Key Management Service (KMS).
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission policy.
       *
       * @description Before you delete a permission policy, make sure that the permission policy is not associated with application access points (AAPs). Otherwise, related applications cannot access Key Management Service (KMS).
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes a secret.
       *
       * @description If you call this operation without specifying a recovery period, the deleted secret can be recovered within 30 days.
       * If you specify a recovery period, the deleted secret can be recovered within the recovery period. You can also forcibly delete a secret. A forcibly deleted secret cannot be recovered.
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a secret.
       *
       * @description If you call this operation without specifying a recovery period, the deleted secret can be recovered within 30 days.
       * If you specify a recovery period, the deleted secret can be recovered within the recovery period. You can also forcibly delete a secret. A forcibly deleted secret cannot be recovered.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary Queries the status of Key Management Service (KMS) within your Alibaba Cloud account.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountKmsStatusResponse
       */
      Models::DescribeAccountKmsStatusResponse describeAccountKmsStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of Key Management Service (KMS) within your Alibaba Cloud account.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @return DescribeAccountKmsStatusResponse
       */
      Models::DescribeAccountKmsStatusResponse describeAccountKmsStatus();

      /**
       * @summary Retrieves the details of an application access point (AAP).
       *
       * @description For information about the access policy that a Resource Access Management (RAM) user or RAM role must have to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationAccessPointResponse
       */
      Models::DescribeApplicationAccessPointResponse describeApplicationAccessPointWithOptions(const Models::DescribeApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an application access point (AAP).
       *
       * @description For information about the access policy that a Resource Access Management (RAM) user or RAM role must have to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeApplicationAccessPointRequest
       * @return DescribeApplicationAccessPointResponse
       */
      Models::DescribeApplicationAccessPointResponse describeApplicationAccessPoint(const Models::DescribeApplicationAccessPointRequest &request);

      /**
       * @summary Queries the metadata of a CMK, such as the key state, usage, and rotation configuration.
       *
       * @description You can query the information about the CMK `05754286-3ba2-4fa6-8d41-4323aca6****` by using parameter settings provided in this topic. The information includes the creator, creation time, status, and deletion protection status of the CMK.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyResponse
       */
      Models::DescribeKeyResponse describeKeyWithOptions(const Models::DescribeKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a CMK, such as the key state, usage, and rotation configuration.
       *
       * @description You can query the information about the CMK `05754286-3ba2-4fa6-8d41-4323aca6****` by using parameter settings provided in this topic. The information includes the creator, creation time, status, and deletion protection status of the CMK.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeKeyRequest
       * @return DescribeKeyResponse
       */
      Models::DescribeKeyResponse describeKey(const Models::DescribeKeyRequest &request);

      /**
       * @summary Queries the metadata of a specific CMK version.
       *
       * @description This topic provides an example on how to query the information about a version of the CMK `1234abcd-12ab-34cd-56ef-12345678****`. The ID of the CMK version is `2ab1a983-7072-4bbc-a582-584b5bd8****`. The response shows that the creation time of the CMK version is `2016-03-25T10:42:40Z`.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeKeyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyVersionResponse
       */
      Models::DescribeKeyVersionResponse describeKeyVersionWithOptions(const Models::DescribeKeyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a specific CMK version.
       *
       * @description This topic provides an example on how to query the information about a version of the CMK `1234abcd-12ab-34cd-56ef-12345678****`. The ID of the CMK version is `2ab1a983-7072-4bbc-a582-584b5bd8****`. The response shows that the creation time of the CMK version is `2016-03-25T10:42:40Z`.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeKeyVersionRequest
       * @return DescribeKeyVersionResponse
       */
      Models::DescribeKeyVersionResponse describeKeyVersion(const Models::DescribeKeyVersionRequest &request);

      /**
       * @summary Retrieves the details of a network access rule.
       *
       * @description For information about the required access policy for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRuleResponse
       */
      Models::DescribeNetworkRuleResponse describeNetworkRuleWithOptions(const Models::DescribeNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a network access rule.
       *
       * @description For information about the required access policy for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribeNetworkRuleRequest
       * @return DescribeNetworkRuleResponse
       */
      Models::DescribeNetworkRuleResponse describeNetworkRule(const Models::DescribeNetworkRuleRequest &request);

      /**
       * @summary Retrieves the details of a permission policy.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyResponse
       */
      Models::DescribePolicyResponse describePolicyWithOptions(const Models::DescribePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a permission policy.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request DescribePolicyRequest
       * @return DescribePolicyResponse
       */
      Models::DescribePolicyResponse describePolicy(const Models::DescribePolicyRequest &request);

      /**
       * @summary Queries the regions where KMS is available.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where KMS is available.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries the metadata of a secret.
       *
       * @description This operation returns the metadata of a secret. This operation does not return the secret value.
       * In this example, the metadata of the secret named `secret001` is queried.
       *
       * @param request DescribeSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecretWithOptions(const Models::DescribeSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a secret.
       *
       * @description This operation returns the metadata of a secret. This operation does not return the secret value.
       * In this example, the metadata of the secret named `secret001` is queried.
       *
       * @param request DescribeSecretRequest
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecret(const Models::DescribeSecretRequest &request);

      /**
       * @summary Disables a key.
       *
       * @description If a customer master key (CMK) is disabled, the ciphertext encrypted by using this CMK cannot be decrypted until you re-enable it. You can call the [EnableKey](https://help.aliyun.com/document_detail/35150.html) operation to enable the CMK.
       * In this example, the CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****` is disabled.
       *
       * @param request DisableKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableKeyResponse
       */
      Models::DisableKeyResponse disableKeyWithOptions(const Models::DisableKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a key.
       *
       * @description If a customer master key (CMK) is disabled, the ciphertext encrypted by using this CMK cannot be decrypted until you re-enable it. You can call the [EnableKey](https://help.aliyun.com/document_detail/35150.html) operation to enable the CMK.
       * In this example, the CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****` is disabled.
       *
       * @param request DisableKeyRequest
       * @return DisableKeyResponse
       */
      Models::DisableKeyResponse disableKey(const Models::DisableKeyRequest &request);

      /**
       * @summary Enables a key to encrypt and decrypt data.
       *
       * @param request EnableKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableKeyResponse
       */
      Models::EnableKeyResponse enableKeyWithOptions(const Models::EnableKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a key to encrypt and decrypt data.
       *
       * @param request EnableKeyRequest
       * @return EnableKeyResponse
       */
      Models::EnableKeyResponse enableKey(const Models::EnableKeyRequest &request);

      /**
       * @summary Encrypts plaintext by using a symmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required to allow a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To use this method, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - When accessed through a shared gateway, the queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, requests are throttled, which can affect your business. We recommend that you stay within this limit to avoid throttling.
       * - When accessed through a dedicated gateway, the QPS limit for a single user is subject to the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * - KMS encrypts the specified data using the primary version of a specified key.
       * - You can encrypt a maximum of 6 KB of data, such as an RSA key, a database password, or other sensitive information.
       * - If you migrate encrypted data from one region to another, you can call the Encrypt operation in the destination region to re-encrypt the plaintext data key from the source region. This generates a new encrypted data key. You can then call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt this new key in the destination region.
       *
       * @param tmpReq EncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptResponse
       */
      Models::EncryptResponse encryptWithOptions(const Models::EncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts plaintext by using a symmetric CMK.
       *
       * @description ### Precautions
       * - For information about the access policy required to allow a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To use this method, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - When accessed through a shared gateway, the queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, requests are throttled, which can affect your business. We recommend that you stay within this limit to avoid throttling.
       * - When accessed through a dedicated gateway, the QPS limit for a single user is subject to the computing performance specifications of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * - KMS encrypts the specified data using the primary version of a specified key.
       * - You can encrypt a maximum of 6 KB of data, such as an RSA key, a database password, or other sensitive information.
       * - If you migrate encrypted data from one region to another, you can call the Encrypt operation in the destination region to re-encrypt the plaintext data key from the source region. This generates a new encrypted data key. You can then call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt this new key in the destination region.
       *
       * @param request EncryptRequest
       * @return EncryptResponse
       */
      Models::EncryptResponse encrypt(const Models::EncryptRequest &request);

      /**
       * @summary Exports a data key encrypted by a CMK. The data key is re-encrypted by a public key that you specify for secure transmission.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS using the public endpoint or a VPC endpoint. To use the public endpoint, you must first enable it. For more information, see [Access the key in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of the KMS instance: `<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`.
       * ### Description
       * After you call the [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html) operation to obtain a data key encrypted by a master key (CMK), you can use the ExportDataKey operation to distribute the data key to other regions or cryptographic modules. The ExportDataKey operation returns the ciphertext of the data key, re-encrypted with the specified public key.
       * You can import the exported ciphertext into the cryptographic module that holds the corresponding private key. This process lets you securely distribute the data key from KMS to a cryptographic module. After the data key is imported into the cryptographic module, you can use it to encrypt or decrypt data.
       *
       * @param tmpReq ExportDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDataKeyResponse
       */
      Models::ExportDataKeyResponse exportDataKeyWithOptions(const Models::ExportDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a data key encrypted by a CMK. The data key is re-encrypted by a public key that you specify for secure transmission.
       *
       * @description ### Precautions
       * - For information about the access policy required for a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS using the public endpoint or a VPC endpoint. To use the public endpoint, you must first enable it. For more information, see [Access the key in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of the KMS instance: `<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`.
       * ### Description
       * After you call the [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html) operation to obtain a data key encrypted by a master key (CMK), you can use the ExportDataKey operation to distribute the data key to other regions or cryptographic modules. The ExportDataKey operation returns the ciphertext of the data key, re-encrypted with the specified public key.
       * You can import the exported ciphertext into the cryptographic module that holds the corresponding private key. This process lets you securely distribute the data key from KMS to a cryptographic module. After the data key is imported into the cryptographic module, you can use it to encrypt or decrypt data.
       *
       * @param request ExportDataKeyRequest
       * @return ExportDataKeyResponse
       */
      Models::ExportDataKeyResponse exportDataKey(const Models::ExportDataKeyRequest &request);

      /**
       * @summary Generates a random data key, encrypts it by using a CMK and a public key that you specify, and returns both ciphertexts.
       *
       * @description ### Notes
       * - For more information about the access policy required for a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable Internet access. For more information, see [Access KMS instances over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### Description
       * We recommend that you import the data key to a cryptographic module for data encryption and data decryption as follows:
       * 1\\. Call the GenerateAndExportDataKey operation to obtain the data key encrypted by a KMS key and a specified public key.
       * 2\\. Save the ciphertext of the data key that is encrypted by the KMS key to KMS or a storage service, such as ApsaraDB, for key backup and recovery.
       * 3\\. Import the ciphertext of the data key that is encrypted by the public key to the cryptographic module that contains the corresponding private key. This process distributes the key from KMS to the cryptographic module. You can then use the data key to encrypt and decrypt data.
       * > The KMS key that you specify in the request is used only to encrypt the data key and is not used to generate the data key. KMS does not record or store the randomly generated data key. You are responsible for recording the data key or its ciphertext.
       *
       * @param tmpReq GenerateAndExportDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAndExportDataKeyResponse
       */
      Models::GenerateAndExportDataKeyResponse generateAndExportDataKeyWithOptions(const Models::GenerateAndExportDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random data key, encrypts it by using a CMK and a public key that you specify, and returns both ciphertexts.
       *
       * @description ### Notes
       * - For more information about the access policy required for a RAM user or RAM role to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable Internet access. For more information, see [Access KMS instances over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### Description
       * We recommend that you import the data key to a cryptographic module for data encryption and data decryption as follows:
       * 1\\. Call the GenerateAndExportDataKey operation to obtain the data key encrypted by a KMS key and a specified public key.
       * 2\\. Save the ciphertext of the data key that is encrypted by the KMS key to KMS or a storage service, such as ApsaraDB, for key backup and recovery.
       * 3\\. Import the ciphertext of the data key that is encrypted by the public key to the cryptographic module that contains the corresponding private key. This process distributes the key from KMS to the cryptographic module. You can then use the data key to encrypt and decrypt data.
       * > The KMS key that you specify in the request is used only to encrypt the data key and is not used to generate the data key. KMS does not record or store the randomly generated data key. You are responsible for recording the data key or its ciphertext.
       *
       * @param request GenerateAndExportDataKeyRequest
       * @return GenerateAndExportDataKeyResponse
       */
      Models::GenerateAndExportDataKeyResponse generateAndExportDataKey(const Models::GenerateAndExportDataKeyRequest &request);

      /**
       * @summary Generates a random data key for envelope encryption. The data key is returned in both plaintext and ciphertext forms.
       *
       * @description - For information about the permissions that are required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called using a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway to call this operation, the queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       * - If you use a dedicated gateway to call this operation, the QPS limit for a single user is based on the computing performance of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation generates a random data key, encrypts the data key using the specified customer master key (CMK), and returns the plaintext and ciphertext of the data key. You can use the plaintext of the data key to encrypt data locally and outside of KMS. When you store the encrypted data, you must also store the ciphertext of the data key. You can obtain the plaintext of the data key from the Plaintext field and the ciphertext of the data key from the CiphertextBlob field in the response.
       * The CMK that you specify in the request is used only to encrypt the data key. It is not involved in the generation of the data key. KMS does not record or store the randomly generated data key. You are responsible for the persistence of the ciphertext of the data key.
       * We recommend that you perform the following steps to encrypt data locally:
       * 1\\. Call the GenerateDataKey operation to obtain a data key for data encryption.
       * 2\\. Use the plaintext of the data key returned in the Plaintext field of the response to encrypt data locally. Then, clear the plaintext of the data key from memory.
       * 3\\. Store the ciphertext of the data key returned in the CiphertextBlob field of the response together with the encrypted data.
       * To decrypt data locally:
       * - Call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the stored ciphertext of the data key. This operation returns the plaintext of the data key.
       * - Use the plaintext of the data key to decrypt data locally. Then, clear the plaintext of the data key from memory.
       * This topic provides an example of how to generate a random data key for a key with the ID `key-hzz630494463ejqjx****`.
       *
       * @param tmpReq GenerateDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDataKeyResponse
       */
      Models::GenerateDataKeyResponse generateDataKeyWithOptions(const Models::GenerateDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random data key for envelope encryption. The data key is returned in both plaintext and ciphertext forms.
       *
       * @description - For information about the permissions that are required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation can be called using a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or a VPC. To access KMS over the Internet, you must enable the public endpoint. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - If you use a shared gateway to call this operation, the queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       * - If you use a dedicated gateway to call this operation, the QPS limit for a single user is based on the computing performance of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Description
       * This operation generates a random data key, encrypts the data key using the specified customer master key (CMK), and returns the plaintext and ciphertext of the data key. You can use the plaintext of the data key to encrypt data locally and outside of KMS. When you store the encrypted data, you must also store the ciphertext of the data key. You can obtain the plaintext of the data key from the Plaintext field and the ciphertext of the data key from the CiphertextBlob field in the response.
       * The CMK that you specify in the request is used only to encrypt the data key. It is not involved in the generation of the data key. KMS does not record or store the randomly generated data key. You are responsible for the persistence of the ciphertext of the data key.
       * We recommend that you perform the following steps to encrypt data locally:
       * 1\\. Call the GenerateDataKey operation to obtain a data key for data encryption.
       * 2\\. Use the plaintext of the data key returned in the Plaintext field of the response to encrypt data locally. Then, clear the plaintext of the data key from memory.
       * 3\\. Store the ciphertext of the data key returned in the CiphertextBlob field of the response together with the encrypted data.
       * To decrypt data locally:
       * - Call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the stored ciphertext of the data key. This operation returns the plaintext of the data key.
       * - Use the plaintext of the data key to decrypt data locally. Then, clear the plaintext of the data key from memory.
       * This topic provides an example of how to generate a random data key for a key with the ID `key-hzz630494463ejqjx****`.
       *
       * @param request GenerateDataKeyRequest
       * @return GenerateDataKeyResponse
       */
      Models::GenerateDataKeyResponse generateDataKey(const Models::GenerateDataKeyRequest &request);

      /**
       * @summary Generates a random data key in only ciphertext form, without the plaintext copy.
       *
       * @description ### Precautions
       * - For information about the access policy that a RAM user or RAM role needs to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: Access KMS over the Internet or through a VPC domain name. This method requires Internet access to be enabled. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: Access KMS through a KMS private endpoint (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Calls through a shared gateway: The queries per second (QPS) limit for a single user is 1,000. If you exceed this limit, requests are throttled, which may affect your business. We recommend that you stay within this limit.
       * - Calls through a dedicated gateway: The QPS limit for a single user depends on the computing performance of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Details
       * This operation generates a random data key, encrypts it with a specified symmetric customer master key (CMK), and returns the ciphertext of the data key. This operation provides the same features as [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html). The only difference is that this operation does not return the plaintext of the data key.
       * The CMK that you specify in the request is used only to encrypt the data key. It is not used to generate the data key. KMS does not record or store the randomly generated data key.
       * > - This operation is suitable for systems that do not need to immediately use the data key for data encryption. When encryption is required, the system calls the [Decrypt](https://help.aliyun.com/document_detail/28950.html) API to decrypt the ciphertext of the data key.
       * >
       * > - This operation is also suitable for distributed systems with different trust levels. For example, your system stores data in different partitions based on a defined policy. A module pre-creates these data partitions and generates a unique data key for each one. After this module initializes the control plane, it acts as a key distributor and does not produce or consume data. When data plane modules produce and consume data, they first retrieve the ciphertext of the data key for a partition. They then decrypt the ciphertext and use the plaintext data key to encrypt or decrypt data. Finally, they purge the plaintext data key from memory. In such a system, the key distributor does not need to access the plaintext of the data key. It only requires the \\`GenerateDataKeyWithoutPlaintext\\` permission for the relevant CMK. Data producers and consumers do not need to generate new data keys. They only require the \\`Decrypt\\` permission for the relevant CMK.
       *
       * @param tmpReq GenerateDataKeyWithoutPlaintextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDataKeyWithoutPlaintextResponse
       */
      Models::GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintextWithOptions(const Models::GenerateDataKeyWithoutPlaintextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random data key in only ciphertext form, without the plaintext copy.
       *
       * @description ### Precautions
       * - For information about the access policy that a RAM user or RAM role needs to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible through a shared gateway or a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: Access KMS over the Internet or through a VPC domain name. This method requires Internet access to be enabled. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: Access KMS through a KMS private endpoint (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       * ### QPS limits
       * - Calls through a shared gateway: The queries per second (QPS) limit for a single user is 1,000. If you exceed this limit, requests are throttled, which may affect your business. We recommend that you stay within this limit.
       * - Calls through a dedicated gateway: The QPS limit for a single user depends on the computing performance of your KMS instance. For more information, see [Performance metrics](https://help.aliyun.com/document_detail/480120.html).
       * ### Details
       * This operation generates a random data key, encrypts it with a specified symmetric customer master key (CMK), and returns the ciphertext of the data key. This operation provides the same features as [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html). The only difference is that this operation does not return the plaintext of the data key.
       * The CMK that you specify in the request is used only to encrypt the data key. It is not used to generate the data key. KMS does not record or store the randomly generated data key.
       * > - This operation is suitable for systems that do not need to immediately use the data key for data encryption. When encryption is required, the system calls the [Decrypt](https://help.aliyun.com/document_detail/28950.html) API to decrypt the ciphertext of the data key.
       * >
       * > - This operation is also suitable for distributed systems with different trust levels. For example, your system stores data in different partitions based on a defined policy. A module pre-creates these data partitions and generates a unique data key for each one. After this module initializes the control plane, it acts as a key distributor and does not produce or consume data. When data plane modules produce and consume data, they first retrieve the ciphertext of the data key for a partition. They then decrypt the ciphertext and use the plaintext data key to encrypt or decrypt data. Finally, they purge the plaintext data key from memory. In such a system, the key distributor does not need to access the plaintext of the data key. It only requires the \\`GenerateDataKeyWithoutPlaintext\\` permission for the relevant CMK. Data producers and consumers do not need to generate new data keys. They only require the \\`Decrypt\\` permission for the relevant CMK.
       *
       * @param request GenerateDataKeyWithoutPlaintextRequest
       * @return GenerateDataKeyWithoutPlaintextResponse
       */
      Models::GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintext(const Models::GenerateDataKeyWithoutPlaintextRequest &request);

      /**
       * @summary Generates an HMAC message authentication code for a message by using a specified key.
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through a shared gateway or a dedicated gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through a public or VPC endpoint. This method requires you to enable the public network access switch. For more information, refer to accessing keys in a KMS instance over the Internet.
       * - Dedicated gateway: Access KMS through a KMS private endpoint (<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com).
       *
       * @param request GenerateMacRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateMacResponse
       */
      Models::GenerateMacResponse generateMacWithOptions(const Models::GenerateMacRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an HMAC message authentication code for a message by using a specified key.
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through a shared gateway or a dedicated gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through a public or VPC endpoint. This method requires you to enable the public network access switch. For more information, refer to accessing keys in a KMS instance over the Internet.
       * - Dedicated gateway: Access KMS through a KMS private endpoint (<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com).
       *
       * @param request GenerateMacRequest
       * @return GenerateMacResponse
       */
      Models::GenerateMacResponse generateMac(const Models::GenerateMacRequest &request);

      /**
       * @summary Retrieves information about a client key.
       *
       * @description For information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request GetClientKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientKeyResponse
       */
      Models::GetClientKeyResponse getClientKeyWithOptions(const Models::GetClientKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a client key.
       *
       * @description For information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request GetClientKeyRequest
       * @return GetClientKeyResponse
       */
      Models::GetClientKeyResponse getClientKey(const Models::GetClientKeyRequest &request);

      /**
       * @summary Queries the default KMS instance in a specified region.
       *
       * @description - For information about the access policy that is required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This API is for users who migrate from KMS 1.0 to KMS 3.0. After the migration is complete, if you create an Asset without specifying a KMS instance, the Asset is created in the default KMS instance.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultKmsInstanceResponse
       */
      Models::GetDefaultKmsInstanceResponse getDefaultKmsInstanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default KMS instance in a specified region.
       *
       * @description - For information about the access policy that is required to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This API is for users who migrate from KMS 1.0 to KMS 3.0. After the migration is complete, if you create an Asset without specifying a KMS instance, the Asset is created in the default KMS instance.
       *
       * @return GetDefaultKmsInstanceResponse
       */
      Models::GetDefaultKmsInstanceResponse getDefaultKmsInstance();

      /**
       * @summary Queries the key policy of a CMK in a KMS instance.
       *
       * @description - For more information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Because the key policy name can only be set to default, you must set the PolicyName parameter to default when you query the key policy. Otherwise, a `Not Found` error is returned.
       *
       * @param request GetKeyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeyPolicyResponse
       */
      Models::GetKeyPolicyResponse getKeyPolicyWithOptions(const Models::GetKeyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the key policy of a CMK in a KMS instance.
       *
       * @description - For more information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Because the key policy name can only be set to default, you must set the PolicyName parameter to default when you query the key policy. Otherwise, a `Not Found` error is returned.
       *
       * @param request GetKeyPolicyRequest
       * @return GetKeyPolicyResponse
       */
      Models::GetKeyPolicyResponse getKeyPolicy(const Models::GetKeyPolicyRequest &request);

      /**
       * @summary Retrieves the details of a KMS instance.
       *
       * @description Refer to [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html) for the access policy required to call this OpenAPI as a RAM user or RAM role.
       *
       * @param request GetKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKmsInstanceResponse
       */
      Models::GetKmsInstanceResponse getKmsInstanceWithOptions(const Models::GetKmsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a KMS instance.
       *
       * @description Refer to [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html) for the access policy required to call this OpenAPI as a RAM user or RAM role.
       *
       * @param request GetKmsInstanceRequest
       * @return GetKmsInstanceResponse
       */
      Models::GetKmsInstanceResponse getKmsInstance(const Models::GetKmsInstanceRequest &request);

      /**
       * @summary Queries the quota usage and limits for a KMS instance.
       *
       * @param request GetKmsInstanceQuotaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKmsInstanceQuotaInfosResponse
       */
      Models::GetKmsInstanceQuotaInfosResponse getKmsInstanceQuotaInfosWithOptions(const Models::GetKmsInstanceQuotaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota usage and limits for a KMS instance.
       *
       * @param request GetKmsInstanceQuotaInfosRequest
       * @return GetKmsInstanceQuotaInfosResponse
       */
      Models::GetKmsInstanceQuotaInfosResponse getKmsInstanceQuotaInfos(const Models::GetKmsInstanceQuotaInfosRequest &request);

      /**
       * @summary Retrieves the plaintext of a managed data key (DK).
       *
       * @description For information about the access policy that must be granted to a RAM user or RAM role to call this operation, refer to access control.
       * This operation can be called through a shared gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through public or VPC endpoints.
       *
       * @param request GetManagedDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedDataKeyResponse
       */
      Models::GetManagedDataKeyResponse getManagedDataKeyWithOptions(const Models::GetManagedDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the plaintext of a managed data key (DK).
       *
       * @description For information about the access policy that must be granted to a RAM user or RAM role to call this operation, refer to access control.
       * This operation can be called through a shared gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through public or VPC endpoints.
       *
       * @param request GetManagedDataKeyRequest
       * @return GetManagedDataKeyResponse
       */
      Models::GetManagedDataKeyResponse getManagedDataKey(const Models::GetManagedDataKeyRequest &request);

      /**
       * @summary Queries the parameters that are used to import key material for a customer master key (CMK).
       *
       * @description The returned parameters can be used to call the [ImportKeyMaterial](https://www.alibabacloud.com/help/en/key-management-service/latest/importkeymaterial) operation.
       * - You can import key material only for CMKs whose Origin parameter is set to EXTERNAL.
       * - The public key and token that are returned by the GetParametersForImport operation must be used together. The public key and token can be used to import key material only for the CMK that is specified when you call the operation.
       * - The public key and token that are returned vary each time you call the GetParametersForImport operation.
       * - You must specify the type of the public key and the encryption algorithm that are used to encrypt key material. The following table lists the types of public keys and the encryption algorithms allowed for each type.   
       * | Public key type | Encryption algorithm | Description |
       * | --------------- | -------------------- | ----------- |
       * | RSA_2048 | RSAES_PKCS1_V1_5 
       * RSAES_OAEP_SHA_1 
       * RSAES_OAEP_SHA_256 | CMKs of all regions and all protection levels are supported. 
       * Dedicated Key Management Service (KMS) does not support RSAES_OAEP_SHA_1. |
       * | EC_SM2 | SM2PKE | CMKs whose ProtectionLevel is set to HSM are supported. The SM2 algorithm is developed and approved by the State Cryptography Administration of China. The SM2 algorithm can be used only to import key material for a CMK whose ProtectionLevel is set to HSM. You can use the SM2 algorithm only when you enable the Managed HSM feature for KMS in the Chinese mainland. For more information, see [Overview of Managed HSM](https://www.alibabacloud.com/help/en/key-management-service/latest/managed-hsm-overview). |
       * For more information, see [Import key material](https://www.alibabacloud.com/help/en/key-management-service/latest/import-key-material). This topic provides an example on how to query the parameters that are used to import key material for a CMK. The ID of the CMK is `1234abcd-12ab-34cd-56ef-12345678****`, the encryption algorithm is `RSAES_PKCS1_V1_5`, and the public key is of the `RSA_2048` type. The parameters that are returned include the ID of the CMK, the public key that is used to encrypt the key material, the token that is used to import the key material, and the time when the token expires.
       *
       * @param request GetParametersForImportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParametersForImportResponse
       */
      Models::GetParametersForImportResponse getParametersForImportWithOptions(const Models::GetParametersForImportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters that are used to import key material for a customer master key (CMK).
       *
       * @description The returned parameters can be used to call the [ImportKeyMaterial](https://www.alibabacloud.com/help/en/key-management-service/latest/importkeymaterial) operation.
       * - You can import key material only for CMKs whose Origin parameter is set to EXTERNAL.
       * - The public key and token that are returned by the GetParametersForImport operation must be used together. The public key and token can be used to import key material only for the CMK that is specified when you call the operation.
       * - The public key and token that are returned vary each time you call the GetParametersForImport operation.
       * - You must specify the type of the public key and the encryption algorithm that are used to encrypt key material. The following table lists the types of public keys and the encryption algorithms allowed for each type.   
       * | Public key type | Encryption algorithm | Description |
       * | --------------- | -------------------- | ----------- |
       * | RSA_2048 | RSAES_PKCS1_V1_5 
       * RSAES_OAEP_SHA_1 
       * RSAES_OAEP_SHA_256 | CMKs of all regions and all protection levels are supported. 
       * Dedicated Key Management Service (KMS) does not support RSAES_OAEP_SHA_1. |
       * | EC_SM2 | SM2PKE | CMKs whose ProtectionLevel is set to HSM are supported. The SM2 algorithm is developed and approved by the State Cryptography Administration of China. The SM2 algorithm can be used only to import key material for a CMK whose ProtectionLevel is set to HSM. You can use the SM2 algorithm only when you enable the Managed HSM feature for KMS in the Chinese mainland. For more information, see [Overview of Managed HSM](https://www.alibabacloud.com/help/en/key-management-service/latest/managed-hsm-overview). |
       * For more information, see [Import key material](https://www.alibabacloud.com/help/en/key-management-service/latest/import-key-material). This topic provides an example on how to query the parameters that are used to import key material for a CMK. The ID of the CMK is `1234abcd-12ab-34cd-56ef-12345678****`, the encryption algorithm is `RSAES_PKCS1_V1_5`, and the public key is of the `RSA_2048` type. The parameters that are returned include the ID of the CMK, the public key that is used to encrypt the key material, the token that is used to import the key material, and the time when the token expires.
       *
       * @param request GetParametersForImportRequest
       * @return GetParametersForImportResponse
       */
      Models::GetParametersForImportResponse getParametersForImport(const Models::GetParametersForImportRequest &request);

      /**
       * @summary Retrieves the public key of an asymmetric key. You can use the public key to encrypt data or verify a signature on your device.
       *
       * @description - For more information about the access policy required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports both shared gateways and dedicated gateways. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. If you access KMS over the Internet, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       *
       * @param request GetPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKeyWithOptions(const Models::GetPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the public key of an asymmetric key. You can use the public key to encrypt data or verify a signature on your device.
       *
       * @description - For more information about the access policy required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports both shared gateways and dedicated gateways. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   - Shared gateway: You can access KMS over the Internet or using a VPC domain name. If you access KMS over the Internet, you must enable Internet access. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       *   - Dedicated gateway: You can access KMS using the private endpoint of KMS (`<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com`).
       *
       * @param request GetPublicKeyRequest
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKey(const Models::GetPublicKeyRequest &request);

      /**
       * @summary Generates a random password string.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request GetRandomPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRandomPasswordResponse
       */
      Models::GetRandomPasswordResponse getRandomPasswordWithOptions(const Models::GetRandomPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random password string.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request GetRandomPasswordRequest
       * @return GetRandomPasswordResponse
       */
      Models::GetRandomPasswordResponse getRandomPassword(const Models::GetRandomPasswordRequest &request);

      /**
       * @summary Queries the access policy of a specified secret in a KMS instance.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - A credential policy name can be set only to default. Therefore, you must set the PolicyName parameter to default when you query the credential policy. Otherwise, a `Not Found` error is returned.
       *
       * @param request GetSecretPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretPolicyResponse
       */
      Models::GetSecretPolicyResponse getSecretPolicyWithOptions(const Models::GetSecretPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access policy of a specified secret in a KMS instance.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - A credential policy name can be set only to default. Therefore, you must set the PolicyName parameter to default when you query the credential policy. Otherwise, a `Not Found` error is returned.
       *
       * @param request GetSecretPolicyRequest
       * @return GetSecretPolicyResponse
       */
      Models::GetSecretPolicyResponse getSecretPolicy(const Models::GetSecretPolicyRequest &request);

      /**
       * @summary Retrieve the credential value.
       *
       * @description - For details about the access policy that must be granted to a Resource Access Management (RAM) user or RAM role to invoke this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - If you do not specify a version number or version status, Key Management Service (KMS) returns the credential value of the version marked as ACSCurrent by default.
       * - If a customer-managed key is used to protect the credential value, the caller must also have the `kms:Decrypt` permission on the corresponding master key.
       * This topic provides a sample request to retrieve the credential value of a credential named `secret001`. The returned result shows that the credential value `SecretData` is `testdata1`.
       *
       * @param request GetSecretValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValueWithOptions(const Models::GetSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the credential value.
       *
       * @description - For details about the access policy that must be granted to a Resource Access Management (RAM) user or RAM role to invoke this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - If you do not specify a version number or version status, Key Management Service (KMS) returns the credential value of the version marked as ACSCurrent by default.
       * - If a customer-managed key is used to protect the credential value, the caller must also have the `kms:Decrypt` permission on the corresponding master key.
       * This topic provides a sample request to retrieve the credential value of a credential named `secret001`. The returned result shows that the credential value `SecretData` is `testdata1`.
       *
       * @param request GetSecretValueRequest
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValue(const Models::GetSecretValueRequest &request);

      /**
       * @summary Imports externally generated key material into a CMK whose origin is EXTERNAL.
       *
       * @description When you call [CreateKey](https://help.aliyun.com/document_detail/28947.html) to create a CMK, you can set **Origin** to **EXTERNAL** to specify that the key material comes from an external source. Use this operation to import the key material into such a CMK.
       * - To view the CMK **Origin**, see [DescribeKey](https://help.aliyun.com/document_detail/28952.html).
       * - Before importing key material, call [GetParametersForImport](https://help.aliyun.com/document_detail/68621.html) to obtain the parameters required for the import, including the public key and import token.
       * > * For a CMK of type **Aliyun_AES_256**, the key material must be 256 bits. For a CMK of type **Aliyun_SM4**, the key material must be 128 bits.
       * >
       * > * You can set the expiration time for the key material, or you can set it to never expire.
       * >
       * > * You can reimport the key material and reset the expiration time for the specified CMK at any time, but the same key material must be imported.
       * >
       * > * After the imported key material expires or is deleted, the specified CMK becomes unavailable until the same key material is imported again.
       * >
       * > * The same key material can be imported into multiple CMKs, but data or data keys encrypted by one CMK cannot be decrypted by another CMK.
       * For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ImportKeyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyMaterialResponse
       */
      Models::ImportKeyMaterialResponse importKeyMaterialWithOptions(const Models::ImportKeyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports externally generated key material into a CMK whose origin is EXTERNAL.
       *
       * @description When you call [CreateKey](https://help.aliyun.com/document_detail/28947.html) to create a CMK, you can set **Origin** to **EXTERNAL** to specify that the key material comes from an external source. Use this operation to import the key material into such a CMK.
       * - To view the CMK **Origin**, see [DescribeKey](https://help.aliyun.com/document_detail/28952.html).
       * - Before importing key material, call [GetParametersForImport](https://help.aliyun.com/document_detail/68621.html) to obtain the parameters required for the import, including the public key and import token.
       * > * For a CMK of type **Aliyun_AES_256**, the key material must be 256 bits. For a CMK of type **Aliyun_SM4**, the key material must be 128 bits.
       * >
       * > * You can set the expiration time for the key material, or you can set it to never expire.
       * >
       * > * You can reimport the key material and reset the expiration time for the specified CMK at any time, but the same key material must be imported.
       * >
       * > * After the imported key material expires or is deleted, the specified CMK becomes unavailable until the same key material is imported again.
       * >
       * > * The same key material can be imported into multiple CMKs, but data or data keys encrypted by one CMK cannot be decrypted by another CMK.
       * For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ImportKeyMaterialRequest
       * @return ImportKeyMaterialResponse
       */
      Models::ImportKeyMaterialResponse importKeyMaterial(const Models::ImportKeyMaterialRequest &request);

      /**
       * @summary Queries all aliases in the current region for the current account.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListAliasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliasesWithOptions(const Models::ListAliasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all aliases in the current region for the current account.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListAliasesRequest
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliases(const Models::ListAliasesRequest &request);

      /**
       * @summary Queries all aliases that are bound to a key.
       *
       * @param request ListAliasesByKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesByKeyIdResponse
       */
      Models::ListAliasesByKeyIdResponse listAliasesByKeyIdWithOptions(const Models::ListAliasesByKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all aliases that are bound to a key.
       *
       * @param request ListAliasesByKeyIdRequest
       * @return ListAliasesByKeyIdResponse
       */
      Models::ListAliasesByKeyIdResponse listAliasesByKeyId(const Models::ListAliasesByKeyIdRequest &request);

      /**
       * @summary Queries all application access points (AAPs) in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListApplicationAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccessPointsResponse
       */
      Models::ListApplicationAccessPointsResponse listApplicationAccessPointsWithOptions(const Models::ListApplicationAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all application access points (AAPs) in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListApplicationAccessPointsRequest
       * @return ListApplicationAccessPointsResponse
       */
      Models::ListApplicationAccessPointsResponse listApplicationAccessPoints(const Models::ListApplicationAccessPointsRequest &request);

      /**
       * @summary Queries all client keys within an AAP.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListClientKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientKeysResponse
       */
      Models::ListClientKeysResponse listClientKeysWithOptions(const Models::ListClientKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all client keys within an AAP.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListClientKeysRequest
       * @return ListClientKeysResponse
       */
      Models::ListClientKeysResponse listClientKeys(const Models::ListClientKeysRequest &request);

      /**
       * @summary Queries all versions of a specified CMK.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKeyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeyVersionsResponse
       */
      Models::ListKeyVersionsResponse listKeyVersionsWithOptions(const Models::ListKeyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all versions of a specified CMK.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKeyVersionsRequest
       * @return ListKeyVersionsResponse
       */
      Models::ListKeyVersionsResponse listKeyVersions(const Models::ListKeyVersionsRequest &request);

      /**
       * @summary Queries the IDs and ARNs of all CMKs in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeysResponse
       */
      Models::ListKeysResponse listKeysWithOptions(const Models::ListKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs and ARNs of all CMKs in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKeysRequest
       * @return ListKeysResponse
       */
      Models::ListKeysResponse listKeys(const Models::ListKeysRequest &request);

      /**
       * @summary Queries all KMS instances in the current region.
       *
       * @description For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKmsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKmsInstancesResponse
       */
      Models::ListKmsInstancesResponse listKmsInstancesWithOptions(const Models::ListKmsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all KMS instances in the current region.
       *
       * @description For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListKmsInstancesRequest
       * @return ListKmsInstancesResponse
       */
      Models::ListKmsInstancesResponse listKmsInstances(const Models::ListKmsInstancesRequest &request);

      /**
       * @summary Lists the key versions of a specified managed data key (DK).
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through the shared gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through public or VPC endpoints.
       *
       * @param request ListManagedDataKeyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedDataKeyVersionsResponse
       */
      Models::ListManagedDataKeyVersionsResponse listManagedDataKeyVersionsWithOptions(const Models::ListManagedDataKeyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the key versions of a specified managed data key (DK).
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through the shared gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through public or VPC endpoints.
       *
       * @param request ListManagedDataKeyVersionsRequest
       * @return ListManagedDataKeyVersionsResponse
       */
      Models::ListManagedDataKeyVersionsResponse listManagedDataKeyVersions(const Models::ListManagedDataKeyVersionsRequest &request);

      /**
       * @summary Queries all network access rules in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkRulesResponse
       */
      Models::ListNetworkRulesResponse listNetworkRulesWithOptions(const Models::ListNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all network access rules in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListNetworkRulesRequest
       * @return ListNetworkRulesResponse
       */
      Models::ListNetworkRulesResponse listNetworkRules(const Models::ListNetworkRulesRequest &request);

      /**
       * @summary Queries all permission policies in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all permission policies in the current region.
       *
       * @description For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Queries the tags of a customer master key (CMK).
       *
       * @description Request format: KeyId="string"
       *
       * @param request ListResourceTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTagsWithOptions(const Models::ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of a customer master key (CMK).
       *
       * @description Request format: KeyId="string"
       *
       * @param request ListResourceTagsRequest
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTags(const Models::ListResourceTagsRequest &request);

      /**
       * @summary Queries all version IDs and stage labels of a specified secret.
       *
       * @description - For more information about the access policy required for a RAM user or RAM role to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - The version information does not include the secret value. By default, this operation returns only the secret versions that are marked with a version stage.
       *
       * @param request ListSecretVersionIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretVersionIdsResponse
       */
      Models::ListSecretVersionIdsResponse listSecretVersionIdsWithOptions(const Models::ListSecretVersionIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all version IDs and stage labels of a specified secret.
       *
       * @description - For more information about the access policy required for a RAM user or RAM role to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - The version information does not include the secret value. By default, this operation returns only the secret versions that are marked with a version stage.
       *
       * @param request ListSecretVersionIdsRequest
       * @return ListSecretVersionIdsResponse
       */
      Models::ListSecretVersionIdsResponse listSecretVersionIds(const Models::ListSecretVersionIdsRequest &request);

      /**
       * @summary Queries all secrets in the current region.
       *
       * @description - To call this operation, the RAM user or RAM role must be granted the required policy. For more information, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation returns only secret metadata, not the secret values.
       * This example shows how to query secrets created by the current user in the current region. `PageNumber` is set to `1` and `PageSize` is set to `2`, returning metadata for two secrets.
       *
       * @param request ListSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all secrets in the current region.
       *
       * @description - To call this operation, the RAM user or RAM role must be granted the required policy. For more information, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation returns only secret metadata, not the secret values.
       * This example shows how to query secrets created by the current user in the current region. `PageNumber` is set to `1` and `PageSize` is set to `2`, returning metadata for two secrets.
       *
       * @param request ListSecretsRequest
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecrets(const Models::ListSecretsRequest &request);

      /**
       * @summary Lists the tags that are bound to a key or a secret.
       *
       * @description For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tags that are bound to a key or a secret.
       *
       * @description For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Activates Key Management Service (KMS) for your Alibaba Cloud account.
       *
       * @description - For more information about the access policies that a RAM user or RAM role needs to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - KMS is a paid service. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52608.html).
       * - You can activate the service for an Alibaba Cloud account only once.
       * - Make sure that your Alibaba Cloud account has completed real-name verification.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenKmsServiceResponse
       */
      Models::OpenKmsServiceResponse openKmsServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Key Management Service (KMS) for your Alibaba Cloud account.
       *
       * @description - For more information about the access policies that a RAM user or RAM role needs to call this OpenAPI, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - KMS is a paid service. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52608.html).
       * - You can activate the service for an Alibaba Cloud account only once.
       * - Make sure that your Alibaba Cloud account has completed real-name verification.
       *
       * @return OpenKmsServiceResponse
       */
      Models::OpenKmsServiceResponse openKmsService();

      /**
       * @summary Stores a new version of a secret value for a generic secret.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports only generic secrets. Each generic secret can have a maximum of 10 versions. If the number of versions exceeds the limit, KMS deletes the earliest version.
       * - By default, the new secret value is marked with ACSCurrent, and the previous version that was marked with ACSCurrent is marked with ACSPrevious. You can specify the VersionStage parameter to overwrite this default behavior.
       * - This operation stores a new version of a secret value. You cannot use it to modify an existing version of a secret value. You must specify a version number when you store a new version. KMS processes requests based on the following rules:
       *   - If the version number does not exist in the secret, KMS creates a new version and stores the secret value.
       *   - If the version number already exists in the secret, KMS compares the secret value in the request with the stored value. If the values are the same, the request is ignored and a success message is returned. This makes the operation idempotent. If the values are different, the request is rejected.
       * This topic provides an example of how to store a new version of a secret value for the secret named `secret001`. The new version number (`VersionId`) is `v3` and the secret value (`SecretData`) is `importantdata`.
       *
       * @param request PutSecretValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutSecretValueResponse
       */
      Models::PutSecretValueResponse putSecretValueWithOptions(const Models::PutSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stores a new version of a secret value for a generic secret.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports only generic secrets. Each generic secret can have a maximum of 10 versions. If the number of versions exceeds the limit, KMS deletes the earliest version.
       * - By default, the new secret value is marked with ACSCurrent, and the previous version that was marked with ACSCurrent is marked with ACSPrevious. You can specify the VersionStage parameter to overwrite this default behavior.
       * - This operation stores a new version of a secret value. You cannot use it to modify an existing version of a secret value. You must specify a version number when you store a new version. KMS processes requests based on the following rules:
       *   - If the version number does not exist in the secret, KMS creates a new version and stores the secret value.
       *   - If the version number already exists in the secret, KMS compares the secret value in the request with the stored value. If the values are the same, the request is ignored and a success message is returned. This makes the operation idempotent. If the values are different, the request is rejected.
       * This topic provides an example of how to store a new version of a secret value for the secret named `secret001`. The new version number (`VersionId`) is `v3` and the secret value (`SecretData`) is `importantdata`.
       *
       * @param request PutSecretValueRequest
       * @return PutSecretValueResponse
       */
      Models::PutSecretValueResponse putSecretValue(const Models::PutSecretValueRequest &request);

      /**
       * @summary Re-encrypts ciphertext under a different CMK without exposing the plaintext.
       *
       * @description ### Notes
       * - For more information about the access policy required to grant a RAM user or RAM role the permission to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible only through a shared gateway, not a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   When using a shared gateway, you access KMS through an Internet or a VPC domain name. This method requires Internet access to be enabled. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       * ### QPS limits
       * This operation is accessible only through a shared gateway. The single-user queries per second (QPS) limit is 750. If this limit is exceeded, requests are throttled, which may affect your business. We recommend that you stay within the specified limit.
       * ### Details
       * You can use the ReEncrypt operation in the following scenarios:
       * - After a customer master key (CMK) is rotated, you can use the latest key version to re-encrypt data. For more information about automatic key rotation, see [Automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
       * - You can re-encrypt data by changing the encryption context without changing the master key.
       * - You can re-encrypt data or a data key that is encrypted by one master key with another master key in KMS.
       * The ReEncrypt operation requires the following permissions:
       * - The kms:ReEncryptFrom permission for the source master key.
       * - The kms:ReEncryptTo permission for the destination master key.
       * - You can use kms:ReEncrypt\\* to grant both permissions.
       *
       * @param tmpReq ReEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReEncryptResponse
       */
      Models::ReEncryptResponse reEncryptWithOptions(const Models::ReEncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-encrypts ciphertext under a different CMK without exposing the plaintext.
       *
       * @description ### Notes
       * - For more information about the access policy required to grant a RAM user or RAM role the permission to use this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation is accessible only through a shared gateway, not a dedicated gateway. For more information, see [Alibaba Cloud SDK](https://help.aliyun.com/document_detail/601559.html).
       *   When using a shared gateway, you access KMS through an Internet or a VPC domain name. This method requires Internet access to be enabled. For more information, see [Access keys in a KMS instance over the Internet](https://help.aliyun.com/document_detail/2856718.html).
       * ### QPS limits
       * This operation is accessible only through a shared gateway. The single-user queries per second (QPS) limit is 750. If this limit is exceeded, requests are throttled, which may affect your business. We recommend that you stay within the specified limit.
       * ### Details
       * You can use the ReEncrypt operation in the following scenarios:
       * - After a customer master key (CMK) is rotated, you can use the latest key version to re-encrypt data. For more information about automatic key rotation, see [Automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
       * - You can re-encrypt data by changing the encryption context without changing the master key.
       * - You can re-encrypt data or a data key that is encrypted by one master key with another master key in KMS.
       * The ReEncrypt operation requires the following permissions:
       * - The kms:ReEncryptFrom permission for the source master key.
       * - The kms:ReEncryptTo permission for the destination master key.
       * - You can use kms:ReEncrypt\\* to grant both permissions.
       *
       * @param request ReEncryptRequest
       * @return ReEncryptResponse
       */
      Models::ReEncryptResponse reEncrypt(const Models::ReEncryptRequest &request);

      /**
       * @summary Releases a pay-as-you-go KMS instance.
       *
       * @description - For information about the access policy that is required to allow a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Subscription instances cannot be manually released. You can only unsubscribe from them under specific conditions. To unsubscribe, go to the Expenses and Costs page in the console and choose Unsubscribe. For more information, see [Unsubscription policy](https://help.aliyun.com/document_detail/600418.html).
       * - After you release an instance, all resources in the instance are also released. Resources that are encrypted using keys in the instance cannot be decrypted, and credentials cannot be retrieved. Before you release an instance, make sure that no data is encrypted by the keys in the instance and no services call the credentials. This prevents service interruptions.
       * - If your instance is a software key management instance, we recommend that you back up the resources of the instance before you release it. The backed-up resources can be recovered. For more information, see [Backup management](https://help.aliyun.com/document_detail/2357488.html).
       * - The billing epoch is daily. Therefore, after you release a pay-as-you-go instance, the bill for the previous day is pushed before 12:00 on the next day.
       * - Before you release a KMS instance, we recommend that you check whether deletion protection is enabled for the instance in the console. If deletion protection is enabled, disable it in the console before you release the instance. For more information, see [Manage a KMS instance](https://help.aliyun.com/document_detail/604735.html).
       *
       * @param request ReleaseKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseKmsInstanceResponse
       */
      Models::ReleaseKmsInstanceResponse releaseKmsInstanceWithOptions(const Models::ReleaseKmsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go KMS instance.
       *
       * @description - For information about the access policy that is required to allow a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - Subscription instances cannot be manually released. You can only unsubscribe from them under specific conditions. To unsubscribe, go to the Expenses and Costs page in the console and choose Unsubscribe. For more information, see [Unsubscription policy](https://help.aliyun.com/document_detail/600418.html).
       * - After you release an instance, all resources in the instance are also released. Resources that are encrypted using keys in the instance cannot be decrypted, and credentials cannot be retrieved. Before you release an instance, make sure that no data is encrypted by the keys in the instance and no services call the credentials. This prevents service interruptions.
       * - If your instance is a software key management instance, we recommend that you back up the resources of the instance before you release it. The backed-up resources can be recovered. For more information, see [Backup management](https://help.aliyun.com/document_detail/2357488.html).
       * - The billing epoch is daily. Therefore, after you release a pay-as-you-go instance, the bill for the previous day is pushed before 12:00 on the next day.
       * - Before you release a KMS instance, we recommend that you check whether deletion protection is enabled for the instance in the console. If deletion protection is enabled, disable it in the console before you release the instance. For more information, see [Manage a KMS instance](https://help.aliyun.com/document_detail/604735.html).
       *
       * @param request ReleaseKmsInstanceRequest
       * @return ReleaseKmsInstanceResponse
       */
      Models::ReleaseKmsInstanceResponse releaseKmsInstance(const Models::ReleaseKmsInstanceRequest &request);

      /**
       * @summary Restores a deleted secret.
       *
       * @description You can only use this operation to restore a deleted secret that is within its recovery period. If you set **ForceDeleteWithoutRecovery** to **true** when you delete the secret, you cannot restore it.
       *
       * @param request RestoreSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreSecretResponse
       */
      Models::RestoreSecretResponse restoreSecretWithOptions(const Models::RestoreSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a deleted secret.
       *
       * @description You can only use this operation to restore a deleted secret that is within its recovery period. If you set **ForceDeleteWithoutRecovery** to **true** when you delete the secret, you cannot restore it.
       *
       * @param request RestoreSecretRequest
       * @return RestoreSecretResponse
       */
      Models::RestoreSecretResponse restoreSecret(const Models::RestoreSecretRequest &request);

      /**
       * @summary Immediately rotates a secret.
       *
       * @description Limits:
       * • A secret of each Alibaba Cloud account can be rotated for a maximum of 50 times per hour.
       * • The RotateSecret operation is unavailable for standard secrets.
       * In this example, the `RdsSecret/Mysql5.4/MyCred` secret is manually rotated, and the version number of the secret is set to `000000123` after the secret is rotated.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request RotateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RotateSecretResponse
       */
      Models::RotateSecretResponse rotateSecretWithOptions(const Models::RotateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Immediately rotates a secret.
       *
       * @description Limits:
       * • A secret of each Alibaba Cloud account can be rotated for a maximum of 50 times per hour.
       * • The RotateSecret operation is unavailable for standard secrets.
       * In this example, the `RdsSecret/Mysql5.4/MyCred` secret is manually rotated, and the version number of the secret is set to `000000123` after the secret is rotated.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request RotateSecretRequest
       * @return RotateSecretResponse
       */
      Models::RotateSecretResponse rotateSecret(const Models::RotateSecretRequest &request);

      /**
       * @summary Deletes a specified customer master key (CMK).
       *
       * @description During the scheduled period, the CMK is in the PendingDeletion state and cannot be used to encrypt data, decrypt data, or generate data keys.
       * After a CMK is deleted, it cannot be recovered. Data that is encrypted and data keys that are generated by using the CMK cannot be decrypted. To prevent accidental deletion of CMKs, Key Management Service (KMS) allows you to only schedule key deletion tasks. You cannot directly delete CMKs. If you want to delete a CMK, call the [DisableKey](https://help.aliyun.com/document_detail/35151.html) operation to disable the CMK.
       * When you call this operation, you must specify a scheduled period between 7 days to 366 days. The scheduled period starts from the time when you submit the request. You can call the [CancelKeyDeletion](https://help.aliyun.com/document_detail/44197.html) operation to cancel the key deletion task before the scheduled period ends.
       *
       * @param request ScheduleKeyDeletionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScheduleKeyDeletionResponse
       */
      Models::ScheduleKeyDeletionResponse scheduleKeyDeletionWithOptions(const Models::ScheduleKeyDeletionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified customer master key (CMK).
       *
       * @description During the scheduled period, the CMK is in the PendingDeletion state and cannot be used to encrypt data, decrypt data, or generate data keys.
       * After a CMK is deleted, it cannot be recovered. Data that is encrypted and data keys that are generated by using the CMK cannot be decrypted. To prevent accidental deletion of CMKs, Key Management Service (KMS) allows you to only schedule key deletion tasks. You cannot directly delete CMKs. If you want to delete a CMK, call the [DisableKey](https://help.aliyun.com/document_detail/35151.html) operation to disable the CMK.
       * When you call this operation, you must specify a scheduled period between 7 days to 366 days. The scheduled period starts from the time when you submit the request. You can call the [CancelKeyDeletion](https://help.aliyun.com/document_detail/44197.html) operation to cancel the key deletion task before the scheduled period ends.
       *
       * @param request ScheduleKeyDeletionRequest
       * @return ScheduleKeyDeletionResponse
       */
      Models::ScheduleKeyDeletionResponse scheduleKeyDeletion(const Models::ScheduleKeyDeletionRequest &request);

      /**
       * @summary Enables or disables deletion protection for a customer master key (CMK).
       *
       * @description - For details about the access policy that must be granted to a Resource Access Management (RAM) user or RAM role to invoke this operation, see [Access control](https://help.aliyun.com/document_detail/2767210.html).
       * - After you enable deletion protection for a CMK, you cannot delete the CMK. To delete the CMK, disable deletion protection first.  
       * - Before you invoke the SetDeletionProtection operation, make sure that the CMK is not in the PendingDeletion state. You can invoke the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status (KeyState) of the CMK.
       *
       * @param request SetDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtectionWithOptions(const Models::SetDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables deletion protection for a customer master key (CMK).
       *
       * @description - For details about the access policy that must be granted to a Resource Access Management (RAM) user or RAM role to invoke this operation, see [Access control](https://help.aliyun.com/document_detail/2767210.html).
       * - After you enable deletion protection for a CMK, you cannot delete the CMK. To delete the CMK, disable deletion protection first.  
       * - Before you invoke the SetDeletionProtection operation, make sure that the CMK is not in the PendingDeletion state. You can invoke the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status (KeyState) of the CMK.
       *
       * @param request SetDeletionProtectionRequest
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtection(const Models::SetDeletionProtectionRequest &request);

      /**
       * @summary Sets the key policy for a CMK in a KMS instance.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - For more information about key policies, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html).
       *
       * @param request SetKeyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetKeyPolicyResponse
       */
      Models::SetKeyPolicyResponse setKeyPolicyWithOptions(const Models::SetKeyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the key policy for a CMK in a KMS instance.
       *
       * @description - For information about the access policy required for a RAM user or RAM role to call this API operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - For more information about key policies, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html).
       *
       * @param request SetKeyPolicyRequest
       * @return SetKeyPolicyResponse
       */
      Models::SetKeyPolicyResponse setKeyPolicy(const Models::SetKeyPolicyRequest &request);

      /**
       * @summary Sets the access policy for a secret in a KMS instance.
       *
       * @description - For information about the access policy that a RAM user or RAM role requires to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - For more information about secret policies, see [Secret policy overview](https://help.aliyun.com/document_detail/2716465.html).
       *
       * @param request SetSecretPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSecretPolicyResponse
       */
      Models::SetSecretPolicyResponse setSecretPolicyWithOptions(const Models::SetSecretPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the access policy for a secret in a KMS instance.
       *
       * @description - For information about the access policy that a RAM user or RAM role requires to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - For more information about secret policies, see [Secret policy overview](https://help.aliyun.com/document_detail/2716465.html).
       *
       * @param request SetSecretPolicyRequest
       * @return SetSecretPolicyResponse
       */
      Models::SetSecretPolicyResponse setSecretPolicy(const Models::SetSecretPolicyRequest &request);

      /**
       * @summary Adds tags to a CMK, secret, or certificate.
       *
       * @description You can add up to 10 tags to a CMK, secret, or certificate.
       * In this example, the tags `[{"TagKey":"S1key1","TagValue":"S1val1"},{"TagKey":"S1key2","TagValue":"S2val2"}]` are added to the CMK whose ID is `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request TagResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourceResponse
       */
      Models::TagResourceResponse tagResourceWithOptions(const Models::TagResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to a CMK, secret, or certificate.
       *
       * @description You can add up to 10 tags to a CMK, secret, or certificate.
       * In this example, the tags `[{"TagKey":"S1key1","TagValue":"S1val1"},{"TagKey":"S1key2","TagValue":"S2val2"}]` are added to the CMK whose ID is `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request TagResourceRequest
       * @return TagResourceResponse
       */
      Models::TagResourceResponse tagResource(const Models::TagResourceRequest &request);

      /**
       * @summary Adds tags to one or more keys or secrets.
       *
       * @description You can add multiple tags to multiple keys or multiple secrets at a time.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to one or more keys or secrets.
       *
       * @description You can add multiple tags to multiple keys or multiple secrets at a time.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a CMK, secret, or certificate.
       *
       * @description For information about the access policy that is required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * This topic provides an example of how to detach tags with the tag keys tagkey1 and tagkey2 from the key with the ID `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       *
       * @param request UntagResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourceResponse
       */
      Models::UntagResourceResponse untagResourceWithOptions(const Models::UntagResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a CMK, secret, or certificate.
       *
       * @description For information about the access policy that is required for a RAM user or RAM role to call this OpenAPI operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * This topic provides an example of how to detach tags with the tag keys tagkey1 and tagkey2 from the key with the ID `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       *
       * @param request UntagResourceRequest
       * @return UntagResourceResponse
       */
      Models::UntagResourceResponse untagResource(const Models::UntagResourceRequest &request);

      /**
       * @summary Removes tags from keys or secrets.
       *
       * @description You can remove multiple tags from multiple keys or multiple secrets at a time. You cannot remove tags that start with aliyun or acs:.
       * If you enter multiple tag keys in the request parameters and only some of the tag keys are associated with resources, the operation can be called and the tags whose keys are associated with resources are removed from the resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from keys or secrets.
       *
       * @description You can remove multiple tags from multiple keys or multiple secrets at a time. You cannot remove tags that start with aliyun or acs:.
       * If you enter multiple tag keys in the request parameters and only some of the tag keys are associated with resources, the operation can be called and the tags whose keys are associated with resources are removed from the resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Binds an existing alias to a different customer master key (CMK) ID.
       *
       * @param request UpdateAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAliasWithOptions(const Models::UpdateAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an existing alias to a different customer master key (CMK) ID.
       *
       * @param request UpdateAliasRequest
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAlias(const Models::UpdateAliasRequest &request);

      /**
       * @summary Updates the information about an application access point (AAP).
       *
       * @description The update takes effect immediately after an AAP information is updated. Exercise caution when you perform this operation. You can update the description of an AAP and the permission policies that are associated with the AAP. You cannot update the name of the AAP.
       *
       * @param request UpdateApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationAccessPointResponse
       */
      Models::UpdateApplicationAccessPointResponse updateApplicationAccessPointWithOptions(const Models::UpdateApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an application access point (AAP).
       *
       * @description The update takes effect immediately after an AAP information is updated. Exercise caution when you perform this operation. You can update the description of an AAP and the permission policies that are associated with the AAP. You cannot update the name of the AAP.
       *
       * @param request UpdateApplicationAccessPointRequest
       * @return UpdateApplicationAccessPointResponse
       */
      Models::UpdateApplicationAccessPointResponse updateApplicationAccessPoint(const Models::UpdateApplicationAccessPointRequest &request);

      /**
       * @summary Updates the description of a CMK.
       *
       * @description This operation replaces the description of a customer master key (CMK) with the description that you specify. The original description of the CMK is specified by the Description parameter when you call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation. Use this operation to add, modify, or delete the description of a CMK.
       * For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request UpdateKeyDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKeyDescriptionResponse
       */
      Models::UpdateKeyDescriptionResponse updateKeyDescriptionWithOptions(const Models::UpdateKeyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a CMK.
       *
       * @description This operation replaces the description of a customer master key (CMK) with the description that you specify. The original description of the CMK is specified by the Description parameter when you call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation. Use this operation to add, modify, or delete the description of a CMK.
       * For more information about the access policy required for a RAM user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request UpdateKeyDescriptionRequest
       * @return UpdateKeyDescriptionResponse
       */
      Models::UpdateKeyDescriptionResponse updateKeyDescription(const Models::UpdateKeyDescriptionRequest &request);

      /**
       * @summary Updates the VPC bindings of a KMS instance.
       *
       * @description - For information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - If your self-managed application is deployed in multiple VPCs in the same region, you can bind the KMS instance to additional VPCs. These VPCs are in addition to the one that you specified when you enabled the instance.
       *   These VPCs can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. After the configuration is complete, self-managed applications in these VPCs can access the specified KMS instance.
       *   > If the VPCs belong to different Alibaba Cloud accounts, you must first configure resource sharing to share the vSwitch resources from those accounts with the Alibaba Cloud account that owns the KMS instance. For more information, see [Access a KMS instance from multiple VPCs in the same region](https://help.aliyun.com/document_detail/2393236.html).
       *
       * @param request UpdateKmsInstanceBindVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKmsInstanceBindVpcResponse
       */
      Models::UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpcWithOptions(const Models::UpdateKmsInstanceBindVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the VPC bindings of a KMS instance.
       *
       * @description - For information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - If your self-managed application is deployed in multiple VPCs in the same region, you can bind the KMS instance to additional VPCs. These VPCs are in addition to the one that you specified when you enabled the instance.
       *   These VPCs can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. After the configuration is complete, self-managed applications in these VPCs can access the specified KMS instance.
       *   > If the VPCs belong to different Alibaba Cloud accounts, you must first configure resource sharing to share the vSwitch resources from those accounts with the Alibaba Cloud account that owns the KMS instance. For more information, see [Access a KMS instance from multiple VPCs in the same region](https://help.aliyun.com/document_detail/2393236.html).
       *
       * @param request UpdateKmsInstanceBindVpcRequest
       * @return UpdateKmsInstanceBindVpcResponse
       */
      Models::UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpc(const Models::UpdateKmsInstanceBindVpcRequest &request);

      /**
       * @summary Updates a network access rule.
       *
       * @description - For more information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Access control](https://help.aliyun.com/document_detail/2767210.html).
       * - You can only modify the private IP addresses and description of a network control rule. The name and network type cannot be modified.
       * - When you update a network control rule, the access policies attached to it are also updated. Proceed with caution.
       *
       * @param request UpdateNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkRuleResponse
       */
      Models::UpdateNetworkRuleResponse updateNetworkRuleWithOptions(const Models::UpdateNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a network access rule.
       *
       * @description - For more information about the access policy required for a Resource Access Management (RAM) user or RAM role to call this operation, see [Access control](https://help.aliyun.com/document_detail/2767210.html).
       * - You can only modify the private IP addresses and description of a network control rule. The name and network type cannot be modified.
       * - When you update a network control rule, the access policies attached to it are also updated. Proceed with caution.
       *
       * @param request UpdateNetworkRuleRequest
       * @return UpdateNetworkRuleResponse
       */
      Models::UpdateNetworkRuleResponse updateNetworkRule(const Models::UpdateNetworkRuleRequest &request);

      /**
       * @summary Updates a permission policy.
       *
       * @description - You can update the role-based access control (RBAC) permissions, accessible resources, access control rules, and description of a permission policy. You cannot update the name or scope of a permission policy.
       * - Updating a permission policy affects all application access points (AAPs) that are bound to the permission policy. Exercise caution when you perform this operation.
       *
       * @param request UpdatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const Models::UpdatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a permission policy.
       *
       * @description - You can update the role-based access control (RBAC) permissions, accessible resources, access control rules, and description of a permission policy. You cannot update the name or scope of a permission policy.
       * - Updating a permission policy affects all application access points (AAPs) that are bound to the permission policy. Exercise caution when you perform this operation.
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const Models::UpdatePolicyRequest &request);

      /**
       * @summary Updates the automatic rotation policy of a CMK.
       *
       * @description When automatic key rotation is enabled, KMS automatically creates a key version after the preset rotation period arrives. In addition, KMS sets the new key version as the primary key version.
       * An automatic key rotation policy cannot be configured for the following keys:
       * - Asymmetric key
       * - Service-managed key
       * - Bring your own key (BYOK) that is imported into KMS
       * - Key that is not in the **Enabled** state
       * In this example, automatic key rotation is enabled for a CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****`. The automatic rotation period is 30 days.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request UpdateRotationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRotationPolicyResponse
       */
      Models::UpdateRotationPolicyResponse updateRotationPolicyWithOptions(const Models::UpdateRotationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the automatic rotation policy of a CMK.
       *
       * @description When automatic key rotation is enabled, KMS automatically creates a key version after the preset rotation period arrives. In addition, KMS sets the new key version as the primary key version.
       * An automatic key rotation policy cannot be configured for the following keys:
       * - Asymmetric key
       * - Service-managed key
       * - Bring your own key (BYOK) that is imported into KMS
       * - Key that is not in the **Enabled** state
       * In this example, automatic key rotation is enabled for a CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****`. The automatic rotation period is 30 days.
       * For more information about the access policy required by a RAM user or RAM role to call this API, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       *
       * @param request UpdateRotationPolicyRequest
       * @return UpdateRotationPolicyResponse
       */
      Models::UpdateRotationPolicyResponse updateRotationPolicy(const Models::UpdateRotationPolicyRequest &request);

      /**
       * @summary Updates the metadata of a secret.
       *
       * @description In this example, the metadata of the `secret001` secret is updated. The `Description` parameter is set to `datainfo`.
       *
       * @param request UpdateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecretWithOptions(const Models::UpdateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata of a secret.
       *
       * @description In this example, the metadata of the `secret001` secret is updated. The `Description` parameter is set to `datainfo`.
       *
       * @param request UpdateSecretRequest
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecret(const Models::UpdateSecretRequest &request);

      /**
       * @summary Updates the rotation policy of a secret.
       *
       * @description After automatic rotation is enabled, Secrets Manager schedules the first automatic rotation by adding the preset rotation interval to the timestamp of the last rotation.
       * Limits: The UpdateSecretRotationPolicy operation cannot be used to update the rotation policy of generic secrets.
       * In this example, the rotation policy of the `RdsSecret/Mysql5.4/MyCred` secret is updated. The following settings are modified:
       * *   The `EnableAutomaticRotation` parameter is set to `true`, which indicates that automatic rotation is enabled.
       * *   The `RotationInterval` parameter is set to `30d`, which indicates that the interval for automatic rotation is 30 days.
       *
       * @param request UpdateSecretRotationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretRotationPolicyResponse
       */
      Models::UpdateSecretRotationPolicyResponse updateSecretRotationPolicyWithOptions(const Models::UpdateSecretRotationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rotation policy of a secret.
       *
       * @description After automatic rotation is enabled, Secrets Manager schedules the first automatic rotation by adding the preset rotation interval to the timestamp of the last rotation.
       * Limits: The UpdateSecretRotationPolicy operation cannot be used to update the rotation policy of generic secrets.
       * In this example, the rotation policy of the `RdsSecret/Mysql5.4/MyCred` secret is updated. The following settings are modified:
       * *   The `EnableAutomaticRotation` parameter is set to `true`, which indicates that automatic rotation is enabled.
       * *   The `RotationInterval` parameter is set to `30d`, which indicates that the interval for automatic rotation is 30 days.
       *
       * @param request UpdateSecretRotationPolicyRequest
       * @return UpdateSecretRotationPolicyResponse
       */
      Models::UpdateSecretRotationPolicyResponse updateSecretRotationPolicy(const Models::UpdateSecretRotationPolicyRequest &request);

      /**
       * @summary Moves a version stage label to a different version of a secret.
       *
       * @description - For more information about the access policy that is required to call this operation as a Resource Access Management (RAM) user or RAM role, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports only generic secrets. You can perform the following operations:
       *   - Add a version stage to a specified secret version.
       *   - Remove a version stage from a specified secret version.
       *   - Remove a version stage from a specified secret version and attach it to another secret version.
       * - The total number of version stages for each generic secret cannot exceed 8.
       * This topic provides an example of how to update the version stage of the secret named `secret001`. In this example, the `ACSCurrent` stage is used to mark version `002`.
       *
       * @param request UpdateSecretVersionStageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretVersionStageResponse
       */
      Models::UpdateSecretVersionStageResponse updateSecretVersionStageWithOptions(const Models::UpdateSecretVersionStageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a version stage label to a different version of a secret.
       *
       * @description - For more information about the access policy that is required to call this operation as a Resource Access Management (RAM) user or RAM role, see [Resource Access Management](https://help.aliyun.com/document_detail/2767210.html).
       * - This operation supports only generic secrets. You can perform the following operations:
       *   - Add a version stage to a specified secret version.
       *   - Remove a version stage from a specified secret version.
       *   - Remove a version stage from a specified secret version and attach it to another secret version.
       * - The total number of version stages for each generic secret cannot exceed 8.
       * This topic provides an example of how to update the version stage of the secret named `secret001`. In this example, the `ACSCurrent` stage is used to mark version `002`.
       *
       * @param request UpdateSecretVersionStageRequest
       * @return UpdateSecretVersionStageResponse
       */
      Models::UpdateSecretVersionStageResponse updateSecretVersionStage(const Models::UpdateSecretVersionStageRequest &request);

      /**
       * @summary Verifies the HMAC message authentication code of a specific message by using a specified key.
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through a shared gateway or a dedicated gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through a public or VPC endpoint. This method requires you to enable the public network access switch. For more information, refer to accessing keys in a KMS instance over the Internet.
       * - Dedicated gateway: Access KMS through a KMS private endpoint (<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com).
       *
       * @param request VerifyMacRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMacResponse
       */
      Models::VerifyMacResponse verifyMacWithOptions(const Models::VerifyMacRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the HMAC message authentication code of a specific message by using a specified key.
       *
       * @description For details about the access policy required when a RAM user or RAM role invokes this operation, refer to access control.
       * This operation can be invoked through a shared gateway or a dedicated gateway. For more information, refer to Alibaba Cloud SDK.
       * - Shared gateway: Access KMS through a public or VPC endpoint. This method requires you to enable the public network access switch. For more information, refer to accessing keys in a KMS instance over the Internet.
       * - Dedicated gateway: Access KMS through a KMS private endpoint (<YOUR_KMS_INSTANCE_ID>.cryptoservice.kms.aliyuncs.com).
       *
       * @param request VerifyMacRequest
       * @return VerifyMacResponse
       */
      Models::VerifyMacResponse verifyMac(const Models::VerifyMacRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

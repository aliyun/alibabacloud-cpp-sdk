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
       * @summary Decrypts data by using an asymmetric key.
       *
       * @description This operation supports only asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table lists supported encryption algorithms. 
       * | KeySpec | Algorithm | Description | Maximum length in bytes |
       * | ------- | --------- | ----------- | ----------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 256 |
       * | RSA_2048 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 256 |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 384 |
       * | RSA_3072 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 384 |
       * | EC_SM2 | SM2PKE | SM2 public key encryption algorithm based on elliptic curves | 6144 |
       * In this example, the asymmetric key whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the decryption algorithm `RSAES_OAEP_SHA_1` are used to decrypt the ciphertext `BQKP+1zK6+ZEMxTP5qaVzcsgXtWplYBKm0NXdSnB5FzliFxE1bSiu4dnEIlca2JpeH7yz1/S6fed630H+hIH6DoM25fTLNcKj+mFB0Xnh9m2+HN59Mn4qyTfcUeadnfCXSWcGBouhXFwcdd2rJ3n337bzTf4jm659gZu3L0i6PLuxM9p7mqdwO0cKJPfGVfhnfMz+f4alMg79WB/NNyE2lyX7/qxvV49ObNrrJbKSFiz8Djocaf0IESNLMbfYI5bXjWkJlX92DQbKhibtQW8ZOJ//ZC6t0AWcUoKL6QDm/dg5koQalcleRinpB+QadFm894sLbVZ9+N4GVsv1W****==`.
       *
       * @param request AsymmetricDecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricDecryptResponse
       */
      Models::AsymmetricDecryptResponse asymmetricDecryptWithOptions(const Models::AsymmetricDecryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts data by using an asymmetric key.
       *
       * @description This operation supports only asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table lists supported encryption algorithms. 
       * | KeySpec | Algorithm | Description | Maximum length in bytes |
       * | ------- | --------- | ----------- | ----------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 256 |
       * | RSA_2048 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 256 |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 384 |
       * | RSA_3072 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 384 |
       * | EC_SM2 | SM2PKE | SM2 public key encryption algorithm based on elliptic curves | 6144 |
       * In this example, the asymmetric key whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the decryption algorithm `RSAES_OAEP_SHA_1` are used to decrypt the ciphertext `BQKP+1zK6+ZEMxTP5qaVzcsgXtWplYBKm0NXdSnB5FzliFxE1bSiu4dnEIlca2JpeH7yz1/S6fed630H+hIH6DoM25fTLNcKj+mFB0Xnh9m2+HN59Mn4qyTfcUeadnfCXSWcGBouhXFwcdd2rJ3n337bzTf4jm659gZu3L0i6PLuxM9p7mqdwO0cKJPfGVfhnfMz+f4alMg79WB/NNyE2lyX7/qxvV49ObNrrJbKSFiz8Djocaf0IESNLMbfYI5bXjWkJlX92DQbKhibtQW8ZOJ//ZC6t0AWcUoKL6QDm/dg5koQalcleRinpB+QadFm894sLbVZ9+N4GVsv1W****==`.
       *
       * @param request AsymmetricDecryptRequest
       * @return AsymmetricDecryptResponse
       */
      Models::AsymmetricDecryptResponse asymmetricDecrypt(const Models::AsymmetricDecryptRequest &request);

      /**
       * @summary Encrypts data by using an asymmetric customer master key (CMK).
       *
       * @description This operation is supported only for asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table lists the supported encryption algorithms: 
       * | KeySpec | Algorithm | Description | Maximum number of bytes that can be encrypted |
       * | ------- | --------- | ----------- | --------------------------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 190 |
       * | RSA_2048 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 214 |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 318 |
       * | RSA_3072 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 342 |
       * | EC_SM2 | SM2PKE | SM2 public key encryption algorithm based on elliptic curves | 6047 |
       * You can use the asymmetric CMK whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the algorithm `RSAES_OAEP_SHA_1` to encrypt the plaintext `SGVsbG8gd29ybGQ=` based on the parameter settings provided in this topic.
       *
       * @param request AsymmetricEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricEncryptResponse
       */
      Models::AsymmetricEncryptResponse asymmetricEncryptWithOptions(const Models::AsymmetricEncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts data by using an asymmetric customer master key (CMK).
       *
       * @description This operation is supported only for asymmetric keys for which the **Usage** parameter is set to **ENCRYPT/DECRYPT**. The following table lists the supported encryption algorithms: 
       * | KeySpec | Algorithm | Description | Maximum number of bytes that can be encrypted |
       * | ------- | --------- | ----------- | --------------------------------------------- |
       * | RSA_2048 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 190 |
       * | RSA_2048 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 214 |
       * | RSA_3072 | RSAES_OAEP_SHA_256 | RSAES-OAEP using SHA-256 and MGF1 with SHA-256 | 318 |
       * | RSA_3072 | RSAES_OAEP_SHA_1 | RSAES-OAEP using SHA1 and MGF1 with SHA1 | 342 |
       * | EC_SM2 | SM2PKE | SM2 public key encryption algorithm based on elliptic curves | 6047 |
       * You can use the asymmetric CMK whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the algorithm `RSAES_OAEP_SHA_1` to encrypt the plaintext `SGVsbG8gd29ybGQ=` based on the parameter settings provided in this topic.
       *
       * @param request AsymmetricEncryptRequest
       * @return AsymmetricEncryptResponse
       */
      Models::AsymmetricEncryptResponse asymmetricEncrypt(const Models::AsymmetricEncryptRequest &request);

      /**
       * @summary AsymmetricSign
       *
       * @description Generates a signature by using an asymmetric key.
       *
       * @param request AsymmetricSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricSignResponse
       */
      Models::AsymmetricSignResponse asymmetricSignWithOptions(const Models::AsymmetricSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AsymmetricSign
       *
       * @description Generates a signature by using an asymmetric key.
       *
       * @param request AsymmetricSignRequest
       * @return AsymmetricSignResponse
       */
      Models::AsymmetricSignResponse asymmetricSign(const Models::AsymmetricSignRequest &request);

      /**
       * @summary Verifies a signature by using an asymmetric key.
       *
       * @description This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table describes the supported signature algorithms. 
       * | KeySpec | Algorithm | Description |
       * | ------- | --------- | ----------- |
       * | RSA_2048 | RSA_PSS_SHA_256 | RSASSA-PSS using SHA-256 and MGF1 with SHA-256 |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256 |
       * | RSA_3072 | RSA_PSS_SHA_256 | RSASSA-PSS using SHA-256 and MGF1 with SHA-256 |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256 |
       * | EC_P256 | ECDSA_SHA_256 | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest |
       * | EC_P256K | ECDSA_SHA_256 | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2 | SM2DSA | SM2 elliptic curve public key encryption algorithm |
       * >  When you calculate the SM2 signature based on GB/T 32918, the **Digest** parameter is used to calculate the digest value of the combination of Z(A) and M, rather than the SM3 digest value. M indicates the original message to be signed. Z(A) indicates the hash value for User A. The hash value is defined in GB/T 32918.  In this example, the asymmetric key whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the signature algorithm RSA_PSS_SHA_256 are used to verify the signature `M2CceNZH00ZgL9ED/ZHFp21YRAvYeZHknJUc207OCZ0N9wNn9As4z2bON3FF3je+1Nu+2+/8Zj50HpMTpzYpMp2R93cYmACCmhaYoKydxylbyGzJR8y9likZRCrkD38lRoS40aBBvv/6iRKzQuo9EGYVcel36cMNg00VmYNBy3pa1rwg3gA4l3cy6kjayZja1WGPkVhrVKsrJMdbpl0ApLjXKuD8rw1n1XLCwCUEL5eLPljTZaAveqdOFQOiZnZEGI27qIiZe7I1fN8tcz6anS/gTM7xRKE++5egEvRWlTQQTJeApnPSiUPA+8ZykNdelQsOQh5SrGoyI4A5pq****==` of the digest `ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuyjfzw=`.
       *
       * @param request AsymmetricVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsymmetricVerifyResponse
       */
      Models::AsymmetricVerifyResponse asymmetricVerifyWithOptions(const Models::AsymmetricVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a signature by using an asymmetric key.
       *
       * @description This operation supports only asymmetric keys for which the **Usage** parameter is set to **SIGN/VERIFY**. The following table describes the supported signature algorithms. 
       * | KeySpec | Algorithm | Description |
       * | ------- | --------- | ----------- |
       * | RSA_2048 | RSA_PSS_SHA_256 | RSASSA-PSS using SHA-256 and MGF1 with SHA-256 |
       * | RSA_2048 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256 |
       * | RSA_3072 | RSA_PSS_SHA_256 | RSASSA-PSS using SHA-256 and MGF1 with SHA-256 |
       * | RSA_3072 | RSA_PKCS1_SHA_256 | RSASSA-PKCS1-v1_5 using SHA-256 |
       * | EC_P256 | ECDSA_SHA_256 | ECDSA on the P-256 Curve(secp256r1) with a SHA-256 digest |
       * | EC_P256K | ECDSA_SHA_256 | ECDSA on the P-256K Curve(secp256k1) with a SHA-256 digest |
       * | EC_SM2 | SM2DSA | SM2 elliptic curve public key encryption algorithm |
       * >  When you calculate the SM2 signature based on GB/T 32918, the **Digest** parameter is used to calculate the digest value of the combination of Z(A) and M, rather than the SM3 digest value. M indicates the original message to be signed. Z(A) indicates the hash value for User A. The hash value is defined in GB/T 32918.  In this example, the asymmetric key whose ID is `5c438b18-05be-40ad-b6c2-3be6752c****` and version ID is `2ab1a983-7072-4bbc-a582-584b5bd8****` and the signature algorithm RSA_PSS_SHA_256 are used to verify the signature `M2CceNZH00ZgL9ED/ZHFp21YRAvYeZHknJUc207OCZ0N9wNn9As4z2bON3FF3je+1Nu+2+/8Zj50HpMTpzYpMp2R93cYmACCmhaYoKydxylbyGzJR8y9likZRCrkD38lRoS40aBBvv/6iRKzQuo9EGYVcel36cMNg00VmYNBy3pa1rwg3gA4l3cy6kjayZja1WGPkVhrVKsrJMdbpl0ApLjXKuD8rw1n1XLCwCUEL5eLPljTZaAveqdOFQOiZnZEGI27qIiZe7I1fN8tcz6anS/gTM7xRKE++5egEvRWlTQQTJeApnPSiUPA+8ZykNdelQsOQh5SrGoyI4A5pq****==` of the digest `ZOyIygCyaOW6GjVnihtTFtIS9PNmskdyMlNKiuyjfzw=`.
       *
       * @param request AsymmetricVerifyRequest
       * @return AsymmetricVerifyResponse
       */
      Models::AsymmetricVerifyResponse asymmetricVerify(const Models::AsymmetricVerifyRequest &request);

      /**
       * @description If the deletion task of a CMK is canceled, the CMK returns to the Enabled state.
       *
       * @param request CancelKeyDeletionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelKeyDeletionResponse
       */
      Models::CancelKeyDeletionResponse cancelKeyDeletionWithOptions(const Models::CancelKeyDeletionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description If the deletion task of a CMK is canceled, the CMK returns to the Enabled state.
       *
       * @param request CancelKeyDeletionRequest
       * @return CancelKeyDeletionResponse
       */
      Models::CancelKeyDeletionResponse cancelKeyDeletion(const Models::CancelKeyDeletionRequest &request);

      /**
       * @summary Decrypts data by using a specific certificate.
       *
       * @description Limit: The encryption algorithm in the request parameters must match the key type. 
       * The following table describes the mapping between encryption algorithms and key types.
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSAES_OAEP_SHA_1 | RSA_2048 |
       * | RSAES_OAEP_SHA_256 | RSA_2048 |
       * | SM2PKE | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the encryption algorithm `RSAES_OAEP_SHA_256` are used to decrypt the data `ZOyIygCyaOW6Gj****MlNKiuyjfzw=`.
       *
       * @param request CertificatePrivateKeyDecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertificatePrivateKeyDecryptResponse
       */
      Models::CertificatePrivateKeyDecryptResponse certificatePrivateKeyDecryptWithOptions(const Models::CertificatePrivateKeyDecryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts data by using a specific certificate.
       *
       * @description Limit: The encryption algorithm in the request parameters must match the key type. 
       * The following table describes the mapping between encryption algorithms and key types.
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSAES_OAEP_SHA_1 | RSA_2048 |
       * | RSAES_OAEP_SHA_256 | RSA_2048 |
       * | SM2PKE | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the encryption algorithm `RSAES_OAEP_SHA_256` are used to decrypt the data `ZOyIygCyaOW6Gj****MlNKiuyjfzw=`.
       *
       * @param request CertificatePrivateKeyDecryptRequest
       * @return CertificatePrivateKeyDecryptResponse
       */
      Models::CertificatePrivateKeyDecryptResponse certificatePrivateKeyDecrypt(const Models::CertificatePrivateKeyDecryptRequest &request);

      /**
       * @summary Generates a signature by using a specified certificate.
       *
       * @description The signature algorithm in the request parameters must match the key type. The following table describes the mapping between signature algorithms and key types.  
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSA_PKCS1_SHA_256 | RSA_2048 |
       * | RSA_PSS_SHA_256 | RSA_2048 |
       * | ECDSA_SHA_256 | EC_P256 |
       * | SM2DSA | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the signature algorithm `ECDSA_SHA_256` are used to generate a signature for the raw data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePrivateKeySignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertificatePrivateKeySignResponse
       */
      Models::CertificatePrivateKeySignResponse certificatePrivateKeySignWithOptions(const Models::CertificatePrivateKeySignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a signature by using a specified certificate.
       *
       * @description The signature algorithm in the request parameters must match the key type. The following table describes the mapping between signature algorithms and key types.  
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSA_PKCS1_SHA_256 | RSA_2048 |
       * | RSA_PSS_SHA_256 | RSA_2048 |
       * | ECDSA_SHA_256 | EC_P256 |
       * | SM2DSA | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the signature algorithm `ECDSA_SHA_256` are used to generate a signature for the raw data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePrivateKeySignRequest
       * @return CertificatePrivateKeySignResponse
       */
      Models::CertificatePrivateKeySignResponse certificatePrivateKeySign(const Models::CertificatePrivateKeySignRequest &request);

      /**
       * @summary Encrypts data by using a specific certificate.
       *
       * @description Limit: The encryption algorithm in the request parameters must match the key type. 
       * The following table describes the mapping between encryption algorithms and key types.
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSAES_OAEP_SHA_1 | RSA_2048 |
       * | RSAES_OAEP_SHA_256 | RSA_2048 |
       * | SM2PKE | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the encryption algorithm `RSAES_OAEP_SHA_256` are used to encrypt the data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePublicKeyEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertificatePublicKeyEncryptResponse
       */
      Models::CertificatePublicKeyEncryptResponse certificatePublicKeyEncryptWithOptions(const Models::CertificatePublicKeyEncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts data by using a specific certificate.
       *
       * @description Limit: The encryption algorithm in the request parameters must match the key type. 
       * The following table describes the mapping between encryption algorithms and key types.
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSAES_OAEP_SHA_1 | RSA_2048 |
       * | RSAES_OAEP_SHA_256 | RSA_2048 |
       * | SM2PKE | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the encryption algorithm `RSAES_OAEP_SHA_256` are used to encrypt the data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePublicKeyEncryptRequest
       * @return CertificatePublicKeyEncryptResponse
       */
      Models::CertificatePublicKeyEncryptResponse certificatePublicKeyEncrypt(const Models::CertificatePublicKeyEncryptRequest &request);

      /**
       * @summary Verifies a digital signature by using a specified certificate.
       *
       * @description The signature algorithm in the request parameters must match the key type. The following table describes the mapping between signature algorithms and key types.  
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSA_PKCS1_SHA_256 | RSA_2048 |
       * | RSA_PSS_SHA_256 | RSA_2048 |
       * | ECDSA_SHA_256 | EC_P256 |
       * | SM2DSA | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the signature algorithm `ECDSA_SHA_256` are used to verify the digital signature `ZOyIygCyaOW6Gj****MlNKiuyjfzw=` of the raw data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePublicKeyVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertificatePublicKeyVerifyResponse
       */
      Models::CertificatePublicKeyVerifyResponse certificatePublicKeyVerifyWithOptions(const Models::CertificatePublicKeyVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a digital signature by using a specified certificate.
       *
       * @description The signature algorithm in the request parameters must match the key type. The following table describes the mapping between signature algorithms and key types.  
       * | Algorithm | Key Spec |
       * | --------- | -------- |
       * | RSA_PKCS1_SHA_256 | RSA_2048 |
       * | RSA_PSS_SHA_256 | RSA_2048 |
       * | ECDSA_SHA_256 | EC_P256 |
       * | SM2DSA | EC_SM2 |
       * In this example, the certificate whose ID is `12345678-1234-1234-1234-12345678****` and the signature algorithm `ECDSA_SHA_256` are used to verify the digital signature `ZOyIygCyaOW6Gj****MlNKiuyjfzw=` of the raw data `VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4=`.
       *
       * @param request CertificatePublicKeyVerifyRequest
       * @return CertificatePublicKeyVerifyResponse
       */
      Models::CertificatePublicKeyVerifyResponse certificatePublicKeyVerify(const Models::CertificatePublicKeyVerifyRequest &request);

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
       * @summary Creates a customer master key (CMK).
       *
       * @description KMS supports common symmetric keys and asymmetric keys. For more information, see [Key types and specifications](https://help.aliyun.com/document_detail/480161.html).
       *
       * @param request CreateKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyResponse
       */
      Models::CreateKeyResponse createKeyWithOptions(const Models::CreateKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a customer master key (CMK).
       *
       * @description KMS supports common symmetric keys and asymmetric keys. For more information, see [Key types and specifications](https://help.aliyun.com/document_detail/480161.html).
       *
       * @param request CreateKeyRequest
       * @return CreateKeyResponse
       */
      Models::CreateKeyResponse createKey(const Models::CreateKeyRequest &request);

      /**
       * @summary 为密钥创建新的密钥版本。
       *
       * @description *   You can create a version only for an asymmetric CMK that is in the Enabled state. You can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation to create an asymmetric CMK and the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status of the CMK. The status is specified by the KeyState parameter.
       * *   The minimum interval for creating a version of the same CMK is seven days. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the time when the last version of a CMK was created. The time is specified by the LastRotationDate parameter.
       * *   If a CMK is in a private key store, you cannot create a version for the CMK.
       * *   You can create a maximum of 50 versions for a CMK in the same region.
       * You can create a version for the CMK whose ID is `0b30658a-ed1a-4922-b8f7-a673ca9c****` by using the parameter settings provided in this topic.
       *
       * @param request CreateKeyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyVersionResponse
       */
      Models::CreateKeyVersionResponse createKeyVersionWithOptions(const Models::CreateKeyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为密钥创建新的密钥版本。
       *
       * @description *   You can create a version only for an asymmetric CMK that is in the Enabled state. You can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation to create an asymmetric CMK and the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the status of the CMK. The status is specified by the KeyState parameter.
       * *   The minimum interval for creating a version of the same CMK is seven days. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the time when the last version of a CMK was created. The time is specified by the LastRotationDate parameter.
       * *   If a CMK is in a private key store, you cannot create a version for the CMK.
       * *   You can create a maximum of 50 versions for a CMK in the same region.
       * You can create a version for the CMK whose ID is `0b30658a-ed1a-4922-b8f7-a673ca9c****` by using the parameter settings provided in this topic.
       *
       * @param request CreateKeyVersionRequest
       * @return CreateKeyVersionResponse
       */
      Models::CreateKeyVersionResponse createKeyVersion(const Models::CreateKeyVersionRequest &request);

      /**
       * @summary Creates an access control rule to configure the private IP addresses or CIDR blocks that are allowed to access a Key Management Service (KMS) instance.
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
       * @summary Creates an access control rule to configure the private IP addresses or CIDR blocks that are allowed to access a Key Management Service (KMS) instance.
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
       * @summary 创建凭据并存入凭据的初始版本。
       *
       * @description The name of the secret.
       * The value must be 1 to 64 characters in length and can contain letters, digits, underscores (_), forward slashes (/), plus signs (+), equal signs (=), periods (.), hyphens (-), and at signs (@). The following list describes the name requirements for different types of secrets:
       * *   If the SecretType parameter is set to Generic or Rds, the name cannot start with `acs/`.
       * *   If the SecretType parameter is set to RAMCredentials, set the SecretName parameter to `$Auto`. In this case, KMS automatically generates a secret name that starts with `acs/ram/user/`. The name includes the display name of RAM user.
       * *   If the SecretType parameter is set to ECS, the name must start with `acs/ecs/`.
       *
       * @param tmpReq CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建凭据并存入凭据的初始版本。
       *
       * @description The name of the secret.
       * The value must be 1 to 64 characters in length and can contain letters, digits, underscores (_), forward slashes (/), plus signs (+), equal signs (=), periods (.), hyphens (-), and at signs (@). The following list describes the name requirements for different types of secrets:
       * *   If the SecretType parameter is set to Generic or Rds, the name cannot start with `acs/`.
       * *   If the SecretType parameter is set to RAMCredentials, set the SecretName parameter to `$Auto`. In this case, KMS automatically generates a secret name that starts with `acs/ram/user/`. The name includes the display name of RAM user.
       * *   If the SecretType parameter is set to ECS, the name must start with `acs/ecs/`.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary 调用Decrypt接口解密CiphertextBlob中的密文。
       *
       * @param tmpReq DecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptResponse
       */
      Models::DecryptResponse decryptWithOptions(const Models::DecryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用Decrypt接口解密CiphertextBlob中的密文。
       *
       * @param request DecryptRequest
       * @return DecryptResponse
       */
      Models::DecryptResponse decrypt(const Models::DecryptRequest &request);

      /**
       * @param request DeleteAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAliasWithOptions(const Models::DeleteAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAliasRequest
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAlias(const Models::DeleteAliasRequest &request);

      /**
       * @summary Deletes an application access point (AAP).
       *
       * @description Before you delete an AAP, make sure that the AAP is no longer in use. If you delete an AAP that is in use, applications that use the AAP cannot access Key Management Service (KMS). Exercise caution when you delete an AAP.
       *
       * @param request DeleteApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationAccessPointResponse
       */
      Models::DeleteApplicationAccessPointResponse deleteApplicationAccessPointWithOptions(const Models::DeleteApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application access point (AAP).
       *
       * @description Before you delete an AAP, make sure that the AAP is no longer in use. If you delete an AAP that is in use, applications that use the AAP cannot access Key Management Service (KMS). Exercise caution when you delete an AAP.
       *
       * @param request DeleteApplicationAccessPointRequest
       * @return DeleteApplicationAccessPointResponse
       */
      Models::DeleteApplicationAccessPointResponse deleteApplicationAccessPoint(const Models::DeleteApplicationAccessPointRequest &request);

      /**
       * @description After the certificate and its private key and certificate chain are deleted, they cannot be restored. Proceed with caution.
       * In this example, the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` and its private key and certificate chain are deleted.
       *
       * @param request DeleteCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificateWithOptions(const Models::DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description After the certificate and its private key and certificate chain are deleted, they cannot be restored. Proceed with caution.
       * In this example, the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` and its private key and certificate chain are deleted.
       *
       * @param request DeleteCertificateRequest
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificate(const Models::DeleteCertificateRequest &request);

      /**
       * @description Before you delete a client key, make sure that the client key is no longer in use. If you delete a client key that is in use, applications that use the client key cannot access Key Management Service (KMS). Exercise caution when you delete a client key.
       *
       * @param request DeleteClientKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientKeyResponse
       */
      Models::DeleteClientKeyResponse deleteClientKeyWithOptions(const Models::DeleteClientKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Before you delete a client key, make sure that the client key is no longer in use. If you delete a client key that is in use, applications that use the client key cannot access Key Management Service (KMS). Exercise caution when you delete a client key.
       *
       * @param request DeleteClientKeyRequest
       * @return DeleteClientKeyResponse
       */
      Models::DeleteClientKeyResponse deleteClientKey(const Models::DeleteClientKeyRequest &request);

      /**
       * @description This operation does not delete the CMK that is created by using the key material.
       * If the CMK is in the PendingDeletion state, the state of the CMK and the scheduled deletion time do not change after you call this operation. If the CMK is not in the PendingDeletion state, the state of the CMK changes to PendingImport after you call this operation.
       * After you delete the key material, you can upload only the same key material into the CMK.
       *
       * @param request DeleteKeyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyMaterialResponse
       */
      Models::DeleteKeyMaterialResponse deleteKeyMaterialWithOptions(const Models::DeleteKeyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This operation does not delete the CMK that is created by using the key material.
       * If the CMK is in the PendingDeletion state, the state of the CMK and the scheduled deletion time do not change after you call this operation. If the CMK is not in the PendingDeletion state, the state of the CMK changes to PendingImport after you call this operation.
       * After you delete the key material, you can upload only the same key material into the CMK.
       *
       * @param request DeleteKeyMaterialRequest
       * @return DeleteKeyMaterialResponse
       */
      Models::DeleteKeyMaterialResponse deleteKeyMaterial(const Models::DeleteKeyMaterialRequest &request);

      /**
       * @summary Deletes a network access rule.
       *
       * @description Before you delete a network access rule, make sure that the network access rule is not bound to permission policies. Otherwise, related applications cannot access Key Management Service (KMS).
       *
       * @param request DeleteNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkRuleResponse
       */
      Models::DeleteNetworkRuleResponse deleteNetworkRuleWithOptions(const Models::DeleteNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network access rule.
       *
       * @description Before you delete a network access rule, make sure that the network access rule is not bound to permission policies. Otherwise, related applications cannot access Key Management Service (KMS).
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
       * @description If you call this operation without specifying a recovery period, the deleted secret can be recovered within 30 days.
       * If you specify a recovery period, the deleted secret can be recovered within the recovery period. You can also forcibly delete a secret. A forcibly deleted secret cannot be recovered.
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description If you call this operation without specifying a recovery period, the deleted secret can be recovered within 30 days.
       * If you specify a recovery period, the deleted secret can be recovered within the recovery period. You can also forcibly delete a secret. A forcibly deleted secret cannot be recovered.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @param request DescribeAccountKmsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountKmsStatusResponse
       */
      Models::DescribeAccountKmsStatusResponse describeAccountKmsStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeAccountKmsStatusResponse
       */
      Models::DescribeAccountKmsStatusResponse describeAccountKmsStatus();

      /**
       * @summary Queries the details of an application access point (AAP).
       *
       * @param request DescribeApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationAccessPointResponse
       */
      Models::DescribeApplicationAccessPointResponse describeApplicationAccessPointWithOptions(const Models::DescribeApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an application access point (AAP).
       *
       * @param request DescribeApplicationAccessPointRequest
       * @return DescribeApplicationAccessPointResponse
       */
      Models::DescribeApplicationAccessPointResponse describeApplicationAccessPoint(const Models::DescribeApplicationAccessPointRequest &request);

      /**
       * @description In this example, the information about the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is queried. The certificate information includes the certificate ID, creation time, certificate issuer, validity period, serial number, and signature algorithm.
       *
       * @param request DescribeCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertificateResponse
       */
      Models::DescribeCertificateResponse describeCertificateWithOptions(const Models::DescribeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the information about the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is queried. The certificate information includes the certificate ID, creation time, certificate issuer, validity period, serial number, and signature algorithm.
       *
       * @param request DescribeCertificateRequest
       * @return DescribeCertificateResponse
       */
      Models::DescribeCertificateResponse describeCertificate(const Models::DescribeCertificateRequest &request);

      /**
       * @summary Queries the information about a customer master key (CMK).
       *
       * @description You can query the information about the CMK `05754286-3ba2-4fa6-8d41-4323aca6****` by using parameter settings provided in this topic. The information includes the creator, creation time, status, and deletion protection status of the CMK.
       *
       * @param request DescribeKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyResponse
       */
      Models::DescribeKeyResponse describeKeyWithOptions(const Models::DescribeKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a customer master key (CMK).
       *
       * @description You can query the information about the CMK `05754286-3ba2-4fa6-8d41-4323aca6****` by using parameter settings provided in this topic. The information includes the creator, creation time, status, and deletion protection status of the CMK.
       *
       * @param request DescribeKeyRequest
       * @return DescribeKeyResponse
       */
      Models::DescribeKeyResponse describeKey(const Models::DescribeKeyRequest &request);

      /**
       * @description This topic provides an example on how to query the information about a version of the CMK `1234abcd-12ab-34cd-56ef-12345678****`. The ID of the CMK version is `2ab1a983-7072-4bbc-a582-584b5bd8****`. The response shows that the creation time of the CMK version is `2016-03-25T10:42:40Z`.
       *
       * @param request DescribeKeyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyVersionResponse
       */
      Models::DescribeKeyVersionResponse describeKeyVersionWithOptions(const Models::DescribeKeyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to query the information about a version of the CMK `1234abcd-12ab-34cd-56ef-12345678****`. The ID of the CMK version is `2ab1a983-7072-4bbc-a582-584b5bd8****`. The response shows that the creation time of the CMK version is `2016-03-25T10:42:40Z`.
       *
       * @param request DescribeKeyVersionRequest
       * @return DescribeKeyVersionResponse
       */
      Models::DescribeKeyVersionResponse describeKeyVersion(const Models::DescribeKeyVersionRequest &request);

      /**
       * @summary Queries the details of an access control rule.
       *
       * @param request DescribeNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRuleResponse
       */
      Models::DescribeNetworkRuleResponse describeNetworkRuleWithOptions(const Models::DescribeNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control rule.
       *
       * @param request DescribeNetworkRuleRequest
       * @return DescribeNetworkRuleResponse
       */
      Models::DescribeNetworkRuleResponse describeNetworkRule(const Models::DescribeNetworkRuleRequest &request);

      /**
       * @summary Queries the details of a permission policy.
       *
       * @param request DescribePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyResponse
       */
      Models::DescribePolicyResponse describePolicyWithOptions(const Models::DescribePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a permission policy.
       *
       * @param request DescribePolicyRequest
       * @return DescribePolicyResponse
       */
      Models::DescribePolicyResponse describePolicy(const Models::DescribePolicyRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Kms\\&api=DescribeRegions\\&type=RPC\\&version=2016-01-20)
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Kms\\&api=DescribeRegions\\&type=RPC\\&version=2016-01-20)
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @description This operation returns the metadata of a secret. This operation does not return the secret value.
       * In this example, the metadata of the secret named `secret001` is queried.
       *
       * @param request DescribeSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecretWithOptions(const Models::DescribeSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This operation returns the metadata of a secret. This operation does not return the secret value.
       * In this example, the metadata of the secret named `secret001` is queried.
       *
       * @param request DescribeSecretRequest
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecret(const Models::DescribeSecretRequest &request);

      /**
       * @description If a customer master key (CMK) is disabled, the ciphertext encrypted by using this CMK cannot be decrypted until you re-enable it. You can call the [EnableKey](https://help.aliyun.com/document_detail/35150.html) operation to enable the CMK.
       * In this example, the CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****` is disabled.
       *
       * @param request DisableKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableKeyResponse
       */
      Models::DisableKeyResponse disableKeyWithOptions(const Models::DisableKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description If a customer master key (CMK) is disabled, the ciphertext encrypted by using this CMK cannot be decrypted until you re-enable it. You can call the [EnableKey](https://help.aliyun.com/document_detail/35150.html) operation to enable the CMK.
       * In this example, the CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****` is disabled.
       *
       * @param request DisableKeyRequest
       * @return DisableKeyResponse
       */
      Models::DisableKeyResponse disableKey(const Models::DisableKeyRequest &request);

      /**
       * @param request EnableKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableKeyResponse
       */
      Models::EnableKeyResponse enableKeyWithOptions(const Models::EnableKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableKeyRequest
       * @return EnableKeyResponse
       */
      Models::EnableKeyResponse enableKey(const Models::EnableKeyRequest &request);

      /**
       * @description *   KMS uses the primary version of a specified CMK to encrypt data.
       * *   Only data of 6 KB or less can be encrypted. For example, you can call this operation to encrypt RSA keys, database access passwords, or other sensitive information.
       * *   When you migrate encrypted data across regions, you can call this operation in the destination region to encrypt the plaintext of the data key that is used to encrypt the migrated data in the source region. This way, the ciphertext of the data key is generated in the destination region. You can also call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the data key.
       *
       * @param tmpReq EncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptResponse
       */
      Models::EncryptResponse encryptWithOptions(const Models::EncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description *   KMS uses the primary version of a specified CMK to encrypt data.
       * *   Only data of 6 KB or less can be encrypted. For example, you can call this operation to encrypt RSA keys, database access passwords, or other sensitive information.
       * *   When you migrate encrypted data across regions, you can call this operation in the destination region to encrypt the plaintext of the data key that is used to encrypt the migrated data in the source region. This way, the ciphertext of the data key is generated in the destination region. You can also call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the data key.
       *
       * @param request EncryptRequest
       * @return EncryptResponse
       */
      Models::EncryptResponse encrypt(const Models::EncryptRequest &request);

      /**
       * @description You can call the [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html) operation to generate a data key, which is encrypted by a CMK. If you want to distribute the data key to other regions or cryptographic modules, you can call the ExportDataKey operation to use a public key to encrypt the data key.
       * Then, you can import the ciphertext of the data key to the cryptographic module where the private key is stored. This way, the data key is securely distributed from KMS to the cryptographic module. After the data key is imported to the cryptographic module, you can use it to encrypt or decrypt data.
       *
       * @param tmpReq ExportDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDataKeyResponse
       */
      Models::ExportDataKeyResponse exportDataKeyWithOptions(const Models::ExportDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can call the [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html) operation to generate a data key, which is encrypted by a CMK. If you want to distribute the data key to other regions or cryptographic modules, you can call the ExportDataKey operation to use a public key to encrypt the data key.
       * Then, you can import the ciphertext of the data key to the cryptographic module where the private key is stored. This way, the data key is securely distributed from KMS to the cryptographic module. After the data key is imported to the cryptographic module, you can use it to encrypt or decrypt data.
       *
       * @param request ExportDataKeyRequest
       * @return ExportDataKeyResponse
       */
      Models::ExportDataKeyResponse exportDataKey(const Models::ExportDataKeyRequest &request);

      /**
       * @description We recommend that you perform the following steps to import your data key to a cryptographic module:
       * *   Call the GenerateAndExportDataKey operation to generate a data key and obtain both the ciphertext of the data key encrypted by using the CMK and that encrypted by using the public key.
       * *   Store the ciphertext of the data key encrypted by using the CMK in KMS Secrets Manager or in a storage service such as ApsaraDB. This ciphertext is used for backup and restoration.
       * *   Import the ciphertext of the data key encrypted by using the public key to the cryptographic module where the private key is stored. Then, you can use the data key to encrypt or decrypt data.
       * >  The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the data keys randomly generated by calling this operation. You must take note of the data keys and the returned ciphertext.
       *
       * @param tmpReq GenerateAndExportDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAndExportDataKeyResponse
       */
      Models::GenerateAndExportDataKeyResponse generateAndExportDataKeyWithOptions(const Models::GenerateAndExportDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description We recommend that you perform the following steps to import your data key to a cryptographic module:
       * *   Call the GenerateAndExportDataKey operation to generate a data key and obtain both the ciphertext of the data key encrypted by using the CMK and that encrypted by using the public key.
       * *   Store the ciphertext of the data key encrypted by using the CMK in KMS Secrets Manager or in a storage service such as ApsaraDB. This ciphertext is used for backup and restoration.
       * *   Import the ciphertext of the data key encrypted by using the public key to the cryptographic module where the private key is stored. Then, you can use the data key to encrypt or decrypt data.
       * >  The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the data keys randomly generated by calling this operation. You must take note of the data keys and the returned ciphertext.
       *
       * @param request GenerateAndExportDataKeyRequest
       * @return GenerateAndExportDataKeyResponse
       */
      Models::GenerateAndExportDataKeyResponse generateAndExportDataKey(const Models::GenerateAndExportDataKeyRequest &request);

      /**
       * @summary 生成一个数据密钥
       *
       * @description This operation creates a random data key, encrypts the data key by using the specified customer master key (CMK), and returns the plaintext and ciphertext of the data key. You can use the plaintext of the data key to locally encrypt your data without using KMS and store the encrypted data together with the ciphertext of the data key. You can obtain the plaintext of the data key from the Plaintext parameter in the response and the ciphertext of the data key from the CiphertextBlob parameter in the response.
       * The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the generated data key. Therefore, you need to store the ciphertext of the data key in persistent storage.
       * We recommend that you locally encrypt data by performing the following steps:
       * 1\\. Call the GenerateDataKey operation.
       * 2\\. Use the plaintext of the data key that you obtain to locally encrypt data without using KMS. Then, delete the plaintext of the data key from the memory.
       * 3\\. Store the encrypted data together with the ciphertext of the data key that you obtain.
       * We recommend that you locally decrypt data by performing the following steps:
       * *   Call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the locally stored ciphertext of the data key. The plaintext of data key is then returned.
       * *   Use the plaintext of the data key to locally decrypt data and then delete the plaintext of the data key from the memory.
       * In this example, a random data key is generated for the CMK whose ID is `7906979c-8e06-46a2-be2d-68e3ccbc****`.
       *
       * @param tmpReq GenerateDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDataKeyResponse
       */
      Models::GenerateDataKeyResponse generateDataKeyWithOptions(const Models::GenerateDataKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成一个数据密钥
       *
       * @description This operation creates a random data key, encrypts the data key by using the specified customer master key (CMK), and returns the plaintext and ciphertext of the data key. You can use the plaintext of the data key to locally encrypt your data without using KMS and store the encrypted data together with the ciphertext of the data key. You can obtain the plaintext of the data key from the Plaintext parameter in the response and the ciphertext of the data key from the CiphertextBlob parameter in the response.
       * The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the generated data key. Therefore, you need to store the ciphertext of the data key in persistent storage.
       * We recommend that you locally encrypt data by performing the following steps:
       * 1\\. Call the GenerateDataKey operation.
       * 2\\. Use the plaintext of the data key that you obtain to locally encrypt data without using KMS. Then, delete the plaintext of the data key from the memory.
       * 3\\. Store the encrypted data together with the ciphertext of the data key that you obtain.
       * We recommend that you locally decrypt data by performing the following steps:
       * *   Call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the locally stored ciphertext of the data key. The plaintext of data key is then returned.
       * *   Use the plaintext of the data key to locally decrypt data and then delete the plaintext of the data key from the memory.
       * In this example, a random data key is generated for the CMK whose ID is `7906979c-8e06-46a2-be2d-68e3ccbc****`.
       *
       * @param request GenerateDataKeyRequest
       * @return GenerateDataKeyResponse
       */
      Models::GenerateDataKeyResponse generateDataKey(const Models::GenerateDataKeyRequest &request);

      /**
       * @summary Generates a random data key, which can be used to encrypt local data.
       *
       * @description This operation creates a random data key, encrypts the data key by using a specific symmetric CMK, and returns the ciphertext of the data key. This operation serves the same purpose as the [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html) operation. The only difference is that this operation does not return the plaintext of the data key.
       * The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the generated data key.
       * > * This operation applies to the scenario when you do not need to use the data key to immediately encrypt data. Before you can use the data key to encrypt data, you must call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the ciphertext of the data key.
       * > * This operation is also suitable for a distributed system with different trust levels. For example, a system stores data in different partitions based on a preset trust policy. A module creates different partitions and generates different data keys for each partition in advance. This module is not involved in data production and consumption after it completes initialization of the control plane. This module is the key provider. When producing and consuming data, modules on the control plane obtain the ciphertext of the data key for a partition first. After decrypting the ciphertext of the data key, modules on the control plane use the plaintext of the data key to encrypt or decrypt data and then clear the plaintext of the data key from the memory. In such a system, the key provider does not need to obtain the plaintext of the data key. It only needs to have the permissions to call the GenerateDataKeyWithoutPlaintext operation. The data producers or consumers do not need to generate new data keys. They only need to have the permissions to call the Decrypt operation.
       *
       * @param tmpReq GenerateDataKeyWithoutPlaintextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDataKeyWithoutPlaintextResponse
       */
      Models::GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintextWithOptions(const Models::GenerateDataKeyWithoutPlaintextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random data key, which can be used to encrypt local data.
       *
       * @description This operation creates a random data key, encrypts the data key by using a specific symmetric CMK, and returns the ciphertext of the data key. This operation serves the same purpose as the [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html) operation. The only difference is that this operation does not return the plaintext of the data key.
       * The CMK that you specify in the request of this operation is only used to encrypt the data key and is not involved in the generation of the data key. KMS does not record or store the generated data key.
       * > * This operation applies to the scenario when you do not need to use the data key to immediately encrypt data. Before you can use the data key to encrypt data, you must call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation to decrypt the ciphertext of the data key.
       * > * This operation is also suitable for a distributed system with different trust levels. For example, a system stores data in different partitions based on a preset trust policy. A module creates different partitions and generates different data keys for each partition in advance. This module is not involved in data production and consumption after it completes initialization of the control plane. This module is the key provider. When producing and consuming data, modules on the control plane obtain the ciphertext of the data key for a partition first. After decrypting the ciphertext of the data key, modules on the control plane use the plaintext of the data key to encrypt or decrypt data and then clear the plaintext of the data key from the memory. In such a system, the key provider does not need to obtain the plaintext of the data key. It only needs to have the permissions to call the GenerateDataKeyWithoutPlaintext operation. The data producers or consumers do not need to generate new data keys. They only need to have the permissions to call the Decrypt operation.
       *
       * @param request GenerateDataKeyWithoutPlaintextRequest
       * @return GenerateDataKeyWithoutPlaintextResponse
       */
      Models::GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintext(const Models::GenerateDataKeyWithoutPlaintextRequest &request);

      /**
       * @description In this example, the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is queried. The certificate, certificate chain, certificate ID, and certificate signing request (CSR) are returned.
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is queried. The certificate, certificate chain, certificate ID, and certificate signing request (CSR) are returned.
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary Queries the information about a client key.
       *
       * @param request GetClientKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientKeyResponse
       */
      Models::GetClientKeyResponse getClientKeyWithOptions(const Models::GetClientKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a client key.
       *
       * @param request GetClientKeyRequest
       * @return GetClientKeyResponse
       */
      Models::GetClientKeyResponse getClientKey(const Models::GetClientKeyRequest &request);

      /**
       * @summary 获取默认KMS实例
       *
       * @param request GetDefaultKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultKmsInstanceResponse
       */
      Models::GetDefaultKmsInstanceResponse getDefaultKmsInstanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取默认KMS实例
       *
       * @return GetDefaultKmsInstanceResponse
       */
      Models::GetDefaultKmsInstanceResponse getDefaultKmsInstance();

      /**
       * @summary 仅可查询名称为 default 的 Key Policy，否则提示 Not Found。
       *
       * @param request GetKeyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeyPolicyResponse
       */
      Models::GetKeyPolicyResponse getKeyPolicyWithOptions(const Models::GetKeyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 仅可查询名称为 default 的 Key Policy，否则提示 Not Found。
       *
       * @param request GetKeyPolicyRequest
       * @return GetKeyPolicyResponse
       */
      Models::GetKeyPolicyResponse getKeyPolicy(const Models::GetKeyPolicyRequest &request);

      /**
       * @summary Queries the details of a Key Management Service (KMS) instance.
       *
       * @param request GetKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKmsInstanceResponse
       */
      Models::GetKmsInstanceResponse getKmsInstanceWithOptions(const Models::GetKmsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Key Management Service (KMS) instance.
       *
       * @param request GetKmsInstanceRequest
       * @return GetKmsInstanceResponse
       */
      Models::GetKmsInstanceResponse getKmsInstance(const Models::GetKmsInstanceRequest &request);

      /**
       * @summary 获取实例配额信息
       *
       * @param request GetKmsInstanceQuotaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKmsInstanceQuotaInfosResponse
       */
      Models::GetKmsInstanceQuotaInfosResponse getKmsInstanceQuotaInfosWithOptions(const Models::GetKmsInstanceQuotaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例配额信息
       *
       * @param request GetKmsInstanceQuotaInfosRequest
       * @return GetKmsInstanceQuotaInfosResponse
       */
      Models::GetKmsInstanceQuotaInfosResponse getKmsInstanceQuotaInfos(const Models::GetKmsInstanceQuotaInfosRequest &request);

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
       * @param request GetPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKeyWithOptions(const Models::GetPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetPublicKeyRequest
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKey(const Models::GetPublicKeyRequest &request);

      /**
       * @param request GetRandomPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRandomPasswordResponse
       */
      Models::GetRandomPasswordResponse getRandomPasswordWithOptions(const Models::GetRandomPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRandomPasswordRequest
       * @return GetRandomPasswordResponse
       */
      Models::GetRandomPasswordResponse getRandomPassword(const Models::GetRandomPasswordRequest &request);

      /**
       * @summary 仅可查询名称为 default 的 Secret Policy，否则提示 Not Found。
       *
       * @param request GetSecretPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretPolicyResponse
       */
      Models::GetSecretPolicyResponse getSecretPolicyWithOptions(const Models::GetSecretPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 仅可查询名称为 default 的 Secret Policy，否则提示 Not Found。
       *
       * @param request GetSecretPolicyRequest
       * @return GetSecretPolicyResponse
       */
      Models::GetSecretPolicyResponse getSecretPolicy(const Models::GetSecretPolicyRequest &request);

      /**
       * @summary 调用GetSecretValue接口获取凭据值。
       *
       * @description If you do not specify a version number or stage label, Secrets Manager returns the secret value of the version marked with ACSCurrent.
       * If a customer master key (CMK) is specified to encrypt the secret value, you must also have the `kms:Decrypt` permission on the CMK to call the GetSecretValue operation.
       * In this example, the value of the secret named `secret001` is obtained. The secret value is returned in the `SecretData` parameter. The secret value is `testdata1`.
       *
       * @param request GetSecretValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValueWithOptions(const Models::GetSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用GetSecretValue接口获取凭据值。
       *
       * @description If you do not specify a version number or stage label, Secrets Manager returns the secret value of the version marked with ACSCurrent.
       * If a customer master key (CMK) is specified to encrypt the secret value, you must also have the `kms:Decrypt` permission on the CMK to call the GetSecretValue operation.
       * In this example, the value of the secret named `secret001` is obtained. The secret value is returned in the `SecretData` parameter. The secret value is `testdata1`.
       *
       * @param request GetSecretValueRequest
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValue(const Models::GetSecretValueRequest &request);

      /**
       * @summary Call the ImportKeyMaterial operation to import the key material.
       *
       * @description Call [CreateKey](https://help.aliyun.com/document_detail/28947.html) when creating a CMK, you can select its key material source as external. **Origin** set to **EXTERNAL**. This API is used to import the key material into the CMK.
       * *   To view the CMK **Origin**, see [DescribeKey](https://help.aliyun.com/document_detail/28952.html).
       * *   Before importing key material, you need to call the [GetParametersForImport](https://help.aliyun.com/document_detail/68621.html) obtain the parameters required to import the key material, including the public key and import token.
       * > *   The key type of the pair is **Aliyun_AES_256** the key material must be 256 bits. The key type must be **Aliyun_SM4** the CMK and key material must be 128 bits.
       * > *   You can set the expiration time for the key material, or you can set it to never expire.
       * > *   You can reimport the key material and reset the expiration time for the specified CMK at any time, but the same key material must be imported.
       * > *   After the imported key material expires or is deleted, the specified CMK is unavailable until the same key material are imported again.
       * > *   A Key material can be imported to multiple cmks, but any Data or Data Key encrypted by one CMK cannot be decrypted by another CMK.
       *
       * @param request ImportKeyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyMaterialResponse
       */
      Models::ImportKeyMaterialResponse importKeyMaterialWithOptions(const Models::ImportKeyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ImportKeyMaterial operation to import the key material.
       *
       * @description Call [CreateKey](https://help.aliyun.com/document_detail/28947.html) when creating a CMK, you can select its key material source as external. **Origin** set to **EXTERNAL**. This API is used to import the key material into the CMK.
       * *   To view the CMK **Origin**, see [DescribeKey](https://help.aliyun.com/document_detail/28952.html).
       * *   Before importing key material, you need to call the [GetParametersForImport](https://help.aliyun.com/document_detail/68621.html) obtain the parameters required to import the key material, including the public key and import token.
       * > *   The key type of the pair is **Aliyun_AES_256** the key material must be 256 bits. The key type must be **Aliyun_SM4** the CMK and key material must be 128 bits.
       * > *   You can set the expiration time for the key material, or you can set it to never expire.
       * > *   You can reimport the key material and reset the expiration time for the specified CMK at any time, but the same key material must be imported.
       * > *   After the imported key material expires or is deleted, the specified CMK is unavailable until the same key material are imported again.
       * > *   A Key material can be imported to multiple cmks, but any Data or Data Key encrypted by one CMK cannot be decrypted by another CMK.
       *
       * @param request ImportKeyMaterialRequest
       * @return ImportKeyMaterialResponse
       */
      Models::ImportKeyMaterialResponse importKeyMaterial(const Models::ImportKeyMaterialRequest &request);

      /**
       * @summary Queries all aliases in the current region for the current account.
       *
       * @param request ListAliasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliasesWithOptions(const Models::ListAliasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all aliases in the current region for the current account.
       *
       * @param request ListAliasesRequest
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliases(const Models::ListAliasesRequest &request);

      /**
       * @param request ListAliasesByKeyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesByKeyIdResponse
       */
      Models::ListAliasesByKeyIdResponse listAliasesByKeyIdWithOptions(const Models::ListAliasesByKeyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAliasesByKeyIdRequest
       * @return ListAliasesByKeyIdResponse
       */
      Models::ListAliasesByKeyIdResponse listAliasesByKeyId(const Models::ListAliasesByKeyIdRequest &request);

      /**
       * @summary Queries a list of application access points (AAPs).
       *
       * @param request ListApplicationAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccessPointsResponse
       */
      Models::ListApplicationAccessPointsResponse listApplicationAccessPointsWithOptions(const Models::ListApplicationAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application access points (AAPs).
       *
       * @param request ListApplicationAccessPointsRequest
       * @return ListApplicationAccessPointsResponse
       */
      Models::ListApplicationAccessPointsResponse listApplicationAccessPoints(const Models::ListApplicationAccessPointsRequest &request);

      /**
       * @param request ListClientKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientKeysResponse
       */
      Models::ListClientKeysResponse listClientKeysWithOptions(const Models::ListClientKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListClientKeysRequest
       * @return ListClientKeysResponse
       */
      Models::ListClientKeysResponse listClientKeys(const Models::ListClientKeysRequest &request);

      /**
       * @summary Queries all versions of a specified CMK.
       *
       * @param request ListKeyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeyVersionsResponse
       */
      Models::ListKeyVersionsResponse listKeyVersionsWithOptions(const Models::ListKeyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all versions of a specified CMK.
       *
       * @param request ListKeyVersionsRequest
       * @return ListKeyVersionsResponse
       */
      Models::ListKeyVersionsResponse listKeyVersions(const Models::ListKeyVersionsRequest &request);

      /**
       * @summary Queries all customer master keys (CMKs) of the current Alibaba Cloud account in the current region.
       *
       * @param request ListKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeysResponse
       */
      Models::ListKeysResponse listKeysWithOptions(const Models::ListKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all customer master keys (CMKs) of the current Alibaba Cloud account in the current region.
       *
       * @param request ListKeysRequest
       * @return ListKeysResponse
       */
      Models::ListKeysResponse listKeys(const Models::ListKeysRequest &request);

      /**
       * @summary Queries a list of Key Management Service (KMS) instances.
       *
       * @param request ListKmsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKmsInstancesResponse
       */
      Models::ListKmsInstancesResponse listKmsInstancesWithOptions(const Models::ListKmsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Key Management Service (KMS) instances.
       *
       * @param request ListKmsInstancesRequest
       * @return ListKmsInstancesResponse
       */
      Models::ListKmsInstancesResponse listKmsInstances(const Models::ListKmsInstancesRequest &request);

      /**
       * @summary Queries a list of access control rules.
       *
       * @param request ListNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkRulesResponse
       */
      Models::ListNetworkRulesResponse listNetworkRulesWithOptions(const Models::ListNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of access control rules.
       *
       * @param request ListNetworkRulesRequest
       * @return ListNetworkRulesResponse
       */
      Models::ListNetworkRulesResponse listNetworkRules(const Models::ListNetworkRulesRequest &request);

      /**
       * @summary Queries a list of permission policies.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of permission policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @description Request format: KeyId="string"
       *
       * @param request ListResourceTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTagsWithOptions(const Models::ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Request format: KeyId="string"
       *
       * @param request ListResourceTagsRequest
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTags(const Models::ListResourceTagsRequest &request);

      /**
       * @description The secret value is not included in the returned version information. By default, deprecated secret versions are not returned.
       *
       * @param request ListSecretVersionIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretVersionIdsResponse
       */
      Models::ListSecretVersionIdsResponse listSecretVersionIdsWithOptions(const Models::ListSecretVersionIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description The secret value is not included in the returned version information. By default, deprecated secret versions are not returned.
       *
       * @param request ListSecretVersionIdsRequest
       * @return ListSecretVersionIdsResponse
       */
      Models::ListSecretVersionIdsResponse listSecretVersionIds(const Models::ListSecretVersionIdsRequest &request);

      /**
       * @description Specifies whether to return the resource tags of the secret. Valid values:
       * *   true: returns the resource tags.
       * *   false: does not return the resource tags. This is the default value.
       *
       * @param request ListSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Specifies whether to return the resource tags of the secret. Valid values:
       * *   true: returns the resource tags.
       * *   false: does not return the resource tags. This is the default value.
       *
       * @param request ListSecretsRequest
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecrets(const Models::ListSecretsRequest &request);

      /**
       * @summary Queries the tags of a key or a secret.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of a key or a secret.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Activates Key Management Service (KMS) under your Alibaba cloud account.
       *
       * @description When you call this operation, note that:
       * - KMS is a paid service. For more information about the billing method, see [Billing description](https://www.alibabacloud.com/help/en/key-management-service/latest/billing-billing).
       * - An Alibaba Cloud account can activate KMS only once.
       * - Make sure that your Alibaba Cloud account has passed real-name authentication.
       *
       * @param request OpenKmsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenKmsServiceResponse
       */
      Models::OpenKmsServiceResponse openKmsServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Key Management Service (KMS) under your Alibaba cloud account.
       *
       * @description When you call this operation, note that:
       * - KMS is a paid service. For more information about the billing method, see [Billing description](https://www.alibabacloud.com/help/en/key-management-service/latest/billing-billing).
       * - An Alibaba Cloud account can activate KMS only once.
       * - Make sure that your Alibaba Cloud account has passed real-name authentication.
       *
       * @return OpenKmsServiceResponse
       */
      Models::OpenKmsServiceResponse openKmsService();

      /**
       * @description This operation is used to store the secret values of new versions. It cannot be used to modify the secret value of an existing version.
       * By default, the newly stored secret value is marked with ACSCurrent, and the mark for the previous version of the secret value is changed from ACSCurrent to ACSPrevious. If you specify the VersionStage parameter, the newly stored secret value is marked with the stage label that you specify.
       * You must specify a version number when you call the operation. Secrets Manager performs operations based on the following rules:
       * *   If the specified version number does not exist in the secret, Secrets Manager creates the version and stores the secret value.
       * *   If the specified version number already exists in the secret and the secret value of the existing version is the same as the secret value that you specify, Secrets Manager ignores the request and returns a success message. The request is idempotent.
       * *   If the specified version number already exists in the secret but the secret value of the existing version is different from the secret value that you specify, Secrets Manager rejects the request and returns a failure message.
       * Limits: This operation is available only for standard secrets.
       * In this example, the secret value of a new version is stored into the `secret001` secret. The `VersionId` parameter is set to `00000000000000000000000000000000203` as the new version, and the `SecretData` parameter is set to `importantdata`.
       *
       * @param request PutSecretValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutSecretValueResponse
       */
      Models::PutSecretValueResponse putSecretValueWithOptions(const Models::PutSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This operation is used to store the secret values of new versions. It cannot be used to modify the secret value of an existing version.
       * By default, the newly stored secret value is marked with ACSCurrent, and the mark for the previous version of the secret value is changed from ACSCurrent to ACSPrevious. If you specify the VersionStage parameter, the newly stored secret value is marked with the stage label that you specify.
       * You must specify a version number when you call the operation. Secrets Manager performs operations based on the following rules:
       * *   If the specified version number does not exist in the secret, Secrets Manager creates the version and stores the secret value.
       * *   If the specified version number already exists in the secret and the secret value of the existing version is the same as the secret value that you specify, Secrets Manager ignores the request and returns a success message. The request is idempotent.
       * *   If the specified version number already exists in the secret but the secret value of the existing version is different from the secret value that you specify, Secrets Manager rejects the request and returns a failure message.
       * Limits: This operation is available only for standard secrets.
       * In this example, the secret value of a new version is stored into the `secret001` secret. The `VersionId` parameter is set to `00000000000000000000000000000000203` as the new version, and the `SecretData` parameter is set to `importantdata`.
       *
       * @param request PutSecretValueRequest
       * @return PutSecretValueResponse
       */
      Models::PutSecretValueResponse putSecretValue(const Models::PutSecretValueRequest &request);

      /**
       * @description You can call this operation in the following scenarios:
       * *   After the CMK that was used to encrypt your data is rotated, you can call this operation to use the latest CMK version to re-encrypt the data. For more information about automatic key rotation, see [Configure automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
       * *   The CMK that was used to encrypt your data remains unchanged, but EncryptionContext is changed. In this scenario, you can call this operation to re-encrypt the data.
       * *   You can call this operation to use a CMK in KMS to re-encrypt data or a data key that was previously encrypted by a different CMK.
       * To use the ReEncrypt operation, you must have two permissions:
       * *   kms:ReEncryptFrom on the source CMK
       * *   kms:ReEncryptTo on the destination CMK
       * *   For simplicity, you can specify kms:ReEncrypt\\* to allow both of the preceding permissions.
       *
       * @param tmpReq ReEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReEncryptResponse
       */
      Models::ReEncryptResponse reEncryptWithOptions(const Models::ReEncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can call this operation in the following scenarios:
       * *   After the CMK that was used to encrypt your data is rotated, you can call this operation to use the latest CMK version to re-encrypt the data. For more information about automatic key rotation, see [Configure automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
       * *   The CMK that was used to encrypt your data remains unchanged, but EncryptionContext is changed. In this scenario, you can call this operation to re-encrypt the data.
       * *   You can call this operation to use a CMK in KMS to re-encrypt data or a data key that was previously encrypted by a different CMK.
       * To use the ReEncrypt operation, you must have two permissions:
       * *   kms:ReEncryptFrom on the source CMK
       * *   kms:ReEncryptTo on the destination CMK
       * *   For simplicity, you can specify kms:ReEncrypt\\* to allow both of the preceding permissions.
       *
       * @param request ReEncryptRequest
       * @return ReEncryptResponse
       */
      Models::ReEncryptResponse reEncrypt(const Models::ReEncryptRequest &request);

      /**
       * @summary 仅后付费实例支持释放，预付费实例需要从用户中心-退订管理释放。
       *
       * @param request ReleaseKmsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseKmsInstanceResponse
       */
      Models::ReleaseKmsInstanceResponse releaseKmsInstanceWithOptions(const Models::ReleaseKmsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 仅后付费实例支持释放，预付费实例需要从用户中心-退订管理释放。
       *
       * @param request ReleaseKmsInstanceRequest
       * @return ReleaseKmsInstanceResponse
       */
      Models::ReleaseKmsInstanceResponse releaseKmsInstance(const Models::ReleaseKmsInstanceRequest &request);

      /**
       * @description You can only use this operation to restore a deleted secret that is within its recovery period. If you set **ForceDeleteWithoutRecovery** to **true** when you delete the secret, you cannot restore it.
       *
       * @param request RestoreSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreSecretResponse
       */
      Models::RestoreSecretResponse restoreSecretWithOptions(const Models::RestoreSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can only use this operation to restore a deleted secret that is within its recovery period. If you set **ForceDeleteWithoutRecovery** to **true** when you delete the secret, you cannot restore it.
       *
       * @param request RestoreSecretRequest
       * @return RestoreSecretResponse
       */
      Models::RestoreSecretResponse restoreSecret(const Models::RestoreSecretRequest &request);

      /**
       * @description Limits:
       * • A secret of each Alibaba Cloud account can be rotated for a maximum of 50 times per hour.
       * • The RotateSecret operation is unavailable for standard secrets.
       * In this example, the `RdsSecret/Mysql5.4/MyCred` secret is manually rotated, and the version number of the secret is set to `000000123` after the secret is rotated.
       *
       * @param request RotateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RotateSecretResponse
       */
      Models::RotateSecretResponse rotateSecretWithOptions(const Models::RotateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Limits:
       * • A secret of each Alibaba Cloud account can be rotated for a maximum of 50 times per hour.
       * • The RotateSecret operation is unavailable for standard secrets.
       * In this example, the `RdsSecret/Mysql5.4/MyCred` secret is manually rotated, and the version number of the secret is set to `000000123` after the secret is rotated.
       *
       * @param request RotateSecretRequest
       * @return RotateSecretResponse
       */
      Models::RotateSecretResponse rotateSecret(const Models::RotateSecretRequest &request);

      /**
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
       * @description *   After you enable deletion protection for a CMK, you cannot delete the CMK. If you want to delete the CMK, you must first disable deletion protection for the CMK.
       * *   Before you can call the SetDeletionProtection operation, make sure that the required CMK is not in the Pending Deletion state. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the CMK status, which is specified by the KeyState parameter.
       * You can enable deletion protection for the CMK whose Alibaba Cloud Resource Name (ARN) is `acs:kms:cn-hangzhou:123213123****:key/0225f411-b21d-46d1-be5b-93931c82****` by using parameter settings provided in this topic. The CMK ARN is specified by the ProtectedResourceArn parameter.
       *
       * @param request SetDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtectionWithOptions(const Models::SetDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables deletion protection for a customer master key (CMK).
       *
       * @description *   After you enable deletion protection for a CMK, you cannot delete the CMK. If you want to delete the CMK, you must first disable deletion protection for the CMK.
       * *   Before you can call the SetDeletionProtection operation, make sure that the required CMK is not in the Pending Deletion state. You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the CMK status, which is specified by the KeyState parameter.
       * You can enable deletion protection for the CMK whose Alibaba Cloud Resource Name (ARN) is `acs:kms:cn-hangzhou:123213123****:key/0225f411-b21d-46d1-be5b-93931c82****` by using parameter settings provided in this topic. The CMK ARN is specified by the ProtectedResourceArn parameter.
       *
       * @param request SetDeletionProtectionRequest
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtection(const Models::SetDeletionProtectionRequest &request);

      /**
       * @summary 可以设置一条 Key Policy，且名称必须为 default。
       *
       * @param request SetKeyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetKeyPolicyResponse
       */
      Models::SetKeyPolicyResponse setKeyPolicyWithOptions(const Models::SetKeyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可以设置一条 Key Policy，且名称必须为 default。
       *
       * @param request SetKeyPolicyRequest
       * @return SetKeyPolicyResponse
       */
      Models::SetKeyPolicyResponse setKeyPolicy(const Models::SetKeyPolicyRequest &request);

      /**
       * @summary 可以设置一条 Secret Policy，且名称必须为 default。
       *
       * @param request SetSecretPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSecretPolicyResponse
       */
      Models::SetSecretPolicyResponse setSecretPolicyWithOptions(const Models::SetSecretPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可以设置一条 Secret Policy，且名称必须为 default。
       *
       * @param request SetSecretPolicyRequest
       * @return SetSecretPolicyResponse
       */
      Models::SetSecretPolicyResponse setSecretPolicy(const Models::SetSecretPolicyRequest &request);

      /**
       * @description You can add up to 10 tags to a CMK, secret, or certificate.
       * In this example, the tags `[{"TagKey":"S1key1","TagValue":"S1val1"},{"TagKey":"S1key2","TagValue":"S2val2"}]` are added to the CMK whose ID is `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       *
       * @param request TagResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourceResponse
       */
      Models::TagResourceResponse tagResourceWithOptions(const Models::TagResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can add up to 10 tags to a CMK, secret, or certificate.
       * In this example, the tags `[{"TagKey":"S1key1","TagValue":"S1val1"},{"TagKey":"S1key2","TagValue":"S2val2"}]` are added to the CMK whose ID is `08c33a6f-4e0a-4a1b-a3fa-7ddf****`.
       *
       * @param request TagResourceRequest
       * @return TagResourceResponse
       */
      Models::TagResourceResponse tagResource(const Models::TagResourceRequest &request);

      /**
       * @summary Adds tags to keys or secrets.
       *
       * @description You can add multiple tags to multiple keys or multiple secrets at a time.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to keys or secrets.
       *
       * @description You can add multiple tags to multiple keys or multiple secrets at a time.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @description One or more tag keys. Separate multiple tag keys with commas (,).
       * You need to specify only the tag keys, not the tag values.
       * Each tag key must be 1 to 128 bytes in length.
       *
       * @param request UntagResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourceResponse
       */
      Models::UntagResourceResponse untagResourceWithOptions(const Models::UntagResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description One or more tag keys. Separate multiple tag keys with commas (,).
       * You need to specify only the tag keys, not the tag values.
       * Each tag key must be 1 to 128 bytes in length.
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
       * @param request UpdateAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAliasWithOptions(const Models::UpdateAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAliasRequest
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAlias(const Models::UpdateAliasRequest &request);

      /**
       * @description The update takes effect immediately after an AAP information is updated. Exercise caution when you perform this operation. You can update the description of an AAP and the permission policies that are associated with the AAP. You cannot update the name of the AAP.
       *
       * @param request UpdateApplicationAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationAccessPointResponse
       */
      Models::UpdateApplicationAccessPointResponse updateApplicationAccessPointWithOptions(const Models::UpdateApplicationAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description The update takes effect immediately after an AAP information is updated. Exercise caution when you perform this operation. You can update the description of an AAP and the permission policies that are associated with the AAP. You cannot update the name of the AAP.
       *
       * @param request UpdateApplicationAccessPointRequest
       * @return UpdateApplicationAccessPointResponse
       */
      Models::UpdateApplicationAccessPointResponse updateApplicationAccessPoint(const Models::UpdateApplicationAccessPointRequest &request);

      /**
       * @description In this example, the status of the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is updated to INACTIVE.
       *
       * @param request UpdateCertificateStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCertificateStatusResponse
       */
      Models::UpdateCertificateStatusResponse updateCertificateStatusWithOptions(const Models::UpdateCertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the status of the certificate whose ID is `9a28de48-8d8b-484d-a766-dec4****` is updated to INACTIVE.
       *
       * @param request UpdateCertificateStatusRequest
       * @return UpdateCertificateStatusResponse
       */
      Models::UpdateCertificateStatusResponse updateCertificateStatus(const Models::UpdateCertificateStatusRequest &request);

      /**
       * @summary 调用UpdateKeyDescription接口更新主密钥的描述信息。
       *
       * @description This operation replaces the description of a customer master key (CMK) with the description that you specify. The original description of the CMK is specified by the Description parameter when you call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation. You can call this operation to add, modify, or delete the description of a CMK.
       *
       * @param request UpdateKeyDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKeyDescriptionResponse
       */
      Models::UpdateKeyDescriptionResponse updateKeyDescriptionWithOptions(const Models::UpdateKeyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用UpdateKeyDescription接口更新主密钥的描述信息。
       *
       * @description This operation replaces the description of a customer master key (CMK) with the description that you specify. The original description of the CMK is specified by the Description parameter when you call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation. You can call this operation to add, modify, or delete the description of a CMK.
       *
       * @param request UpdateKeyDescriptionRequest
       * @return UpdateKeyDescriptionResponse
       */
      Models::UpdateKeyDescriptionResponse updateKeyDescription(const Models::UpdateKeyDescriptionRequest &request);

      /**
       * @summary Updates the virtual private cloud (VPC) that is associated with a Key Management Service (KMS) instance.
       *
       * @description If your own applications are deployed in multiple VPCs in the same region, you can associate the VPCs except the VPC in which the KMS instance resides with the KMS instance. This topic describes how to configure the VPCs.
       * The VPCs can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. After the configuration is complete, the applications in these VPCs can access the KMS instance.
       * > If the VPCs belong to different Alibaba Cloud accounts, you must first configure resource sharing to share the vSwitches of other Alibaba Cloud accounts with the Alibaba Cloud account to which the KMS instance belongs. For more information, see [Access a KMS instance from multiple VPCs in the same region](https://help.aliyun.com/document_detail/2393236.html).
       *
       * @param request UpdateKmsInstanceBindVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKmsInstanceBindVpcResponse
       */
      Models::UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpcWithOptions(const Models::UpdateKmsInstanceBindVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the virtual private cloud (VPC) that is associated with a Key Management Service (KMS) instance.
       *
       * @description If your own applications are deployed in multiple VPCs in the same region, you can associate the VPCs except the VPC in which the KMS instance resides with the KMS instance. This topic describes how to configure the VPCs.
       * The VPCs can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. After the configuration is complete, the applications in these VPCs can access the KMS instance.
       * > If the VPCs belong to different Alibaba Cloud accounts, you must first configure resource sharing to share the vSwitches of other Alibaba Cloud accounts with the Alibaba Cloud account to which the KMS instance belongs. For more information, see [Access a KMS instance from multiple VPCs in the same region](https://help.aliyun.com/document_detail/2393236.html).
       *
       * @param request UpdateKmsInstanceBindVpcRequest
       * @return UpdateKmsInstanceBindVpcResponse
       */
      Models::UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpc(const Models::UpdateKmsInstanceBindVpcRequest &request);

      /**
       * @summary Updates an access control rule.
       *
       * @description - You can update only private IP addresses and description of an access control rule. You cannot update the name and network type of an access control rule.
       * - Updating an access control rule affects all permission policies that are bound to the access control rule. Exercise caution when you perform this operation.
       *
       * @param request UpdateNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkRuleResponse
       */
      Models::UpdateNetworkRuleResponse updateNetworkRuleWithOptions(const Models::UpdateNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an access control rule.
       *
       * @description - You can update only private IP addresses and description of an access control rule. You cannot update the name and network type of an access control rule.
       * - Updating an access control rule affects all permission policies that are bound to the access control rule. Exercise caution when you perform this operation.
       *
       * @param request UpdateNetworkRuleRequest
       * @return UpdateNetworkRuleResponse
       */
      Models::UpdateNetworkRuleResponse updateNetworkRule(const Models::UpdateNetworkRuleRequest &request);

      /**
       * @summary 更新一个权限策略
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
       * @summary 更新一个权限策略
       *
       * @description - You can update the role-based access control (RBAC) permissions, accessible resources, access control rules, and description of a permission policy. You cannot update the name or scope of a permission policy.
       * - Updating a permission policy affects all application access points (AAPs) that are bound to the permission policy. Exercise caution when you perform this operation.
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const Models::UpdatePolicyRequest &request);

      /**
       * @description When automatic key rotation is enabled, KMS automatically creates a key version after the preset rotation period arrives. In addition, KMS sets the new key version as the primary key version.
       * An automatic key rotation policy cannot be configured for the following keys:
       * *   Asymmetric key
       * *   Service-managed key
       * *   Bring your own key (BYOK) that is imported into KMS
       * *   Key that is not in the **Enabled** state
       * In this example, automatic key rotation is enabled for a CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****`. The automatic rotation period is 30 days.
       *
       * @param request UpdateRotationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRotationPolicyResponse
       */
      Models::UpdateRotationPolicyResponse updateRotationPolicyWithOptions(const Models::UpdateRotationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description When automatic key rotation is enabled, KMS automatically creates a key version after the preset rotation period arrives. In addition, KMS sets the new key version as the primary key version.
       * An automatic key rotation policy cannot be configured for the following keys:
       * *   Asymmetric key
       * *   Service-managed key
       * *   Bring your own key (BYOK) that is imported into KMS
       * *   Key that is not in the **Enabled** state
       * In this example, automatic key rotation is enabled for a CMK whose ID is `1234abcd-12ab-34cd-56ef-12345678****`. The automatic rotation period is 30 days.
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
       * @summary UpdateSecretVersionStage
       *
       * @description Updates the stage label that marks a secret version.
       *
       * @param request UpdateSecretVersionStageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretVersionStageResponse
       */
      Models::UpdateSecretVersionStageResponse updateSecretVersionStageWithOptions(const Models::UpdateSecretVersionStageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateSecretVersionStage
       *
       * @description Updates the stage label that marks a secret version.
       *
       * @param request UpdateSecretVersionStageRequest
       * @return UpdateSecretVersionStageResponse
       */
      Models::UpdateSecretVersionStageResponse updateSecretVersionStage(const Models::UpdateSecretVersionStageRequest &request);

      /**
       * @description In this example, a certificate issued by a CA is imported into Certificates Manager. The ID of the certificate in Certificates Manager is `12345678-1234-1234-1234-12345678****`.
       *
       * @param request UploadCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCertificateResponse
       */
      Models::UploadCertificateResponse uploadCertificateWithOptions(const Models::UploadCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, a certificate issued by a CA is imported into Certificates Manager. The ID of the certificate in Certificates Manager is `12345678-1234-1234-1234-12345678****`.
       *
       * @param request UploadCertificateRequest
       * @return UploadCertificateResponse
       */
      Models::UploadCertificateResponse uploadCertificate(const Models::UploadCertificateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSFORIMPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSFORIMPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetParametersForImportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParametersForImportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    friend void from_json(const Darabonba::Json& j, GetParametersForImportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    GetParametersForImportRequest() = default ;
    GetParametersForImportRequest(const GetParametersForImportRequest &) = default ;
    GetParametersForImportRequest(GetParametersForImportRequest &&) = default ;
    GetParametersForImportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParametersForImportRequest() = default ;
    GetParametersForImportRequest& operator=(const GetParametersForImportRequest &) = default ;
    GetParametersForImportRequest& operator=(GetParametersForImportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->wrappingAlgorithm_ == nullptr && return this->wrappingKeySpec_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetParametersForImportRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // wrappingAlgorithm Field Functions 
    bool hasWrappingAlgorithm() const { return this->wrappingAlgorithm_ != nullptr;};
    void deleteWrappingAlgorithm() { this->wrappingAlgorithm_ = nullptr;};
    inline string wrappingAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(wrappingAlgorithm_, "") };
    inline GetParametersForImportRequest& setWrappingAlgorithm(string wrappingAlgorithm) { DARABONBA_PTR_SET_VALUE(wrappingAlgorithm_, wrappingAlgorithm) };


    // wrappingKeySpec Field Functions 
    bool hasWrappingKeySpec() const { return this->wrappingKeySpec_ != nullptr;};
    void deleteWrappingKeySpec() { this->wrappingKeySpec_ = nullptr;};
    inline string wrappingKeySpec() const { DARABONBA_PTR_GET_DEFAULT(wrappingKeySpec_, "") };
    inline GetParametersForImportRequest& setWrappingKeySpec(string wrappingKeySpec) { DARABONBA_PTR_SET_VALUE(wrappingKeySpec_, wrappingKeySpec) };


  protected:
    // The globally unique ID of the CMK.
    // 
    // >  You can import key material only for CMKs whose Origin parameter is set to EXTERNAL.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The algorithm that is used to encrypt key material.
    // 
    // This parameter is required.
    std::shared_ptr<string> wrappingAlgorithm_ = nullptr;
    // The type of the public key that is used to encrypt key material.
    // 
    // This parameter is required.
    std::shared_ptr<string> wrappingKeySpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

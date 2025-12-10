// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGORITHMDEFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALGORITHMDEFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgorithmDefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgorithmDefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgoVersion, algoVersion_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgorithmDefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgoVersion, algoVersion_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GetAlgorithmDefRequest() = default ;
    GetAlgorithmDefRequest(const GetAlgorithmDefRequest &) = default ;
    GetAlgorithmDefRequest(GetAlgorithmDefRequest &&) = default ;
    GetAlgorithmDefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgorithmDefRequest() = default ;
    GetAlgorithmDefRequest& operator=(const GetAlgorithmDefRequest &) = default ;
    GetAlgorithmDefRequest& operator=(GetAlgorithmDefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algoVersion_ == nullptr
        && return this->identifier_ == nullptr && return this->provider_ == nullptr && return this->signature_ == nullptr; };
    // algoVersion Field Functions 
    bool hasAlgoVersion() const { return this->algoVersion_ != nullptr;};
    void deleteAlgoVersion() { this->algoVersion_ = nullptr;};
    inline string algoVersion() const { DARABONBA_PTR_GET_DEFAULT(algoVersion_, "") };
    inline GetAlgorithmDefRequest& setAlgoVersion(string algoVersion) { DARABONBA_PTR_SET_VALUE(algoVersion_, algoVersion) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetAlgorithmDefRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetAlgorithmDefRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetAlgorithmDefRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> algoVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

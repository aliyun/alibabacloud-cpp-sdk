// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTIFYCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTIFYCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IdentifyCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateIdentifyCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentifyCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyCredential, identifyCredential_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentifyCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyCredential, identifyCredential_);
    };
    CreateIdentifyCredentialRequest() = default ;
    CreateIdentifyCredentialRequest(const CreateIdentifyCredentialRequest &) = default ;
    CreateIdentifyCredentialRequest(CreateIdentifyCredentialRequest &&) = default ;
    CreateIdentifyCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentifyCredentialRequest() = default ;
    CreateIdentifyCredentialRequest& operator=(const CreateIdentifyCredentialRequest &) = default ;
    CreateIdentifyCredentialRequest& operator=(CreateIdentifyCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyCredential_ == nullptr; };
    // identifyCredential Field Functions 
    bool hasIdentifyCredential() const { return this->identifyCredential_ != nullptr;};
    void deleteIdentifyCredential() { this->identifyCredential_ = nullptr;};
    inline const IdentifyCredential & identifyCredential() const { DARABONBA_PTR_GET_CONST(identifyCredential_, IdentifyCredential) };
    inline IdentifyCredential identifyCredential() { DARABONBA_PTR_GET(identifyCredential_, IdentifyCredential) };
    inline CreateIdentifyCredentialRequest& setIdentifyCredential(const IdentifyCredential & identifyCredential) { DARABONBA_PTR_SET_VALUE(identifyCredential_, identifyCredential) };
    inline CreateIdentifyCredentialRequest& setIdentifyCredential(IdentifyCredential && identifyCredential) { DARABONBA_PTR_SET_RVALUE(identifyCredential_, identifyCredential) };


  protected:
    std::shared_ptr<IdentifyCredential> identifyCredential_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

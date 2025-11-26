// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTIFYCREDENTIALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTIFYCREDENTIALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateIdentifyCredentialShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentifyCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyCredential, identifyCredentialShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentifyCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyCredential, identifyCredentialShrink_);
    };
    CreateIdentifyCredentialShrinkRequest() = default ;
    CreateIdentifyCredentialShrinkRequest(const CreateIdentifyCredentialShrinkRequest &) = default ;
    CreateIdentifyCredentialShrinkRequest(CreateIdentifyCredentialShrinkRequest &&) = default ;
    CreateIdentifyCredentialShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentifyCredentialShrinkRequest() = default ;
    CreateIdentifyCredentialShrinkRequest& operator=(const CreateIdentifyCredentialShrinkRequest &) = default ;
    CreateIdentifyCredentialShrinkRequest& operator=(CreateIdentifyCredentialShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyCredentialShrink_ == nullptr; };
    // identifyCredentialShrink Field Functions 
    bool hasIdentifyCredentialShrink() const { return this->identifyCredentialShrink_ != nullptr;};
    void deleteIdentifyCredentialShrink() { this->identifyCredentialShrink_ = nullptr;};
    inline string identifyCredentialShrink() const { DARABONBA_PTR_GET_DEFAULT(identifyCredentialShrink_, "") };
    inline CreateIdentifyCredentialShrinkRequest& setIdentifyCredentialShrink(string identifyCredentialShrink) { DARABONBA_PTR_SET_VALUE(identifyCredentialShrink_, identifyCredentialShrink) };


  protected:
    std::shared_ptr<string> identifyCredentialShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

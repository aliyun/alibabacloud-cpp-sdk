// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAttackPathSensitiveAssetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathSensitiveAssetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfig, attackPathSensitiveAssetConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathSensitiveAssetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfig, attackPathSensitiveAssetConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAttackPathSensitiveAssetConfigResponseBody() = default ;
    CreateAttackPathSensitiveAssetConfigResponseBody(const CreateAttackPathSensitiveAssetConfigResponseBody &) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBody(CreateAttackPathSensitiveAssetConfigResponseBody &&) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathSensitiveAssetConfigResponseBody() = default ;
    CreateAttackPathSensitiveAssetConfigResponseBody& operator=(const CreateAttackPathSensitiveAssetConfigResponseBody &) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBody& operator=(CreateAttackPathSensitiveAssetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathSensitiveAssetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathSensitiveAssetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathSensitiveAssetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      };
      AttackPathSensitiveAssetConfig() = default ;
      AttackPathSensitiveAssetConfig(const AttackPathSensitiveAssetConfig &) = default ;
      AttackPathSensitiveAssetConfig(AttackPathSensitiveAssetConfig &&) = default ;
      AttackPathSensitiveAssetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathSensitiveAssetConfig() = default ;
      AttackPathSensitiveAssetConfig& operator=(const AttackPathSensitiveAssetConfig &) = default ;
      AttackPathSensitiveAssetConfig& operator=(AttackPathSensitiveAssetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackPathSensitiveAssetConfigId_ == nullptr; };
      // attackPathSensitiveAssetConfigId Field Functions 
      bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
      void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
      inline string getAttackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
      inline AttackPathSensitiveAssetConfig& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


    protected:
      // ID for setting sensitive assets in the attack path.
      shared_ptr<string> attackPathSensitiveAssetConfigId_ {};
    };

    virtual bool empty() const override { return this->attackPathSensitiveAssetConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathSensitiveAssetConfig Field Functions 
    bool hasAttackPathSensitiveAssetConfig() const { return this->attackPathSensitiveAssetConfig_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfig() { this->attackPathSensitiveAssetConfig_ = nullptr;};
    inline const CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig & getAttackPathSensitiveAssetConfig() const { DARABONBA_PTR_GET_CONST(attackPathSensitiveAssetConfig_, CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig) };
    inline CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig getAttackPathSensitiveAssetConfig() { DARABONBA_PTR_GET(attackPathSensitiveAssetConfig_, CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig) };
    inline CreateAttackPathSensitiveAssetConfigResponseBody& setAttackPathSensitiveAssetConfig(const CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig & attackPathSensitiveAssetConfig) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfig_, attackPathSensitiveAssetConfig) };
    inline CreateAttackPathSensitiveAssetConfigResponseBody& setAttackPathSensitiveAssetConfig(CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig && attackPathSensitiveAssetConfig) { DARABONBA_PTR_SET_RVALUE(attackPathSensitiveAssetConfig_, attackPathSensitiveAssetConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAttackPathSensitiveAssetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data of the attack path sensitive asset settings.
    shared_ptr<CreateAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig> attackPathSensitiveAssetConfig_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JWTIDENTITYCONFIGJWTTOKENCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JWTIDENTITYCONFIGJWTTOKENCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class JwtIdentityConfigJwtTokenConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JwtIdentityConfigJwtTokenConfig& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(pass, pass_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, JwtIdentityConfigJwtTokenConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(pass, pass_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
    };
    JwtIdentityConfigJwtTokenConfig() = default ;
    JwtIdentityConfigJwtTokenConfig(const JwtIdentityConfigJwtTokenConfig &) = default ;
    JwtIdentityConfigJwtTokenConfig(JwtIdentityConfigJwtTokenConfig &&) = default ;
    JwtIdentityConfigJwtTokenConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JwtIdentityConfigJwtTokenConfig() = default ;
    JwtIdentityConfigJwtTokenConfig& operator=(const JwtIdentityConfigJwtTokenConfig &) = default ;
    JwtIdentityConfigJwtTokenConfig& operator=(JwtIdentityConfigJwtTokenConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->pass_ == nullptr && return this->position_ == nullptr && return this->prefix_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline JwtIdentityConfigJwtTokenConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline JwtIdentityConfigJwtTokenConfig& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline JwtIdentityConfigJwtTokenConfig& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline JwtIdentityConfigJwtTokenConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

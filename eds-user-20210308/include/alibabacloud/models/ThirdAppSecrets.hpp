// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDAPPSECRETS_HPP_
#define ALIBABACLOUD_MODELS_THIRDAPPSECRETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ThirdAppSecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdAppSecrets& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdAppSecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
    };
    ThirdAppSecrets() = default ;
    ThirdAppSecrets(const ThirdAppSecrets &) = default ;
    ThirdAppSecrets(ThirdAppSecrets &&) = default ;
    ThirdAppSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdAppSecrets() = default ;
    ThirdAppSecrets& operator=(const ThirdAppSecrets &) = default ;
    ThirdAppSecrets& operator=(ThirdAppSecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->secret_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ThirdAppSecrets& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline ThirdAppSecrets& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif

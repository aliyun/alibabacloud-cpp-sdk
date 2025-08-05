// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERSHEADERPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERSHEADERPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& obj) { 
      DARABONBA_PTR_TO_JSON(IsValueSecret, isValueSecret_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(IsValueSecret, isValueSecret_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters &&) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& operator=(const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& operator=(CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isValueSecret_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // isValueSecret Field Functions 
    bool hasIsValueSecret() const { return this->isValueSecret_ != nullptr;};
    void deleteIsValueSecret() { this->isValueSecret_ = nullptr;};
    inline string isValueSecret() const { DARABONBA_PTR_GET_DEFAULT(isValueSecret_, "") };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& setIsValueSecret(string isValueSecret) { DARABONBA_PTR_SET_VALUE(isValueSecret_, isValueSecret) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Specifies whether to enable authentication.
    std::shared_ptr<string> isValueSecret_ = nullptr;
    // The key of the request header.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the request header.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif

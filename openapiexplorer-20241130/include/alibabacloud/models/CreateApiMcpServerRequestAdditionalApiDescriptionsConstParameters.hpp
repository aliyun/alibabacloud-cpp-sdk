// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUESTADDITIONALAPIDESCRIPTIONSCONSTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUESTADDITIONALAPIDESCRIPTIONSCONSTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters() = default ;
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters(const CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters &) = default ;
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters(CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters &&) = default ;
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters() = default ;
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& operator=(const CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters &) = default ;
    CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& operator=(CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline CreateApiMcpServerRequestAdditionalApiDescriptionsConstParameters& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif

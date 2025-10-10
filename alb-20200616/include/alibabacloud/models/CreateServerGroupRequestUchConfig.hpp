// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUESTUCHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUESTUCHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateServerGroupRequestUchConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequestUchConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequestUchConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateServerGroupRequestUchConfig() = default ;
    CreateServerGroupRequestUchConfig(const CreateServerGroupRequestUchConfig &) = default ;
    CreateServerGroupRequestUchConfig(CreateServerGroupRequestUchConfig &&) = default ;
    CreateServerGroupRequestUchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerGroupRequestUchConfig() = default ;
    CreateServerGroupRequestUchConfig& operator=(const CreateServerGroupRequestUchConfig &) = default ;
    CreateServerGroupRequestUchConfig& operator=(CreateServerGroupRequestUchConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->value_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateServerGroupRequestUchConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateServerGroupRequestUchConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The parameter value for consistent hashing.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateConfigRequest() = default ;
    CreateConfigRequest(const CreateConfigRequest &) = default ;
    CreateConfigRequest(CreateConfigRequest &&) = default ;
    CreateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigRequest() = default ;
    CreateConfigRequest& operator=(const CreateConfigRequest &) = default ;
    CreateConfigRequest& operator=(CreateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateConfigRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 配置值
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif

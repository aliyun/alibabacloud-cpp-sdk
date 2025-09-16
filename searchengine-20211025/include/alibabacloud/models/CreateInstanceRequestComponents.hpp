// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateInstanceRequestComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateInstanceRequestComponents() = default ;
    CreateInstanceRequestComponents(const CreateInstanceRequestComponents &) = default ;
    CreateInstanceRequestComponents(CreateInstanceRequestComponents &&) = default ;
    CreateInstanceRequestComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestComponents() = default ;
    CreateInstanceRequestComponents& operator=(const CreateInstanceRequestComponents &) = default ;
    CreateInstanceRequestComponents& operator=(CreateInstanceRequestComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->value_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateInstanceRequestComponents& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateInstanceRequestComponents& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The code of the specification, which must be consistent with the value that you specify on the buy page.
    std::shared_ptr<string> code_ = nullptr;
    // The value of the specification.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

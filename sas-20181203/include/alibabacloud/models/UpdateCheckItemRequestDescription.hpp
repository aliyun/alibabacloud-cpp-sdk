// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUESTDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUESTDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckItemRequestDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckItemRequestDescription& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckItemRequestDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateCheckItemRequestDescription() = default ;
    UpdateCheckItemRequestDescription(const UpdateCheckItemRequestDescription &) = default ;
    UpdateCheckItemRequestDescription(UpdateCheckItemRequestDescription &&) = default ;
    UpdateCheckItemRequestDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckItemRequestDescription() = default ;
    UpdateCheckItemRequestDescription& operator=(const UpdateCheckItemRequestDescription &) = default ;
    UpdateCheckItemRequestDescription& operator=(UpdateCheckItemRequestDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->value_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCheckItemRequestDescription& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateCheckItemRequestDescription& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Type of the check item description. Values:
    // 
    // - **text**: Text
    std::shared_ptr<string> type_ = nullptr;
    // Description of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

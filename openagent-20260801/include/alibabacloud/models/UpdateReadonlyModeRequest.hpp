// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREADONLYMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREADONLYMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class UpdateReadonlyModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateReadonlyModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateReadonlyModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UpdateReadonlyModeRequest() = default ;
    UpdateReadonlyModeRequest(const UpdateReadonlyModeRequest &) = default ;
    UpdateReadonlyModeRequest(UpdateReadonlyModeRequest &&) = default ;
    UpdateReadonlyModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateReadonlyModeRequest() = default ;
    UpdateReadonlyModeRequest& operator=(const UpdateReadonlyModeRequest &) = default ;
    UpdateReadonlyModeRequest& operator=(UpdateReadonlyModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateReadonlyModeRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Required. Pass the string true to enable read-only mode, or false to disable it. The value is case-insensitive.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif

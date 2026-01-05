// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETAGOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETAGOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdateTagOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTagOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTagOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateTagOptionRequest() = default ;
    UpdateTagOptionRequest(const UpdateTagOptionRequest &) = default ;
    UpdateTagOptionRequest(UpdateTagOptionRequest &&) = default ;
    UpdateTagOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTagOptionRequest() = default ;
    UpdateTagOptionRequest& operator=(const UpdateTagOptionRequest &) = default ;
    UpdateTagOptionRequest& operator=(UpdateTagOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->tagOptionId_ == nullptr && this->value_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline UpdateTagOptionRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // tagOptionId Field Functions 
    bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
    void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
    inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
    inline UpdateTagOptionRequest& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateTagOptionRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Specifies whether to enable the tag option. Valid values:
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> active_ {};
    // The ID of the tag option.
    // 
    // This parameter is required.
    shared_ptr<string> tagOptionId_ {};
    // The value of the tag option.
    // 
    // The value can be up to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif

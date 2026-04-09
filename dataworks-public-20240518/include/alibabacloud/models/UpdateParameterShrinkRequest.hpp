// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPARAMETERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPARAMETERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateParameterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateParameterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Properties, propertiesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateParameterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Properties, propertiesShrink_);
    };
    UpdateParameterShrinkRequest() = default ;
    UpdateParameterShrinkRequest(const UpdateParameterShrinkRequest &) = default ;
    UpdateParameterShrinkRequest(UpdateParameterShrinkRequest &&) = default ;
    UpdateParameterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateParameterShrinkRequest() = default ;
    UpdateParameterShrinkRequest& operator=(const UpdateParameterShrinkRequest &) = default ;
    UpdateParameterShrinkRequest& operator=(UpdateParameterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->owner_ == nullptr && this->propertiesShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateParameterShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateParameterShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateParameterShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // propertiesShrink Field Functions 
    bool hasPropertiesShrink() const { return this->propertiesShrink_ != nullptr;};
    void deletePropertiesShrink() { this->propertiesShrink_ = nullptr;};
    inline string getPropertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(propertiesShrink_, "") };
    inline UpdateParameterShrinkRequest& setPropertiesShrink(string propertiesShrink) { DARABONBA_PTR_SET_VALUE(propertiesShrink_, propertiesShrink) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> propertiesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

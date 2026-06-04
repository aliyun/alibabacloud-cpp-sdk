// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETAENTITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETAENTITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMetaEntityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaEntityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributesShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaEntityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateMetaEntityShrinkRequest() = default ;
    UpdateMetaEntityShrinkRequest(const UpdateMetaEntityShrinkRequest &) = default ;
    UpdateMetaEntityShrinkRequest(UpdateMetaEntityShrinkRequest &&) = default ;
    UpdateMetaEntityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaEntityShrinkRequest() = default ;
    UpdateMetaEntityShrinkRequest& operator=(const UpdateMetaEntityShrinkRequest &) = default ;
    UpdateMetaEntityShrinkRequest& operator=(UpdateMetaEntityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributesShrink_ == nullptr
        && this->comment_ == nullptr && this->customAttributesShrink_ == nullptr && this->id_ == nullptr; };
    // attributesShrink Field Functions 
    bool hasAttributesShrink() const { return this->attributesShrink_ != nullptr;};
    void deleteAttributesShrink() { this->attributesShrink_ = nullptr;};
    inline string getAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(attributesShrink_, "") };
    inline UpdateMetaEntityShrinkRequest& setAttributesShrink(string attributesShrink) { DARABONBA_PTR_SET_VALUE(attributesShrink_, attributesShrink) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateMetaEntityShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // customAttributesShrink Field Functions 
    bool hasCustomAttributesShrink() const { return this->customAttributesShrink_ != nullptr;};
    void deleteCustomAttributesShrink() { this->customAttributesShrink_ = nullptr;};
    inline string getCustomAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(customAttributesShrink_, "") };
    inline UpdateMetaEntityShrinkRequest& setCustomAttributesShrink(string customAttributesShrink) { DARABONBA_PTR_SET_VALUE(customAttributesShrink_, customAttributesShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMetaEntityShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> attributesShrink_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<string> customAttributesShrink_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCustomAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_TO_JSON(ValueEnums, valueEnumsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(ValueEnums, valueEnumsShrink_);
    };
    UpdateCustomAttributeShrinkRequest() = default ;
    UpdateCustomAttributeShrinkRequest(const UpdateCustomAttributeShrinkRequest &) = default ;
    UpdateCustomAttributeShrinkRequest(UpdateCustomAttributeShrinkRequest &&) = default ;
    UpdateCustomAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAttributeShrinkRequest() = default ;
    UpdateCustomAttributeShrinkRequest& operator=(const UpdateCustomAttributeShrinkRequest &) = default ;
    UpdateCustomAttributeShrinkRequest& operator=(UpdateCustomAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayEnabled_ == nullptr && this->displayName_ == nullptr && this->entityTypesShrink_ == nullptr && this->id_ == nullptr && this->searchFilterEnabled_ == nullptr
        && this->valueEnumsShrink_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateCustomAttributeShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayEnabled Field Functions 
    bool hasDisplayEnabled() const { return this->displayEnabled_ != nullptr;};
    void deleteDisplayEnabled() { this->displayEnabled_ = nullptr;};
    inline bool getDisplayEnabled() const { DARABONBA_PTR_GET_DEFAULT(displayEnabled_, false) };
    inline UpdateCustomAttributeShrinkRequest& setDisplayEnabled(bool displayEnabled) { DARABONBA_PTR_SET_VALUE(displayEnabled_, displayEnabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateCustomAttributeShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityTypesShrink Field Functions 
    bool hasEntityTypesShrink() const { return this->entityTypesShrink_ != nullptr;};
    void deleteEntityTypesShrink() { this->entityTypesShrink_ = nullptr;};
    inline string getEntityTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(entityTypesShrink_, "") };
    inline UpdateCustomAttributeShrinkRequest& setEntityTypesShrink(string entityTypesShrink) { DARABONBA_PTR_SET_VALUE(entityTypesShrink_, entityTypesShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateCustomAttributeShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // searchFilterEnabled Field Functions 
    bool hasSearchFilterEnabled() const { return this->searchFilterEnabled_ != nullptr;};
    void deleteSearchFilterEnabled() { this->searchFilterEnabled_ = nullptr;};
    inline bool getSearchFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchFilterEnabled_, false) };
    inline UpdateCustomAttributeShrinkRequest& setSearchFilterEnabled(bool searchFilterEnabled) { DARABONBA_PTR_SET_VALUE(searchFilterEnabled_, searchFilterEnabled) };


    // valueEnumsShrink Field Functions 
    bool hasValueEnumsShrink() const { return this->valueEnumsShrink_ != nullptr;};
    void deleteValueEnumsShrink() { this->valueEnumsShrink_ = nullptr;};
    inline string getValueEnumsShrink() const { DARABONBA_PTR_GET_DEFAULT(valueEnumsShrink_, "") };
    inline UpdateCustomAttributeShrinkRequest& setValueEnumsShrink(string valueEnumsShrink) { DARABONBA_PTR_SET_VALUE(valueEnumsShrink_, valueEnumsShrink) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<bool> displayEnabled_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> entityTypesShrink_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<bool> searchFilterEnabled_ {};
    shared_ptr<string> valueEnumsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCustomAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_TO_JSON(ValueEnums, valueEnums_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(ValueEnums, valueEnums_);
    };
    UpdateCustomAttributeRequest() = default ;
    UpdateCustomAttributeRequest(const UpdateCustomAttributeRequest &) = default ;
    UpdateCustomAttributeRequest(UpdateCustomAttributeRequest &&) = default ;
    UpdateCustomAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAttributeRequest() = default ;
    UpdateCustomAttributeRequest& operator=(const UpdateCustomAttributeRequest &) = default ;
    UpdateCustomAttributeRequest& operator=(UpdateCustomAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayEnabled_ == nullptr && this->displayName_ == nullptr && this->entityTypes_ == nullptr && this->id_ == nullptr && this->searchFilterEnabled_ == nullptr
        && this->valueEnums_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateCustomAttributeRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayEnabled Field Functions 
    bool hasDisplayEnabled() const { return this->displayEnabled_ != nullptr;};
    void deleteDisplayEnabled() { this->displayEnabled_ = nullptr;};
    inline bool getDisplayEnabled() const { DARABONBA_PTR_GET_DEFAULT(displayEnabled_, false) };
    inline UpdateCustomAttributeRequest& setDisplayEnabled(bool displayEnabled) { DARABONBA_PTR_SET_VALUE(displayEnabled_, displayEnabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateCustomAttributeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline UpdateCustomAttributeRequest& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline UpdateCustomAttributeRequest& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateCustomAttributeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // searchFilterEnabled Field Functions 
    bool hasSearchFilterEnabled() const { return this->searchFilterEnabled_ != nullptr;};
    void deleteSearchFilterEnabled() { this->searchFilterEnabled_ = nullptr;};
    inline bool getSearchFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchFilterEnabled_, false) };
    inline UpdateCustomAttributeRequest& setSearchFilterEnabled(bool searchFilterEnabled) { DARABONBA_PTR_SET_VALUE(searchFilterEnabled_, searchFilterEnabled) };


    // valueEnums Field Functions 
    bool hasValueEnums() const { return this->valueEnums_ != nullptr;};
    void deleteValueEnums() { this->valueEnums_ = nullptr;};
    inline const vector<string> & getValueEnums() const { DARABONBA_PTR_GET_CONST(valueEnums_, vector<string>) };
    inline vector<string> getValueEnums() { DARABONBA_PTR_GET(valueEnums_, vector<string>) };
    inline UpdateCustomAttributeRequest& setValueEnums(const vector<string> & valueEnums) { DARABONBA_PTR_SET_VALUE(valueEnums_, valueEnums) };
    inline UpdateCustomAttributeRequest& setValueEnums(vector<string> && valueEnums) { DARABONBA_PTR_SET_RVALUE(valueEnums_, valueEnums) };


  protected:
    // The new description for the custom attribute. It must be 256 characters or less.
    shared_ptr<string> comment_ {};
    // Whether to display the custom attribute in the UI.
    shared_ptr<bool> displayEnabled_ {};
    // The new display name for the custom attribute. It must be 128 characters or less.
    shared_ptr<string> displayName_ {};
    // The applicable entity types. This parameter supports specific types and wildcard formats, such as `*-table` and `*-column`. For example:
    // 
    // - `dataworks-project`: A DataWorks workspace
    // 
    // - `dataworks-dataset`: A DataWorks dataset
    // 
    // - `maxcompute-table`: A MaxCompute table
    // 
    // - `*-column`: All column types
    shared_ptr<vector<string>> entityTypes_ {};
    // The custom attribute ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // Whether the custom attribute can be used as a filter condition.
    shared_ptr<bool> searchFilterEnabled_ {};
    // The enumerated values. This applies only to custom attributes of the `enum` type. You can only append new values during an update.
    shared_ptr<vector<string>> valueEnums_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

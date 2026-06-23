// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMATTRIBUTEREQUEST_HPP_
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
  class CreateCustomAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValueEnums, valueEnums_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValueEnums, valueEnums_);
    };
    CreateCustomAttributeRequest() = default ;
    CreateCustomAttributeRequest(const CreateCustomAttributeRequest &) = default ;
    CreateCustomAttributeRequest(CreateCustomAttributeRequest &&) = default ;
    CreateCustomAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAttributeRequest() = default ;
    CreateCustomAttributeRequest& operator=(const CreateCustomAttributeRequest &) = default ;
    CreateCustomAttributeRequest& operator=(CreateCustomAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayEnabled_ == nullptr && this->displayName_ == nullptr && this->entityTypes_ == nullptr && this->id_ == nullptr && this->searchFilterEnabled_ == nullptr
        && this->type_ == nullptr && this->valueEnums_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateCustomAttributeRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayEnabled Field Functions 
    bool hasDisplayEnabled() const { return this->displayEnabled_ != nullptr;};
    void deleteDisplayEnabled() { this->displayEnabled_ = nullptr;};
    inline bool getDisplayEnabled() const { DARABONBA_PTR_GET_DEFAULT(displayEnabled_, false) };
    inline CreateCustomAttributeRequest& setDisplayEnabled(bool displayEnabled) { DARABONBA_PTR_SET_VALUE(displayEnabled_, displayEnabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateCustomAttributeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline CreateCustomAttributeRequest& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline CreateCustomAttributeRequest& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateCustomAttributeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // searchFilterEnabled Field Functions 
    bool hasSearchFilterEnabled() const { return this->searchFilterEnabled_ != nullptr;};
    void deleteSearchFilterEnabled() { this->searchFilterEnabled_ = nullptr;};
    inline bool getSearchFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchFilterEnabled_, false) };
    inline CreateCustomAttributeRequest& setSearchFilterEnabled(bool searchFilterEnabled) { DARABONBA_PTR_SET_VALUE(searchFilterEnabled_, searchFilterEnabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCustomAttributeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valueEnums Field Functions 
    bool hasValueEnums() const { return this->valueEnums_ != nullptr;};
    void deleteValueEnums() { this->valueEnums_ = nullptr;};
    inline const vector<string> & getValueEnums() const { DARABONBA_PTR_GET_CONST(valueEnums_, vector<string>) };
    inline vector<string> getValueEnums() { DARABONBA_PTR_GET(valueEnums_, vector<string>) };
    inline CreateCustomAttributeRequest& setValueEnums(const vector<string> & valueEnums) { DARABONBA_PTR_SET_VALUE(valueEnums_, valueEnums) };
    inline CreateCustomAttributeRequest& setValueEnums(vector<string> && valueEnums) { DARABONBA_PTR_SET_RVALUE(valueEnums_, valueEnums) };


  protected:
    // The description of the custom attribute. The description must be less than 256 characters in length.
    shared_ptr<string> comment_ {};
    // Specifies whether to display the attribute on the product page. The default value is true.
    shared_ptr<bool> displayEnabled_ {};
    // The display name of the custom attribute. The name must be less than 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The list of applicable entity types. You can specify precise entity types or use wildcards such as `*-table` and `*-column`. Examples:
    // 
    // - dataworks-project: a DataWorks workspace.
    // 
    // - dataworks-dataset: a DataWorks dataset.
    // 
    // - maxcompute-table: a MaxCompute table.
    // 
    // - \\*-column: all field types.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> entityTypes_ {};
    // The ID of the custom attribute. The ID must match the regular expression `^custom-attribute:[A-Za-z][A-Za-z0-9_]{0,98}$`. The part after \\`custom-attribute:\\` must be less than 100 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // Specifies whether the attribute can be used as a filter on the Data Map search page. The default value is false. Currently, you can set this parameter to true only for attributes of the ENUM type.
    shared_ptr<bool> searchFilterEnabled_ {};
    // The type of the custom attribute. Valid values are ENUM, TEXT, and HYPERLINK.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The enumeration values. This parameter is required when \\`Type\\` is set to \\`ENUM\\`. It is not supported for the TEXT and HYPERLINK types.
    shared_ptr<vector<string>> valueEnums_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

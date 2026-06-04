// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTableBusinessMetadataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableBusinessMetadataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributesShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Readme, readme_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableBusinessMetadataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Readme, readme_);
    };
    UpdateTableBusinessMetadataShrinkRequest() = default ;
    UpdateTableBusinessMetadataShrinkRequest(const UpdateTableBusinessMetadataShrinkRequest &) = default ;
    UpdateTableBusinessMetadataShrinkRequest(UpdateTableBusinessMetadataShrinkRequest &&) = default ;
    UpdateTableBusinessMetadataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableBusinessMetadataShrinkRequest() = default ;
    UpdateTableBusinessMetadataShrinkRequest& operator=(const UpdateTableBusinessMetadataShrinkRequest &) = default ;
    UpdateTableBusinessMetadataShrinkRequest& operator=(UpdateTableBusinessMetadataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAttributesShrink_ == nullptr
        && this->id_ == nullptr && this->readme_ == nullptr; };
    // customAttributesShrink Field Functions 
    bool hasCustomAttributesShrink() const { return this->customAttributesShrink_ != nullptr;};
    void deleteCustomAttributesShrink() { this->customAttributesShrink_ = nullptr;};
    inline string getCustomAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(customAttributesShrink_, "") };
    inline UpdateTableBusinessMetadataShrinkRequest& setCustomAttributesShrink(string customAttributesShrink) { DARABONBA_PTR_SET_VALUE(customAttributesShrink_, customAttributesShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateTableBusinessMetadataShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline UpdateTableBusinessMetadataShrinkRequest& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


  protected:
    shared_ptr<string> customAttributesShrink_ {};
    // The table ID. You can refer to the format of the table ID returned by the ListTables operation.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The usage notes. The rich text format is supported.
    shared_ptr<string> readme_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

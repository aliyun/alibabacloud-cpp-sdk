// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Items, itemsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Items, itemsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateListShrinkRequest() = default ;
    UpdateListShrinkRequest(const UpdateListShrinkRequest &) = default ;
    UpdateListShrinkRequest(UpdateListShrinkRequest &&) = default ;
    UpdateListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListShrinkRequest() = default ;
    UpdateListShrinkRequest& operator=(const UpdateListShrinkRequest &) = default ;
    UpdateListShrinkRequest& operator=(UpdateListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->itemsShrink_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateListShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateListShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // itemsShrink Field Functions 
    bool hasItemsShrink() const { return this->itemsShrink_ != nullptr;};
    void deleteItemsShrink() { this->itemsShrink_ = nullptr;};
    inline string getItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemsShrink_, "") };
    inline UpdateListShrinkRequest& setItemsShrink(string itemsShrink) { DARABONBA_PTR_SET_VALUE(itemsShrink_, itemsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateListShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The updated description of the list.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The ID of the custom list. You can obtain the ID by calling the [ListLists](https://help.aliyun.com/document_detail/2850217.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The updated items in the list. The value is a JSON array string, such as `["1.1.1.1","2.2.2.2"]`.
    // 
    // **Full overwrite semantics**: The specified `Items` completely overwrites the original list content instead of appending to it.
    // 
    // > ⚠️ **If this parameter is not specified or is left empty, the original list content is cleared**. To retain the original items and append new ones, call `GetList` to retrieve the existing `Items`, concatenate them, and submit them at once.
    // 
    // **Element format**: The format depends on the `Kind` specified when the list was created. UpdateList does not support modifying the kind.
    // - Kind = `ip`: Each element must be a valid IP address or CIDR block. If an element is invalid, `WrongValueMatched` is returned.
    // - Other kinds: The element format is subject to conventions, and the number of elements is limited by the tenant quota `NumberItemsPerList`. Only the `ip` kind is not subject to this limit.
    // 
    // This parameter is required.
    shared_ptr<string> itemsShrink_ {};
    // The updated name of the custom list. If this parameter is not specified, the original name is retained.
    // 
    // **Naming rules**: Only letters, digits, and underscores are supported. The regular expression is `^\\w{1,64}$`, and the length is 1 to 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

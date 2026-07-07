// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateListRequest() = default ;
    UpdateListRequest(const UpdateListRequest &) = default ;
    UpdateListRequest(UpdateListRequest &&) = default ;
    UpdateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListRequest() = default ;
    UpdateListRequest& operator=(const UpdateListRequest &) = default ;
    UpdateListRequest& operator=(UpdateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->items_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateListRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline UpdateListRequest& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline UpdateListRequest& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The new description of the list.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The ID of the custom list. You can obtain the ID by calling the [ListLists](https://help.aliyun.com/document_detail/2850217.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The new list content. The value is a JSON array string, for example, `["1.1.1.1","2.2.2.2"]`.
    // 
    // **Full overwrite semantics**: The specified `Items` value completely overwrites the existing list content instead of appending to it.
    // 
    // > ⚠️ **If this parameter is not specified or is set to an empty value, the existing list content is cleared**. To retain existing items and append new ones, call `GetList` to retrieve the current `Items`, merge them, and then submit the combined list.
    // 
    // **Element format**: The format depends on the `Kind` value specified when the list was created. UpdateList does not support modifying Kind.
    // - Kind = `ip`: Each element must be a valid IP address or CIDR block. If an element is invalid, `WrongValueMatched` is returned.
    // - Other Kind values: The element format is subject to the relevant specifications. The number of elements is limited by the tenant quota `NumberItemsPerList`. This limit does not apply to the `ip` Kind.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> items_ {};
    // The new name of the custom list. If this parameter is not specified, the original name is retained.
    // 
    // **Naming rules**: Only letters, digits, and underscores are supported (`^\\w{1,64}$`). The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

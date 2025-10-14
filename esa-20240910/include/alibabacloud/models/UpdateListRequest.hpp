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
        && return this->id_ == nullptr && return this->items_ == nullptr && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateListRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline UpdateListRequest& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline UpdateListRequest& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The new description of the list.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the custom list, which can be obtained by calling the [ListLists](https://help.aliyun.com/document_detail/2850217.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The items in the updated list. The value is a JSON array.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> items_ = nullptr;
    // The new name of the list.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

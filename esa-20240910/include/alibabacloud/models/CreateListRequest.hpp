// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTREQUEST_HPP_
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
  class CreateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateListRequest() = default ;
    CreateListRequest(const CreateListRequest &) = default ;
    CreateListRequest(CreateListRequest &&) = default ;
    CreateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListRequest() = default ;
    CreateListRequest& operator=(const CreateListRequest &) = default ;
    CreateListRequest& operator=(CreateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->items_ != nullptr && this->kind_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline CreateListRequest& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateListRequest& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline CreateListRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the list that you want to create.
    std::shared_ptr<string> description_ = nullptr;
    // The items in the list that you want to create.
    std::shared_ptr<vector<string>> items_ = nullptr;
    // The type of the list that you want to create.
    std::shared_ptr<string> kind_ = nullptr;
    // The name of the list that you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

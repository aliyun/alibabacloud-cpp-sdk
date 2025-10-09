// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMetaCollectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaCollectionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Administrators, administratorsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaCollectionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Administrators, administratorsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateMetaCollectionShrinkRequest() = default ;
    UpdateMetaCollectionShrinkRequest(const UpdateMetaCollectionShrinkRequest &) = default ;
    UpdateMetaCollectionShrinkRequest(UpdateMetaCollectionShrinkRequest &&) = default ;
    UpdateMetaCollectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaCollectionShrinkRequest() = default ;
    UpdateMetaCollectionShrinkRequest& operator=(const UpdateMetaCollectionShrinkRequest &) = default ;
    UpdateMetaCollectionShrinkRequest& operator=(UpdateMetaCollectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administratorsShrink_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // administratorsShrink Field Functions 
    bool hasAdministratorsShrink() const { return this->administratorsShrink_ != nullptr;};
    void deleteAdministratorsShrink() { this->administratorsShrink_ = nullptr;};
    inline string administratorsShrink() const { DARABONBA_PTR_GET_DEFAULT(administratorsShrink_, "") };
    inline UpdateMetaCollectionShrinkRequest& setAdministratorsShrink(string administratorsShrink) { DARABONBA_PTR_SET_VALUE(administratorsShrink_, administratorsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMetaCollectionShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMetaCollectionShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMetaCollectionShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The collection administrator IDs. This parameter is available only for data albums. The administrator must be an account within the same tenant.
    std::shared_ptr<string> administratorsShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The collection ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

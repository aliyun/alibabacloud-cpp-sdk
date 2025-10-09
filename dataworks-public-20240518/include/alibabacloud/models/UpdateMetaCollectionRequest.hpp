// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONREQUEST_HPP_
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
  class UpdateMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Administrators, administrators_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Administrators, administrators_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateMetaCollectionRequest() = default ;
    UpdateMetaCollectionRequest(const UpdateMetaCollectionRequest &) = default ;
    UpdateMetaCollectionRequest(UpdateMetaCollectionRequest &&) = default ;
    UpdateMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaCollectionRequest() = default ;
    UpdateMetaCollectionRequest& operator=(const UpdateMetaCollectionRequest &) = default ;
    UpdateMetaCollectionRequest& operator=(UpdateMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administrators_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // administrators Field Functions 
    bool hasAdministrators() const { return this->administrators_ != nullptr;};
    void deleteAdministrators() { this->administrators_ = nullptr;};
    inline const vector<string> & administrators() const { DARABONBA_PTR_GET_CONST(administrators_, vector<string>) };
    inline vector<string> administrators() { DARABONBA_PTR_GET(administrators_, vector<string>) };
    inline UpdateMetaCollectionRequest& setAdministrators(const vector<string> & administrators) { DARABONBA_PTR_SET_VALUE(administrators_, administrators) };
    inline UpdateMetaCollectionRequest& setAdministrators(vector<string> && administrators) { DARABONBA_PTR_SET_RVALUE(administrators_, administrators) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMetaCollectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMetaCollectionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMetaCollectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The collection administrator IDs. This parameter is available only for data albums. The administrator must be an account within the same tenant.
    std::shared_ptr<vector<string>> administrators_ = nullptr;
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

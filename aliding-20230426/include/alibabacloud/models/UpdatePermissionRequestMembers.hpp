// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUESTMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdatePermissionRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePermissionRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePermissionRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePermissionRequestMembers() = default ;
    UpdatePermissionRequestMembers(const UpdatePermissionRequestMembers &) = default ;
    UpdatePermissionRequestMembers(UpdatePermissionRequestMembers &&) = default ;
    UpdatePermissionRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePermissionRequestMembers() = default ;
    UpdatePermissionRequestMembers& operator=(const UpdatePermissionRequestMembers &) = default ;
    UpdatePermissionRequestMembers& operator=(UpdatePermissionRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->id_ != nullptr && this->type_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline UpdatePermissionRequestMembers& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdatePermissionRequestMembers& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePermissionRequestMembers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

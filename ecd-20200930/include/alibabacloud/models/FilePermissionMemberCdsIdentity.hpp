// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBERCDSIDENTITY_HPP_
#define ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBERCDSIDENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class FilePermissionMemberCdsIdentity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilePermissionMemberCdsIdentity& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FilePermissionMemberCdsIdentity& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    FilePermissionMemberCdsIdentity() = default ;
    FilePermissionMemberCdsIdentity(const FilePermissionMemberCdsIdentity &) = default ;
    FilePermissionMemberCdsIdentity(FilePermissionMemberCdsIdentity &&) = default ;
    FilePermissionMemberCdsIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilePermissionMemberCdsIdentity() = default ;
    FilePermissionMemberCdsIdentity& operator=(const FilePermissionMemberCdsIdentity &) = default ;
    FilePermissionMemberCdsIdentity& operator=(FilePermissionMemberCdsIdentity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FilePermissionMemberCdsIdentity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FilePermissionMemberCdsIdentity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

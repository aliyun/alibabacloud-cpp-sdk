// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUESTPROJECTCLONEDOWNLOADMETHODLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUESTPROJECTCLONEDOWNLOADMETHODLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryRequestProjectCloneDownloadMethodList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryRequestProjectCloneDownloadMethodList& obj) { 
      DARABONBA_PTR_TO_JSON(allowed, allowed_);
      DARABONBA_PTR_TO_JSON(permissionCode, permissionCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryRequestProjectCloneDownloadMethodList& obj) { 
      DARABONBA_PTR_FROM_JSON(allowed, allowed_);
      DARABONBA_PTR_FROM_JSON(permissionCode, permissionCode_);
    };
    UpdateRepositoryRequestProjectCloneDownloadMethodList() = default ;
    UpdateRepositoryRequestProjectCloneDownloadMethodList(const UpdateRepositoryRequestProjectCloneDownloadMethodList &) = default ;
    UpdateRepositoryRequestProjectCloneDownloadMethodList(UpdateRepositoryRequestProjectCloneDownloadMethodList &&) = default ;
    UpdateRepositoryRequestProjectCloneDownloadMethodList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryRequestProjectCloneDownloadMethodList() = default ;
    UpdateRepositoryRequestProjectCloneDownloadMethodList& operator=(const UpdateRepositoryRequestProjectCloneDownloadMethodList &) = default ;
    UpdateRepositoryRequestProjectCloneDownloadMethodList& operator=(UpdateRepositoryRequestProjectCloneDownloadMethodList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowed_ == nullptr
        && return this->permissionCode_ == nullptr; };
    // allowed Field Functions 
    bool hasAllowed() const { return this->allowed_ != nullptr;};
    void deleteAllowed() { this->allowed_ = nullptr;};
    inline bool allowed() const { DARABONBA_PTR_GET_DEFAULT(allowed_, false) };
    inline UpdateRepositoryRequestProjectCloneDownloadMethodList& setAllowed(bool allowed) { DARABONBA_PTR_SET_VALUE(allowed_, allowed) };


    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string permissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline UpdateRepositoryRequestProjectCloneDownloadMethodList& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


  protected:
    std::shared_ptr<bool> allowed_ = nullptr;
    std::shared_ptr<string> permissionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUESTPROJECTCLONEDOWNLOADROLELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUESTPROJECTCLONEDOWNLOADROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryRequestProjectCloneDownloadRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryRequestProjectCloneDownloadRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(allowed, allowed_);
      DARABONBA_PTR_TO_JSON(roleCode, roleCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryRequestProjectCloneDownloadRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(allowed, allowed_);
      DARABONBA_PTR_FROM_JSON(roleCode, roleCode_);
    };
    UpdateRepositoryRequestProjectCloneDownloadRoleList() = default ;
    UpdateRepositoryRequestProjectCloneDownloadRoleList(const UpdateRepositoryRequestProjectCloneDownloadRoleList &) = default ;
    UpdateRepositoryRequestProjectCloneDownloadRoleList(UpdateRepositoryRequestProjectCloneDownloadRoleList &&) = default ;
    UpdateRepositoryRequestProjectCloneDownloadRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryRequestProjectCloneDownloadRoleList() = default ;
    UpdateRepositoryRequestProjectCloneDownloadRoleList& operator=(const UpdateRepositoryRequestProjectCloneDownloadRoleList &) = default ;
    UpdateRepositoryRequestProjectCloneDownloadRoleList& operator=(UpdateRepositoryRequestProjectCloneDownloadRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowed_ == nullptr
        && return this->roleCode_ == nullptr; };
    // allowed Field Functions 
    bool hasAllowed() const { return this->allowed_ != nullptr;};
    void deleteAllowed() { this->allowed_ = nullptr;};
    inline bool allowed() const { DARABONBA_PTR_GET_DEFAULT(allowed_, false) };
    inline UpdateRepositoryRequestProjectCloneDownloadRoleList& setAllowed(bool allowed) { DARABONBA_PTR_SET_VALUE(allowed_, allowed) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline int32_t roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, 0) };
    inline UpdateRepositoryRequestProjectCloneDownloadRoleList& setRoleCode(int32_t roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


  protected:
    std::shared_ptr<bool> allowed_ = nullptr;
    std::shared_ptr<int32_t> roleCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

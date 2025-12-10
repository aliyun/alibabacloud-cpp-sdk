// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUESTVIDEOROLESROLEURLS_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUESTVIDEOROLESROLEURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoRequestVideoRolesRoleUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoRequestVideoRolesRoleUrls& obj) { 
      DARABONBA_PTR_TO_JSON(RoleFileName, roleFileName_);
      DARABONBA_PTR_TO_JSON(RoleFileUrl, roleFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoRequestVideoRolesRoleUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleFileName, roleFileName_);
      DARABONBA_PTR_FROM_JSON(RoleFileUrl, roleFileUrl_);
    };
    AsyncUploadVideoRequestVideoRolesRoleUrls() = default ;
    AsyncUploadVideoRequestVideoRolesRoleUrls(const AsyncUploadVideoRequestVideoRolesRoleUrls &) = default ;
    AsyncUploadVideoRequestVideoRolesRoleUrls(AsyncUploadVideoRequestVideoRolesRoleUrls &&) = default ;
    AsyncUploadVideoRequestVideoRolesRoleUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoRequestVideoRolesRoleUrls() = default ;
    AsyncUploadVideoRequestVideoRolesRoleUrls& operator=(const AsyncUploadVideoRequestVideoRolesRoleUrls &) = default ;
    AsyncUploadVideoRequestVideoRolesRoleUrls& operator=(AsyncUploadVideoRequestVideoRolesRoleUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleFileName_ == nullptr
        && return this->roleFileUrl_ == nullptr; };
    // roleFileName Field Functions 
    bool hasRoleFileName() const { return this->roleFileName_ != nullptr;};
    void deleteRoleFileName() { this->roleFileName_ = nullptr;};
    inline string roleFileName() const { DARABONBA_PTR_GET_DEFAULT(roleFileName_, "") };
    inline AsyncUploadVideoRequestVideoRolesRoleUrls& setRoleFileName(string roleFileName) { DARABONBA_PTR_SET_VALUE(roleFileName_, roleFileName) };


    // roleFileUrl Field Functions 
    bool hasRoleFileUrl() const { return this->roleFileUrl_ != nullptr;};
    void deleteRoleFileUrl() { this->roleFileUrl_ = nullptr;};
    inline string roleFileUrl() const { DARABONBA_PTR_GET_DEFAULT(roleFileUrl_, "") };
    inline AsyncUploadVideoRequestVideoRolesRoleUrls& setRoleFileUrl(string roleFileUrl) { DARABONBA_PTR_SET_VALUE(roleFileUrl_, roleFileUrl) };


  protected:
    std::shared_ptr<string> roleFileName_ = nullptr;
    std::shared_ptr<string> roleFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

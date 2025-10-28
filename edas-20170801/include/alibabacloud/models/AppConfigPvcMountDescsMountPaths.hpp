// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGPVCMOUNTDESCSMOUNTPATHS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGPVCMOUNTDESCSMOUNTPATHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigPvcMountDescsMountPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigPvcMountDescsMountPaths& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(SubPathExpr, subPathExpr_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigPvcMountDescsMountPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(SubPathExpr, subPathExpr_);
    };
    AppConfigPvcMountDescsMountPaths() = default ;
    AppConfigPvcMountDescsMountPaths(const AppConfigPvcMountDescsMountPaths &) = default ;
    AppConfigPvcMountDescsMountPaths(AppConfigPvcMountDescsMountPaths &&) = default ;
    AppConfigPvcMountDescsMountPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigPvcMountDescsMountPaths() = default ;
    AppConfigPvcMountDescsMountPaths& operator=(const AppConfigPvcMountDescsMountPaths &) = default ;
    AppConfigPvcMountDescsMountPaths& operator=(AppConfigPvcMountDescsMountPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->readOnly_ == nullptr && return this->subPathExpr_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline AppConfigPvcMountDescsMountPaths& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline AppConfigPvcMountDescsMountPaths& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // subPathExpr Field Functions 
    bool hasSubPathExpr() const { return this->subPathExpr_ != nullptr;};
    void deleteSubPathExpr() { this->subPathExpr_ = nullptr;};
    inline string subPathExpr() const { DARABONBA_PTR_GET_DEFAULT(subPathExpr_, "") };
    inline AppConfigPvcMountDescsMountPaths& setSubPathExpr(string subPathExpr) { DARABONBA_PTR_SET_VALUE(subPathExpr_, subPathExpr) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> subPathExpr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

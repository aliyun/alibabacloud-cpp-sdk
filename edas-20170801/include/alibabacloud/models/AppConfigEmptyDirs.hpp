// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGEMPTYDIRS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGEMPTYDIRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigEmptyDirs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigEmptyDirs& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(SubPathExpr, subPathExpr_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigEmptyDirs& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(SubPathExpr, subPathExpr_);
    };
    AppConfigEmptyDirs() = default ;
    AppConfigEmptyDirs(const AppConfigEmptyDirs &) = default ;
    AppConfigEmptyDirs(AppConfigEmptyDirs &&) = default ;
    AppConfigEmptyDirs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigEmptyDirs() = default ;
    AppConfigEmptyDirs& operator=(const AppConfigEmptyDirs &) = default ;
    AppConfigEmptyDirs& operator=(AppConfigEmptyDirs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->name_ == nullptr && return this->readOnly_ == nullptr && return this->subPathExpr_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline AppConfigEmptyDirs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppConfigEmptyDirs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline AppConfigEmptyDirs& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // subPathExpr Field Functions 
    bool hasSubPathExpr() const { return this->subPathExpr_ != nullptr;};
    void deleteSubPathExpr() { this->subPathExpr_ = nullptr;};
    inline string subPathExpr() const { DARABONBA_PTR_GET_DEFAULT(subPathExpr_, "") };
    inline AppConfigEmptyDirs& setSubPathExpr(string subPathExpr) { DARABONBA_PTR_SET_VALUE(subPathExpr_, subPathExpr) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> subPathExpr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

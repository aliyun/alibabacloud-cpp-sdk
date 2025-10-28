// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGLOCALVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGLOCALVOLUMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigLocalVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigLocalVolumes& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodePath, nodePath_);
      DARABONBA_PTR_TO_JSON(OpsAuth, opsAuth_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigLocalVolumes& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodePath, nodePath_);
      DARABONBA_PTR_FROM_JSON(OpsAuth, opsAuth_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AppConfigLocalVolumes() = default ;
    AppConfigLocalVolumes(const AppConfigLocalVolumes &) = default ;
    AppConfigLocalVolumes(AppConfigLocalVolumes &&) = default ;
    AppConfigLocalVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigLocalVolumes() = default ;
    AppConfigLocalVolumes& operator=(const AppConfigLocalVolumes &) = default ;
    AppConfigLocalVolumes& operator=(AppConfigLocalVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->name_ == nullptr && return this->nodePath_ == nullptr && return this->opsAuth_ == nullptr && return this->type_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline AppConfigLocalVolumes& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppConfigLocalVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodePath Field Functions 
    bool hasNodePath() const { return this->nodePath_ != nullptr;};
    void deleteNodePath() { this->nodePath_ = nullptr;};
    inline string nodePath() const { DARABONBA_PTR_GET_DEFAULT(nodePath_, "") };
    inline AppConfigLocalVolumes& setNodePath(string nodePath) { DARABONBA_PTR_SET_VALUE(nodePath_, nodePath) };


    // opsAuth Field Functions 
    bool hasOpsAuth() const { return this->opsAuth_ != nullptr;};
    void deleteOpsAuth() { this->opsAuth_ = nullptr;};
    inline int64_t opsAuth() const { DARABONBA_PTR_GET_DEFAULT(opsAuth_, 0L) };
    inline AppConfigLocalVolumes& setOpsAuth(int64_t opsAuth) { DARABONBA_PTR_SET_VALUE(opsAuth_, opsAuth) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppConfigLocalVolumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodePath_ = nullptr;
    std::shared_ptr<int64_t> opsAuth_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

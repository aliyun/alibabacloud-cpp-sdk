// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGCONFIGMOUNTDESCS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGCONFIGMOUNTDESCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppConfigConfigMountDescsMountItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigConfigMountDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigConfigMountDescs& obj) { 
      DARABONBA_PTR_TO_JSON(MountItems, mountItems_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigConfigMountDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(MountItems, mountItems_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AppConfigConfigMountDescs() = default ;
    AppConfigConfigMountDescs(const AppConfigConfigMountDescs &) = default ;
    AppConfigConfigMountDescs(AppConfigConfigMountDescs &&) = default ;
    AppConfigConfigMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigConfigMountDescs() = default ;
    AppConfigConfigMountDescs& operator=(const AppConfigConfigMountDescs &) = default ;
    AppConfigConfigMountDescs& operator=(AppConfigConfigMountDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountItems_ == nullptr
        && return this->mountPath_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // mountItems Field Functions 
    bool hasMountItems() const { return this->mountItems_ != nullptr;};
    void deleteMountItems() { this->mountItems_ = nullptr;};
    inline const vector<Models::AppConfigConfigMountDescsMountItems> & mountItems() const { DARABONBA_PTR_GET_CONST(mountItems_, vector<Models::AppConfigConfigMountDescsMountItems>) };
    inline vector<Models::AppConfigConfigMountDescsMountItems> mountItems() { DARABONBA_PTR_GET(mountItems_, vector<Models::AppConfigConfigMountDescsMountItems>) };
    inline AppConfigConfigMountDescs& setMountItems(const vector<Models::AppConfigConfigMountDescsMountItems> & mountItems) { DARABONBA_PTR_SET_VALUE(mountItems_, mountItems) };
    inline AppConfigConfigMountDescs& setMountItems(vector<Models::AppConfigConfigMountDescsMountItems> && mountItems) { DARABONBA_PTR_SET_RVALUE(mountItems_, mountItems) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline AppConfigConfigMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppConfigConfigMountDescs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppConfigConfigMountDescs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::AppConfigConfigMountDescsMountItems>> mountItems_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

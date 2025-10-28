// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGPVCMOUNTDESCS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGPVCMOUNTDESCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppConfigPvcMountDescsMountPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigPvcMountDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigPvcMountDescs& obj) { 
      DARABONBA_PTR_TO_JSON(MountPaths, mountPaths_);
      DARABONBA_PTR_TO_JSON(PvcName, pvcName_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigPvcMountDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPaths, mountPaths_);
      DARABONBA_PTR_FROM_JSON(PvcName, pvcName_);
    };
    AppConfigPvcMountDescs() = default ;
    AppConfigPvcMountDescs(const AppConfigPvcMountDescs &) = default ;
    AppConfigPvcMountDescs(AppConfigPvcMountDescs &&) = default ;
    AppConfigPvcMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigPvcMountDescs() = default ;
    AppConfigPvcMountDescs& operator=(const AppConfigPvcMountDescs &) = default ;
    AppConfigPvcMountDescs& operator=(AppConfigPvcMountDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPaths_ == nullptr
        && return this->pvcName_ == nullptr; };
    // mountPaths Field Functions 
    bool hasMountPaths() const { return this->mountPaths_ != nullptr;};
    void deleteMountPaths() { this->mountPaths_ = nullptr;};
    inline const vector<Models::AppConfigPvcMountDescsMountPaths> & mountPaths() const { DARABONBA_PTR_GET_CONST(mountPaths_, vector<Models::AppConfigPvcMountDescsMountPaths>) };
    inline vector<Models::AppConfigPvcMountDescsMountPaths> mountPaths() { DARABONBA_PTR_GET(mountPaths_, vector<Models::AppConfigPvcMountDescsMountPaths>) };
    inline AppConfigPvcMountDescs& setMountPaths(const vector<Models::AppConfigPvcMountDescsMountPaths> & mountPaths) { DARABONBA_PTR_SET_VALUE(mountPaths_, mountPaths) };
    inline AppConfigPvcMountDescs& setMountPaths(vector<Models::AppConfigPvcMountDescsMountPaths> && mountPaths) { DARABONBA_PTR_SET_RVALUE(mountPaths_, mountPaths) };


    // pvcName Field Functions 
    bool hasPvcName() const { return this->pvcName_ != nullptr;};
    void deletePvcName() { this->pvcName_ = nullptr;};
    inline string pvcName() const { DARABONBA_PTR_GET_DEFAULT(pvcName_, "") };
    inline AppConfigPvcMountDescs& setPvcName(string pvcName) { DARABONBA_PTR_SET_VALUE(pvcName_, pvcName) };


  protected:
    std::shared_ptr<vector<Models::AppConfigPvcMountDescsMountPaths>> mountPaths_ = nullptr;
    std::shared_ptr<string> pvcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

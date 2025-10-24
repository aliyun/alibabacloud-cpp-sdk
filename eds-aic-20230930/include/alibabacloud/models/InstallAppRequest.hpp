// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class InstallAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIdList, instanceGroupIdList_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIdList, instanceGroupIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
    };
    InstallAppRequest() = default ;
    InstallAppRequest(const InstallAppRequest &) = default ;
    InstallAppRequest(InstallAppRequest &&) = default ;
    InstallAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAppRequest() = default ;
    InstallAppRequest& operator=(const InstallAppRequest &) = default ;
    InstallAppRequest& operator=(InstallAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIdList_ == nullptr
        && return this->instanceGroupIdList_ == nullptr && return this->instanceIdList_ == nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & appIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> appIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline InstallAppRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline InstallAppRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


    // instanceGroupIdList Field Functions 
    bool hasInstanceGroupIdList() const { return this->instanceGroupIdList_ != nullptr;};
    void deleteInstanceGroupIdList() { this->instanceGroupIdList_ = nullptr;};
    inline const vector<string> & instanceGroupIdList() const { DARABONBA_PTR_GET_CONST(instanceGroupIdList_, vector<string>) };
    inline vector<string> instanceGroupIdList() { DARABONBA_PTR_GET(instanceGroupIdList_, vector<string>) };
    inline InstallAppRequest& setInstanceGroupIdList(const vector<string> & instanceGroupIdList) { DARABONBA_PTR_SET_VALUE(instanceGroupIdList_, instanceGroupIdList) };
    inline InstallAppRequest& setInstanceGroupIdList(vector<string> && instanceGroupIdList) { DARABONBA_PTR_SET_RVALUE(instanceGroupIdList_, instanceGroupIdList) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline InstallAppRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline InstallAppRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


  protected:
    // The IDs of the apps that you want to install.
    std::shared_ptr<vector<string>> appIdList_ = nullptr;
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIdList_ = nullptr;
    // The IDs of the cloud phone instances.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

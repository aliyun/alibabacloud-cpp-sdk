// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAPPREQUEST_HPP_
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
  class UninstallAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIdList, instanceGroupIdList_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIdList, instanceGroupIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
    };
    UninstallAppRequest() = default ;
    UninstallAppRequest(const UninstallAppRequest &) = default ;
    UninstallAppRequest(UninstallAppRequest &&) = default ;
    UninstallAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAppRequest() = default ;
    UninstallAppRequest& operator=(const UninstallAppRequest &) = default ;
    UninstallAppRequest& operator=(UninstallAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdList_ != nullptr
        && this->instanceGroupIdList_ != nullptr && this->instanceIdList_ != nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & appIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> appIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline UninstallAppRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline UninstallAppRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


    // instanceGroupIdList Field Functions 
    bool hasInstanceGroupIdList() const { return this->instanceGroupIdList_ != nullptr;};
    void deleteInstanceGroupIdList() { this->instanceGroupIdList_ = nullptr;};
    inline const vector<string> & instanceGroupIdList() const { DARABONBA_PTR_GET_CONST(instanceGroupIdList_, vector<string>) };
    inline vector<string> instanceGroupIdList() { DARABONBA_PTR_GET(instanceGroupIdList_, vector<string>) };
    inline UninstallAppRequest& setInstanceGroupIdList(const vector<string> & instanceGroupIdList) { DARABONBA_PTR_SET_VALUE(instanceGroupIdList_, instanceGroupIdList) };
    inline UninstallAppRequest& setInstanceGroupIdList(vector<string> && instanceGroupIdList) { DARABONBA_PTR_SET_RVALUE(instanceGroupIdList_, instanceGroupIdList) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline UninstallAppRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline UninstallAppRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


  protected:
    // The IDs of the apps.
    std::shared_ptr<vector<string>> appIdList_ = nullptr;
    // The ID of the instance groups. If you specify this parameter, you cannot specify InstanceIdList.
    std::shared_ptr<vector<string>> instanceGroupIdList_ = nullptr;
    // The IDs of the cloud phone instances. If you specify this parameter, you cannot specify InstanceGroupIdList.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

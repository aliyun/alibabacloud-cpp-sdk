// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(AppNames, appNames_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(AppNames, appNames_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAppsRequest() = default ;
    DescribeAppsRequest(const DescribeAppsRequest &) = default ;
    DescribeAppsRequest(DescribeAppsRequest &&) = default ;
    DescribeAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsRequest() = default ;
    DescribeAppsRequest& operator=(const DescribeAppsRequest &) = default ;
    DescribeAppsRequest& operator=(DescribeAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->appNames_ == nullptr && this->clientToken_ == nullptr && this->owner_ == nullptr && this->regionId_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline DescribeAppsRequest& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline DescribeAppsRequest& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // appNames Field Functions 
    bool hasAppNames() const { return this->appNames_ != nullptr;};
    void deleteAppNames() { this->appNames_ = nullptr;};
    inline const vector<string> & getAppNames() const { DARABONBA_PTR_GET_CONST(appNames_, vector<string>) };
    inline vector<string> getAppNames() { DARABONBA_PTR_GET(appNames_, vector<string>) };
    inline DescribeAppsRequest& setAppNames(const vector<string> & appNames) { DARABONBA_PTR_SET_VALUE(appNames_, appNames) };
    inline DescribeAppsRequest& setAppNames(vector<string> && appNames) { DARABONBA_PTR_SET_RVALUE(appNames_, appNames) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeAppsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeAppsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAppsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<vector<string>> appIds_ {};
    shared_ptr<vector<string>> appNames_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif

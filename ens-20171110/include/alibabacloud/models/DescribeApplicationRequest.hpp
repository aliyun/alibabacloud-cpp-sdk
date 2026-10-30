// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OutDetailStatParams, outDetailStatParams_);
      DARABONBA_PTR_TO_JSON(ResourceSelector, resourceSelector_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OutDetailStatParams, outDetailStatParams_);
      DARABONBA_PTR_FROM_JSON(ResourceSelector, resourceSelector_);
    };
    DescribeApplicationRequest() = default ;
    DescribeApplicationRequest(const DescribeApplicationRequest &) = default ;
    DescribeApplicationRequest(DescribeApplicationRequest &&) = default ;
    DescribeApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationRequest() = default ;
    DescribeApplicationRequest& operator=(const DescribeApplicationRequest &) = default ;
    DescribeApplicationRequest& operator=(DescribeApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersions_ == nullptr && this->level_ == nullptr && this->outDetailStatParams_ == nullptr && this->resourceSelector_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersions Field Functions 
    bool hasAppVersions() const { return this->appVersions_ != nullptr;};
    void deleteAppVersions() { this->appVersions_ = nullptr;};
    inline string getAppVersions() const { DARABONBA_PTR_GET_DEFAULT(appVersions_, "") };
    inline DescribeApplicationRequest& setAppVersions(string appVersions) { DARABONBA_PTR_SET_VALUE(appVersions_, appVersions) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeApplicationRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // outDetailStatParams Field Functions 
    bool hasOutDetailStatParams() const { return this->outDetailStatParams_ != nullptr;};
    void deleteOutDetailStatParams() { this->outDetailStatParams_ = nullptr;};
    inline string getOutDetailStatParams() const { DARABONBA_PTR_GET_DEFAULT(outDetailStatParams_, "") };
    inline DescribeApplicationRequest& setOutDetailStatParams(string outDetailStatParams) { DARABONBA_PTR_SET_VALUE(outDetailStatParams_, outDetailStatParams) };


    // resourceSelector Field Functions 
    bool hasResourceSelector() const { return this->resourceSelector_ != nullptr;};
    void deleteResourceSelector() { this->resourceSelector_ = nullptr;};
    inline string getResourceSelector() const { DARABONBA_PTR_GET_DEFAULT(resourceSelector_, "") };
    inline DescribeApplicationRequest& setResourceSelector(string resourceSelector) { DARABONBA_PTR_SET_VALUE(resourceSelector_, resourceSelector) };


  protected:
    // The ID of the application. You can obtain the ID by calling the ListApplications operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The business service version numbers of the application. Multiple values are supported and separated by commas (,). If you enter All, data of all versions is returned. By default, only data associated with the stable version number is returned.
    shared_ptr<string> appVersions_ {};
    // The regional statistical level of the application edge resources. Valid values:
    // 
    // - National: nationwide
    // - Big: region
    // - Middle: province
    // - Small: city
    // - RegionId: edge node
    // 
    // Default value: National.
    shared_ptr<string> level_ {};
    // Specifies whether to return information about statistical resource instances and container pods. The value is a JSON string. By default, all information is returned.
    shared_ptr<string> outDetailStatParams_ {};
    // The resource filter conditions.
    shared_ptr<string> resourceSelector_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

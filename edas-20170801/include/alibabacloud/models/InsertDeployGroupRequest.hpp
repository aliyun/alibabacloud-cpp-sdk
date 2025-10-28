// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertDeployGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDeployGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InitPackageVersionId, initPackageVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDeployGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InitPackageVersionId, initPackageVersionId_);
    };
    InsertDeployGroupRequest() = default ;
    InsertDeployGroupRequest(const InsertDeployGroupRequest &) = default ;
    InsertDeployGroupRequest(InsertDeployGroupRequest &&) = default ;
    InsertDeployGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDeployGroupRequest() = default ;
    InsertDeployGroupRequest& operator=(const InsertDeployGroupRequest &) = default ;
    InsertDeployGroupRequest& operator=(InsertDeployGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->groupName_ == nullptr && return this->initPackageVersionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InsertDeployGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline InsertDeployGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // initPackageVersionId Field Functions 
    bool hasInitPackageVersionId() const { return this->initPackageVersionId_ != nullptr;};
    void deleteInitPackageVersionId() { this->initPackageVersionId_ = nullptr;};
    inline string initPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(initPackageVersionId_, "") };
    inline InsertDeployGroupRequest& setInitPackageVersionId(string initPackageVersionId) { DARABONBA_PTR_SET_VALUE(initPackageVersionId_, initPackageVersionId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the instance group. The name can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The version of the initial deployment package associated with the instance group. You can call the ListHistoryDeployVersion operation to query the version. For more information, see [ListHistoryDeployVersion](https://help.aliyun.com/document_detail/149392.html).
    std::shared_ptr<string> initPackageVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRetcodeAppRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRetcodeAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateRetcodeAppRequest() = default ;
    CreateRetcodeAppRequest(const CreateRetcodeAppRequest &) = default ;
    CreateRetcodeAppRequest(CreateRetcodeAppRequest &&) = default ;
    CreateRetcodeAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppRequest() = default ;
    CreateRetcodeAppRequest& operator=(const CreateRetcodeAppRequest &) = default ;
    CreateRetcodeAppRequest& operator=(CreateRetcodeAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->retcodeAppName_ != nullptr && this->retcodeAppType_ != nullptr && this->tags_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRetcodeAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRetcodeAppRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retcodeAppName Field Functions 
    bool hasRetcodeAppName() const { return this->retcodeAppName_ != nullptr;};
    void deleteRetcodeAppName() { this->retcodeAppName_ = nullptr;};
    inline string retcodeAppName() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppName_, "") };
    inline CreateRetcodeAppRequest& setRetcodeAppName(string retcodeAppName) { DARABONBA_PTR_SET_VALUE(retcodeAppName_, retcodeAppName) };


    // retcodeAppType Field Functions 
    bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
    void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
    inline string retcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
    inline CreateRetcodeAppRequest& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateRetcodeAppRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateRetcodeAppRequestTags>) };
    inline vector<CreateRetcodeAppRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateRetcodeAppRequestTags>) };
    inline CreateRetcodeAppRequest& setTags(const vector<CreateRetcodeAppRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateRetcodeAppRequest& setTags(vector<CreateRetcodeAppRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> retcodeAppName_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   `web`: web application
    // *   `weex`: Weex mobile app
    // *   `mini_dd`: DingTalk mini program
    // *   `mini_alipay`: Alipay mini program
    // *   `mini_wx`: WeChat mini program
    // *   `mini_common`: mini program on other platforms
    // 
    // This parameter is required.
    std::shared_ptr<string> retcodeAppType_ = nullptr;
    // The tags that you want to add to the task.
    std::shared_ptr<vector<CreateRetcodeAppRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

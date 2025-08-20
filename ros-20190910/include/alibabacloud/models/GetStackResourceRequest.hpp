// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_TO_JSON(ShowResourceAttributes, showResourceAttributes_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_FROM_JSON(ShowResourceAttributes, showResourceAttributes_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    GetStackResourceRequest() = default ;
    GetStackResourceRequest(const GetStackResourceRequest &) = default ;
    GetStackResourceRequest(GetStackResourceRequest &&) = default ;
    GetStackResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResourceRequest() = default ;
    GetStackResourceRequest& operator=(const GetStackResourceRequest &) = default ;
    GetStackResourceRequest& operator=(GetStackResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->logicalResourceId_ != nullptr && this->regionId_ != nullptr && this->resourceAttributes_ != nullptr && this->showResourceAttributes_ != nullptr && this->stackId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetStackResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline GetStackResourceRequest& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline const vector<string> & resourceAttributes() const { DARABONBA_PTR_GET_CONST(resourceAttributes_, vector<string>) };
    inline vector<string> resourceAttributes() { DARABONBA_PTR_GET(resourceAttributes_, vector<string>) };
    inline GetStackResourceRequest& setResourceAttributes(const vector<string> & resourceAttributes) { DARABONBA_PTR_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline GetStackResourceRequest& setResourceAttributes(vector<string> && resourceAttributes) { DARABONBA_PTR_SET_RVALUE(resourceAttributes_, resourceAttributes) };


    // showResourceAttributes Field Functions 
    bool hasShowResourceAttributes() const { return this->showResourceAttributes_ != nullptr;};
    void deleteShowResourceAttributes() { this->showResourceAttributes_ = nullptr;};
    inline bool showResourceAttributes() const { DARABONBA_PTR_GET_DEFAULT(showResourceAttributes_, false) };
    inline GetStackResourceRequest& setShowResourceAttributes(bool showResourceAttributes) { DARABONBA_PTR_SET_VALUE(showResourceAttributes_, showResourceAttributes) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackResourceRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // Specifies whether to query the resource properties. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> clientToken_ = nullptr;
    // The name of resource property N that you want to query.
    // 
    // >  Maximum value of N: 20.
    // 
    // This parameter is required.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The logical ID of the resource defined in the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the resource. Valid values:
    // 
    // *   CREATE_COMPLETE
    // *   CREATE_FAILED
    // *   CREATE_IN_PROGRESS
    // *   UPDATE_IN_PROGRESS
    // *   UPDATE_FAILED
    // *   UPDATE_COMPLETE
    // *   DELETE_IN_PROGRESS
    // *   DELETE_FAILED
    // *   CHECK_IN_PROGRESS
    // *   CHECK_FAILED
    // *   CHECK_COMPLETE
    // *   IMPORT_IN_PROGRESS
    // *   IMPORT_FAILED
    // *   IMPORT_COMPLETE
    std::shared_ptr<vector<string>> resourceAttributes_ = nullptr;
    // The name of resource property N that you want to query.
    std::shared_ptr<bool> showResourceAttributes_ = nullptr;
    // The ID of the region to which the stack belongs. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

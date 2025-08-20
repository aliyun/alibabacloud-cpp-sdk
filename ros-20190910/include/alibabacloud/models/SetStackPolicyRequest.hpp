// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSTACKPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSTACKPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class SetStackPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetStackPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyURL, stackPolicyURL_);
    };
    friend void from_json(const Darabonba::Json& j, SetStackPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyURL, stackPolicyURL_);
    };
    SetStackPolicyRequest() = default ;
    SetStackPolicyRequest(const SetStackPolicyRequest &) = default ;
    SetStackPolicyRequest(SetStackPolicyRequest &&) = default ;
    SetStackPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetStackPolicyRequest() = default ;
    SetStackPolicyRequest& operator=(const SetStackPolicyRequest &) = default ;
    SetStackPolicyRequest& operator=(SetStackPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->stackId_ != nullptr && this->stackPolicyBody_ != nullptr && this->stackPolicyURL_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetStackPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline SetStackPolicyRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline string stackPolicyBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyBody_, "") };
    inline SetStackPolicyRequest& setStackPolicyBody(string stackPolicyBody) { DARABONBA_PTR_SET_VALUE(stackPolicyBody_, stackPolicyBody) };


    // stackPolicyURL Field Functions 
    bool hasStackPolicyURL() const { return this->stackPolicyURL_ != nullptr;};
    void deleteStackPolicyURL() { this->stackPolicyURL_ = nullptr;};
    inline string stackPolicyURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyURL_, "") };
    inline SetStackPolicyRequest& setStackPolicyURL(string stackPolicyURL) { DARABONBA_PTR_SET_VALUE(stackPolicyURL_, stackPolicyURL) };


  protected:
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
    // The structure that contains the stack policy body. The stack policy body must be 1 to 16,384 bytes in length.
    // 
    // You can specify one of the StackPolicyBody and StackPolicyURL parameters, but you cannot specify both of them.
    std::shared_ptr<string> stackPolicyBody_ = nullptr;
    // The URL for the file that contains the stack policy. The URL must point to a template located in an HTTP or HTTPS web server or an Alibaba Cloud OSS bucket. Examples: oss://ros/template/demo and oss://ros/template/demo?RegionId=cn-hangzhou. The template can be up to 16,384 bytes in length, and the URL can be up to 1,350 bytes in length.
    // 
    // >  If the region of the OSS bucket is not specified, the RegionId value is used.
    // 
    // You can specify one of the StackPolicyBody and StackPolicyURL parameters, but you cannot specify both of them.
    std::shared_ptr<string> stackPolicyURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

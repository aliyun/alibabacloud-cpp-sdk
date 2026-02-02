// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(license, license_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(license, license_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
    };
    CreateChatSessionRequest() = default ;
    CreateChatSessionRequest(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest(CreateChatSessionRequest &&) = default ;
    CreateChatSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionRequest() = default ;
    CreateChatSessionRequest& operator=(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest& operator=(CreateChatSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->license_ == nullptr && this->platform_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateChatSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string getLicense() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline CreateChatSessionRequest& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateChatSessionRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    // 需要在[数字人实时交互服务](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.457876812ETi6y&commodityCode=avatar_2dchat_public_cn)购买完成对应的服务购买，当前有可用的服务时，前往阿里云-[我的订单](https://billing-cost.console.aliyun.com/order/list)页面对应订单详情下进行查询
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 灵眸平台颁发的个人凭证（在使用端渲染数字人的场景下必填）。
    shared_ptr<string> license_ {};
    // 运行SDK的平台（在使用端渲染数字人的场景下必填）。
    shared_ptr<string> platform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif

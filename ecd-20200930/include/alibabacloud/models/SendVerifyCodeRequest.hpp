// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVERIFYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVERIFYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SendVerifyCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVerifyCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VerifyCodeAction, verifyCodeAction_);
    };
    friend void from_json(const Darabonba::Json& j, SendVerifyCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VerifyCodeAction, verifyCodeAction_);
    };
    SendVerifyCodeRequest() = default ;
    SendVerifyCodeRequest(const SendVerifyCodeRequest &) = default ;
    SendVerifyCodeRequest(SendVerifyCodeRequest &&) = default ;
    SendVerifyCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVerifyCodeRequest() = default ;
    SendVerifyCodeRequest& operator=(const SendVerifyCodeRequest &) = default ;
    SendVerifyCodeRequest& operator=(SendVerifyCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraInfo_ != nullptr
        && this->regionId_ != nullptr && this->verifyCodeAction_ != nullptr; };
    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SendVerifyCodeRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendVerifyCodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // verifyCodeAction Field Functions 
    bool hasVerifyCodeAction() const { return this->verifyCodeAction_ != nullptr;};
    void deleteVerifyCodeAction() { this->verifyCodeAction_ = nullptr;};
    inline string verifyCodeAction() const { DARABONBA_PTR_GET_DEFAULT(verifyCodeAction_, "") };
    inline SendVerifyCodeRequest& setVerifyCodeAction(string verifyCodeAction) { DARABONBA_PTR_SET_VALUE(verifyCodeAction_, verifyCodeAction) };


  protected:
    // The information that is required to send the verification code, in JSON format. When you verify the CEN instance of another Alibaba Cloud account, you must provide the ID of the CEN instance and the ID of the Alibaba Cloud account to which the instance belongs.
    // 
    // *   CenId: the ID of the CEN instance.
    // *   CenOwnerId: the ID of the Alibaba Cloud account to which the CEN instance belongs.
    // 
    // >  If you own the CEN instance, skip this parameter. If you do not own the CEN instance, specify the ID of the Alibaba Cloud account that owns the CEN instance.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The action that you want to perform by using the verification code.
    // 
    // Valid value:
    // 
    // *   eds_cenID_securityverification: Use the verification code to verify the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyCodeAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

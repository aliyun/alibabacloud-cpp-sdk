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
    virtual bool empty() const override { return this->extraInfo_ == nullptr
        && this->regionId_ == nullptr && this->verifyCodeAction_ == nullptr; };
    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SendVerifyCodeRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendVerifyCodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // verifyCodeAction Field Functions 
    bool hasVerifyCodeAction() const { return this->verifyCodeAction_ != nullptr;};
    void deleteVerifyCodeAction() { this->verifyCodeAction_ = nullptr;};
    inline string getVerifyCodeAction() const { DARABONBA_PTR_GET_DEFAULT(verifyCodeAction_, "") };
    inline SendVerifyCodeRequest& setVerifyCodeAction(string verifyCodeAction) { DARABONBA_PTR_SET_VALUE(verifyCodeAction_, verifyCodeAction) };


  protected:
    // The information required to send the verification code, in JSON format. When verifying a CEN instance, provide the CEN instance ID and the Alibaba Cloud account ID to which the CEN instance belongs.
    // - CenId: the CEN instance ID. 
    // - CenOwnerId: the Alibaba Cloud account ID to which the CEN instance belongs. 
    // 
    // > If the specified CenId belongs to the current Alibaba Cloud account, this parameter is not required. If the specified CenId belongs to a different Alibaba Cloud account, specify the Alibaba Cloud account ID of the owner.
    shared_ptr<string> extraInfo_ {};
    // The region ID. Call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The action associated with the verification code.
    // 
    // This parameter is required.
    shared_ptr<string> verifyCodeAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

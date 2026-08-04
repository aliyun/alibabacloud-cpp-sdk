// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKUSERORGBYALIYUNTMPCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKUSERORGBYALIYUNTMPCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetDingTalkUserOrgByAliyunTmpCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingTalkUserOrgByAliyunTmpCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DingTalkChannel, dingTalkChannel_);
      DARABONBA_PTR_TO_JSON(TmpCode, tmpCode_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingTalkUserOrgByAliyunTmpCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DingTalkChannel, dingTalkChannel_);
      DARABONBA_PTR_FROM_JSON(TmpCode, tmpCode_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetDingTalkUserOrgByAliyunTmpCodeRequest() = default ;
    GetDingTalkUserOrgByAliyunTmpCodeRequest(const GetDingTalkUserOrgByAliyunTmpCodeRequest &) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeRequest(GetDingTalkUserOrgByAliyunTmpCodeRequest &&) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingTalkUserOrgByAliyunTmpCodeRequest() = default ;
    GetDingTalkUserOrgByAliyunTmpCodeRequest& operator=(const GetDingTalkUserOrgByAliyunTmpCodeRequest &) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeRequest& operator=(GetDingTalkUserOrgByAliyunTmpCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->dingTalkChannel_ == nullptr && this->tmpCode_ == nullptr && this->version_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dingTalkChannel Field Functions 
    bool hasDingTalkChannel() const { return this->dingTalkChannel_ != nullptr;};
    void deleteDingTalkChannel() { this->dingTalkChannel_ = nullptr;};
    inline string getDingTalkChannel() const { DARABONBA_PTR_GET_DEFAULT(dingTalkChannel_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeRequest& setDingTalkChannel(string dingTalkChannel) { DARABONBA_PTR_SET_VALUE(dingTalkChannel_, dingTalkChannel) };


    // tmpCode Field Functions 
    bool hasTmpCode() const { return this->tmpCode_ != nullptr;};
    void deleteTmpCode() { this->tmpCode_ = nullptr;};
    inline string getTmpCode() const { DARABONBA_PTR_GET_DEFAULT(tmpCode_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeRequest& setTmpCode(string tmpCode) { DARABONBA_PTR_SET_VALUE(tmpCode_, tmpCode) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> dingTalkChannel_ {};
    shared_ptr<string> tmpCode_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

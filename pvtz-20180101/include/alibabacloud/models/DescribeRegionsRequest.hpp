// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
    };
    DescribeRegionsRequest() = default ;
    DescribeRegionsRequest(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest(DescribeRegionsRequest &&) = default ;
    DescribeRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsRequest() = default ;
    DescribeRegionsRequest& operator=(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest& operator=(DescribeRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authorizedUserId_ == nullptr && this->lang_ == nullptr && this->scene_ == nullptr && this->userClientIp_ == nullptr && this->vpcType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeRegionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
    inline DescribeRegionsRequest& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRegionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeRegionsRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline DescribeRegionsRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // vpcType Field Functions 
    bool hasVpcType() const { return this->vpcType_ != nullptr;};
    void deleteVpcType() { this->vpcType_ = nullptr;};
    inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
    inline DescribeRegionsRequest& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


  protected:
    // The supported language. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    // 
    // Default value: en-US.
    // 
    // >  AcceptLanguage has a higher priority than Lang.
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the Alibaba Cloud account to which the permissions on the resources are granted.
    shared_ptr<int64_t> authorizedUserId_ {};
    // The language of the response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    // 
    // Default value: **en**.
    // 
    // >  Lang has a lower priority than AcceptLanguage.
    shared_ptr<string> lang_ {};
    // The scenario. Valid values:
    // 
    // *   AUTH: the built-in authoritative module
    // *   FWD: the forward module
    // *   RA: the traffic analysis module
    shared_ptr<string> scene_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
    // The VPC type. Valid values:
    // 
    // *   STANDARD: standard VPC
    // *   EDS: Elastic Desktop Service (EDS) workspace VPC
    shared_ptr<string> vpcType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif

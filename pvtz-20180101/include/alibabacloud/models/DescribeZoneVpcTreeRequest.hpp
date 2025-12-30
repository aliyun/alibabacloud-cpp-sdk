// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONEVPCTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONEVPCTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeZoneVpcTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZoneVpcTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZoneVpcTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    DescribeZoneVpcTreeRequest() = default ;
    DescribeZoneVpcTreeRequest(const DescribeZoneVpcTreeRequest &) = default ;
    DescribeZoneVpcTreeRequest(DescribeZoneVpcTreeRequest &&) = default ;
    DescribeZoneVpcTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZoneVpcTreeRequest() = default ;
    DescribeZoneVpcTreeRequest& operator=(const DescribeZoneVpcTreeRequest &) = default ;
    DescribeZoneVpcTreeRequest& operator=(DescribeZoneVpcTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeZoneVpcTreeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline DescribeZoneVpcTreeRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif

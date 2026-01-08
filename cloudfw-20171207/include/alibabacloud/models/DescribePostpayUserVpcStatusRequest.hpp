// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYUSERVPCSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYUSERVPCSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayUserVpcStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayUserVpcStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayUserVpcStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribePostpayUserVpcStatusRequest() = default ;
    DescribePostpayUserVpcStatusRequest(const DescribePostpayUserVpcStatusRequest &) = default ;
    DescribePostpayUserVpcStatusRequest(DescribePostpayUserVpcStatusRequest &&) = default ;
    DescribePostpayUserVpcStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayUserVpcStatusRequest() = default ;
    DescribePostpayUserVpcStatusRequest& operator=(const DescribePostpayUserVpcStatusRequest &) = default ;
    DescribePostpayUserVpcStatusRequest& operator=(DescribePostpayUserVpcStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePostpayUserVpcStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePostpayUserVpcStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The instance ID of Cloud Firewall.
    shared_ptr<string> instanceId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

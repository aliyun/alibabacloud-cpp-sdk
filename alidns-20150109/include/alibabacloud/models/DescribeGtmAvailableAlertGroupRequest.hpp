// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMAVAILABLEALERTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMAVAILABLEALERTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAvailableAlertGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAvailableAlertGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAvailableAlertGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeGtmAvailableAlertGroupRequest() = default ;
    DescribeGtmAvailableAlertGroupRequest(const DescribeGtmAvailableAlertGroupRequest &) = default ;
    DescribeGtmAvailableAlertGroupRequest(DescribeGtmAvailableAlertGroupRequest &&) = default ;
    DescribeGtmAvailableAlertGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAvailableAlertGroupRequest() = default ;
    DescribeGtmAvailableAlertGroupRequest& operator=(const DescribeGtmAvailableAlertGroupRequest &) = default ;
    DescribeGtmAvailableAlertGroupRequest& operator=(DescribeGtmAvailableAlertGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGtmAvailableAlertGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language used by the user.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

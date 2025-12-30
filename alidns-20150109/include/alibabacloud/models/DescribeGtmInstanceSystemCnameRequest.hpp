// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESYSTEMCNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESYSTEMCNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceSystemCnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceSystemCnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceSystemCnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeGtmInstanceSystemCnameRequest() = default ;
    DescribeGtmInstanceSystemCnameRequest(const DescribeGtmInstanceSystemCnameRequest &) = default ;
    DescribeGtmInstanceSystemCnameRequest(DescribeGtmInstanceSystemCnameRequest &&) = default ;
    DescribeGtmInstanceSystemCnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceSystemCnameRequest() = default ;
    DescribeGtmInstanceSystemCnameRequest& operator=(const DescribeGtmInstanceSystemCnameRequest &) = default ;
    DescribeGtmInstanceSystemCnameRequest& operator=(DescribeGtmInstanceSystemCnameRequest &&) = default ;
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
    inline DescribeGtmInstanceSystemCnameRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGtmInstanceSystemCnameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the Global Traffic Manager (GTM) instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language used by the user.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

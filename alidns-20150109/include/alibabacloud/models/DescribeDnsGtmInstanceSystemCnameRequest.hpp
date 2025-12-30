// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESYSTEMCNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESYSTEMCNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceSystemCnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceSystemCnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceSystemCnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDnsGtmInstanceSystemCnameRequest() = default ;
    DescribeDnsGtmInstanceSystemCnameRequest(const DescribeDnsGtmInstanceSystemCnameRequest &) = default ;
    DescribeDnsGtmInstanceSystemCnameRequest(DescribeDnsGtmInstanceSystemCnameRequest &&) = default ;
    DescribeDnsGtmInstanceSystemCnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceSystemCnameRequest() = default ;
    DescribeDnsGtmInstanceSystemCnameRequest& operator=(const DescribeDnsGtmInstanceSystemCnameRequest &) = default ;
    DescribeDnsGtmInstanceSystemCnameRequest& operator=(DescribeDnsGtmInstanceSystemCnameRequest &&) = default ;
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
    inline DescribeDnsGtmInstanceSystemCnameRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmInstanceSystemCnameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language to return some response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

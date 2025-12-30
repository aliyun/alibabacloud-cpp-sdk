// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NeedDetailAttributes, needDetailAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NeedDetailAttributes, needDetailAttributes_);
    };
    DescribeGtmInstanceRequest() = default ;
    DescribeGtmInstanceRequest(const DescribeGtmInstanceRequest &) = default ;
    DescribeGtmInstanceRequest(DescribeGtmInstanceRequest &&) = default ;
    DescribeGtmInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceRequest() = default ;
    DescribeGtmInstanceRequest& operator=(const DescribeGtmInstanceRequest &) = default ;
    DescribeGtmInstanceRequest& operator=(DescribeGtmInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->needDetailAttributes_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGtmInstanceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // needDetailAttributes Field Functions 
    bool hasNeedDetailAttributes() const { return this->needDetailAttributes_ != nullptr;};
    void deleteNeedDetailAttributes() { this->needDetailAttributes_ = nullptr;};
    inline bool getNeedDetailAttributes() const { DARABONBA_PTR_GET_DEFAULT(needDetailAttributes_, false) };
    inline DescribeGtmInstanceRequest& setNeedDetailAttributes(bool needDetailAttributes) { DARABONBA_PTR_SET_VALUE(needDetailAttributes_, needDetailAttributes) };


  protected:
    // The ID of the GTM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the values of specific response parameters.
    shared_ptr<string> lang_ {};
    // Specifies whether additional information is required. Default value: **false**. If the value is **true**, the AccessStrategyNum and AddressPoolNum parameters are returned.
    shared_ptr<bool> needDetailAttributes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

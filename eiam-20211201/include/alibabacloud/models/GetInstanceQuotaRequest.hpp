// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QuotaKey, quotaKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaKey, quotaKey_);
    };
    GetInstanceQuotaRequest() = default ;
    GetInstanceQuotaRequest(const GetInstanceQuotaRequest &) = default ;
    GetInstanceQuotaRequest(GetInstanceQuotaRequest &&) = default ;
    GetInstanceQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceQuotaRequest() = default ;
    GetInstanceQuotaRequest& operator=(const GetInstanceQuotaRequest &) = default ;
    GetInstanceQuotaRequest& operator=(GetInstanceQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->quotaKey_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceQuotaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotaKey Field Functions 
    bool hasQuotaKey() const { return this->quotaKey_ != nullptr;};
    void deleteQuotaKey() { this->quotaKey_ = nullptr;};
    inline string getQuotaKey() const { DARABONBA_PTR_GET_DEFAULT(quotaKey_, "") };
    inline GetInstanceQuotaRequest& setQuotaKey(string quotaKey) { DARABONBA_PTR_SET_VALUE(quotaKey_, quotaKey) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 配额类型，QuotaEnum
    // 
    // This parameter is required.
    shared_ptr<string> quotaKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

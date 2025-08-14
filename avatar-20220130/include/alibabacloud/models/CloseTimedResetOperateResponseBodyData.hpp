// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSETIMEDRESETOPERATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLOSETIMEDRESETOPERATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class CloseTimedResetOperateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseTimedResetOperateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseTimedResetOperateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CloseTimedResetOperateResponseBodyData() = default ;
    CloseTimedResetOperateResponseBodyData(const CloseTimedResetOperateResponseBodyData &) = default ;
    CloseTimedResetOperateResponseBodyData(CloseTimedResetOperateResponseBodyData &&) = default ;
    CloseTimedResetOperateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseTimedResetOperateResponseBodyData() = default ;
    CloseTimedResetOperateResponseBodyData& operator=(const CloseTimedResetOperateResponseBodyData &) = default ;
    CloseTimedResetOperateResponseBodyData& operator=(CloseTimedResetOperateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->tenantId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CloseTimedResetOperateResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CloseTimedResetOperateResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif

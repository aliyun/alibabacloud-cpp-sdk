// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENANTMEMORYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTENANTMEMORYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetTenantMemoryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTenantMemoryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTenantMemoryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTenantMemoryConfigResponseBody() = default ;
    GetTenantMemoryConfigResponseBody(const GetTenantMemoryConfigResponseBody &) = default ;
    GetTenantMemoryConfigResponseBody(GetTenantMemoryConfigResponseBody &&) = default ;
    GetTenantMemoryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTenantMemoryConfigResponseBody() = default ;
    GetTenantMemoryConfigResponseBody& operator=(const GetTenantMemoryConfigResponseBody &) = default ;
    GetTenantMemoryConfigResponseBody& operator=(GetTenantMemoryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DisabledReason, disabledReason_);
        DARABONBA_PTR_TO_JSON(EffectiveEnabled, effectiveEnabled_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(InstanceDesiredEnabled, instanceDesiredEnabled_);
        DARABONBA_PTR_TO_JSON(TenantEnabled, tenantEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DisabledReason, disabledReason_);
        DARABONBA_PTR_FROM_JSON(EffectiveEnabled, effectiveEnabled_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(InstanceDesiredEnabled, instanceDesiredEnabled_);
        DARABONBA_PTR_FROM_JSON(TenantEnabled, tenantEnabled_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disabledReason_ == nullptr
        && this->effectiveEnabled_ == nullptr && this->enabled_ == nullptr && this->instanceDesiredEnabled_ == nullptr && this->tenantEnabled_ == nullptr; };
      // disabledReason Field Functions 
      bool hasDisabledReason() const { return this->disabledReason_ != nullptr;};
      void deleteDisabledReason() { this->disabledReason_ = nullptr;};
      inline string getDisabledReason() const { DARABONBA_PTR_GET_DEFAULT(disabledReason_, "") };
      inline Data& setDisabledReason(string disabledReason) { DARABONBA_PTR_SET_VALUE(disabledReason_, disabledReason) };


      // effectiveEnabled Field Functions 
      bool hasEffectiveEnabled() const { return this->effectiveEnabled_ != nullptr;};
      void deleteEffectiveEnabled() { this->effectiveEnabled_ = nullptr;};
      inline bool getEffectiveEnabled() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnabled_, false) };
      inline Data& setEffectiveEnabled(bool effectiveEnabled) { DARABONBA_PTR_SET_VALUE(effectiveEnabled_, effectiveEnabled) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // instanceDesiredEnabled Field Functions 
      bool hasInstanceDesiredEnabled() const { return this->instanceDesiredEnabled_ != nullptr;};
      void deleteInstanceDesiredEnabled() { this->instanceDesiredEnabled_ = nullptr;};
      inline bool getInstanceDesiredEnabled() const { DARABONBA_PTR_GET_DEFAULT(instanceDesiredEnabled_, false) };
      inline Data& setInstanceDesiredEnabled(bool instanceDesiredEnabled) { DARABONBA_PTR_SET_VALUE(instanceDesiredEnabled_, instanceDesiredEnabled) };


      // tenantEnabled Field Functions 
      bool hasTenantEnabled() const { return this->tenantEnabled_ != nullptr;};
      void deleteTenantEnabled() { this->tenantEnabled_ = nullptr;};
      inline bool getTenantEnabled() const { DARABONBA_PTR_GET_DEFAULT(tenantEnabled_, false) };
      inline Data& setTenantEnabled(bool tenantEnabled) { DARABONBA_PTR_SET_VALUE(tenantEnabled_, tenantEnabled) };


    protected:
      // This field is not enabled. The current query result does not provide the disable reason. The example is used to illustrate the field status.
      shared_ptr<string> disabledReason_ {};
      // This field is not enabled. The current query result does not provide the effective switch of the instance.
      shared_ptr<bool> effectiveEnabled_ {};
      // The tenant-level memory switch for the corresponding business combination. A value of `true` indicates that the switch is enabled, and a value of `false` indicates that the switch is disabled. This field may be omitted if no switch is configured for the combination.
      shared_ptr<bool> enabled_ {};
      // This field is not enabled. The current query result does not provide the instance desired switch.
      shared_ptr<bool> instanceDesiredEnabled_ {};
      // This field is not enabled. To obtain the tenant-level configuration switch returned by the current API operation, read the Enabled field.
      shared_ptr<bool> tenantEnabled_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTenantMemoryConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTenantMemoryConfigResponseBody::Data) };
    inline GetTenantMemoryConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTenantMemoryConfigResponseBody::Data) };
    inline GetTenantMemoryConfigResponseBody& setData(const GetTenantMemoryConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTenantMemoryConfigResponseBody& setData(GetTenantMemoryConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTenantMemoryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tenant memory configuration that matches the business combination.
    shared_ptr<GetTenantMemoryConfigResponseBody::Data> data_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceQuotasResponseBody() = default ;
    ListInstanceQuotasResponseBody(const ListInstanceQuotasResponseBody &) = default ;
    ListInstanceQuotasResponseBody(ListInstanceQuotasResponseBody &&) = default ;
    ListInstanceQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasResponseBody() = default ;
    ListInstanceQuotasResponseBody& operator=(const ListInstanceQuotasResponseBody &) = default ;
    ListInstanceQuotasResponseBody& operator=(ListInstanceQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_TO_JSON(QuotaValueType, quotaValueType_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_FROM_JSON(QuotaValueType, quotaValueType_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->quotaName_ == nullptr
        && this->quotaValue_ == nullptr && this->quotaValueType_ == nullptr; };
      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline string getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
      inline Quotas& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


      // quotaValueType Field Functions 
      bool hasQuotaValueType() const { return this->quotaValueType_ != nullptr;};
      void deleteQuotaValueType() { this->quotaValueType_ = nullptr;};
      inline string getQuotaValueType() const { DARABONBA_PTR_GET_DEFAULT(quotaValueType_, "") };
      inline Quotas& setQuotaValueType(string quotaValueType) { DARABONBA_PTR_SET_VALUE(quotaValueType_, quotaValueType) };


    protected:
      // The quota name.
      shared_ptr<string> quotaName_ {};
      // The quota value.
      shared_ptr<string> quotaValue_ {};
      // The threshold type of the quota. Valid values:
      // 
      // *   value: enumerates the values of the quota.
      // *   bool: specifies whether the quota is available.
      // *   num: the upper limit of the quota.
      // *   range: the value range for the quota.
      // *   custom: other types than the preceding four quota threshold types.
      shared_ptr<string> quotaValueType_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->quotas_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListInstanceQuotasResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListInstanceQuotasResponseBody::Quotas>) };
    inline vector<ListInstanceQuotasResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListInstanceQuotasResponseBody::Quotas>) };
    inline ListInstanceQuotasResponseBody& setQuotas(const vector<ListInstanceQuotasResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListInstanceQuotasResponseBody& setQuotas(vector<ListInstanceQuotasResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceQuotasResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The plan ID.
    shared_ptr<string> instanceId_ {};
    // The quotas in the plan.
    shared_ptr<vector<ListInstanceQuotasResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The plan status. Valid values:
    // 
    // *   online: The plan is in service.
    // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
    // *   disable: The plan is released.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

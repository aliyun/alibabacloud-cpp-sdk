// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESQUOTARESPONSEBODY_HPP_
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
  class ListInstancesQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaValueType, quotaValueType_);
      DARABONBA_PTR_TO_JSON(QuotaValues, quotaValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaValueType, quotaValueType_);
      DARABONBA_PTR_FROM_JSON(QuotaValues, quotaValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancesQuotaResponseBody() = default ;
    ListInstancesQuotaResponseBody(const ListInstancesQuotaResponseBody &) = default ;
    ListInstancesQuotaResponseBody(ListInstancesQuotaResponseBody &&) = default ;
    ListInstancesQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesQuotaResponseBody() = default ;
    ListInstancesQuotaResponseBody& operator=(const ListInstancesQuotaResponseBody &) = default ;
    ListInstancesQuotaResponseBody& operator=(ListInstancesQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaValues& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaValues& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
      };
      QuotaValues() = default ;
      QuotaValues(const QuotaValues &) = default ;
      QuotaValues(QuotaValues &&) = default ;
      QuotaValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaValues() = default ;
      QuotaValues& operator=(const QuotaValues &) = default ;
      QuotaValues& operator=(QuotaValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->quotaValue_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline QuotaValues& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline string getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
      inline QuotaValues& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    protected:
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The quota value.
      shared_ptr<string> quotaValue_ {};
    };

    virtual bool empty() const override { return this->quotaName_ == nullptr
        && this->quotaValueType_ == nullptr && this->quotaValues_ == nullptr && this->requestId_ == nullptr; };
    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListInstancesQuotaResponseBody& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaValueType Field Functions 
    bool hasQuotaValueType() const { return this->quotaValueType_ != nullptr;};
    void deleteQuotaValueType() { this->quotaValueType_ = nullptr;};
    inline string getQuotaValueType() const { DARABONBA_PTR_GET_DEFAULT(quotaValueType_, "") };
    inline ListInstancesQuotaResponseBody& setQuotaValueType(string quotaValueType) { DARABONBA_PTR_SET_VALUE(quotaValueType_, quotaValueType) };


    // quotaValues Field Functions 
    bool hasQuotaValues() const { return this->quotaValues_ != nullptr;};
    void deleteQuotaValues() { this->quotaValues_ = nullptr;};
    inline const vector<ListInstancesQuotaResponseBody::QuotaValues> & getQuotaValues() const { DARABONBA_PTR_GET_CONST(quotaValues_, vector<ListInstancesQuotaResponseBody::QuotaValues>) };
    inline vector<ListInstancesQuotaResponseBody::QuotaValues> getQuotaValues() { DARABONBA_PTR_GET(quotaValues_, vector<ListInstancesQuotaResponseBody::QuotaValues>) };
    inline ListInstancesQuotaResponseBody& setQuotaValues(const vector<ListInstancesQuotaResponseBody::QuotaValues> & quotaValues) { DARABONBA_PTR_SET_VALUE(quotaValues_, quotaValues) };
    inline ListInstancesQuotaResponseBody& setQuotaValues(vector<ListInstancesQuotaResponseBody::QuotaValues> && quotaValues) { DARABONBA_PTR_SET_RVALUE(quotaValues_, quotaValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quota name.
    shared_ptr<string> quotaName_ {};
    // The threshold type of the quota. Valid values:
    // 
    // - **value**: Enumeration type. The enumeration range of quota values.
    // - **bool**: Boolean type. Indicates whether the quota is available.
    // - **num**: Numeric type. The upper limit of the quota usage.
    // - **range**: Range type. The value range of the quota.
    // - **custom**: Custom type. Other types beyond the four threshold types above.
    shared_ptr<string> quotaValueType_ {};
    // The list of quota values.
    shared_ptr<vector<ListInstancesQuotaResponseBody::QuotaValues>> quotaValues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAPACITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCAPACITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetCapacityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCapacityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCapacityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCapacityResponseBody() = default ;
    GetCapacityResponseBody(const GetCapacityResponseBody &) = default ;
    GetCapacityResponseBody(GetCapacityResponseBody &&) = default ;
    GetCapacityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCapacityResponseBody() = default ;
    GetCapacityResponseBody& operator=(const GetCapacityResponseBody &) = default ;
    GetCapacityResponseBody& operator=(GetCapacityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentManagedAssetQuota, agentManagedAssetQuota_);
        DARABONBA_PTR_TO_JSON(AgentManagedAssetUsed, agentManagedAssetUsed_);
        DARABONBA_PTR_TO_JSON(ExistLogStore, existLogStore_);
        DARABONBA_PTR_TO_JSON(PreservedCapacity, preservedCapacity_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentManagedAssetQuota, agentManagedAssetQuota_);
        DARABONBA_PTR_FROM_JSON(AgentManagedAssetUsed, agentManagedAssetUsed_);
        DARABONBA_PTR_FROM_JSON(ExistLogStore, existLogStore_);
        DARABONBA_PTR_FROM_JSON(PreservedCapacity, preservedCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
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
      virtual bool empty() const override { return this->agentManagedAssetQuota_ == nullptr
        && this->agentManagedAssetUsed_ == nullptr && this->existLogStore_ == nullptr && this->preservedCapacity_ == nullptr && this->usedCapacity_ == nullptr; };
      // agentManagedAssetQuota Field Functions 
      bool hasAgentManagedAssetQuota() const { return this->agentManagedAssetQuota_ != nullptr;};
      void deleteAgentManagedAssetQuota() { this->agentManagedAssetQuota_ = nullptr;};
      inline int64_t getAgentManagedAssetQuota() const { DARABONBA_PTR_GET_DEFAULT(agentManagedAssetQuota_, 0L) };
      inline Data& setAgentManagedAssetQuota(int64_t agentManagedAssetQuota) { DARABONBA_PTR_SET_VALUE(agentManagedAssetQuota_, agentManagedAssetQuota) };


      // agentManagedAssetUsed Field Functions 
      bool hasAgentManagedAssetUsed() const { return this->agentManagedAssetUsed_ != nullptr;};
      void deleteAgentManagedAssetUsed() { this->agentManagedAssetUsed_ = nullptr;};
      inline int64_t getAgentManagedAssetUsed() const { DARABONBA_PTR_GET_DEFAULT(agentManagedAssetUsed_, 0L) };
      inline Data& setAgentManagedAssetUsed(int64_t agentManagedAssetUsed) { DARABONBA_PTR_SET_VALUE(agentManagedAssetUsed_, agentManagedAssetUsed) };


      // existLogStore Field Functions 
      bool hasExistLogStore() const { return this->existLogStore_ != nullptr;};
      void deleteExistLogStore() { this->existLogStore_ = nullptr;};
      inline bool getExistLogStore() const { DARABONBA_PTR_GET_DEFAULT(existLogStore_, false) };
      inline Data& setExistLogStore(bool existLogStore) { DARABONBA_PTR_SET_VALUE(existLogStore_, existLogStore) };


      // preservedCapacity Field Functions 
      bool hasPreservedCapacity() const { return this->preservedCapacity_ != nullptr;};
      void deletePreservedCapacity() { this->preservedCapacity_ = nullptr;};
      inline int64_t getPreservedCapacity() const { DARABONBA_PTR_GET_DEFAULT(preservedCapacity_, 0L) };
      inline Data& setPreservedCapacity(int64_t preservedCapacity) { DARABONBA_PTR_SET_VALUE(preservedCapacity_, preservedCapacity) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
      inline Data& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


    protected:
      shared_ptr<int64_t> agentManagedAssetQuota_ {};
      shared_ptr<int64_t> agentManagedAssetUsed_ {};
      // Indicates whether the Logstores for the threat analysis feature exist on the user side. Valid values:
      // 
      // *   true: The logs are in the normal state. The log analysis feature is available.
      // *   false: The logs are being cleared. The log analysis feature is unavailable.
      shared_ptr<bool> existLogStore_ {};
      // The purchased storage capacity of the threat analysis feature. Unit: GB.
      shared_ptr<int64_t> preservedCapacity_ {};
      // The billable storage capacity of the threat analysis feature. Unit: GB.
      shared_ptr<double> usedCapacity_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCapacityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCapacityResponseBody::Data) };
    inline GetCapacityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCapacityResponseBody::Data) };
    inline GetCapacityResponseBody& setData(const GetCapacityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCapacityResponseBody& setData(GetCapacityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCapacityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the storage capacity.
    shared_ptr<GetCapacityResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

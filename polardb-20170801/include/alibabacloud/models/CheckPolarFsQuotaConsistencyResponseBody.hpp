// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPOLARFSQUOTACONSISTENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKPOLARFSQUOTACONSISTENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CheckPolarFsQuotaConsistencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPolarFsQuotaConsistencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(QuotaItem, quotaItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPolarFsQuotaConsistencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaItem, quotaItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckPolarFsQuotaConsistencyResponseBody() = default ;
    CheckPolarFsQuotaConsistencyResponseBody(const CheckPolarFsQuotaConsistencyResponseBody &) = default ;
    CheckPolarFsQuotaConsistencyResponseBody(CheckPolarFsQuotaConsistencyResponseBody &&) = default ;
    CheckPolarFsQuotaConsistencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPolarFsQuotaConsistencyResponseBody() = default ;
    CheckPolarFsQuotaConsistencyResponseBody& operator=(const CheckPolarFsQuotaConsistencyResponseBody &) = default ;
    CheckPolarFsQuotaConsistencyResponseBody& operator=(CheckPolarFsQuotaConsistencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaItem& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(Inodes, inodes_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_TO_JSON(UsedInodes, usedInodes_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaItem& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(Inodes, inodes_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedInodes, usedInodes_);
      };
      QuotaItem() = default ;
      QuotaItem(const QuotaItem &) = default ;
      QuotaItem(QuotaItem &&) = default ;
      QuotaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaItem() = default ;
      QuotaItem& operator=(const QuotaItem &) = default ;
      QuotaItem& operator=(QuotaItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->inodes_ == nullptr && this->path_ == nullptr && this->usedCapacity_ == nullptr && this->usedInodes_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline QuotaItem& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // inodes Field Functions 
      bool hasInodes() const { return this->inodes_ != nullptr;};
      void deleteInodes() { this->inodes_ = nullptr;};
      inline int64_t getInodes() const { DARABONBA_PTR_GET_DEFAULT(inodes_, 0L) };
      inline QuotaItem& setInodes(int64_t inodes) { DARABONBA_PTR_SET_VALUE(inodes_, inodes) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline QuotaItem& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
      inline QuotaItem& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      // usedInodes Field Functions 
      bool hasUsedInodes() const { return this->usedInodes_ != nullptr;};
      void deleteUsedInodes() { this->usedInodes_ = nullptr;};
      inline int64_t getUsedInodes() const { DARABONBA_PTR_GET_DEFAULT(usedInodes_, 0L) };
      inline QuotaItem& setUsedInodes(int64_t usedInodes) { DARABONBA_PTR_SET_VALUE(usedInodes_, usedInodes) };


    protected:
      shared_ptr<int64_t> capacity_ {};
      // Inodes
      shared_ptr<int64_t> inodes_ {};
      shared_ptr<string> path_ {};
      shared_ptr<int64_t> usedCapacity_ {};
      shared_ptr<int64_t> usedInodes_ {};
    };

    virtual bool empty() const override { return this->polarFsInstanceId_ == nullptr
        && this->quotaItem_ == nullptr && this->requestId_ == nullptr; };
    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CheckPolarFsQuotaConsistencyResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // quotaItem Field Functions 
    bool hasQuotaItem() const { return this->quotaItem_ != nullptr;};
    void deleteQuotaItem() { this->quotaItem_ = nullptr;};
    inline const CheckPolarFsQuotaConsistencyResponseBody::QuotaItem & getQuotaItem() const { DARABONBA_PTR_GET_CONST(quotaItem_, CheckPolarFsQuotaConsistencyResponseBody::QuotaItem) };
    inline CheckPolarFsQuotaConsistencyResponseBody::QuotaItem getQuotaItem() { DARABONBA_PTR_GET(quotaItem_, CheckPolarFsQuotaConsistencyResponseBody::QuotaItem) };
    inline CheckPolarFsQuotaConsistencyResponseBody& setQuotaItem(const CheckPolarFsQuotaConsistencyResponseBody::QuotaItem & quotaItem) { DARABONBA_PTR_SET_VALUE(quotaItem_, quotaItem) };
    inline CheckPolarFsQuotaConsistencyResponseBody& setQuotaItem(CheckPolarFsQuotaConsistencyResponseBody::QuotaItem && quotaItem) { DARABONBA_PTR_SET_RVALUE(quotaItem_, quotaItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckPolarFsQuotaConsistencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> polarFsInstanceId_ {};
    shared_ptr<CheckPolarFsQuotaConsistencyResponseBody::QuotaItem> quotaItem_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
      DARABONBA_PTR_TO_JSON(FaultAddrPools, faultAddrPools_);
      DARABONBA_PTR_TO_JSON(LastExecuteTime, lastExecuteTime_);
      DARABONBA_PTR_TO_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
      DARABONBA_PTR_TO_JSON(LastRollbackTime, lastRollbackTime_);
      DARABONBA_PTR_TO_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
      DARABONBA_PTR_FROM_JSON(FaultAddrPools, faultAddrPools_);
      DARABONBA_PTR_FROM_JSON(LastExecuteTime, lastExecuteTime_);
      DARABONBA_PTR_FROM_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastRollbackTime, lastRollbackTime_);
      DARABONBA_PTR_FROM_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeGtmRecoveryPlanResponseBody() = default ;
    DescribeGtmRecoveryPlanResponseBody(const DescribeGtmRecoveryPlanResponseBody &) = default ;
    DescribeGtmRecoveryPlanResponseBody(DescribeGtmRecoveryPlanResponseBody &&) = default ;
    DescribeGtmRecoveryPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanResponseBody() = default ;
    DescribeGtmRecoveryPlanResponseBody& operator=(const DescribeGtmRecoveryPlanResponseBody &) = default ;
    DescribeGtmRecoveryPlanResponseBody& operator=(DescribeGtmRecoveryPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FaultAddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FaultAddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(FaultAddrPool, faultAddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, FaultAddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(FaultAddrPool, faultAddrPool_);
      };
      FaultAddrPools() = default ;
      FaultAddrPools(const FaultAddrPools &) = default ;
      FaultAddrPools(FaultAddrPools &&) = default ;
      FaultAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FaultAddrPools() = default ;
      FaultAddrPools& operator=(const FaultAddrPools &) = default ;
      FaultAddrPools& operator=(FaultAddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FaultAddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FaultAddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_TO_JSON(AddrPoolName, addrPoolName_);
          DARABONBA_PTR_TO_JSON(Addrs, addrs_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, FaultAddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_FROM_JSON(AddrPoolName, addrPoolName_);
          DARABONBA_PTR_FROM_JSON(Addrs, addrs_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        FaultAddrPool() = default ;
        FaultAddrPool(const FaultAddrPool &) = default ;
        FaultAddrPool(FaultAddrPool &&) = default ;
        FaultAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FaultAddrPool() = default ;
        FaultAddrPool& operator=(const FaultAddrPool &) = default ;
        FaultAddrPool& operator=(FaultAddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Addrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Addrs& obj) { 
            DARABONBA_PTR_TO_JSON(Addr, addr_);
          };
          friend void from_json(const Darabonba::Json& j, Addrs& obj) { 
            DARABONBA_PTR_FROM_JSON(Addr, addr_);
          };
          Addrs() = default ;
          Addrs(const Addrs &) = default ;
          Addrs(Addrs &&) = default ;
          Addrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Addrs() = default ;
          Addrs& operator=(const Addrs &) = default ;
          Addrs& operator=(Addrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Addr : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Addr& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Mode, mode_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Addr& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Mode, mode_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Addr() = default ;
            Addr(const Addr &) = default ;
            Addr(Addr &&) = default ;
            Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Addr() = default ;
            Addr& operator=(const Addr &) = default ;
            Addr& operator=(Addr &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->mode_ == nullptr && this->value_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline Addr& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // mode Field Functions 
            bool hasMode() const { return this->mode_ != nullptr;};
            void deleteMode() { this->mode_ = nullptr;};
            inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
            inline Addr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Addr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The address ID.
            shared_ptr<int64_t> id_ {};
            // The address mode.
            shared_ptr<string> mode_ {};
            // The address.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->addr_ == nullptr; };
          // addr Field Functions 
          bool hasAddr() const { return this->addr_ != nullptr;};
          void deleteAddr() { this->addr_ = nullptr;};
          inline const vector<Addrs::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Addrs::Addr>) };
          inline vector<Addrs::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<Addrs::Addr>) };
          inline Addrs& setAddr(const vector<Addrs::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
          inline Addrs& setAddr(vector<Addrs::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


        protected:
          shared_ptr<vector<Addrs::Addr>> addr_ {};
        };

        virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && this->addrPoolName_ == nullptr && this->addrs_ == nullptr && this->instanceId_ == nullptr; };
        // addrPoolId Field Functions 
        bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
        void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
        inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
        inline FaultAddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


        // addrPoolName Field Functions 
        bool hasAddrPoolName() const { return this->addrPoolName_ != nullptr;};
        void deleteAddrPoolName() { this->addrPoolName_ = nullptr;};
        inline string getAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(addrPoolName_, "") };
        inline FaultAddrPool& setAddrPoolName(string addrPoolName) { DARABONBA_PTR_SET_VALUE(addrPoolName_, addrPoolName) };


        // addrs Field Functions 
        bool hasAddrs() const { return this->addrs_ != nullptr;};
        void deleteAddrs() { this->addrs_ = nullptr;};
        inline const FaultAddrPool::Addrs & getAddrs() const { DARABONBA_PTR_GET_CONST(addrs_, FaultAddrPool::Addrs) };
        inline FaultAddrPool::Addrs getAddrs() { DARABONBA_PTR_GET(addrs_, FaultAddrPool::Addrs) };
        inline FaultAddrPool& setAddrs(const FaultAddrPool::Addrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
        inline FaultAddrPool& setAddrs(FaultAddrPool::Addrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline FaultAddrPool& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The address pool ID.
        shared_ptr<string> addrPoolId_ {};
        // The address pool name.
        shared_ptr<string> addrPoolName_ {};
        shared_ptr<FaultAddrPool::Addrs> addrs_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->faultAddrPool_ == nullptr; };
      // faultAddrPool Field Functions 
      bool hasFaultAddrPool() const { return this->faultAddrPool_ != nullptr;};
      void deleteFaultAddrPool() { this->faultAddrPool_ = nullptr;};
      inline const vector<FaultAddrPools::FaultAddrPool> & getFaultAddrPool() const { DARABONBA_PTR_GET_CONST(faultAddrPool_, vector<FaultAddrPools::FaultAddrPool>) };
      inline vector<FaultAddrPools::FaultAddrPool> getFaultAddrPool() { DARABONBA_PTR_GET(faultAddrPool_, vector<FaultAddrPools::FaultAddrPool>) };
      inline FaultAddrPools& setFaultAddrPool(const vector<FaultAddrPools::FaultAddrPool> & faultAddrPool) { DARABONBA_PTR_SET_VALUE(faultAddrPool_, faultAddrPool) };
      inline FaultAddrPools& setFaultAddrPool(vector<FaultAddrPools::FaultAddrPool> && faultAddrPool) { DARABONBA_PTR_SET_RVALUE(faultAddrPool_, faultAddrPool) };


    protected:
      shared_ptr<vector<FaultAddrPools::FaultAddrPool>> faultAddrPool_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->faultAddrPoolNum_ == nullptr && this->faultAddrPools_ == nullptr && this->lastExecuteTime_ == nullptr && this->lastExecuteTimestamp_ == nullptr
        && this->lastRollbackTime_ == nullptr && this->lastRollbackTimestamp_ == nullptr && this->name_ == nullptr && this->recoveryPlanId_ == nullptr && this->remark_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlanResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // faultAddrPoolNum Field Functions 
    bool hasFaultAddrPoolNum() const { return this->faultAddrPoolNum_ != nullptr;};
    void deleteFaultAddrPoolNum() { this->faultAddrPoolNum_ = nullptr;};
    inline int32_t getFaultAddrPoolNum() const { DARABONBA_PTR_GET_DEFAULT(faultAddrPoolNum_, 0) };
    inline DescribeGtmRecoveryPlanResponseBody& setFaultAddrPoolNum(int32_t faultAddrPoolNum) { DARABONBA_PTR_SET_VALUE(faultAddrPoolNum_, faultAddrPoolNum) };


    // faultAddrPools Field Functions 
    bool hasFaultAddrPools() const { return this->faultAddrPools_ != nullptr;};
    void deleteFaultAddrPools() { this->faultAddrPools_ = nullptr;};
    inline const DescribeGtmRecoveryPlanResponseBody::FaultAddrPools & getFaultAddrPools() const { DARABONBA_PTR_GET_CONST(faultAddrPools_, DescribeGtmRecoveryPlanResponseBody::FaultAddrPools) };
    inline DescribeGtmRecoveryPlanResponseBody::FaultAddrPools getFaultAddrPools() { DARABONBA_PTR_GET(faultAddrPools_, DescribeGtmRecoveryPlanResponseBody::FaultAddrPools) };
    inline DescribeGtmRecoveryPlanResponseBody& setFaultAddrPools(const DescribeGtmRecoveryPlanResponseBody::FaultAddrPools & faultAddrPools) { DARABONBA_PTR_SET_VALUE(faultAddrPools_, faultAddrPools) };
    inline DescribeGtmRecoveryPlanResponseBody& setFaultAddrPools(DescribeGtmRecoveryPlanResponseBody::FaultAddrPools && faultAddrPools) { DARABONBA_PTR_SET_RVALUE(faultAddrPools_, faultAddrPools) };


    // lastExecuteTime Field Functions 
    bool hasLastExecuteTime() const { return this->lastExecuteTime_ != nullptr;};
    void deleteLastExecuteTime() { this->lastExecuteTime_ = nullptr;};
    inline string getLastExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTime_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setLastExecuteTime(string lastExecuteTime) { DARABONBA_PTR_SET_VALUE(lastExecuteTime_, lastExecuteTime) };


    // lastExecuteTimestamp Field Functions 
    bool hasLastExecuteTimestamp() const { return this->lastExecuteTimestamp_ != nullptr;};
    void deleteLastExecuteTimestamp() { this->lastExecuteTimestamp_ = nullptr;};
    inline int64_t getLastExecuteTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlanResponseBody& setLastExecuteTimestamp(int64_t lastExecuteTimestamp) { DARABONBA_PTR_SET_VALUE(lastExecuteTimestamp_, lastExecuteTimestamp) };


    // lastRollbackTime Field Functions 
    bool hasLastRollbackTime() const { return this->lastRollbackTime_ != nullptr;};
    void deleteLastRollbackTime() { this->lastRollbackTime_ = nullptr;};
    inline string getLastRollbackTime() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTime_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setLastRollbackTime(string lastRollbackTime) { DARABONBA_PTR_SET_VALUE(lastRollbackTime_, lastRollbackTime) };


    // lastRollbackTimestamp Field Functions 
    bool hasLastRollbackTimestamp() const { return this->lastRollbackTimestamp_ != nullptr;};
    void deleteLastRollbackTimestamp() { this->lastRollbackTimestamp_ = nullptr;};
    inline int64_t getLastRollbackTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlanResponseBody& setLastRollbackTimestamp(int64_t lastRollbackTimestamp) { DARABONBA_PTR_SET_VALUE(lastRollbackTimestamp_, lastRollbackTimestamp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline int64_t getRecoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
    inline DescribeGtmRecoveryPlanResponseBody& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeGtmRecoveryPlanResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlanResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The time when the disaster recovery plan was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The time when the disaster recovery plan was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestamp_ {};
    // The number of faulty address pools.
    shared_ptr<int32_t> faultAddrPoolNum_ {};
    // The faulty address pools.
    shared_ptr<DescribeGtmRecoveryPlanResponseBody::FaultAddrPools> faultAddrPools_ {};
    // The time when the disaster recovery plan was last executed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> lastExecuteTime_ {};
    // The time when the disaster recovery plan was last executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> lastExecuteTimestamp_ {};
    // The time when the disaster recovery plan was last rolled back. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<string> lastRollbackTime_ {};
    // The time when the disaster recovery plan was last rolled back. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> lastRollbackTimestamp_ {};
    // The name of the disaster recovery plan.
    shared_ptr<string> name_ {};
    // The ID of the disaster recovery plan.
    shared_ptr<int64_t> recoveryPlanId_ {};
    // The description of the disaster recovery plan.
    shared_ptr<string> remark_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the disaster recovery plan.
    shared_ptr<string> status_ {};
    // The time when the disaster recovery plan was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> updateTime_ {};
    // The time when the disaster recovery plan was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

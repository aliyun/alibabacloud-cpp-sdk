// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLOGRESPONSEBODYSYSTEMLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLOGRESPONSEBODYSYSTEMLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSystemLogResponseBodySystemLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLogResponseBodySystemLog& obj) { 
      DARABONBA_PTR_TO_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_TO_JSON(OpAction, opAction_);
      DARABONBA_PTR_TO_JSON(OpDesc, opDesc_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLogResponseBodySystemLog& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_FROM_JSON(OpAction, opAction_);
      DARABONBA_PTR_FROM_JSON(OpDesc, opDesc_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSystemLogResponseBodySystemLog() = default ;
    DescribeSystemLogResponseBodySystemLog(const DescribeSystemLogResponseBodySystemLog &) = default ;
    DescribeSystemLogResponseBodySystemLog(DescribeSystemLogResponseBodySystemLog &&) = default ;
    DescribeSystemLogResponseBodySystemLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLogResponseBodySystemLog() = default ;
    DescribeSystemLogResponseBodySystemLog& operator=(const DescribeSystemLogResponseBodySystemLog &) = default ;
    DescribeSystemLogResponseBodySystemLog& operator=(DescribeSystemLogResponseBodySystemLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityObject_ != nullptr
        && this->entityType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->opAccount_ != nullptr && this->opAction_ != nullptr
        && this->opDesc_ != nullptr && this->status_ != nullptr; };
    // entityObject Field Functions 
    bool hasEntityObject() const { return this->entityObject_ != nullptr;};
    void deleteEntityObject() { this->entityObject_ = nullptr;};
    inline string entityObject() const { DARABONBA_PTR_GET_DEFAULT(entityObject_, "") };
    inline DescribeSystemLogResponseBodySystemLog& setEntityObject(string entityObject) { DARABONBA_PTR_SET_VALUE(entityObject_, entityObject) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline int32_t entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, 0) };
    inline DescribeSystemLogResponseBodySystemLog& setEntityType(int32_t entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSystemLogResponseBodySystemLog& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSystemLogResponseBodySystemLog& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // opAccount Field Functions 
    bool hasOpAccount() const { return this->opAccount_ != nullptr;};
    void deleteOpAccount() { this->opAccount_ = nullptr;};
    inline string opAccount() const { DARABONBA_PTR_GET_DEFAULT(opAccount_, "") };
    inline DescribeSystemLogResponseBodySystemLog& setOpAccount(string opAccount) { DARABONBA_PTR_SET_VALUE(opAccount_, opAccount) };


    // opAction Field Functions 
    bool hasOpAction() const { return this->opAction_ != nullptr;};
    void deleteOpAction() { this->opAction_ = nullptr;};
    inline int32_t opAction() const { DARABONBA_PTR_GET_DEFAULT(opAction_, 0) };
    inline DescribeSystemLogResponseBodySystemLog& setOpAction(int32_t opAction) { DARABONBA_PTR_SET_VALUE(opAction_, opAction) };


    // opDesc Field Functions 
    bool hasOpDesc() const { return this->opDesc_ != nullptr;};
    void deleteOpDesc() { this->opDesc_ = nullptr;};
    inline string opDesc() const { DARABONBA_PTR_GET_DEFAULT(opDesc_, "") };
    inline DescribeSystemLogResponseBodySystemLog& setOpDesc(string opDesc) { DARABONBA_PTR_SET_VALUE(opDesc_, opDesc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeSystemLogResponseBodySystemLog& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IP address of the instance.
    std::shared_ptr<string> entityObject_ = nullptr;
    // The type of the system log. The value is fixed as **20**, which indicates the billing logs for burstable clean bandwidth.
    std::shared_ptr<int32_t> entityType_ = nullptr;
    // The time when the bill was generated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the bill was last modified. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the Alibaba Cloud account to which the bill belongs.
    std::shared_ptr<string> opAccount_ = nullptr;
    // The operation type. The value is fixed as **100**, which indicates the billing logs for the burstable clean bandwidth that you increased.
    std::shared_ptr<int32_t> opAction_ = nullptr;
    // The details of the bill. The value is a string that consists of a JSON struct. The JSON struct contains the following fields:
    // 
    // *   **newEntity**: the bill record, which contains the following fields. Data type: object.
    // 
    //     *   **billValue**: the usage of the burstable clean bandwidth within a month. Unit: Mbit/s. Data type: integer.
    //     *   **instanceId**: the ID of the instance. Data type: string.
    //     *   **ip**: the IP address of the instance. Data type: string.
    //     *   **maxBw**: the peak service traffic (monthly 95th percentile bandwidth) within a month. Unit: Mbit/s. Data type: string.
    //     *   **month**: the month in which the bill of the previous calendar month is issued. This value is a UNIX timestamp. Unit: milliseconds. Data type: long.
    //     *   **overBandwidth**: the peak service traffic minus the clean bandwidth of the instance. Unit: Mbit/s. Data type: integer.
    //     *   **peakTime**: the time in point of the peak service traffic that is measured for billing. This value is a UNIX timestamp. Unit: seconds. Data type: long.
    //     *   **startTimestamp**: the beginning of the time range for the peak service traffic range. This value is a UNIX timestamp. Unit: seconds. Data type: long.
    std::shared_ptr<string> opDesc_ = nullptr;
    // The status of the bill. Valid values:
    // 
    // *   **0**: to be billed
    // *   **1**: billed
    // *   **2**: terminated
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

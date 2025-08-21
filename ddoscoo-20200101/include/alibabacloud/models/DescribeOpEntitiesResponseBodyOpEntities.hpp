// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODYOPENTITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODYOPENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeOpEntitiesResponseBodyOpEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpEntitiesResponseBodyOpEntities& obj) { 
      DARABONBA_PTR_TO_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_TO_JSON(OpAction, opAction_);
      DARABONBA_PTR_TO_JSON(OpDesc, opDesc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpEntitiesResponseBodyOpEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_FROM_JSON(OpAction, opAction_);
      DARABONBA_PTR_FROM_JSON(OpDesc, opDesc_);
    };
    DescribeOpEntitiesResponseBodyOpEntities() = default ;
    DescribeOpEntitiesResponseBodyOpEntities(const DescribeOpEntitiesResponseBodyOpEntities &) = default ;
    DescribeOpEntitiesResponseBodyOpEntities(DescribeOpEntitiesResponseBodyOpEntities &&) = default ;
    DescribeOpEntitiesResponseBodyOpEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpEntitiesResponseBodyOpEntities() = default ;
    DescribeOpEntitiesResponseBodyOpEntities& operator=(const DescribeOpEntitiesResponseBodyOpEntities &) = default ;
    DescribeOpEntitiesResponseBodyOpEntities& operator=(DescribeOpEntitiesResponseBodyOpEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityObject_ != nullptr
        && this->entityType_ != nullptr && this->gmtCreate_ != nullptr && this->opAccount_ != nullptr && this->opAction_ != nullptr && this->opDesc_ != nullptr; };
    // entityObject Field Functions 
    bool hasEntityObject() const { return this->entityObject_ != nullptr;};
    void deleteEntityObject() { this->entityObject_ = nullptr;};
    inline string entityObject() const { DARABONBA_PTR_GET_DEFAULT(entityObject_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setEntityObject(string entityObject) { DARABONBA_PTR_SET_VALUE(entityObject_, entityObject) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline int32_t entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, 0) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setEntityType(int32_t entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // opAccount Field Functions 
    bool hasOpAccount() const { return this->opAccount_ != nullptr;};
    void deleteOpAccount() { this->opAccount_ = nullptr;};
    inline string opAccount() const { DARABONBA_PTR_GET_DEFAULT(opAccount_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpAccount(string opAccount) { DARABONBA_PTR_SET_VALUE(opAccount_, opAccount) };


    // opAction Field Functions 
    bool hasOpAction() const { return this->opAction_ != nullptr;};
    void deleteOpAction() { this->opAction_ = nullptr;};
    inline int32_t opAction() const { DARABONBA_PTR_GET_DEFAULT(opAction_, 0) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpAction(int32_t opAction) { DARABONBA_PTR_SET_VALUE(opAction_, opAction) };


    // opDesc Field Functions 
    bool hasOpDesc() const { return this->opDesc_ != nullptr;};
    void deleteOpDesc() { this->opDesc_ = nullptr;};
    inline string opDesc() const { DARABONBA_PTR_GET_DEFAULT(opDesc_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpDesc(string opDesc) { DARABONBA_PTR_SET_VALUE(opDesc_, opDesc) };


  protected:
    // The operation object.
    std::shared_ptr<string> entityObject_ = nullptr;
    // The type of the operation object. Valid values:
    // 
    // *   **1**: the IP address of the Anti-DDoS Proxy instance.
    // *   **2**: Anti-DDoS plans.
    // *   **3**: ECS instances.
    // *   **4**: all logs.
    std::shared_ptr<int32_t> entityType_ = nullptr;
    // The time when the operation was performed. The value is a UNIX timestamp. Units: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to perform the operation.
    std::shared_ptr<string> opAccount_ = nullptr;
    // The type of the operation. Valid values:
    // 
    // *   **1**: configuring burstable protection bandwidth.
    // *   **5**: using Anti-DDoS plans.
    // *   **8**: changing the IP addresses of ECS instances.
    // *   **9**: deactivating blackhole filtering.
    // *   **10**: configuring the near-origin traffic diversion feature.
    // *   **11**: clearing all logs.
    // *   **12**: downgrading the specifications of the Anti-DDoS Proxy instance. If the instance expires or the account has overdue payments, this operation is performed to downgrade the burstable protection bandwidth.
    // *   **13**: restoring the specifications of the Anti-DDoS Proxy instance. If the instance is renewed or you have paid the overdue payments within your account, this operation is performed to restore the burstable protection bandwidth.
    std::shared_ptr<int32_t> opAction_ = nullptr;
    // The details of the operation. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **newEntity**: the values of the parameters after the operation. This field is of the string type.
    // *   **oldEntity**: the values of the parameters before the operation. This field is of the string type.
    // 
    // Both **newEntity** and **oldEntity** are JSON strings. The returned parameters vary based on **OpAction**.
    // 
    // If the value of **OpAction** is **1**, **12**, or **13**, the following parameter is returned:
    // 
    // *   **elasticBandwidth**: the burstable protection bandwidth. This parameter is of the integer type. Unit: Gbit/s.
    // 
    //     Example: `{"newEntity":{"elasticBandwidth":300},"oldEntity":{"elasticBandwidth":300}}`
    // 
    // If the value of **OpAction** is **5**, the following parameters are returned:
    // 
    // *   **bandwidth**: the burstable protection bandwidth. The parameter is of the integer type. Unit: Gbit/s.
    // 
    // *   **count**: the number of Anti-DDoS plans. This parameter is of the integer type.
    // 
    // *   **deductCount**: the number of used Anti-DDoS plans. This parameter is of the integer type.
    // 
    // *   **expireTime**: the expiration time of the Anti-DDoS plans. This parameter is of the long type. The value is a UNIX timestamp. Units: milliseconds.
    // 
    // *   **instanceId**: the ID of the Anti-DDoS Proxy instance. This parameter is of the string type.
    // 
    // *   **peakFlow**: the peak throughput on the Anti-DDoS Proxy instance. This parameter is of the integer type. Unit: bit/s.
    // 
    //     Example: `{"newEntity":{"bandwidth":100,"count":4,"deductCount":1,"expireTime":1616299196000,"instanceId":"ddoscoo-cn-v641kpmq****","peakFlow":751427000}}`
    // 
    // If the value of **OpAction** is **8**, the following parameter is returned:
    // 
    // *   **instanceId**: the IDs of the ECS instances whose IP addresses are changed. This parameter is of the string type.
    // 
    //     Example: `{"newEntity":{"instanceId":"i-wz9h6nc313zptbqn****"}}`
    // 
    // If the value of **OpAction** is **9**, the following parameter is returned:
    // 
    // *   **actionMethod**: the operation method. This parameter is of the string type. Valid value: **undo**, which indicates that you deactivated blackhole filtering.
    // 
    //     Example: `{"newEntity":{"actionMethod":"undo"}}`
    // 
    // If the value of **OpAction** is **10**, the following parameters are returned:
    // 
    // *   **actionMethod**: the operation method. This parameter is of the string type. Valid values:
    // 
    //     *   **do**: The near-origin traffic diversion feature is enabled.
    //     *   **undo**: The near-origin traffic diversion feature is disabled.
    // 
    // *   **lines**: the Internet service provider (ISP) line from which the traffic is blocked. This parameter is of the array type. Valid values:
    // 
    //     *   **ct**: China Telecom (International).
    //     *   **cut**: China Unicom (International).
    // 
    //     Example: `{"newEntity":{"actionMethod":"undo","lines":["ct"]}}`
    // 
    // If the value of **OpAction** is **11**, no parameter is returned, and the description is empty.
    std::shared_ptr<string> opDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

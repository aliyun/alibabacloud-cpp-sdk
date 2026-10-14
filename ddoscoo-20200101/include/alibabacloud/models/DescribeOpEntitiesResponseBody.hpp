// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeOpEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpEntities, opEntities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpEntities, opEntities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOpEntitiesResponseBody() = default ;
    DescribeOpEntitiesResponseBody(const DescribeOpEntitiesResponseBody &) = default ;
    DescribeOpEntitiesResponseBody(DescribeOpEntitiesResponseBody &&) = default ;
    DescribeOpEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpEntitiesResponseBody() = default ;
    DescribeOpEntitiesResponseBody& operator=(const DescribeOpEntitiesResponseBody &) = default ;
    DescribeOpEntitiesResponseBody& operator=(DescribeOpEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpEntities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpEntities& obj) { 
        DARABONBA_PTR_TO_JSON(EntityObject, entityObject_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(OpAccount, opAccount_);
        DARABONBA_PTR_TO_JSON(OpAction, opAction_);
        DARABONBA_PTR_TO_JSON(OpDesc, opDesc_);
      };
      friend void from_json(const Darabonba::Json& j, OpEntities& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityObject, entityObject_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(OpAccount, opAccount_);
        DARABONBA_PTR_FROM_JSON(OpAction, opAction_);
        DARABONBA_PTR_FROM_JSON(OpDesc, opDesc_);
      };
      OpEntities() = default ;
      OpEntities(const OpEntities &) = default ;
      OpEntities(OpEntities &&) = default ;
      OpEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpEntities() = default ;
      OpEntities& operator=(const OpEntities &) = default ;
      OpEntities& operator=(OpEntities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityObject_ == nullptr
        && this->entityType_ == nullptr && this->gmtCreate_ == nullptr && this->opAccount_ == nullptr && this->opAction_ == nullptr && this->opDesc_ == nullptr; };
      // entityObject Field Functions 
      bool hasEntityObject() const { return this->entityObject_ != nullptr;};
      void deleteEntityObject() { this->entityObject_ = nullptr;};
      inline string getEntityObject() const { DARABONBA_PTR_GET_DEFAULT(entityObject_, "") };
      inline OpEntities& setEntityObject(string entityObject) { DARABONBA_PTR_SET_VALUE(entityObject_, entityObject) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline int32_t getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, 0) };
      inline OpEntities& setEntityType(int32_t entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline OpEntities& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // opAccount Field Functions 
      bool hasOpAccount() const { return this->opAccount_ != nullptr;};
      void deleteOpAccount() { this->opAccount_ = nullptr;};
      inline string getOpAccount() const { DARABONBA_PTR_GET_DEFAULT(opAccount_, "") };
      inline OpEntities& setOpAccount(string opAccount) { DARABONBA_PTR_SET_VALUE(opAccount_, opAccount) };


      // opAction Field Functions 
      bool hasOpAction() const { return this->opAction_ != nullptr;};
      void deleteOpAction() { this->opAction_ = nullptr;};
      inline int32_t getOpAction() const { DARABONBA_PTR_GET_DEFAULT(opAction_, 0) };
      inline OpEntities& setOpAction(int32_t opAction) { DARABONBA_PTR_SET_VALUE(opAction_, opAction) };


      // opDesc Field Functions 
      bool hasOpDesc() const { return this->opDesc_ != nullptr;};
      void deleteOpDesc() { this->opDesc_ = nullptr;};
      inline string getOpDesc() const { DARABONBA_PTR_GET_DEFAULT(opDesc_, "") };
      inline OpEntities& setOpDesc(string opDesc) { DARABONBA_PTR_SET_VALUE(opDesc_, opDesc) };


    protected:
      // The operation object.
      shared_ptr<string> entityObject_ {};
      // The type of the operation object. Valid values:
      // 
      // - **1**: IP Address of Anti-DDoS Proxy instance
      // - **2**: Anti-DDoS Pro and Anti-DDoS Premium mitigation plan
      // - **3**: ECS instance
      // - **4**: full logs
      shared_ptr<int32_t> entityType_ {};
      // The time when the operation was performed. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The Alibaba Cloud account ID that performed the operation.
      shared_ptr<string> opAccount_ {};
      // The type of the operation. Valid values:
      // - **1**: Settings for the burstable protection bandwidth.
      // - **5**: Offset with an anti-DDoS mitigation plan.
      // - **8**: Change an ECS IP address.
      // - **9**: Unblock (deactivation of blackhole filtering).
      // - **10**: Settings for near-origin traffic diversion.
      // - **11**: Clear full logs.
      // - **12**: Downgrade instance specifications. This indicates that the burstable protection bandwidth is reduced when the instance expires or the account has an overdue payment.
      // - **13**: Recover instance specifications. This indicates that the burstable protection bandwidth is recovered when the instance renewal is completed or the overdue payment is settled.
      shared_ptr<int32_t> opAction_ {};
      // The description of the operation, expressed as a JSON format character string with the following structure:
      // 
      // - **newEntity**: String. The parameters after the operation.
      // - **oldEntity**: String. The parameters before the operation.
      // 
      // Both **newEntity** and **oldEntity** are expressed as JSON format character strings. The operation parameters vary based on the operation type (**OpAction**).
      // 
      // When **OpAction** is **1**, **12**, or **13**, the operation parameters have the following structure:
      // - **elasticBandwidth**: Integer. The burstable protection bandwidth. Unit: Gbit/s.
      // 
      //     Example: `{"newEntity":{"elasticBandwidth":300},"oldEntity":{"elasticBandwidth":300}}`
      // 
      // 
      // When **OpAction** is **5**, the operation parameters have the following structure:
      // - **bandwidth**: Integer. The burstable protection bandwidth. Unit: Gbit/s.
      // - **count**: Integer. The number of anti-DDoS mitigation plans.
      // - **deductCount**: Integer. The number of offset anti-DDoS mitigation plans.
      // - **expireTime**: Long. The expiration time of the anti-DDoS mitigation plan. This value is a UNIX timestamp. Unit: milliseconds.
      // - **instanceId**: String. The instance ID of the Anti-DDoS Pro and Anti-DDoS Premium instance.
      // - **peakFlow**: Integer. The peak traffic. Unit: bit/s.
      // 
      //     Example: `{"newEntity":{"bandwidth":100,"count":4,"deductCount":1,"expireTime":1616299196000,"instanceId":"ddoscoo-cn-v641kpmq****","peakFlow":751427000}}`
      // 
      // 
      // When **OpAction** is **8**, the operation parameters have the following structure:
      // - **instanceId**: String. The instance ID of the ECS instance whose IP address is changed.
      // 
      //     Example: `{"newEntity":{"instanceId":"i-wz9h6nc313zptbqn****"}}`	
      // 	
      // 
      // When **OpAction** is **9**, the operation parameters have the following structure:
      // - **actionMethod**: String. The operation method. Value: **undo**, which indicates Unblock (deactivation of blackhole filtering).
      // 
      //     Example: `{"newEntity":{"actionMethod":"undo"}}`	
      // 	
      // 
      // When **OpAction** is **10**, the operation parameters have the following structure:
      // - **actionMethod**: String. The operation method. Valid values:
      //     - **do**: Enable near-origin traffic diversion.
      //     - **undo**: Disable near-origin traffic diversion.
      // - **lines**: Array. The line types. Valid values:
      //     - **ct**: China Telecom outside China line
      //     - **cut**: China Unicom outside China line
      // 
      //     Example: `{"newEntity":{"actionMethod":"undo","lines":["ct"]}}`
      // 
      // 
      // When **OpAction** is **11**, there are no operation parameters and the operation description is empty.
      shared_ptr<string> opDesc_ {};
    };

    virtual bool empty() const override { return this->opEntities_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // opEntities Field Functions 
    bool hasOpEntities() const { return this->opEntities_ != nullptr;};
    void deleteOpEntities() { this->opEntities_ = nullptr;};
    inline const vector<DescribeOpEntitiesResponseBody::OpEntities> & getOpEntities() const { DARABONBA_PTR_GET_CONST(opEntities_, vector<DescribeOpEntitiesResponseBody::OpEntities>) };
    inline vector<DescribeOpEntitiesResponseBody::OpEntities> getOpEntities() { DARABONBA_PTR_GET(opEntities_, vector<DescribeOpEntitiesResponseBody::OpEntities>) };
    inline DescribeOpEntitiesResponseBody& setOpEntities(const vector<DescribeOpEntitiesResponseBody::OpEntities> & opEntities) { DARABONBA_PTR_SET_VALUE(opEntities_, opEntities) };
    inline DescribeOpEntitiesResponseBody& setOpEntities(vector<DescribeOpEntitiesResponseBody::OpEntities> && opEntities) { DARABONBA_PTR_SET_RVALUE(opEntities_, opEntities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeOpEntitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The operation log records.
    shared_ptr<vector<DescribeOpEntitiesResponseBody::OpEntities>> opEntities_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of operation records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

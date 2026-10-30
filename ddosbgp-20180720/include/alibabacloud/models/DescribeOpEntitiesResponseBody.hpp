// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
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
      // The operation object, which is the ID of the Anti-DDoS Origin instance.
      shared_ptr<string> entityObject_ {};
      // The object type of the operation. The value is fixed as **1**, which indicates an Anti-DDoS Origin instance.
      shared_ptr<int32_t> entityType_ {};
      // The time when the log was created. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The Alibaba Cloud account ID used to execute the operation.
      // 
      // > If the value is **system**, the Anti-DDoS Origin service will automatically execute the operation.
      shared_ptr<string> opAccount_ {};
      // The operation type. Valid values:
      // 
      // - **3**: add protected IP addresses to the Anti-DDoS Origin instance
      // - **4**: unbind protected IP addresses from the Anti-DDoS Origin instance
      // - **5**: downgrade the Anti-DDoS Origin instance
      // - **6**: deactivate blackhole filtering
      // - **7**: reset the quota on blackhole filtering deactivation
      // - **8**: resume burstable protection
      shared_ptr<int32_t> opAction_ {};
      // The operation details. Use a JSON struct to transform the data into a character string representation. The JSON structure contains the following fields:
      // 
      // - **entity**: Object | The operation object. The fields contained in **entity** vary based on the operation type (**OpAction**). Details:
      // 
      //     - If **OpAction** is **3** (add protected IP addresses), **entity** contains the following fields:
      //         - **ips**: Array | The list of assets that are assigned public IP addresses that are attached to the Anti-DDoS Origin instance for protection.
      // 
      //     - If **OpAction** is **4** (unbind protected IP addresses), **entity** contains the following fields:
      //         - **ips**: Array | The list of assets that are assigned public IP addresses that are unbound from the Anti-DDoS Origin instance.
      // 
      //     - If **OpAction** is **5** (decrease the quota of the instance), **entity** contains the following fields:
      //         - **baseBandwidth**: Integer | The basic protection bandwidth. Unit: Gbit/s.
      //         - **elasticBandwidth**: Integer | The burstable protection bandwidth. Unit: Gbit/s.
      //         - **opSource**: Integer | The source of the operation. The value is fixed as **1**, which indicates that the Anti-DDoS Origin service will automatically execute the operation.
      // 
      //     - If **OpAction** is **6** (deactivate blackhole filtering), **entity** contains the following fields:
      //         - **ips**: Array | The list of assets that are assigned public IP addresses for which the blackhole filtering status is deactivated.
      // 
      //     - If **OpAction** is **7** (Reset quota on blackhole filtering deactivation), **entity** is empty.
      // 
      //     - If **OpAction** is **8** (recover burstable protection), **entity** contains the following fields:
      //         - **baseBandwidth**: Integer | The basic protection bandwidth. Unit: Gbit/s.
      //         - **elasticBandwidth**: Integer | The burstable protection bandwidth. Unit: Gbit/s.
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
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOpEntitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of Operation logs details.
    shared_ptr<vector<DescribeOpEntitiesResponseBody::OpEntities>> opEntities_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of queried operation logs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif

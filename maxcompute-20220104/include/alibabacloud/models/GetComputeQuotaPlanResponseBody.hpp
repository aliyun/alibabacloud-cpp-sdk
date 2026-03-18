// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTAPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTAPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetComputeQuotaPlanResponseBody() = default ;
    GetComputeQuotaPlanResponseBody(const GetComputeQuotaPlanResponseBody &) = default ;
    GetComputeQuotaPlanResponseBody(GetComputeQuotaPlanResponseBody &&) = default ;
    GetComputeQuotaPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaPlanResponseBody() = default ;
    GetComputeQuotaPlanResponseBody& operator=(const GetComputeQuotaPlanResponseBody &) = default ;
    GetComputeQuotaPlanResponseBody& operator=(GetComputeQuotaPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(isEffective, isEffective_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(isEffective, isEffective_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
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
      class Quota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quota& obj) { 
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
          DARABONBA_PTR_TO_JSON(parameter, parameter_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Quota& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
          DARABONBA_PTR_FROM_JSON(parameter, parameter_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Quota() = default ;
        Quota(const Quota &) = default ;
        Quota(Quota &&) = default ;
        Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quota() = default ;
        Quota& operator=(const Quota &) = default ;
        Quota& operator=(Quota &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubQuotaInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(cluster, cluster_);
            DARABONBA_PTR_TO_JSON(createTime, createTime_);
            DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nickName, nickName_);
            DARABONBA_PTR_TO_JSON(parameter, parameter_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, SubQuotaInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(cluster, cluster_);
            DARABONBA_PTR_FROM_JSON(createTime, createTime_);
            DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nickName, nickName_);
            DARABONBA_PTR_FROM_JSON(parameter, parameter_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          SubQuotaInfoList() = default ;
          SubQuotaInfoList(const SubQuotaInfoList &) = default ;
          SubQuotaInfoList(SubQuotaInfoList &&) = default ;
          SubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubQuotaInfoList() = default ;
          SubQuotaInfoList& operator=(const SubQuotaInfoList &) = default ;
          SubQuotaInfoList& operator=(SubQuotaInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parameter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
              DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
              DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
              DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
              DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
              DARABONBA_PTR_TO_JSON(minCU, minCU_);
              DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
              DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
            };
            friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
              DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
              DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
              DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
              DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
              DARABONBA_PTR_FROM_JSON(minCU, minCU_);
              DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
              DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
            };
            Parameter() = default ;
            Parameter(const Parameter &) = default ;
            Parameter(Parameter &&) = default ;
            Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parameter() = default ;
            Parameter& operator=(const Parameter &) = default ;
            Parameter& operator=(Parameter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->elasticReservedCU_ == nullptr
        && this->enablePriority_ == nullptr && this->forceReservedMin_ == nullptr && this->maxCU_ == nullptr && this->minCU_ == nullptr && this->schedulerType_ == nullptr
        && this->singleJobCULimit_ == nullptr; };
            // elasticReservedCU Field Functions 
            bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
            void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
            inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
            inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


            // enablePriority Field Functions 
            bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
            void deleteEnablePriority() { this->enablePriority_ = nullptr;};
            inline bool getEnablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
            inline Parameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


            // forceReservedMin Field Functions 
            bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
            void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
            inline bool getForceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
            inline Parameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


            // maxCU Field Functions 
            bool hasMaxCU() const { return this->maxCU_ != nullptr;};
            void deleteMaxCU() { this->maxCU_ = nullptr;};
            inline int64_t getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
            inline Parameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


            // minCU Field Functions 
            bool hasMinCU() const { return this->minCU_ != nullptr;};
            void deleteMinCU() { this->minCU_ = nullptr;};
            inline int64_t getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
            inline Parameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


            // schedulerType Field Functions 
            bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
            void deleteSchedulerType() { this->schedulerType_ = nullptr;};
            inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
            inline Parameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


            // singleJobCULimit Field Functions 
            bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
            void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
            inline int64_t getSingleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
            inline Parameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


          protected:
            shared_ptr<int64_t> elasticReservedCU_ {};
            shared_ptr<bool> enablePriority_ {};
            shared_ptr<bool> forceReservedMin_ {};
            shared_ptr<int64_t> maxCU_ {};
            shared_ptr<int64_t> minCU_ {};
            shared_ptr<string> schedulerType_ {};
            shared_ptr<int64_t> singleJobCULimit_ {};
          };

          virtual bool empty() const override { return this->cluster_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->nickName_ == nullptr
        && this->parameter_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
          // cluster Field Functions 
          bool hasCluster() const { return this->cluster_ != nullptr;};
          void deleteCluster() { this->cluster_ = nullptr;};
          inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
          inline SubQuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline SubQuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creatorId Field Functions 
          bool hasCreatorId() const { return this->creatorId_ != nullptr;};
          void deleteCreatorId() { this->creatorId_ = nullptr;};
          inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
          inline SubQuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline SubQuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SubQuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nickName Field Functions 
          bool hasNickName() const { return this->nickName_ != nullptr;};
          void deleteNickName() { this->nickName_ = nullptr;};
          inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
          inline SubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


          // parameter Field Functions 
          bool hasParameter() const { return this->parameter_ != nullptr;};
          void deleteParameter() { this->parameter_ = nullptr;};
          inline const SubQuotaInfoList::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, SubQuotaInfoList::Parameter) };
          inline SubQuotaInfoList::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, SubQuotaInfoList::Parameter) };
          inline SubQuotaInfoList& setParameter(const SubQuotaInfoList::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
          inline SubQuotaInfoList& setParameter(SubQuotaInfoList::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline SubQuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline SubQuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline SubQuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline SubQuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> cluster_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> creatorId_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> nickName_ {};
          shared_ptr<SubQuotaInfoList::Parameter> parameter_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> tenantId_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> version_ {};
        };

        class Parameter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
            DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
            DARABONBA_PTR_TO_JSON(minCU, minCU_);
          };
          friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
            DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
            DARABONBA_PTR_FROM_JSON(minCU, minCU_);
          };
          Parameter() = default ;
          Parameter(const Parameter &) = default ;
          Parameter(Parameter &&) = default ;
          Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameter() = default ;
          Parameter& operator=(const Parameter &) = default ;
          Parameter& operator=(Parameter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->elasticReservedCU_ == nullptr
        && this->maxCU_ == nullptr && this->minCU_ == nullptr; };
          // elasticReservedCU Field Functions 
          bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
          void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
          inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
          inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


          // maxCU Field Functions 
          bool hasMaxCU() const { return this->maxCU_ != nullptr;};
          void deleteMaxCU() { this->maxCU_ = nullptr;};
          inline int64_t getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
          inline Parameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


          // minCU Field Functions 
          bool hasMinCU() const { return this->minCU_ != nullptr;};
          void deleteMinCU() { this->minCU_ = nullptr;};
          inline int64_t getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
          inline Parameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


        protected:
          shared_ptr<int64_t> elasticReservedCU_ {};
          shared_ptr<int64_t> maxCU_ {};
          shared_ptr<int64_t> minCU_ {};
        };

        virtual bool empty() const override { return this->cluster_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->nickName_ == nullptr
        && this->parameter_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->subQuotaInfoList_ == nullptr && this->tenantId_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline Quota& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Quota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Quota& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Quota& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Quota& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Quota& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // parameter Field Functions 
        bool hasParameter() const { return this->parameter_ != nullptr;};
        void deleteParameter() { this->parameter_ = nullptr;};
        inline const Quota::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, Quota::Parameter) };
        inline Quota::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, Quota::Parameter) };
        inline Quota& setParameter(const Quota::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
        inline Quota& setParameter(Quota::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Quota& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Quota& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subQuotaInfoList Field Functions 
        bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
        void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
        inline const vector<Quota::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
        inline vector<Quota::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
        inline Quota& setSubQuotaInfoList(const vector<Quota::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
        inline Quota& setSubQuotaInfoList(vector<Quota::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Quota& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Quota& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Quota& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> cluster_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> creatorId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nickName_ {};
        shared_ptr<Quota::Parameter> parameter_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<Quota::SubQuotaInfoList>> subQuotaInfoList_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->isEffective_ == nullptr && this->name_ == nullptr && this->quota_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // isEffective Field Functions 
      bool hasIsEffective() const { return this->isEffective_ != nullptr;};
      void deleteIsEffective() { this->isEffective_ = nullptr;};
      inline bool getIsEffective() const { DARABONBA_PTR_GET_DEFAULT(isEffective_, false) };
      inline Data& setIsEffective(bool isEffective) { DARABONBA_PTR_SET_VALUE(isEffective_, isEffective) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Data::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Data::Quota) };
      inline Data::Quota getQuota() { DARABONBA_PTR_GET(quota_, Data::Quota) };
      inline Data& setQuota(const Data::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Data& setQuota(Data::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> isEffective_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::Quota> quota_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetComputeQuotaPlanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetComputeQuotaPlanResponseBody::Data) };
    inline GetComputeQuotaPlanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetComputeQuotaPlanResponseBody::Data) };
    inline GetComputeQuotaPlanResponseBody& setData(const GetComputeQuotaPlanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetComputeQuotaPlanResponseBody& setData(GetComputeQuotaPlanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetComputeQuotaPlanResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetComputeQuotaPlanResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetComputeQuotaPlanResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeQuotaPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetComputeQuotaPlanResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

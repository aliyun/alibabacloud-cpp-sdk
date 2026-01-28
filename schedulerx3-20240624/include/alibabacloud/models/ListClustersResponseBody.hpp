// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListClustersResponseBody() = default ;
    ListClustersResponseBody(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody(ListClustersResponseBody &&) = default ;
    ListClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBody() = default ;
    ListClustersResponseBody& operator=(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody& operator=(ListClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EngineType, engineType_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
          DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(SpInstanceId, spInstanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_ANY_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
          DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
          DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(SpInstanceId, spInstanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_ANY_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
          DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VSwitches : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          VSwitches() = default ;
          VSwitches(const VSwitches &) = default ;
          VSwitches(VSwitches &&) = default ;
          VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitches() = default ;
          VSwitches& operator=(const VSwitches &) = default ;
          VSwitches& operator=(VSwitches &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline VSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterSpec_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr
        && this->engineType_ == nullptr && this->engineVersion_ == nullptr && this->internetDomain_ == nullptr && this->intranetDomain_ == nullptr && this->productType_ == nullptr
        && this->spInstanceId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitches_ == nullptr && this->versionLifecycle_ == nullptr
        && this->vpcId_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Records& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Records& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Records& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // clusterSpec Field Functions 
        bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
        void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
        inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
        inline Records& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Records& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Records& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // engineType Field Functions 
        bool hasEngineType() const { return this->engineType_ != nullptr;};
        void deleteEngineType() { this->engineType_ = nullptr;};
        inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
        inline Records& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Records& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // internetDomain Field Functions 
        bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
        void deleteInternetDomain() { this->internetDomain_ = nullptr;};
        inline string getInternetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
        inline Records& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


        // intranetDomain Field Functions 
        bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
        void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
        inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
        inline Records& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline int32_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
        inline Records& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // spInstanceId Field Functions 
        bool hasSpInstanceId() const { return this->spInstanceId_ != nullptr;};
        void deleteSpInstanceId() { this->spInstanceId_ = nullptr;};
        inline string getSpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(spInstanceId_, "") };
        inline Records& setSpInstanceId(string spInstanceId) { DARABONBA_PTR_SET_VALUE(spInstanceId_, spInstanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Records& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline         const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
        Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
        inline Records& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
        inline Records& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


        // vSwitches Field Functions 
        bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
        void deleteVSwitches() { this->vSwitches_ = nullptr;};
        inline const vector<Records::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Records::VSwitches>) };
        inline vector<Records::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Records::VSwitches>) };
        inline Records& setVSwitches(const vector<Records::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
        inline Records& setVSwitches(vector<Records::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


        // versionLifecycle Field Functions 
        bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
        void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
        inline string getVersionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
        inline Records& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Records& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<string> clusterSpec_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> engineType_ {};
        shared_ptr<string> engineVersion_ {};
        shared_ptr<string> internetDomain_ {};
        shared_ptr<string> intranetDomain_ {};
        shared_ptr<int32_t> productType_ {};
        shared_ptr<string> spInstanceId_ {};
        shared_ptr<int32_t> status_ {};
        Darabonba::Json tags_ {};
        shared_ptr<vector<Records::VSwitches>> vSwitches_ {};
        shared_ptr<string> versionLifecycle_ {};
        // VPC ID
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      // -
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListClustersResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListClustersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListClustersResponseBody::Data) };
    inline ListClustersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListClustersResponseBody::Data) };
    inline ListClustersResponseBody& setData(const ListClustersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClustersResponseBody& setData(ListClustersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClustersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListClustersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<ListClustersResponseBody::Data> data_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif

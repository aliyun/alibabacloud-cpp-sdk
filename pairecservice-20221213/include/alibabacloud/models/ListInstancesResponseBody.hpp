// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OperatingTool, operatingTool_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OperatingTool, operatingTool_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperatingTool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperatingTool& obj) { 
          DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
        };
        friend void from_json(const Darabonba::Json& j, OperatingTool& obj) { 
          DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
        };
        OperatingTool() = default ;
        OperatingTool(const OperatingTool &) = default ;
        OperatingTool(OperatingTool &&) = default ;
        OperatingTool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperatingTool() = default ;
        OperatingTool& operator=(const OperatingTool &) = default ;
        OperatingTool& operator=(OperatingTool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isEnable_ == nullptr; };
        // isEnable Field Functions 
        bool hasIsEnable() const { return this->isEnable_ != nullptr;};
        void deleteIsEnable() { this->isEnable_ = nullptr;};
        inline bool getIsEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
        inline OperatingTool& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


      protected:
        shared_ptr<bool> isEnable_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(DataManagements, dataManagements_);
          DARABONBA_PTR_TO_JSON(Engines, engines_);
          DARABONBA_PTR_TO_JSON(Monitors, monitors_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(DataManagements, dataManagements_);
          DARABONBA_PTR_FROM_JSON(Engines, engines_);
          DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Monitors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Monitors& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_TO_JSON(Meta, meta_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Monitors& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_FROM_JSON(Meta, meta_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Monitors() = default ;
          Monitors(const Monitors &) = default ;
          Monitors(Monitors &&) = default ;
          Monitors(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Monitors() = default ;
          Monitors& operator=(const Monitors &) = default ;
          Monitors& operator=(Monitors &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->meta_ == nullptr && this->type_ == nullptr; };
          // componentCode Field Functions 
          bool hasComponentCode() const { return this->componentCode_ != nullptr;};
          void deleteComponentCode() { this->componentCode_ = nullptr;};
          inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
          inline Monitors& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


          // meta Field Functions 
          bool hasMeta() const { return this->meta_ != nullptr;};
          void deleteMeta() { this->meta_ = nullptr;};
          inline           const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
          Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
          inline Monitors& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
          inline Monitors& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Monitors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> componentCode_ {};
          Darabonba::Json meta_ {};
          shared_ptr<string> type_ {};
        };

        class Engines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Engines& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_TO_JSON(Meta, meta_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Engines& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_FROM_JSON(Meta, meta_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Engines() = default ;
          Engines(const Engines &) = default ;
          Engines(Engines &&) = default ;
          Engines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Engines() = default ;
          Engines& operator=(const Engines &) = default ;
          Engines& operator=(Engines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->meta_ == nullptr && this->type_ == nullptr; };
          // componentCode Field Functions 
          bool hasComponentCode() const { return this->componentCode_ != nullptr;};
          void deleteComponentCode() { this->componentCode_ = nullptr;};
          inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
          inline Engines& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


          // meta Field Functions 
          bool hasMeta() const { return this->meta_ != nullptr;};
          void deleteMeta() { this->meta_ = nullptr;};
          inline           const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
          Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
          inline Engines& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
          inline Engines& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Engines& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> componentCode_ {};
          Darabonba::Json meta_ {};
          shared_ptr<string> type_ {};
        };

        class DataManagements : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataManagements& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_TO_JSON(Meta, meta_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DataManagements& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
            DARABONBA_ANY_FROM_JSON(Meta, meta_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DataManagements() = default ;
          DataManagements(const DataManagements &) = default ;
          DataManagements(DataManagements &&) = default ;
          DataManagements(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataManagements() = default ;
          DataManagements& operator=(const DataManagements &) = default ;
          DataManagements& operator=(DataManagements &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->meta_ == nullptr && this->type_ == nullptr; };
          // componentCode Field Functions 
          bool hasComponentCode() const { return this->componentCode_ != nullptr;};
          void deleteComponentCode() { this->componentCode_ = nullptr;};
          inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
          inline DataManagements& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


          // meta Field Functions 
          bool hasMeta() const { return this->meta_ != nullptr;};
          void deleteMeta() { this->meta_ = nullptr;};
          inline           const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
          Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
          inline DataManagements& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
          inline DataManagements& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DataManagements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> componentCode_ {};
          Darabonba::Json meta_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->dataManagements_ == nullptr
        && this->engines_ == nullptr && this->monitors_ == nullptr; };
        // dataManagements Field Functions 
        bool hasDataManagements() const { return this->dataManagements_ != nullptr;};
        void deleteDataManagements() { this->dataManagements_ = nullptr;};
        inline const vector<Config::DataManagements> & getDataManagements() const { DARABONBA_PTR_GET_CONST(dataManagements_, vector<Config::DataManagements>) };
        inline vector<Config::DataManagements> getDataManagements() { DARABONBA_PTR_GET(dataManagements_, vector<Config::DataManagements>) };
        inline Config& setDataManagements(const vector<Config::DataManagements> & dataManagements) { DARABONBA_PTR_SET_VALUE(dataManagements_, dataManagements) };
        inline Config& setDataManagements(vector<Config::DataManagements> && dataManagements) { DARABONBA_PTR_SET_RVALUE(dataManagements_, dataManagements) };


        // engines Field Functions 
        bool hasEngines() const { return this->engines_ != nullptr;};
        void deleteEngines() { this->engines_ = nullptr;};
        inline const vector<Config::Engines> & getEngines() const { DARABONBA_PTR_GET_CONST(engines_, vector<Config::Engines>) };
        inline vector<Config::Engines> getEngines() { DARABONBA_PTR_GET(engines_, vector<Config::Engines>) };
        inline Config& setEngines(const vector<Config::Engines> & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
        inline Config& setEngines(vector<Config::Engines> && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


        // monitors Field Functions 
        bool hasMonitors() const { return this->monitors_ != nullptr;};
        void deleteMonitors() { this->monitors_ = nullptr;};
        inline const vector<Config::Monitors> & getMonitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<Config::Monitors>) };
        inline vector<Config::Monitors> getMonitors() { DARABONBA_PTR_GET(monitors_, vector<Config::Monitors>) };
        inline Config& setMonitors(const vector<Config::Monitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
        inline Config& setMonitors(vector<Config::Monitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


      protected:
        shared_ptr<vector<Config::DataManagements>> dataManagements_ {};
        shared_ptr<vector<Config::Engines>> engines_ {};
        shared_ptr<vector<Config::Monitors>> monitors_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->config_ == nullptr && this->expiredTime_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->instanceId_ == nullptr && this->operatingTool_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Instances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Instances& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Instances::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Instances::Config) };
      inline Instances::Config getConfig() { DARABONBA_PTR_GET(config_, Instances::Config) };
      inline Instances& setConfig(const Instances::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Instances& setConfig(Instances::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Instances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Instances& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Instances& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // operatingTool Field Functions 
      bool hasOperatingTool() const { return this->operatingTool_ != nullptr;};
      void deleteOperatingTool() { this->operatingTool_ = nullptr;};
      inline const Instances::OperatingTool & getOperatingTool() const { DARABONBA_PTR_GET_CONST(operatingTool_, Instances::OperatingTool) };
      inline Instances::OperatingTool getOperatingTool() { DARABONBA_PTR_GET(operatingTool_, Instances::OperatingTool) };
      inline Instances& setOperatingTool(const Instances::OperatingTool & operatingTool) { DARABONBA_PTR_SET_VALUE(operatingTool_, operatingTool) };
      inline Instances& setOperatingTool(Instances::OperatingTool && operatingTool) { DARABONBA_PTR_SET_RVALUE(operatingTool_, operatingTool) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Instances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<Instances::Config> config_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<Instances::OperatingTool> operatingTool_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline vector<ListInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline ListInstancesResponseBody& setInstances(const vector<ListInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBody& setInstances(vector<ListInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListInstancesResponseBody::Instances>> instances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

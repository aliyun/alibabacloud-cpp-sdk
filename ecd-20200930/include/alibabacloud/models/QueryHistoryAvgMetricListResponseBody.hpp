// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryAvgMetricListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryAvgMetricListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgMetricList, avgMetricList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryAvgMetricListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgMetricList, avgMetricList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryHistoryAvgMetricListResponseBody() = default ;
    QueryHistoryAvgMetricListResponseBody(const QueryHistoryAvgMetricListResponseBody &) = default ;
    QueryHistoryAvgMetricListResponseBody(QueryHistoryAvgMetricListResponseBody &&) = default ;
    QueryHistoryAvgMetricListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryAvgMetricListResponseBody() = default ;
    QueryHistoryAvgMetricListResponseBody& operator=(const QueryHistoryAvgMetricListResponseBody &) = default ;
    QueryHistoryAvgMetricListResponseBody& operator=(QueryHistoryAvgMetricListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvgMetricList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvgMetricList& obj) { 
        DARABONBA_PTR_TO_JSON(AvgValue, avgValue_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MultiResource, multiResource_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      };
      friend void from_json(const Darabonba::Json& j, AvgMetricList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgValue, avgValue_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MultiResource, multiResource_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      };
      AvgMetricList() = default ;
      AvgMetricList(const AvgMetricList &) = default ;
      AvgMetricList(AvgMetricList &&) = default ;
      AvgMetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvgMetricList() = default ;
      AvgMetricList& operator=(const AvgMetricList &) = default ;
      AvgMetricList& operator=(AvgMetricList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
          DARABONBA_PTR_TO_JSON(ExternalUserName, externalUserName_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
          DARABONBA_PTR_FROM_JSON(ExternalUserName, externalUserName_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->establishmentTime_ == nullptr && this->externalUserName_ == nullptr && this->nickName_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // establishmentTime Field Functions 
        bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
        void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
        inline string getEstablishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
        inline Sessions& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


        // externalUserName Field Functions 
        bool hasExternalUserName() const { return this->externalUserName_ != nullptr;};
        void deleteExternalUserName() { this->externalUserName_ = nullptr;};
        inline string getExternalUserName() const { DARABONBA_PTR_GET_DEFAULT(externalUserName_, "") };
        inline Sessions& setExternalUserName(string externalUserName) { DARABONBA_PTR_SET_VALUE(externalUserName_, externalUserName) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Sessions& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      protected:
        shared_ptr<string> endUserId_ {};
        shared_ptr<string> establishmentTime_ {};
        shared_ptr<string> externalUserName_ {};
        shared_ptr<string> nickName_ {};
      };

      virtual bool empty() const override { return this->avgValue_ == nullptr
        && this->chargeType_ == nullptr && this->cpu_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->desktopStatus_ == nullptr && this->desktopType_ == nullptr && this->endUserIds_ == nullptr && this->gpuSpec_ == nullptr && this->managementFlag_ == nullptr
        && this->memory_ == nullptr && this->multiResource_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->sessions_ == nullptr
        && this->subPayType_ == nullptr; };
      // avgValue Field Functions 
      bool hasAvgValue() const { return this->avgValue_ != nullptr;};
      void deleteAvgValue() { this->avgValue_ = nullptr;};
      inline float getAvgValue() const { DARABONBA_PTR_GET_DEFAULT(avgValue_, 0.0) };
      inline AvgMetricList& setAvgValue(float avgValue) { DARABONBA_PTR_SET_VALUE(avgValue_, avgValue) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline AvgMetricList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline AvgMetricList& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline AvgMetricList& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline AvgMetricList& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline AvgMetricList& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline AvgMetricList& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline AvgMetricList& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline AvgMetricList& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline AvgMetricList& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline AvgMetricList& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // managementFlag Field Functions 
      bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
      void deleteManagementFlag() { this->managementFlag_ = nullptr;};
      inline string getManagementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
      inline AvgMetricList& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline AvgMetricList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // multiResource Field Functions 
      bool hasMultiResource() const { return this->multiResource_ != nullptr;};
      void deleteMultiResource() { this->multiResource_ = nullptr;};
      inline bool getMultiResource() const { DARABONBA_PTR_GET_DEFAULT(multiResource_, false) };
      inline AvgMetricList& setMultiResource(bool multiResource) { DARABONBA_PTR_SET_VALUE(multiResource_, multiResource) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline AvgMetricList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AvgMetricList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<AvgMetricList::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<AvgMetricList::Sessions>) };
      inline vector<AvgMetricList::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<AvgMetricList::Sessions>) };
      inline AvgMetricList& setSessions(const vector<AvgMetricList::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline AvgMetricList& setSessions(vector<AvgMetricList::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline AvgMetricList& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    protected:
      shared_ptr<float> avgValue_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<int32_t> cpu_ {};
      shared_ptr<string> desktopGroupId_ {};
      shared_ptr<string> desktopId_ {};
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> desktopStatus_ {};
      shared_ptr<string> desktopType_ {};
      shared_ptr<vector<string>> endUserIds_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<string> managementFlag_ {};
      shared_ptr<int64_t> memory_ {};
      shared_ptr<bool> multiResource_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<AvgMetricList::Sessions>> sessions_ {};
      shared_ptr<string> subPayType_ {};
    };

    virtual bool empty() const override { return this->avgMetricList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // avgMetricList Field Functions 
    bool hasAvgMetricList() const { return this->avgMetricList_ != nullptr;};
    void deleteAvgMetricList() { this->avgMetricList_ = nullptr;};
    inline const vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList> & getAvgMetricList() const { DARABONBA_PTR_GET_CONST(avgMetricList_, vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList>) };
    inline vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList> getAvgMetricList() { DARABONBA_PTR_GET(avgMetricList_, vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList>) };
    inline QueryHistoryAvgMetricListResponseBody& setAvgMetricList(const vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList> & avgMetricList) { DARABONBA_PTR_SET_VALUE(avgMetricList_, avgMetricList) };
    inline QueryHistoryAvgMetricListResponseBody& setAvgMetricList(vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList> && avgMetricList) { DARABONBA_PTR_SET_RVALUE(avgMetricList_, avgMetricList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoryAvgMetricListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryHistoryAvgMetricListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryHistoryAvgMetricListResponseBody::AvgMetricList>> avgMetricList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListAIAgentEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIAgentEventResponseBody() = default ;
    ListAIAgentEventResponseBody(const ListAIAgentEventResponseBody &) = default ;
    ListAIAgentEventResponseBody(ListAIAgentEventResponseBody &&) = default ;
    ListAIAgentEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentEventResponseBody() = default ;
    ListAIAgentEventResponseBody& operator=(const ListAIAgentEventResponseBody &) = default ;
    ListAIAgentEventResponseBody& operator=(ListAIAgentEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The NextToken value returned when the NextToken-based pagination method is used.
      shared_ptr<string> nextToken_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records in the query result.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AssetName, assetName_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_TO_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InfraInstanceId, infraInstanceId_);
        DARABONBA_PTR_TO_JSON(InfraInternetIp, infraInternetIp_);
        DARABONBA_PTR_TO_JSON(InfraIntranetIp, infraIntranetIp_);
        DARABONBA_PTR_TO_JSON(InfraName, infraName_);
        DARABONBA_PTR_TO_JSON(InfraRegionId, infraRegionId_);
        DARABONBA_PTR_TO_JSON(InfraType, infraType_);
        DARABONBA_PTR_TO_JSON(RiskDesc, riskDesc_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_FROM_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InfraInstanceId, infraInstanceId_);
        DARABONBA_PTR_FROM_JSON(InfraInternetIp, infraInternetIp_);
        DARABONBA_PTR_FROM_JSON(InfraIntranetIp, infraIntranetIp_);
        DARABONBA_PTR_FROM_JSON(InfraName, infraName_);
        DARABONBA_PTR_FROM_JSON(InfraRegionId, infraRegionId_);
        DARABONBA_PTR_FROM_JSON(InfraType, infraType_);
        DARABONBA_PTR_FROM_JSON(RiskDesc, riskDesc_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->assetName_ == nullptr && this->assetType_ == nullptr && this->checkTime_ == nullptr && this->handleTime_ == nullptr
        && this->id_ == nullptr && this->infraInstanceId_ == nullptr && this->infraInternetIp_ == nullptr && this->infraIntranetIp_ == nullptr && this->infraName_ == nullptr
        && this->infraRegionId_ == nullptr && this->infraType_ == nullptr && this->riskDesc_ == nullptr && this->riskLevel_ == nullptr && this->riskName_ == nullptr
        && this->skillId_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->vendor_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline Data& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Data& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // checkTime Field Functions 
      bool hasCheckTime() const { return this->checkTime_ != nullptr;};
      void deleteCheckTime() { this->checkTime_ = nullptr;};
      inline string getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, "") };
      inline Data& setCheckTime(string checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


      // handleTime Field Functions 
      bool hasHandleTime() const { return this->handleTime_ != nullptr;};
      void deleteHandleTime() { this->handleTime_ = nullptr;};
      inline string getHandleTime() const { DARABONBA_PTR_GET_DEFAULT(handleTime_, "") };
      inline Data& setHandleTime(string handleTime) { DARABONBA_PTR_SET_VALUE(handleTime_, handleTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // infraInstanceId Field Functions 
      bool hasInfraInstanceId() const { return this->infraInstanceId_ != nullptr;};
      void deleteInfraInstanceId() { this->infraInstanceId_ = nullptr;};
      inline string getInfraInstanceId() const { DARABONBA_PTR_GET_DEFAULT(infraInstanceId_, "") };
      inline Data& setInfraInstanceId(string infraInstanceId) { DARABONBA_PTR_SET_VALUE(infraInstanceId_, infraInstanceId) };


      // infraInternetIp Field Functions 
      bool hasInfraInternetIp() const { return this->infraInternetIp_ != nullptr;};
      void deleteInfraInternetIp() { this->infraInternetIp_ = nullptr;};
      inline string getInfraInternetIp() const { DARABONBA_PTR_GET_DEFAULT(infraInternetIp_, "") };
      inline Data& setInfraInternetIp(string infraInternetIp) { DARABONBA_PTR_SET_VALUE(infraInternetIp_, infraInternetIp) };


      // infraIntranetIp Field Functions 
      bool hasInfraIntranetIp() const { return this->infraIntranetIp_ != nullptr;};
      void deleteInfraIntranetIp() { this->infraIntranetIp_ = nullptr;};
      inline string getInfraIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(infraIntranetIp_, "") };
      inline Data& setInfraIntranetIp(string infraIntranetIp) { DARABONBA_PTR_SET_VALUE(infraIntranetIp_, infraIntranetIp) };


      // infraName Field Functions 
      bool hasInfraName() const { return this->infraName_ != nullptr;};
      void deleteInfraName() { this->infraName_ = nullptr;};
      inline string getInfraName() const { DARABONBA_PTR_GET_DEFAULT(infraName_, "") };
      inline Data& setInfraName(string infraName) { DARABONBA_PTR_SET_VALUE(infraName_, infraName) };


      // infraRegionId Field Functions 
      bool hasInfraRegionId() const { return this->infraRegionId_ != nullptr;};
      void deleteInfraRegionId() { this->infraRegionId_ = nullptr;};
      inline string getInfraRegionId() const { DARABONBA_PTR_GET_DEFAULT(infraRegionId_, "") };
      inline Data& setInfraRegionId(string infraRegionId) { DARABONBA_PTR_SET_VALUE(infraRegionId_, infraRegionId) };


      // infraType Field Functions 
      bool hasInfraType() const { return this->infraType_ != nullptr;};
      void deleteInfraType() { this->infraType_ = nullptr;};
      inline string getInfraType() const { DARABONBA_PTR_GET_DEFAULT(infraType_, "") };
      inline Data& setInfraType(string infraType) { DARABONBA_PTR_SET_VALUE(infraType_, infraType) };


      // riskDesc Field Functions 
      bool hasRiskDesc() const { return this->riskDesc_ != nullptr;};
      void deleteRiskDesc() { this->riskDesc_ = nullptr;};
      inline string getRiskDesc() const { DARABONBA_PTR_GET_DEFAULT(riskDesc_, "") };
      inline Data& setRiskDesc(string riskDesc) { DARABONBA_PTR_SET_VALUE(riskDesc_, riskDesc) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline Data& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline int64_t getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, 0L) };
      inline Data& setSkillId(int64_t skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Data& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The asset name.
      shared_ptr<string> assetName_ {};
      // The type of the risky asset. Valid values:
      // 1. rag
      // 2. internet
      // 3. datasets
      // 4. tool
      // 5. model
      // 6. skill
      // 7. app
      // 8. identity
      shared_ptr<string> assetType_ {};
      // The check time.
      shared_ptr<string> checkTime_ {};
      // The event handling time.
      shared_ptr<string> handleTime_ {};
      // The primary key ID.
      shared_ptr<int64_t> id_ {};
      // The infrastructure instance ID.
      shared_ptr<string> infraInstanceId_ {};
      // The public IP address of the infrastructure.
      shared_ptr<string> infraInternetIp_ {};
      // The private IP address of the infrastructure.
      shared_ptr<string> infraIntranetIp_ {};
      // The infrastructure name.
      shared_ptr<string> infraName_ {};
      // The infrastructure region.
      shared_ptr<string> infraRegionId_ {};
      // The infrastructure type.
      shared_ptr<string> infraType_ {};
      // The risk description.
      shared_ptr<string> riskDesc_ {};
      // The risk level of the detected alert. Valid values:
      // 
      // - **high**: High.
      // - **medium**: Medium.
      // - **low**: Low.
      shared_ptr<string> riskLevel_ {};
      // The risk name.
      shared_ptr<string> riskName_ {};
      shared_ptr<int64_t> skillId_ {};
      // The event source. Valid values:
      // 1. cspm
      // 2. aiguard
      // 3. SASE
      // 4. SAS 
      // 5. Agent-Runtime-Guard
      shared_ptr<string> source_ {};
      // The status. Valid values:
      // 1. unhandled: Pending.
      // 2. handling: Being processed.
      // 3. fixed: Fixed.
      // 4. ignored: Ignored.
      // 5. rescanned: Rescanned.
      shared_ptr<string> status_ {};
      // The cloud asset vendor. Valid values:
      // - **DIFY**: DIFY.
      // - **BAILIAN**: BAILIAN.
      // - **VOLCAI**: VOLCAI.
      // - **AGENTRUN**: AGENTRUN.
      // - **PAI**: PAI.
      // - **OpenClaw**: OpenClaw.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAIAgentEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAIAgentEventResponseBody::Data>) };
    inline vector<ListAIAgentEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAIAgentEventResponseBody::Data>) };
    inline ListAIAgentEventResponseBody& setData(const vector<ListAIAgentEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAIAgentEventResponseBody& setData(vector<ListAIAgentEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAIAgentEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAIAgentEventResponseBody::PageInfo) };
    inline ListAIAgentEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAIAgentEventResponseBody::PageInfo) };
    inline ListAIAgentEventResponseBody& setPageInfo(const ListAIAgentEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAIAgentEventResponseBody& setPageInfo(ListAIAgentEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of event information returned.
    shared_ptr<vector<ListAIAgentEventResponseBody::Data>> data_ {};
    // The pagination information.
    shared_ptr<ListAIAgentEventResponseBody::PageInfo> pageInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif

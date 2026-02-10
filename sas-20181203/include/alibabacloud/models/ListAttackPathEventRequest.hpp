// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAttackPathEventRequest() = default ;
    ListAttackPathEventRequest(const ListAttackPathEventRequest &) = default ;
    ListAttackPathEventRequest(ListAttackPathEventRequest &&) = default ;
    ListAttackPathEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathEventRequest() = default ;
    ListAttackPathEventRequest& operator=(const ListAttackPathEventRequest &) = default ;
    ListAttackPathEventRequest& operator=(ListAttackPathEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathAssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathAssetList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathAssetList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      AttackPathAssetList() = default ;
      AttackPathAssetList(const AttackPathAssetList &) = default ;
      AttackPathAssetList(AttackPathAssetList &&) = default ;
      AttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathAssetList() = default ;
      AttackPathAssetList& operator=(const AttackPathAssetList &) = default ;
      AttackPathAssetList& operator=(AttackPathAssetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->nodeType_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline AttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline AttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline AttackPathAssetList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline AttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the cloud product asset.
      // 
      // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the subtype of the cloud product asset.
      shared_ptr<int32_t> assetSubType_ {};
      // Type of the cloud product asset.
      // 
      // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the type of the cloud product asset.
      shared_ptr<int32_t> assetType_ {};
      // Node type, values:
      // - **start**: start point.
      // - **end**: end point.
      shared_ptr<string> nodeType_ {};
      // Vendor of the cloud product asset.
      // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the vendor of the cloud product asset.
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->pathNameDesc_ == nullptr
        && this->pathType_ == nullptr && this->riskLevelList_ == nullptr && this->startTime_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<ListAttackPathEventRequest::AttackPathAssetList> & getAttackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<ListAttackPathEventRequest::AttackPathAssetList>) };
    inline vector<ListAttackPathEventRequest::AttackPathAssetList> getAttackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<ListAttackPathEventRequest::AttackPathAssetList>) };
    inline ListAttackPathEventRequest& setAttackPathAssetList(const vector<ListAttackPathEventRequest::AttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline ListAttackPathEventRequest& setAttackPathAssetList(vector<ListAttackPathEventRequest::AttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAttackPathEventRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAttackPathEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAttackPathEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAttackPathEventRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathNameDesc Field Functions 
    bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
    void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
    inline string getPathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
    inline ListAttackPathEventRequest& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListAttackPathEventRequest& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & getRiskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> getRiskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline ListAttackPathEventRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline ListAttackPathEventRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAttackPathEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // List of cloud product assets in the attack path.
    shared_ptr<vector<ListAttackPathEventRequest::AttackPathAssetList>> attackPathAssetList_ {};
    // Specifies from which page of the returned results the query results should be displayed. The default value is 1, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // Timestamp of the end time. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // Sets the language type for requests and received messages, with the default being **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The maximum number of data entries displayed per page in a paginated query. The default value is **20**.
    shared_ptr<int32_t> pageSize_ {};
    // Description of the path name.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path name description.
    shared_ptr<string> pathNameDesc_ {};
    // Path type.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path type.
    shared_ptr<string> pathType_ {};
    // List of risk level information.
    shared_ptr<vector<string>> riskLevelList_ {};
    // Timestamp of the start time. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

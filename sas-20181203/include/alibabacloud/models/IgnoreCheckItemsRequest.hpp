// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUEST_HPP_
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
  class IgnoreCheckItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreCheckItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckAndRiskTypeList, checkAndRiskTypeList_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(ContainerItems, containerItems_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreCheckItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckAndRiskTypeList, checkAndRiskTypeList_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(ContainerItems, containerItems_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    IgnoreCheckItemsRequest() = default ;
    IgnoreCheckItemsRequest(const IgnoreCheckItemsRequest &) = default ;
    IgnoreCheckItemsRequest(IgnoreCheckItemsRequest &&) = default ;
    IgnoreCheckItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreCheckItemsRequest() = default ;
    IgnoreCheckItemsRequest& operator=(const IgnoreCheckItemsRequest &) = default ;
    IgnoreCheckItemsRequest& operator=(IgnoreCheckItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerItems& obj) { 
        DARABONBA_PTR_TO_JSON(ContainerNames, containerNames_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainerNames, containerNames_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ContainerItems() = default ;
      ContainerItems(const ContainerItems &) = default ;
      ContainerItems(ContainerItems &&) = default ;
      ContainerItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerItems() = default ;
      ContainerItems& operator=(const ContainerItems &) = default ;
      ContainerItems& operator=(ContainerItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->containerNames_ == nullptr
        && this->uuid_ == nullptr; };
      // containerNames Field Functions 
      bool hasContainerNames() const { return this->containerNames_ != nullptr;};
      void deleteContainerNames() { this->containerNames_ = nullptr;};
      inline string getContainerNames() const { DARABONBA_PTR_GET_DEFAULT(containerNames_, "") };
      inline ContainerItems& setContainerNames(string containerNames) { DARABONBA_PTR_SET_VALUE(containerNames_, containerNames) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ContainerItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The names of the containers that need to be whitelisted for the current asset, separated by English commas.
      shared_ptr<string> containerNames_ {};
      // The UUID of the server.
      // 
      // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
      shared_ptr<string> uuid_ {};
    };

    class CheckAndRiskTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckAndRiskTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckAndRiskTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      };
      CheckAndRiskTypeList() = default ;
      CheckAndRiskTypeList(const CheckAndRiskTypeList &) = default ;
      CheckAndRiskTypeList(CheckAndRiskTypeList &&) = default ;
      CheckAndRiskTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckAndRiskTypeList() = default ;
      CheckAndRiskTypeList& operator=(const CheckAndRiskTypeList &) = default ;
      CheckAndRiskTypeList& operator=(CheckAndRiskTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->riskType_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckAndRiskTypeList& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline CheckAndRiskTypeList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The baseline type of the check item.
      shared_ptr<string> riskType_ {};
    };

    virtual bool empty() const override { return this->checkAndRiskTypeList_ == nullptr
        && this->checkIds_ == nullptr && this->containerItems_ == nullptr && this->lang_ == nullptr && this->reason_ == nullptr && this->source_ == nullptr
        && this->type_ == nullptr && this->uuidList_ == nullptr; };
    // checkAndRiskTypeList Field Functions 
    bool hasCheckAndRiskTypeList() const { return this->checkAndRiskTypeList_ != nullptr;};
    void deleteCheckAndRiskTypeList() { this->checkAndRiskTypeList_ = nullptr;};
    inline const vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> & getCheckAndRiskTypeList() const { DARABONBA_PTR_GET_CONST(checkAndRiskTypeList_, vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList>) };
    inline vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> getCheckAndRiskTypeList() { DARABONBA_PTR_GET(checkAndRiskTypeList_, vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList>) };
    inline IgnoreCheckItemsRequest& setCheckAndRiskTypeList(const vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> & checkAndRiskTypeList) { DARABONBA_PTR_SET_VALUE(checkAndRiskTypeList_, checkAndRiskTypeList) };
    inline IgnoreCheckItemsRequest& setCheckAndRiskTypeList(vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> && checkAndRiskTypeList) { DARABONBA_PTR_SET_RVALUE(checkAndRiskTypeList_, checkAndRiskTypeList) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline IgnoreCheckItemsRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline IgnoreCheckItemsRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // containerItems Field Functions 
    bool hasContainerItems() const { return this->containerItems_ != nullptr;};
    void deleteContainerItems() { this->containerItems_ = nullptr;};
    inline const vector<IgnoreCheckItemsRequest::ContainerItems> & getContainerItems() const { DARABONBA_PTR_GET_CONST(containerItems_, vector<IgnoreCheckItemsRequest::ContainerItems>) };
    inline vector<IgnoreCheckItemsRequest::ContainerItems> getContainerItems() { DARABONBA_PTR_GET(containerItems_, vector<IgnoreCheckItemsRequest::ContainerItems>) };
    inline IgnoreCheckItemsRequest& setContainerItems(const vector<IgnoreCheckItemsRequest::ContainerItems> & containerItems) { DARABONBA_PTR_SET_VALUE(containerItems_, containerItems) };
    inline IgnoreCheckItemsRequest& setContainerItems(vector<IgnoreCheckItemsRequest::ContainerItems> && containerItems) { DARABONBA_PTR_SET_RVALUE(containerItems_, containerItems) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline IgnoreCheckItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline IgnoreCheckItemsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IgnoreCheckItemsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IgnoreCheckItemsRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline IgnoreCheckItemsRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline IgnoreCheckItemsRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The information about check items.
    shared_ptr<vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList>> checkAndRiskTypeList_ {};
    // The IDs of check items.
    shared_ptr<vector<int64_t>> checkIds_ {};
    // List of container names that need to be whitelisted.
    shared_ptr<vector<IgnoreCheckItemsRequest::ContainerItems>> containerItems_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The reason why you add the risk item to the whitelist.
    shared_ptr<string> reason_ {};
    // The data source. Valid values:
    // 
    // *   **default**: host baseline
    // *   **agentless**: agentless baseline
    shared_ptr<string> source_ {};
    // The operation that you want to perform on the risk item.Valid values:
    // *  **1**: adds the risk item to the whitelist
    // *  **2**: removes the risk item from the whitelist
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
    // The UUIDs of the servers.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

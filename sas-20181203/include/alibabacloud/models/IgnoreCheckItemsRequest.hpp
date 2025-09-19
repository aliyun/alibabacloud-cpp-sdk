// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IgnoreCheckItemsRequestCheckAndRiskTypeList.hpp>
#include <alibabacloud/models/IgnoreCheckItemsRequestContainerItems.hpp>
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
    virtual bool empty() const override { this->checkAndRiskTypeList_ != nullptr
        && this->checkIds_ != nullptr && this->containerItems_ != nullptr && this->lang_ != nullptr && this->reason_ != nullptr && this->source_ != nullptr
        && this->type_ != nullptr && this->uuidList_ != nullptr; };
    // checkAndRiskTypeList Field Functions 
    bool hasCheckAndRiskTypeList() const { return this->checkAndRiskTypeList_ != nullptr;};
    void deleteCheckAndRiskTypeList() { this->checkAndRiskTypeList_ = nullptr;};
    inline const vector<IgnoreCheckItemsRequestCheckAndRiskTypeList> & checkAndRiskTypeList() const { DARABONBA_PTR_GET_CONST(checkAndRiskTypeList_, vector<IgnoreCheckItemsRequestCheckAndRiskTypeList>) };
    inline vector<IgnoreCheckItemsRequestCheckAndRiskTypeList> checkAndRiskTypeList() { DARABONBA_PTR_GET(checkAndRiskTypeList_, vector<IgnoreCheckItemsRequestCheckAndRiskTypeList>) };
    inline IgnoreCheckItemsRequest& setCheckAndRiskTypeList(const vector<IgnoreCheckItemsRequestCheckAndRiskTypeList> & checkAndRiskTypeList) { DARABONBA_PTR_SET_VALUE(checkAndRiskTypeList_, checkAndRiskTypeList) };
    inline IgnoreCheckItemsRequest& setCheckAndRiskTypeList(vector<IgnoreCheckItemsRequestCheckAndRiskTypeList> && checkAndRiskTypeList) { DARABONBA_PTR_SET_RVALUE(checkAndRiskTypeList_, checkAndRiskTypeList) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline IgnoreCheckItemsRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline IgnoreCheckItemsRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // containerItems Field Functions 
    bool hasContainerItems() const { return this->containerItems_ != nullptr;};
    void deleteContainerItems() { this->containerItems_ = nullptr;};
    inline const vector<IgnoreCheckItemsRequestContainerItems> & containerItems() const { DARABONBA_PTR_GET_CONST(containerItems_, vector<IgnoreCheckItemsRequestContainerItems>) };
    inline vector<IgnoreCheckItemsRequestContainerItems> containerItems() { DARABONBA_PTR_GET(containerItems_, vector<IgnoreCheckItemsRequestContainerItems>) };
    inline IgnoreCheckItemsRequest& setContainerItems(const vector<IgnoreCheckItemsRequestContainerItems> & containerItems) { DARABONBA_PTR_SET_VALUE(containerItems_, containerItems) };
    inline IgnoreCheckItemsRequest& setContainerItems(vector<IgnoreCheckItemsRequestContainerItems> && containerItems) { DARABONBA_PTR_SET_RVALUE(containerItems_, containerItems) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline IgnoreCheckItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline IgnoreCheckItemsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IgnoreCheckItemsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IgnoreCheckItemsRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline IgnoreCheckItemsRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline IgnoreCheckItemsRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The information about check items.
    std::shared_ptr<vector<IgnoreCheckItemsRequestCheckAndRiskTypeList>> checkAndRiskTypeList_ = nullptr;
    // The IDs of check items.
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    // List of container names that need to be whitelisted.
    std::shared_ptr<vector<IgnoreCheckItemsRequestContainerItems>> containerItems_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why you add the risk item to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The data source. Valid values:
    // 
    // *   **default**: host baseline
    // *   **agentless**: agentless baseline
    std::shared_ptr<string> source_ = nullptr;
    // The operation that you want to perform on the risk item.Valid values:
    // *  **1**: adds the risk item to the whitelist
    // *  **2**: removes the risk item from the whitelist
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The UUIDs of the servers.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

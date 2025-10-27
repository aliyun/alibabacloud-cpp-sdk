// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBaselineCheckWhiteRecordResponseBodyListContainerItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CheckTypeDisName, checkTypeDisName_);
      DARABONBA_PTR_TO_JSON(ContainerItems, containerItems_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CheckTypeDisName, checkTypeDisName_);
      DARABONBA_PTR_FROM_JSON(ContainerItems, containerItems_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListBaselineCheckWhiteRecordResponseBodyList() = default ;
    ListBaselineCheckWhiteRecordResponseBodyList(const ListBaselineCheckWhiteRecordResponseBodyList &) = default ;
    ListBaselineCheckWhiteRecordResponseBodyList(ListBaselineCheckWhiteRecordResponseBodyList &&) = default ;
    ListBaselineCheckWhiteRecordResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordResponseBodyList() = default ;
    ListBaselineCheckWhiteRecordResponseBodyList& operator=(const ListBaselineCheckWhiteRecordResponseBodyList &) = default ;
    ListBaselineCheckWhiteRecordResponseBodyList& operator=(ListBaselineCheckWhiteRecordResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkItem_ == nullptr && return this->checkType_ == nullptr && return this->checkTypeDisName_ == nullptr && return this->containerItems_ == nullptr && return this->lang_ == nullptr
        && return this->reason_ == nullptr && return this->recordId_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr && return this->targetType_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // checkTypeDisName Field Functions 
    bool hasCheckTypeDisName() const { return this->checkTypeDisName_ != nullptr;};
    void deleteCheckTypeDisName() { this->checkTypeDisName_ = nullptr;};
    inline string checkTypeDisName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeDisName_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setCheckTypeDisName(string checkTypeDisName) { DARABONBA_PTR_SET_VALUE(checkTypeDisName_, checkTypeDisName) };


    // containerItems Field Functions 
    bool hasContainerItems() const { return this->containerItems_ != nullptr;};
    void deleteContainerItems() { this->containerItems_ = nullptr;};
    inline const vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems> & containerItems() const { DARABONBA_PTR_GET_CONST(containerItems_, vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems>) };
    inline vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems> containerItems() { DARABONBA_PTR_GET(containerItems_, vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems>) };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setContainerItems(const vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems> & containerItems) { DARABONBA_PTR_SET_VALUE(containerItems_, containerItems) };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setContainerItems(vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems> && containerItems) { DARABONBA_PTR_SET_RVALUE(containerItems_, containerItems) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> checkItem_ = nullptr;
    // The type of the check item.
    std::shared_ptr<string> checkType_ = nullptr;
    // The display name of the check item type.
    std::shared_ptr<string> checkTypeDisName_ = nullptr;
    // List of whitelisted container names in the check item.
    std::shared_ptr<vector<Models::ListBaselineCheckWhiteRecordResponseBodyListContainerItems>> containerItems_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why the check item is added to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The ID of the whitelist rule.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The data source. Valid values:
    // 
    // *   **default**: server
    // *   **agentless**: agentless detection
    std::shared_ptr<string> source_ = nullptr;
    // The object that is added to the whitelist.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the assets on which the whitelist rule takes effect. Valid values:
    // 
    // *   **all_instance**: all servers
    // *   **instance**: specific servers
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

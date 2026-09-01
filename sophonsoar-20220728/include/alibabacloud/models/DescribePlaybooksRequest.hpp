// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(EndMillis, endMillis_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParamTypes, paramTypes_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(PlaybookUuids, playbookUuids_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartMillis, startMillis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(EndMillis, endMillis_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParamTypes, paramTypes_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuids, playbookUuids_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartMillis, startMillis_);
    };
    DescribePlaybooksRequest() = default ;
    DescribePlaybooksRequest(const DescribePlaybooksRequest &) = default ;
    DescribePlaybooksRequest(DescribePlaybooksRequest &&) = default ;
    DescribePlaybooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybooksRequest() = default ;
    DescribePlaybooksRequest& operator=(const DescribePlaybooksRequest &) = default ;
    DescribePlaybooksRequest& operator=(DescribePlaybooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->endMillis_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->ownType_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paramTypes_ == nullptr && this->playbookUuid_ == nullptr && this->playbookUuids_ == nullptr
        && this->sort_ == nullptr && this->startMillis_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline DescribePlaybooksRequest& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // endMillis Field Functions 
    bool hasEndMillis() const { return this->endMillis_ != nullptr;};
    void deleteEndMillis() { this->endMillis_ = nullptr;};
    inline int64_t getEndMillis() const { DARABONBA_PTR_GET_DEFAULT(endMillis_, 0L) };
    inline DescribePlaybooksRequest& setEndMillis(int64_t endMillis) { DARABONBA_PTR_SET_VALUE(endMillis_, endMillis) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePlaybooksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePlaybooksRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribePlaybooksRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline DescribePlaybooksRequest& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePlaybooksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePlaybooksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paramTypes Field Functions 
    bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
    void deleteParamTypes() { this->paramTypes_ = nullptr;};
    inline string getParamTypes() const { DARABONBA_PTR_GET_DEFAULT(paramTypes_, "") };
    inline DescribePlaybooksRequest& setParamTypes(string paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybooksRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // playbookUuids Field Functions 
    bool hasPlaybookUuids() const { return this->playbookUuids_ != nullptr;};
    void deletePlaybookUuids() { this->playbookUuids_ = nullptr;};
    inline string getPlaybookUuids() const { DARABONBA_PTR_GET_DEFAULT(playbookUuids_, "") };
    inline DescribePlaybooksRequest& setPlaybookUuids(string playbookUuids) { DARABONBA_PTR_SET_VALUE(playbookUuids_, playbookUuids) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline int32_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
    inline DescribePlaybooksRequest& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startMillis Field Functions 
    bool hasStartMillis() const { return this->startMillis_ != nullptr;};
    void deleteStartMillis() { this->startMillis_ = nullptr;};
    inline int64_t getStartMillis() const { DARABONBA_PTR_GET_DEFAULT(startMillis_, 0L) };
    inline DescribePlaybooksRequest& setStartMillis(int64_t startMillis) { DARABONBA_PTR_SET_VALUE(startMillis_, startMillis) };


  protected:
    // The status of the playbook. Valid values:
    // 
    // - **1**: The playbook is enabled.
    // 
    // - **0**: The playbook is disabled.
    shared_ptr<int32_t> active_ {};
    // The end of the time range to query. This value is a 13-digit timestamp.
    shared_ptr<int64_t> endMillis_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The name of the playbook.
    shared_ptr<string> name_ {};
    // The sort order. Default value: **desc**. Valid values:
    // 
    // - **desc**: descending.
    // 
    // - **asc**: ascending.
    shared_ptr<string> order_ {};
    // The type of the playbook. Valid values:
    // 
    // - **preset**: predefined playbook.
    // 
    // - **user**: custom playbook.
    shared_ptr<string> ownType_ {};
    // The page number of the page to return. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 10 entries are returned by default.
    // 
    // > Specify a value for this parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The trigger type of the playbook. If you do not specify this parameter, playbooks of all trigger types are queried. Valid values:
    // 
    // - **template-incident**: security event.
    // 
    // - **template-ip**: IP entity.
    // 
    // - **template-file**: file entity.
    // 
    // - **template-process**: process entity.
    // 
    // - **template-alert**: security alert.
    // 
    // - **template-domain**: domain name entity.
    // 
    // - **template-container**: container entity.
    // 
    // - **template-host**: host entity.
    // 
    // - **template-custom**: custom.
    shared_ptr<string> paramTypes_ {};
    // The UUID of the playbook.
    // 
    // > Call the [CreatePlaybook](~~CreatePlaybook~~) operation to obtain this parameter.
    shared_ptr<string> playbookUuid_ {};
    // A comma-separated list of playbook UUIDs. You can specify up to 100 UUIDs.
    shared_ptr<string> playbookUuids_ {};
    // The field to sort by. Default value: **1**. Valid values:
    // 
    // - **1**: last modification time.
    // 
    // - **2**: last running time.
    shared_ptr<int32_t> sort_ {};
    // The start of the time range to query. This value is a 13-digit timestamp.
    shared_ptr<int64_t> startMillis_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

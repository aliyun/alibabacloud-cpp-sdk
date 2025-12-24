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
        && return this->endMillis_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr && return this->order_ == nullptr && return this->ownType_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->paramTypes_ == nullptr && return this->playbookUuid_ == nullptr && return this->playbookUuids_ == nullptr
        && return this->sort_ == nullptr && return this->startMillis_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline DescribePlaybooksRequest& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // endMillis Field Functions 
    bool hasEndMillis() const { return this->endMillis_ != nullptr;};
    void deleteEndMillis() { this->endMillis_ = nullptr;};
    inline int64_t endMillis() const { DARABONBA_PTR_GET_DEFAULT(endMillis_, 0L) };
    inline DescribePlaybooksRequest& setEndMillis(int64_t endMillis) { DARABONBA_PTR_SET_VALUE(endMillis_, endMillis) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePlaybooksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePlaybooksRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribePlaybooksRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline DescribePlaybooksRequest& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePlaybooksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePlaybooksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paramTypes Field Functions 
    bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
    void deleteParamTypes() { this->paramTypes_ = nullptr;};
    inline string paramTypes() const { DARABONBA_PTR_GET_DEFAULT(paramTypes_, "") };
    inline DescribePlaybooksRequest& setParamTypes(string paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybooksRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // playbookUuids Field Functions 
    bool hasPlaybookUuids() const { return this->playbookUuids_ != nullptr;};
    void deletePlaybookUuids() { this->playbookUuids_ = nullptr;};
    inline string playbookUuids() const { DARABONBA_PTR_GET_DEFAULT(playbookUuids_, "") };
    inline DescribePlaybooksRequest& setPlaybookUuids(string playbookUuids) { DARABONBA_PTR_SET_VALUE(playbookUuids_, playbookUuids) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline int32_t sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
    inline DescribePlaybooksRequest& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startMillis Field Functions 
    bool hasStartMillis() const { return this->startMillis_ != nullptr;};
    void deleteStartMillis() { this->startMillis_ = nullptr;};
    inline int64_t startMillis() const { DARABONBA_PTR_GET_DEFAULT(startMillis_, 0L) };
    inline DescribePlaybooksRequest& setStartMillis(int64_t startMillis) { DARABONBA_PTR_SET_VALUE(startMillis_, startMillis) };


  protected:
    // Activation status of the playbook. Values:
    // 
    // - **1**: Indicates the playbook is activated.
    // - **0**: Indicates the playbook is not activated.
    std::shared_ptr<int32_t> active_ = nullptr;
    // End time for the query, in 13-digit timestamp format.
    std::shared_ptr<int64_t> endMillis_ = nullptr;
    // Specifies the language type for the request and response, default is **zh**. Values:
    // - **zh**: Chinese.
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the playbook.
    std::shared_ptr<string> name_ = nullptr;
    // The sorting logic, with a default value of **desc**. Values:
    // - **desc**: Descending order.
    // - **asc**: Ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // Type of the playbook. Values:
    // 
    // - **preset**: Predefined playbook.
    // - **user**: Custom playbook.
    std::shared_ptr<string> ownType_ = nullptr;
    // Sets the page number from which to start displaying the query results. The default value is 1, indicating the first page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // Specifies the maximum number of items to display per page in a paginated query. The default number of items per page is 20. If the PageSize parameter is empty, it will return 10 items by default.
    // > It is recommended that the PageSize value is not empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The trigger method for the playbook, with a default value of **query all**. Values:
    // - **template-incident**: Security incident.
    // - **template-ip**: IP entity.
    // - **template-file**: File entity.
    // - **template-process**: Process entity.
    // - **template-alert**: Security alert.
    // - **template-domain**: Domain entity.
    // - **template-container**: Container entity.
    // - **template-host**: Host entity.
    // - **template-custom**: Custom.
    std::shared_ptr<string> paramTypes_ = nullptr;
    // The UUID of the playbook.
    // > You can use the UUID to query specific playbook information.
    // > - Call the [CreatePlaybook](~~CreatePlaybook~~) API to obtain this parameter.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // UUID List of the playbook.
    // 
    // Note You can use the UUID list to query specific playbook information.
    // Call the DescribePlaybooks API to obtain this parameter.
    std::shared_ptr<string> playbookUuids_ = nullptr;
    // The sorting basis, with a default value of **1**. Values:
    // - **1**: Last modified time.
    // - **2**: Most recent execution time.
    std::shared_ptr<int32_t> sort_ = nullptr;
    // Start time for the query, in 13-digit timestamp format.
    std::shared_ptr<int64_t> startMillis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

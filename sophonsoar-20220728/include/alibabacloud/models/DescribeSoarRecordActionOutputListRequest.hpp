// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDACTIONOUTPUTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDACTIONOUTPUTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordActionOutputListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordActionOutputListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordActionOutputListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeSoarRecordActionOutputListRequest() = default ;
    DescribeSoarRecordActionOutputListRequest(const DescribeSoarRecordActionOutputListRequest &) = default ;
    DescribeSoarRecordActionOutputListRequest(DescribeSoarRecordActionOutputListRequest &&) = default ;
    DescribeSoarRecordActionOutputListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordActionOutputListRequest() = default ;
    DescribeSoarRecordActionOutputListRequest& operator=(const DescribeSoarRecordActionOutputListRequest &) = default ;
    DescribeSoarRecordActionOutputListRequest& operator=(DescribeSoarRecordActionOutputListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionUuid_ == nullptr
        && return this->lang_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // actionUuid Field Functions 
    bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
    void deleteActionUuid() { this->actionUuid_ = nullptr;};
    inline string actionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
    inline DescribeSoarRecordActionOutputListRequest& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSoarRecordActionOutputListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarRecordActionOutputListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarRecordActionOutputListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The UUID of the component action.
    // 
    // >  You can call the [DescribeSoarTaskAndActions](~~DescribeSoarTaskAndActions~~) operation to query the UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionUuid_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The page number. Default value: 1. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. If you leave this parameter empty, 10 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

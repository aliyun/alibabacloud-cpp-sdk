// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(QueryValue, queryValue_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(QueryValue, queryValue_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
    };
    DescribeSoarTaskAndActionsRequest() = default ;
    DescribeSoarTaskAndActionsRequest(const DescribeSoarTaskAndActionsRequest &) = default ;
    DescribeSoarTaskAndActionsRequest(DescribeSoarTaskAndActionsRequest &&) = default ;
    DescribeSoarTaskAndActionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsRequest() = default ;
    DescribeSoarTaskAndActionsRequest& operator=(const DescribeSoarTaskAndActionsRequest &) = default ;
    DescribeSoarTaskAndActionsRequest& operator=(DescribeSoarTaskAndActionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->queryType_ == nullptr && return this->queryValue_ == nullptr && return this->requestUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSoarTaskAndActionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarTaskAndActionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarTaskAndActionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeSoarTaskAndActionsRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // queryValue Field Functions 
    bool hasQueryValue() const { return this->queryValue_ != nullptr;};
    void deleteQueryValue() { this->queryValue_ = nullptr;};
    inline string queryValue() const { DARABONBA_PTR_GET_DEFAULT(queryValue_, "") };
    inline DescribeSoarTaskAndActionsRequest& setQueryValue(string queryValue) { DARABONBA_PTR_SET_VALUE(queryValue_, queryValue) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescribeSoarTaskAndActionsRequest& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


  protected:
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> queryType_ = nullptr;
    std::shared_ptr<string> queryValue_ = nullptr;
    // The playbook UUID.
    std::shared_ptr<string> requestUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

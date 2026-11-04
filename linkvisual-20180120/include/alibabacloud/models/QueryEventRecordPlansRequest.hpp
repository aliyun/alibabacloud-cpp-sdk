// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryEventRecordPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventRecordPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventRecordPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryEventRecordPlansRequest() = default ;
    QueryEventRecordPlansRequest(const QueryEventRecordPlansRequest &) = default ;
    QueryEventRecordPlansRequest(QueryEventRecordPlansRequest &&) = default ;
    QueryEventRecordPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventRecordPlansRequest() = default ;
    QueryEventRecordPlansRequest& operator=(const QueryEventRecordPlansRequest &) = default ;
    QueryEventRecordPlansRequest& operator=(QueryEventRecordPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryEventRecordPlansRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryEventRecordPlansRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The page number to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page. Minimum value: 1. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif

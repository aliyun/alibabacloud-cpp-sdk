// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNOTIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYNOTIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class QueryNotifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNotifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(WithConfirmed, withConfirmed_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNotifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(WithConfirmed, withConfirmed_);
    };
    QueryNotifyRequest() = default ;
    QueryNotifyRequest(const QueryNotifyRequest &) = default ;
    QueryNotifyRequest(QueryNotifyRequest &&) = default ;
    QueryNotifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNotifyRequest() = default ;
    QueryNotifyRequest& operator=(const QueryNotifyRequest &) = default ;
    QueryNotifyRequest& operator=(QueryNotifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->to_ == nullptr && this->withConfirmed_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline QueryNotifyRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryNotifyRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryNotifyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline QueryNotifyRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // withConfirmed Field Functions 
    bool hasWithConfirmed() const { return this->withConfirmed_ != nullptr;};
    void deleteWithConfirmed() { this->withConfirmed_ = nullptr;};
    inline bool getWithConfirmed() const { DARABONBA_PTR_GET_DEFAULT(withConfirmed_, false) };
    inline QueryNotifyRequest& setWithConfirmed(bool withConfirmed) { DARABONBA_PTR_SET_VALUE(withConfirmed_, withConfirmed) };


  protected:
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The page number. Pages start from page 1. Default value: 1.****
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30**
    // *   **50**
    // *   **100**
    // 
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> to_ {};
    // Specifies whether the query results contain confirmed notifications. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  A confirmed notification is a notification that has been marked as confirmed by calling the ConfirmNotify operation.
    // 
    // This parameter is required.
    shared_ptr<bool> withConfirmed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

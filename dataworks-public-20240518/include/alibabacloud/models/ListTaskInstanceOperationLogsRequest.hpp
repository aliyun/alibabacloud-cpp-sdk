// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstanceOperationLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstanceOperationLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstanceOperationLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListTaskInstanceOperationLogsRequest() = default ;
    ListTaskInstanceOperationLogsRequest(const ListTaskInstanceOperationLogsRequest &) = default ;
    ListTaskInstanceOperationLogsRequest(ListTaskInstanceOperationLogsRequest &&) = default ;
    ListTaskInstanceOperationLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstanceOperationLogsRequest() = default ;
    ListTaskInstanceOperationLogsRequest& operator=(const ListTaskInstanceOperationLogsRequest &) = default ;
    ListTaskInstanceOperationLogsRequest& operator=(ListTaskInstanceOperationLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->id_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline ListTaskInstanceOperationLogsRequest& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskInstanceOperationLogsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskInstanceOperationLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskInstanceOperationLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The operation date, accurate to the day. The default value is the current day. You can query only the operation logs generated within the previous 31 days. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> date_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIDINGMINUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALIDINGMINUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAliDingMinutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliDingMinutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cursor, cursor_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliDingMinutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAliDingMinutesRequest() = default ;
    ListAliDingMinutesRequest(const ListAliDingMinutesRequest &) = default ;
    ListAliDingMinutesRequest(ListAliDingMinutesRequest &&) = default ;
    ListAliDingMinutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliDingMinutesRequest() = default ;
    ListAliDingMinutesRequest& operator=(const ListAliDingMinutesRequest &) = default ;
    ListAliDingMinutesRequest& operator=(ListAliDingMinutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cursor_ == nullptr
        && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->tenantId_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline ListAliDingMinutesRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAliDingMinutesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAliDingMinutesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAliDingMinutesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAliDingMinutesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The cursor for the paged query. Set this parameter to 0 for the first request. For subsequent requests, set this parameter to the **nextCursor** value returned in the previous response. For more information about paging, see the response parameters.
    shared_ptr<string> cursor_ {};
    // The actual end timestamp of the live session, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The query start time. This value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly through the winnexo-cli --tenant-id option.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

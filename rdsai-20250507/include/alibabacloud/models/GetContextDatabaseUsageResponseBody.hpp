// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetContextDatabaseUsageResponseBody() = default ;
    GetContextDatabaseUsageResponseBody(const GetContextDatabaseUsageResponseBody &) = default ;
    GetContextDatabaseUsageResponseBody(GetContextDatabaseUsageResponseBody &&) = default ;
    GetContextDatabaseUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseUsageResponseBody() = default ;
    GetContextDatabaseUsageResponseBody& operator=(const GetContextDatabaseUsageResponseBody &) = default ;
    GetContextDatabaseUsageResponseBody& operator=(GetContextDatabaseUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->item_ == nullptr
        && this->quantity_ == nullptr && this->unit_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline Items& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Items& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Items& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The metering item.
      shared_ptr<string> item_ {};
      // The usage of the item within the query range. The unit is specified by `Unit`. The number of calls, tokens, and context evolutions are accumulated over the range. Storage is calculated by averaging the occupancy snapshots of each workspace within the range and rounding to the nearest integer byte. For the account dimension, the average values of all workspaces are summed.
      shared_ptr<int64_t> quantity_ {};
      // The metering unit. Valid values:
      // - `Count`: The number of calls.
      // - `Token`: The number of tokens.
      // - `MicroCredit`: One millionth of a credit.
      // - `Byte`: Bytes.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->dimension_ == nullptr
        && this->endTime_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->workspaceId_ == nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline GetContextDatabaseUsageResponseBody& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetContextDatabaseUsageResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetContextDatabaseUsageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetContextDatabaseUsageResponseBody::Items>) };
    inline vector<GetContextDatabaseUsageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetContextDatabaseUsageResponseBody::Items>) };
    inline GetContextDatabaseUsageResponseBody& setItems(const vector<GetContextDatabaseUsageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetContextDatabaseUsageResponseBody& setItems(vector<GetContextDatabaseUsageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetContextDatabaseUsageResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetContextDatabaseUsageResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The query dimension. Valid values:
    // - `Workspace`: A single workspace.
    // - `Account`: All workspaces under the caller account.
    shared_ptr<string> dimension_ {};
    // The end time of the query range passed in the request, exclusive.
    shared_ptr<string> endTime_ {};
    // The usage list. It returns all seven metering items in a fixed order. If an item has no data within the query range, its usage is 0.
    shared_ptr<vector<GetContextDatabaseUsageResponseBody::Items>> items_ {};
    // The ID of the API request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The start time of the query range passed in the request, inclusive.
    shared_ptr<string> startTime_ {};
    // The ID of the queried workspace. This field has a value only when `Dimension` is set to `Workspace`. It is empty for the account dimension.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif

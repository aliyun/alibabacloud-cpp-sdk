// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DeleteRouteEntriesResponseBody() = default ;
    DeleteRouteEntriesResponseBody(const DeleteRouteEntriesResponseBody &) = default ;
    DeleteRouteEntriesResponseBody(DeleteRouteEntriesResponseBody &&) = default ;
    DeleteRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteEntriesResponseBody() = default ;
    DeleteRouteEntriesResponseBody& operator=(const DeleteRouteEntriesResponseBody &) = default ;
    DeleteRouteEntriesResponseBody& operator=(DeleteRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
        DARABONBA_PTR_TO_JSON(FailedCode, failedCode_);
        DARABONBA_PTR_TO_JSON(FailedMessage, failedMessage_);
        DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
        DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      };
      friend void from_json(const Darabonba::Json& j, FailedRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
        DARABONBA_PTR_FROM_JSON(FailedCode, failedCode_);
        DARABONBA_PTR_FROM_JSON(FailedMessage, failedMessage_);
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
        DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      };
      FailedRouteEntries() = default ;
      FailedRouteEntries(const FailedRouteEntries &) = default ;
      FailedRouteEntries(FailedRouteEntries &&) = default ;
      FailedRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedRouteEntries() = default ;
      FailedRouteEntries& operator=(const FailedRouteEntries &) = default ;
      FailedRouteEntries& operator=(FailedRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dstCidrBlock_ == nullptr
        && this->failedCode_ == nullptr && this->failedMessage_ == nullptr && this->nextHop_ == nullptr && this->routeEntryId_ == nullptr; };
      // dstCidrBlock Field Functions 
      bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
      void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
      inline string getDstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
      inline FailedRouteEntries& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


      // failedCode Field Functions 
      bool hasFailedCode() const { return this->failedCode_ != nullptr;};
      void deleteFailedCode() { this->failedCode_ = nullptr;};
      inline string getFailedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
      inline FailedRouteEntries& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


      // failedMessage Field Functions 
      bool hasFailedMessage() const { return this->failedMessage_ != nullptr;};
      void deleteFailedMessage() { this->failedMessage_ = nullptr;};
      inline string getFailedMessage() const { DARABONBA_PTR_GET_DEFAULT(failedMessage_, "") };
      inline FailedRouteEntries& setFailedMessage(string failedMessage) { DARABONBA_PTR_SET_VALUE(failedMessage_, failedMessage) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline FailedRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // routeEntryId Field Functions 
      bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
      void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
      inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
      inline FailedRouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    protected:
      // The destination CIDR block of the route entry that failed to be deleted. IPv4 and IPv6 CIDR blocks are supported.
      shared_ptr<string> dstCidrBlock_ {};
      // The error code.
      shared_ptr<string> failedCode_ {};
      // The error message.
      shared_ptr<string> failedMessage_ {};
      // The ID of the next hop that failed to be deleted.
      shared_ptr<string> nextHop_ {};
      // The ID of the route entry that failed to be deleted.
      shared_ptr<string> routeEntryId_ {};
    };

    virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->failedRouteEntries_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DeleteRouteEntriesResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedRouteEntries Field Functions 
    bool hasFailedRouteEntries() const { return this->failedRouteEntries_ != nullptr;};
    void deleteFailedRouteEntries() { this->failedRouteEntries_ = nullptr;};
    inline const vector<DeleteRouteEntriesResponseBody::FailedRouteEntries> & getFailedRouteEntries() const { DARABONBA_PTR_GET_CONST(failedRouteEntries_, vector<DeleteRouteEntriesResponseBody::FailedRouteEntries>) };
    inline vector<DeleteRouteEntriesResponseBody::FailedRouteEntries> getFailedRouteEntries() { DARABONBA_PTR_GET(failedRouteEntries_, vector<DeleteRouteEntriesResponseBody::FailedRouteEntries>) };
    inline DeleteRouteEntriesResponseBody& setFailedRouteEntries(const vector<DeleteRouteEntriesResponseBody::FailedRouteEntries> & failedRouteEntries) { DARABONBA_PTR_SET_VALUE(failedRouteEntries_, failedRouteEntries) };
    inline DeleteRouteEntriesResponseBody& setFailedRouteEntries(vector<DeleteRouteEntriesResponseBody::FailedRouteEntries> && failedRouteEntries) { DARABONBA_PTR_SET_RVALUE(failedRouteEntries_, failedRouteEntries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DeleteRouteEntriesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of route entries that failed to be deleted.
    shared_ptr<int32_t> failedCount_ {};
    // The information about the route entry that failed to be deleted.
    shared_ptr<vector<DeleteRouteEntriesResponseBody::FailedRouteEntries>> failedRouteEntries_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of route entries that were deleted.
    shared_ptr<int32_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

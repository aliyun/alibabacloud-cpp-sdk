// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODY_HPP_
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
  class CreateRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntryIds, routeEntryIds_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryIds, routeEntryIds_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    CreateRouteEntriesResponseBody() = default ;
    CreateRouteEntriesResponseBody(const CreateRouteEntriesResponseBody &) = default ;
    CreateRouteEntriesResponseBody(CreateRouteEntriesResponseBody &&) = default ;
    CreateRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntriesResponseBody() = default ;
    CreateRouteEntriesResponseBody& operator=(const CreateRouteEntriesResponseBody &) = default ;
    CreateRouteEntriesResponseBody& operator=(CreateRouteEntriesResponseBody &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, FailedRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
        DARABONBA_PTR_FROM_JSON(FailedCode, failedCode_);
        DARABONBA_PTR_FROM_JSON(FailedMessage, failedMessage_);
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
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
        && this->failedCode_ == nullptr && this->failedMessage_ == nullptr && this->nextHop_ == nullptr; };
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


    protected:
      // The destination CIDR block of the custom route entry that failed to be added.
      shared_ptr<string> dstCidrBlock_ {};
      // The error code.
      shared_ptr<string> failedCode_ {};
      // The error message.
      shared_ptr<string> failedMessage_ {};
      // The ID of the next hop of the custom route entry that failed to be added.
      shared_ptr<string> nextHop_ {};
    };

    virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->failedRouteEntries_ == nullptr && this->requestId_ == nullptr && this->routeEntryIds_ == nullptr && this->successCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline CreateRouteEntriesResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedRouteEntries Field Functions 
    bool hasFailedRouteEntries() const { return this->failedRouteEntries_ != nullptr;};
    void deleteFailedRouteEntries() { this->failedRouteEntries_ = nullptr;};
    inline const vector<CreateRouteEntriesResponseBody::FailedRouteEntries> & getFailedRouteEntries() const { DARABONBA_PTR_GET_CONST(failedRouteEntries_, vector<CreateRouteEntriesResponseBody::FailedRouteEntries>) };
    inline vector<CreateRouteEntriesResponseBody::FailedRouteEntries> getFailedRouteEntries() { DARABONBA_PTR_GET(failedRouteEntries_, vector<CreateRouteEntriesResponseBody::FailedRouteEntries>) };
    inline CreateRouteEntriesResponseBody& setFailedRouteEntries(const vector<CreateRouteEntriesResponseBody::FailedRouteEntries> & failedRouteEntries) { DARABONBA_PTR_SET_VALUE(failedRouteEntries_, failedRouteEntries) };
    inline CreateRouteEntriesResponseBody& setFailedRouteEntries(vector<CreateRouteEntriesResponseBody::FailedRouteEntries> && failedRouteEntries) { DARABONBA_PTR_SET_RVALUE(failedRouteEntries_, failedRouteEntries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntryIds Field Functions 
    bool hasRouteEntryIds() const { return this->routeEntryIds_ != nullptr;};
    void deleteRouteEntryIds() { this->routeEntryIds_ = nullptr;};
    inline const vector<string> & getRouteEntryIds() const { DARABONBA_PTR_GET_CONST(routeEntryIds_, vector<string>) };
    inline vector<string> getRouteEntryIds() { DARABONBA_PTR_GET(routeEntryIds_, vector<string>) };
    inline CreateRouteEntriesResponseBody& setRouteEntryIds(const vector<string> & routeEntryIds) { DARABONBA_PTR_SET_VALUE(routeEntryIds_, routeEntryIds) };
    inline CreateRouteEntriesResponseBody& setRouteEntryIds(vector<string> && routeEntryIds) { DARABONBA_PTR_SET_RVALUE(routeEntryIds_, routeEntryIds) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateRouteEntriesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of custom route entries that failed to be added.
    shared_ptr<int32_t> failedCount_ {};
    // The details about the custom route entry that failed to be added.
    shared_ptr<vector<CreateRouteEntriesResponseBody::FailedRouteEntries>> failedRouteEntries_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the ID of the custom route entry that was successfully added.
    shared_ptr<vector<string>> routeEntryIds_ {};
    // The number of custom route entries that were successfully added.
    shared_ptr<int32_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

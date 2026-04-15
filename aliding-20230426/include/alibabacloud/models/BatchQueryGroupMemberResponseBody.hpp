// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchQueryGroupMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryGroupMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryGroupMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    BatchQueryGroupMemberResponseBody() = default ;
    BatchQueryGroupMemberResponseBody(const BatchQueryGroupMemberResponseBody &) = default ;
    BatchQueryGroupMemberResponseBody(BatchQueryGroupMemberResponseBody &&) = default ;
    BatchQueryGroupMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryGroupMemberResponseBody() = default ;
    BatchQueryGroupMemberResponseBody& operator=(const BatchQueryGroupMemberResponseBody &) = default ;
    BatchQueryGroupMemberResponseBody& operator=(BatchQueryGroupMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->memberUserIds_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline BatchQueryGroupMemberResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // memberUserIds Field Functions 
    bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
    void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
    inline const vector<string> & getMemberUserIds() const { DARABONBA_PTR_GET_CONST(memberUserIds_, vector<string>) };
    inline vector<string> getMemberUserIds() { DARABONBA_PTR_GET(memberUserIds_, vector<string>) };
    inline BatchQueryGroupMemberResponseBody& setMemberUserIds(const vector<string> & memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };
    inline BatchQueryGroupMemberResponseBody& setMemberUserIds(vector<string> && memberUserIds) { DARABONBA_PTR_SET_RVALUE(memberUserIds_, memberUserIds) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryGroupMemberResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryGroupMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline BatchQueryGroupMemberResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline BatchQueryGroupMemberResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<vector<string>> memberUserIds_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

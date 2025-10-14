// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CopySnapshotResponseBodyAllocationId.hpp>
#include <alibabacloud/models/CopySnapshotResponseBodyUnAllocationId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnAllocationId, unAllocationId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnAllocationId, unAllocationId_);
    };
    CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody(CopySnapshotResponseBody &&) = default ;
    CopySnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody& operator=(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody& operator=(CopySnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->bizStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->unAllocationId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline const vector<CopySnapshotResponseBodyAllocationId> & allocationId() const { DARABONBA_PTR_GET_CONST(allocationId_, vector<CopySnapshotResponseBodyAllocationId>) };
    inline vector<CopySnapshotResponseBodyAllocationId> allocationId() { DARABONBA_PTR_GET(allocationId_, vector<CopySnapshotResponseBodyAllocationId>) };
    inline CopySnapshotResponseBody& setAllocationId(const vector<CopySnapshotResponseBodyAllocationId> & allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };
    inline CopySnapshotResponseBody& setAllocationId(vector<CopySnapshotResponseBodyAllocationId> && allocationId) { DARABONBA_PTR_SET_RVALUE(allocationId_, allocationId) };


    // bizStatusCode Field Functions 
    bool hasBizStatusCode() const { return this->bizStatusCode_ != nullptr;};
    void deleteBizStatusCode() { this->bizStatusCode_ = nullptr;};
    inline string bizStatusCode() const { DARABONBA_PTR_GET_DEFAULT(bizStatusCode_, "") };
    inline CopySnapshotResponseBody& setBizStatusCode(string bizStatusCode) { DARABONBA_PTR_SET_VALUE(bizStatusCode_, bizStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopySnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unAllocationId Field Functions 
    bool hasUnAllocationId() const { return this->unAllocationId_ != nullptr;};
    void deleteUnAllocationId() { this->unAllocationId_ = nullptr;};
    inline const vector<CopySnapshotResponseBodyUnAllocationId> & unAllocationId() const { DARABONBA_PTR_GET_CONST(unAllocationId_, vector<CopySnapshotResponseBodyUnAllocationId>) };
    inline vector<CopySnapshotResponseBodyUnAllocationId> unAllocationId() { DARABONBA_PTR_GET(unAllocationId_, vector<CopySnapshotResponseBodyUnAllocationId>) };
    inline CopySnapshotResponseBody& setUnAllocationId(const vector<CopySnapshotResponseBodyUnAllocationId> & unAllocationId) { DARABONBA_PTR_SET_VALUE(unAllocationId_, unAllocationId) };
    inline CopySnapshotResponseBody& setUnAllocationId(vector<CopySnapshotResponseBodyUnAllocationId> && unAllocationId) { DARABONBA_PTR_SET_RVALUE(unAllocationId_, unAllocationId) };


  protected:
    // The list of created snapshots.
    std::shared_ptr<vector<CopySnapshotResponseBodyAllocationId>> allocationId_ = nullptr;
    // The success status code.
    // 
    // *   **PartSuccess**: partially succeeded.
    // *   **AllSuccess**: all succeeded.
    std::shared_ptr<string> bizStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of nodes that are not created.
    std::shared_ptr<vector<CopySnapshotResponseBodyUnAllocationId>> unAllocationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

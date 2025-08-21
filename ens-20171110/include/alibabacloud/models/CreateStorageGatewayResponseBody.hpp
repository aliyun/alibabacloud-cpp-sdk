// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateStorageGatewayResponseBodyAllocationId.hpp>
#include <alibabacloud/models/CreateStorageGatewayResponseBodyUnAllocationId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnAllocationId, unAllocationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnAllocationId, unAllocationId_);
    };
    CreateStorageGatewayResponseBody() = default ;
    CreateStorageGatewayResponseBody(const CreateStorageGatewayResponseBody &) = default ;
    CreateStorageGatewayResponseBody(CreateStorageGatewayResponseBody &&) = default ;
    CreateStorageGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageGatewayResponseBody() = default ;
    CreateStorageGatewayResponseBody& operator=(const CreateStorageGatewayResponseBody &) = default ;
    CreateStorageGatewayResponseBody& operator=(CreateStorageGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->bizStatusCode_ != nullptr && this->requestId_ != nullptr && this->unAllocationId_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline const vector<CreateStorageGatewayResponseBodyAllocationId> & allocationId() const { DARABONBA_PTR_GET_CONST(allocationId_, vector<CreateStorageGatewayResponseBodyAllocationId>) };
    inline vector<CreateStorageGatewayResponseBodyAllocationId> allocationId() { DARABONBA_PTR_GET(allocationId_, vector<CreateStorageGatewayResponseBodyAllocationId>) };
    inline CreateStorageGatewayResponseBody& setAllocationId(const vector<CreateStorageGatewayResponseBodyAllocationId> & allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };
    inline CreateStorageGatewayResponseBody& setAllocationId(vector<CreateStorageGatewayResponseBodyAllocationId> && allocationId) { DARABONBA_PTR_SET_RVALUE(allocationId_, allocationId) };


    // bizStatusCode Field Functions 
    bool hasBizStatusCode() const { return this->bizStatusCode_ != nullptr;};
    void deleteBizStatusCode() { this->bizStatusCode_ = nullptr;};
    inline string bizStatusCode() const { DARABONBA_PTR_GET_DEFAULT(bizStatusCode_, "") };
    inline CreateStorageGatewayResponseBody& setBizStatusCode(string bizStatusCode) { DARABONBA_PTR_SET_VALUE(bizStatusCode_, bizStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStorageGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unAllocationId Field Functions 
    bool hasUnAllocationId() const { return this->unAllocationId_ != nullptr;};
    void deleteUnAllocationId() { this->unAllocationId_ = nullptr;};
    inline const vector<CreateStorageGatewayResponseBodyUnAllocationId> & unAllocationId() const { DARABONBA_PTR_GET_CONST(unAllocationId_, vector<CreateStorageGatewayResponseBodyUnAllocationId>) };
    inline vector<CreateStorageGatewayResponseBodyUnAllocationId> unAllocationId() { DARABONBA_PTR_GET(unAllocationId_, vector<CreateStorageGatewayResponseBodyUnAllocationId>) };
    inline CreateStorageGatewayResponseBody& setUnAllocationId(const vector<CreateStorageGatewayResponseBodyUnAllocationId> & unAllocationId) { DARABONBA_PTR_SET_VALUE(unAllocationId_, unAllocationId) };
    inline CreateStorageGatewayResponseBody& setUnAllocationId(vector<CreateStorageGatewayResponseBodyUnAllocationId> && unAllocationId) { DARABONBA_PTR_SET_RVALUE(unAllocationId_, unAllocationId) };


  protected:
    // The list of created nodes.
    std::shared_ptr<vector<CreateStorageGatewayResponseBodyAllocationId>> allocationId_ = nullptr;
    // The success status code.
    // 
    // *   **PartSuccess**: partially succeeded.
    // *   **AllSuccess**: all succeeded.
    std::shared_ptr<string> bizStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of nodes that are not created.
    std::shared_ptr<vector<CreateStorageGatewayResponseBodyUnAllocationId>> unAllocationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

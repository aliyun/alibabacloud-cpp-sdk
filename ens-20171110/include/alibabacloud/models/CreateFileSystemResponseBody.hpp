// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFileSystemResponseBodyAllocationIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AllocationIds, allocationIds_);
      DARABONBA_PTR_TO_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnAllocationId, unAllocationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AllocationIds, allocationIds_);
      DARABONBA_PTR_FROM_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnAllocationId, unAllocationId_);
    };
    CreateFileSystemResponseBody() = default ;
    CreateFileSystemResponseBody(const CreateFileSystemResponseBody &) = default ;
    CreateFileSystemResponseBody(CreateFileSystemResponseBody &&) = default ;
    CreateFileSystemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemResponseBody() = default ;
    CreateFileSystemResponseBody& operator=(const CreateFileSystemResponseBody &) = default ;
    CreateFileSystemResponseBody& operator=(CreateFileSystemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->allocationIds_ == nullptr && return this->bizStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->unAllocationId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline const vector<string> & allocationId() const { DARABONBA_PTR_GET_CONST(allocationId_, vector<string>) };
    inline vector<string> allocationId() { DARABONBA_PTR_GET(allocationId_, vector<string>) };
    inline CreateFileSystemResponseBody& setAllocationId(const vector<string> & allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };
    inline CreateFileSystemResponseBody& setAllocationId(vector<string> && allocationId) { DARABONBA_PTR_SET_RVALUE(allocationId_, allocationId) };


    // allocationIds Field Functions 
    bool hasAllocationIds() const { return this->allocationIds_ != nullptr;};
    void deleteAllocationIds() { this->allocationIds_ = nullptr;};
    inline const vector<CreateFileSystemResponseBodyAllocationIds> & allocationIds() const { DARABONBA_PTR_GET_CONST(allocationIds_, vector<CreateFileSystemResponseBodyAllocationIds>) };
    inline vector<CreateFileSystemResponseBodyAllocationIds> allocationIds() { DARABONBA_PTR_GET(allocationIds_, vector<CreateFileSystemResponseBodyAllocationIds>) };
    inline CreateFileSystemResponseBody& setAllocationIds(const vector<CreateFileSystemResponseBodyAllocationIds> & allocationIds) { DARABONBA_PTR_SET_VALUE(allocationIds_, allocationIds) };
    inline CreateFileSystemResponseBody& setAllocationIds(vector<CreateFileSystemResponseBodyAllocationIds> && allocationIds) { DARABONBA_PTR_SET_RVALUE(allocationIds_, allocationIds) };


    // bizStatusCode Field Functions 
    bool hasBizStatusCode() const { return this->bizStatusCode_ != nullptr;};
    void deleteBizStatusCode() { this->bizStatusCode_ = nullptr;};
    inline string bizStatusCode() const { DARABONBA_PTR_GET_DEFAULT(bizStatusCode_, "") };
    inline CreateFileSystemResponseBody& setBizStatusCode(string bizStatusCode) { DARABONBA_PTR_SET_VALUE(bizStatusCode_, bizStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFileSystemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unAllocationId Field Functions 
    bool hasUnAllocationId() const { return this->unAllocationId_ != nullptr;};
    void deleteUnAllocationId() { this->unAllocationId_ = nullptr;};
    inline const vector<string> & unAllocationId() const { DARABONBA_PTR_GET_CONST(unAllocationId_, vector<string>) };
    inline vector<string> unAllocationId() { DARABONBA_PTR_GET(unAllocationId_, vector<string>) };
    inline CreateFileSystemResponseBody& setUnAllocationId(const vector<string> & unAllocationId) { DARABONBA_PTR_SET_VALUE(unAllocationId_, unAllocationId) };
    inline CreateFileSystemResponseBody& setUnAllocationId(vector<string> && unAllocationId) { DARABONBA_PTR_SET_RVALUE(unAllocationId_, unAllocationId) };


  protected:
    // The information about the file system that was created.
    std::shared_ptr<vector<string>> allocationId_ = nullptr;
    std::shared_ptr<vector<CreateFileSystemResponseBodyAllocationIds>> allocationIds_ = nullptr;
    // The status code for successful operations. Valid values:
    // 
    // *   PartSuccess: The operation is partially successful.
    // *   AllSuccess: The operation is successful.
    std::shared_ptr<string> bizStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the file system that failed to be created.
    std::shared_ptr<vector<string>> unAllocationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

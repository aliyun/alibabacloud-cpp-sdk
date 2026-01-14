// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetMemoryResponseBody() = default ;
    GetMemoryResponseBody(const GetMemoryResponseBody &) = default ;
    GetMemoryResponseBody(GetMemoryResponseBody &&) = default ;
    GetMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryResponseBody() = default ;
    GetMemoryResponseBody& operator=(const GetMemoryResponseBody &) = default ;
    GetMemoryResponseBody& operator=(GetMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->memoryId_ == nullptr && this->requestId_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMemoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // memoryId Field Functions 
    bool hasMemoryId() const { return this->memoryId_ != nullptr;};
    void deleteMemoryId() { this->memoryId_ = nullptr;};
    inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
    inline GetMemoryResponseBody& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetMemoryResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> memoryId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

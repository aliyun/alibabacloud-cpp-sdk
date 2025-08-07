// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetMemoryNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
      DARABONBA_PTR_TO_JSON(memoryNodeId, memoryNodeId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
      DARABONBA_PTR_FROM_JSON(memoryNodeId, memoryNodeId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetMemoryNodeResponseBody() = default ;
    GetMemoryNodeResponseBody(const GetMemoryNodeResponseBody &) = default ;
    GetMemoryNodeResponseBody(GetMemoryNodeResponseBody &&) = default ;
    GetMemoryNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryNodeResponseBody() = default ;
    GetMemoryNodeResponseBody& operator=(const GetMemoryNodeResponseBody &) = default ;
    GetMemoryNodeResponseBody& operator=(GetMemoryNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->memoryId_ != nullptr && this->memoryNodeId_ != nullptr && this->requestId_ != nullptr && this->workspaceId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetMemoryNodeResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // memoryId Field Functions 
    bool hasMemoryId() const { return this->memoryId_ != nullptr;};
    void deleteMemoryId() { this->memoryId_ = nullptr;};
    inline string memoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
    inline GetMemoryNodeResponseBody& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


    // memoryNodeId Field Functions 
    bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
    void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
    inline string memoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
    inline GetMemoryNodeResponseBody& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetMemoryNodeResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> memoryId_ = nullptr;
    std::shared_ptr<string> memoryNodeId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

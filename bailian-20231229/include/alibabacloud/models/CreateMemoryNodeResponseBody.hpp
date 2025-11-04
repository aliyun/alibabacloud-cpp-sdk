// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateMemoryNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(memoryNodeId, memoryNodeId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(memoryNodeId, memoryNodeId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMemoryNodeResponseBody() = default ;
    CreateMemoryNodeResponseBody(const CreateMemoryNodeResponseBody &) = default ;
    CreateMemoryNodeResponseBody(CreateMemoryNodeResponseBody &&) = default ;
    CreateMemoryNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryNodeResponseBody() = default ;
    CreateMemoryNodeResponseBody& operator=(const CreateMemoryNodeResponseBody &) = default ;
    CreateMemoryNodeResponseBody& operator=(CreateMemoryNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memoryNodeId_ == nullptr
        && return this->requestId_ == nullptr; };
    // memoryNodeId Field Functions 
    bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
    void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
    inline string memoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
    inline CreateMemoryNodeResponseBody& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMemoryNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> memoryNodeId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

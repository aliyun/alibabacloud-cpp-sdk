// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMemoryResponseBody() = default ;
    CreateMemoryResponseBody(const CreateMemoryResponseBody &) = default ;
    CreateMemoryResponseBody(CreateMemoryResponseBody &&) = default ;
    CreateMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryResponseBody() = default ;
    CreateMemoryResponseBody& operator=(const CreateMemoryResponseBody &) = default ;
    CreateMemoryResponseBody& operator=(CreateMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memoryId_ != nullptr
        && this->requestId_ != nullptr; };
    // memoryId Field Functions 
    bool hasMemoryId() const { return this->memoryId_ != nullptr;};
    void deleteMemoryId() { this->memoryId_ = nullptr;};
    inline string memoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
    inline CreateMemoryResponseBody& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> memoryId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

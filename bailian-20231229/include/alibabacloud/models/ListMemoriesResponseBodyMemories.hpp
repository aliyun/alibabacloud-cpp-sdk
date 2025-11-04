// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODYMEMORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODYMEMORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListMemoriesResponseBodyMemories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoriesResponseBodyMemories& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoriesResponseBodyMemories& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
    };
    ListMemoriesResponseBodyMemories() = default ;
    ListMemoriesResponseBodyMemories(const ListMemoriesResponseBodyMemories &) = default ;
    ListMemoriesResponseBodyMemories(ListMemoriesResponseBodyMemories &&) = default ;
    ListMemoriesResponseBodyMemories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoriesResponseBodyMemories() = default ;
    ListMemoriesResponseBodyMemories& operator=(const ListMemoriesResponseBodyMemories &) = default ;
    ListMemoriesResponseBodyMemories& operator=(ListMemoriesResponseBodyMemories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->memoryId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMemoriesResponseBodyMemories& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // memoryId Field Functions 
    bool hasMemoryId() const { return this->memoryId_ != nullptr;};
    void deleteMemoryId() { this->memoryId_ = nullptr;};
    inline string memoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
    inline ListMemoriesResponseBodyMemories& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> memoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

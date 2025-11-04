// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYNODESRESPONSEBODYMEMORYNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYNODESRESPONSEBODYMEMORYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListMemoryNodesResponseBodyMemoryNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryNodesResponseBodyMemoryNodes& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(memoryNodeId, memoryNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryNodesResponseBodyMemoryNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(memoryNodeId, memoryNodeId_);
    };
    ListMemoryNodesResponseBodyMemoryNodes() = default ;
    ListMemoryNodesResponseBodyMemoryNodes(const ListMemoryNodesResponseBodyMemoryNodes &) = default ;
    ListMemoryNodesResponseBodyMemoryNodes(ListMemoryNodesResponseBodyMemoryNodes &&) = default ;
    ListMemoryNodesResponseBodyMemoryNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryNodesResponseBodyMemoryNodes() = default ;
    ListMemoryNodesResponseBodyMemoryNodes& operator=(const ListMemoryNodesResponseBodyMemoryNodes &) = default ;
    ListMemoryNodesResponseBodyMemoryNodes& operator=(ListMemoryNodesResponseBodyMemoryNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->memoryNodeId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListMemoryNodesResponseBodyMemoryNodes& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // memoryNodeId Field Functions 
    bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
    void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
    inline string memoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
    inline ListMemoryNodesResponseBodyMemoryNodes& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> memoryNodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

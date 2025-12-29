// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotNewsWithTypeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotNewsWithTypeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(NewsType, newsType_);
      DARABONBA_PTR_TO_JSON(NewsTypes, newsTypesShrink_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotNewsWithTypeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(NewsType, newsType_);
      DARABONBA_PTR_FROM_JSON(NewsTypes, newsTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListHotNewsWithTypeShrinkRequest() = default ;
    ListHotNewsWithTypeShrinkRequest(const ListHotNewsWithTypeShrinkRequest &) = default ;
    ListHotNewsWithTypeShrinkRequest(ListHotNewsWithTypeShrinkRequest &&) = default ;
    ListHotNewsWithTypeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotNewsWithTypeShrinkRequest() = default ;
    ListHotNewsWithTypeShrinkRequest& operator=(const ListHotNewsWithTypeShrinkRequest &) = default ;
    ListHotNewsWithTypeShrinkRequest& operator=(ListHotNewsWithTypeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->current_ == nullptr && this->newsType_ == nullptr && this->newsTypesShrink_ == nullptr && this->size_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListHotNewsWithTypeShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListHotNewsWithTypeShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // newsType Field Functions 
    bool hasNewsType() const { return this->newsType_ != nullptr;};
    void deleteNewsType() { this->newsType_ = nullptr;};
    inline string getNewsType() const { DARABONBA_PTR_GET_DEFAULT(newsType_, "") };
    inline ListHotNewsWithTypeShrinkRequest& setNewsType(string newsType) { DARABONBA_PTR_SET_VALUE(newsType_, newsType) };


    // newsTypesShrink Field Functions 
    bool hasNewsTypesShrink() const { return this->newsTypesShrink_ != nullptr;};
    void deleteNewsTypesShrink() { this->newsTypesShrink_ = nullptr;};
    inline string getNewsTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(newsTypesShrink_, "") };
    inline ListHotNewsWithTypeShrinkRequest& setNewsTypesShrink(string newsTypesShrink) { DARABONBA_PTR_SET_VALUE(newsTypesShrink_, newsTypesShrink) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListHotNewsWithTypeShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> newsType_ {};
    shared_ptr<string> newsTypesShrink_ {};
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

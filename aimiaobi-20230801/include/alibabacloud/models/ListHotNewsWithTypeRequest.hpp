// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotNewsWithTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotNewsWithTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(NewsType, newsType_);
      DARABONBA_PTR_TO_JSON(NewsTypes, newsTypes_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotNewsWithTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(NewsType, newsType_);
      DARABONBA_PTR_FROM_JSON(NewsTypes, newsTypes_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListHotNewsWithTypeRequest() = default ;
    ListHotNewsWithTypeRequest(const ListHotNewsWithTypeRequest &) = default ;
    ListHotNewsWithTypeRequest(ListHotNewsWithTypeRequest &&) = default ;
    ListHotNewsWithTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotNewsWithTypeRequest() = default ;
    ListHotNewsWithTypeRequest& operator=(const ListHotNewsWithTypeRequest &) = default ;
    ListHotNewsWithTypeRequest& operator=(ListHotNewsWithTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->current_ == nullptr && return this->newsType_ == nullptr && return this->newsTypes_ == nullptr && return this->size_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListHotNewsWithTypeRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListHotNewsWithTypeRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // newsType Field Functions 
    bool hasNewsType() const { return this->newsType_ != nullptr;};
    void deleteNewsType() { this->newsType_ = nullptr;};
    inline string newsType() const { DARABONBA_PTR_GET_DEFAULT(newsType_, "") };
    inline ListHotNewsWithTypeRequest& setNewsType(string newsType) { DARABONBA_PTR_SET_VALUE(newsType_, newsType) };


    // newsTypes Field Functions 
    bool hasNewsTypes() const { return this->newsTypes_ != nullptr;};
    void deleteNewsTypes() { this->newsTypes_ = nullptr;};
    inline const vector<string> & newsTypes() const { DARABONBA_PTR_GET_CONST(newsTypes_, vector<string>) };
    inline vector<string> newsTypes() { DARABONBA_PTR_GET(newsTypes_, vector<string>) };
    inline ListHotNewsWithTypeRequest& setNewsTypes(const vector<string> & newsTypes) { DARABONBA_PTR_SET_VALUE(newsTypes_, newsTypes) };
    inline ListHotNewsWithTypeRequest& setNewsTypes(vector<string> && newsTypes) { DARABONBA_PTR_SET_RVALUE(newsTypes_, newsTypes) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListHotNewsWithTypeRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> newsType_ = nullptr;
    std::shared_ptr<vector<string>> newsTypes_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

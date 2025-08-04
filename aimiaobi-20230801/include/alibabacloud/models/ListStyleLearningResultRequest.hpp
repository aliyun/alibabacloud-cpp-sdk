// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTYLELEARNINGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTYLELEARNINGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListStyleLearningResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListStyleLearningResultRequest() = default ;
    ListStyleLearningResultRequest(const ListStyleLearningResultRequest &) = default ;
    ListStyleLearningResultRequest(ListStyleLearningResultRequest &&) = default ;
    ListStyleLearningResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStyleLearningResultRequest() = default ;
    ListStyleLearningResultRequest& operator=(const ListStyleLearningResultRequest &) = default ;
    ListStyleLearningResultRequest& operator=(ListStyleLearningResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->current_ != nullptr && this->size_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListStyleLearningResultRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListStyleLearningResultRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListStyleLearningResultRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetStyleLearningResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetStyleLearningResultRequest() = default ;
    GetStyleLearningResultRequest(const GetStyleLearningResultRequest &) = default ;
    GetStyleLearningResultRequest(GetStyleLearningResultRequest &&) = default ;
    GetStyleLearningResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStyleLearningResultRequest() = default ;
    GetStyleLearningResultRequest& operator=(const GetStyleLearningResultRequest &) = default ;
    GetStyleLearningResultRequest& operator=(GetStyleLearningResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->id_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetStyleLearningResultRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetStyleLearningResultRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

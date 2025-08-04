// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIEWPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIEWPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateViewPointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateViewPointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceDataShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateViewPointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceDataShrink_);
    };
    GenerateViewPointShrinkRequest() = default ;
    GenerateViewPointShrinkRequest(const GenerateViewPointShrinkRequest &) = default ;
    GenerateViewPointShrinkRequest(GenerateViewPointShrinkRequest &&) = default ;
    GenerateViewPointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateViewPointShrinkRequest() = default ;
    GenerateViewPointShrinkRequest& operator=(const GenerateViewPointShrinkRequest &) = default ;
    GenerateViewPointShrinkRequest& operator=(GenerateViewPointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->referenceDataShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateViewPointShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // referenceDataShrink Field Functions 
    bool hasReferenceDataShrink() const { return this->referenceDataShrink_ != nullptr;};
    void deleteReferenceDataShrink() { this->referenceDataShrink_ = nullptr;};
    inline string referenceDataShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceDataShrink_, "") };
    inline GenerateViewPointShrinkRequest& setReferenceDataShrink(string referenceDataShrink) { DARABONBA_PTR_SET_VALUE(referenceDataShrink_, referenceDataShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> referenceDataShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

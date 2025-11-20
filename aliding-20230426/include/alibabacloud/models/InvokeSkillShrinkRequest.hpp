// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(sourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(sourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    InvokeSkillShrinkRequest() = default ;
    InvokeSkillShrinkRequest(const InvokeSkillShrinkRequest &) = default ;
    InvokeSkillShrinkRequest(InvokeSkillShrinkRequest &&) = default ;
    InvokeSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeSkillShrinkRequest() = default ;
    InvokeSkillShrinkRequest& operator=(const InvokeSkillShrinkRequest &) = default ;
    InvokeSkillShrinkRequest& operator=(InvokeSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramsShrink_ == nullptr
        && return this->skillId_ == nullptr && return this->stream_ == nullptr && return this->sourceIdOfAssistantId_ == nullptr; };
    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string paramsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline InvokeSkillShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string skillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline InvokeSkillShrinkRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline InvokeSkillShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // sourceIdOfAssistantId Field Functions 
    bool hasSourceIdOfAssistantId() const { return this->sourceIdOfAssistantId_ != nullptr;};
    void deleteSourceIdOfAssistantId() { this->sourceIdOfAssistantId_ = nullptr;};
    inline string sourceIdOfAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfAssistantId_, "") };
    inline InvokeSkillShrinkRequest& setSourceIdOfAssistantId(string sourceIdOfAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfAssistantId_, sourceIdOfAssistantId) };


  protected:
    std::shared_ptr<string> paramsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<string> sourceIdOfAssistantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

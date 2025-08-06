// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeSkillRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeSkillRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    InvokeSkillRequest() = default ;
    InvokeSkillRequest(const InvokeSkillRequest &) = default ;
    InvokeSkillRequest(InvokeSkillRequest &&) = default ;
    InvokeSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeSkillRequest() = default ;
    InvokeSkillRequest& operator=(const InvokeSkillRequest &) = default ;
    InvokeSkillRequest& operator=(InvokeSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->skillId_ != nullptr && this->stream_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline InvokeSkillRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline InvokeSkillRequest& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string skillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline InvokeSkillRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline InvokeSkillRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    Darabonba::Json params_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

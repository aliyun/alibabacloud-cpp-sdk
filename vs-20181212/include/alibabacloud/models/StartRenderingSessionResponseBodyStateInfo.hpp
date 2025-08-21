// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODYSTATEINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODYSTATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionResponseBodyStateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionResponseBodyStateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionResponseBodyStateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    StartRenderingSessionResponseBodyStateInfo() = default ;
    StartRenderingSessionResponseBodyStateInfo(const StartRenderingSessionResponseBodyStateInfo &) = default ;
    StartRenderingSessionResponseBodyStateInfo(StartRenderingSessionResponseBodyStateInfo &&) = default ;
    StartRenderingSessionResponseBodyStateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionResponseBodyStateInfo() = default ;
    StartRenderingSessionResponseBodyStateInfo& operator=(const StartRenderingSessionResponseBodyStateInfo &) = default ;
    StartRenderingSessionResponseBodyStateInfo& operator=(StartRenderingSessionResponseBodyStateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->state_ != nullptr && this->updateTime_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline StartRenderingSessionResponseBodyStateInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline StartRenderingSessionResponseBodyStateInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline StartRenderingSessionResponseBodyStateInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

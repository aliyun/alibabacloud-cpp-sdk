// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCopilotHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    GetCopilotHistoryResponseBodyData() = default ;
    GetCopilotHistoryResponseBodyData(const GetCopilotHistoryResponseBodyData &) = default ;
    GetCopilotHistoryResponseBodyData(GetCopilotHistoryResponseBodyData &&) = default ;
    GetCopilotHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotHistoryResponseBodyData() = default ;
    GetCopilotHistoryResponseBodyData& operator=(const GetCopilotHistoryResponseBodyData &) = default ;
    GetCopilotHistoryResponseBodyData& operator=(GetCopilotHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->time_ == nullptr && return this->user_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetCopilotHistoryResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetCopilotHistoryResponseBodyData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetCopilotHistoryResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetAgentConversationTimelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentConversationTimelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(after, after_);
      DARABONBA_PTR_TO_JSON(includeImageData, includeImageData_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentConversationTimelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(after, after_);
      DARABONBA_PTR_FROM_JSON(includeImageData, includeImageData_);
    };
    GetAgentConversationTimelineRequest() = default ;
    GetAgentConversationTimelineRequest(const GetAgentConversationTimelineRequest &) = default ;
    GetAgentConversationTimelineRequest(GetAgentConversationTimelineRequest &&) = default ;
    GetAgentConversationTimelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentConversationTimelineRequest() = default ;
    GetAgentConversationTimelineRequest& operator=(const GetAgentConversationTimelineRequest &) = default ;
    GetAgentConversationTimelineRequest& operator=(GetAgentConversationTimelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->after_ == nullptr
        && this->includeImageData_ == nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline int64_t getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, 0L) };
    inline GetAgentConversationTimelineRequest& setAfter(int64_t after) { DARABONBA_PTR_SET_VALUE(after_, after) };


    // includeImageData Field Functions 
    bool hasIncludeImageData() const { return this->includeImageData_ != nullptr;};
    void deleteIncludeImageData() { this->includeImageData_ = nullptr;};
    inline bool getIncludeImageData() const { DARABONBA_PTR_GET_DEFAULT(includeImageData_, false) };
    inline GetAgentConversationTimelineRequest& setIncludeImageData(bool includeImageData) { DARABONBA_PTR_SET_VALUE(includeImageData_, includeImageData) };


  protected:
    shared_ptr<int64_t> after_ {};
    shared_ptr<bool> includeImageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif

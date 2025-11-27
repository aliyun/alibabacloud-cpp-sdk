// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Story.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetStoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Story, story_);
    };
    friend void from_json(const Darabonba::Json& j, GetStoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Story, story_);
    };
    GetStoryResponseBody() = default ;
    GetStoryResponseBody(const GetStoryResponseBody &) = default ;
    GetStoryResponseBody(GetStoryResponseBody &&) = default ;
    GetStoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStoryResponseBody() = default ;
    GetStoryResponseBody& operator=(const GetStoryResponseBody &) = default ;
    GetStoryResponseBody& operator=(GetStoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->story_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // story Field Functions 
    bool hasStory() const { return this->story_ != nullptr;};
    void deleteStory() { this->story_ = nullptr;};
    inline const Story & story() const { DARABONBA_PTR_GET_CONST(story_, Story) };
    inline Story story() { DARABONBA_PTR_GET(story_, Story) };
    inline GetStoryResponseBody& setStory(const Story & story) { DARABONBA_PTR_SET_VALUE(story_, story) };
    inline GetStoryResponseBody& setStory(Story && story) { DARABONBA_PTR_SET_RVALUE(story_, story) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the story.
    std::shared_ptr<Story> story_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERACTTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTERACTTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class InteractTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InteractTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(relatedImages, relatedImages_);
      DARABONBA_PTR_TO_JSON(relatedVideos, relatedVideos_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InteractTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(relatedImages, relatedImages_);
      DARABONBA_PTR_FROM_JSON(relatedVideos, relatedVideos_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InteractTextResponseBody() = default ;
    InteractTextResponseBody(const InteractTextResponseBody &) = default ;
    InteractTextResponseBody(InteractTextResponseBody &&) = default ;
    InteractTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InteractTextResponseBody() = default ;
    InteractTextResponseBody& operator=(const InteractTextResponseBody &) = default ;
    InteractTextResponseBody& operator=(InteractTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->index_ == nullptr && return this->message_ == nullptr && return this->relatedImages_ == nullptr && return this->relatedVideos_ == nullptr && return this->sessionId_ == nullptr
        && return this->type_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline InteractTextResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline InteractTextResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InteractTextResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relatedImages Field Functions 
    bool hasRelatedImages() const { return this->relatedImages_ != nullptr;};
    void deleteRelatedImages() { this->relatedImages_ = nullptr;};
    inline const vector<string> & relatedImages() const { DARABONBA_PTR_GET_CONST(relatedImages_, vector<string>) };
    inline vector<string> relatedImages() { DARABONBA_PTR_GET(relatedImages_, vector<string>) };
    inline InteractTextResponseBody& setRelatedImages(const vector<string> & relatedImages) { DARABONBA_PTR_SET_VALUE(relatedImages_, relatedImages) };
    inline InteractTextResponseBody& setRelatedImages(vector<string> && relatedImages) { DARABONBA_PTR_SET_RVALUE(relatedImages_, relatedImages) };


    // relatedVideos Field Functions 
    bool hasRelatedVideos() const { return this->relatedVideos_ != nullptr;};
    void deleteRelatedVideos() { this->relatedVideos_ = nullptr;};
    inline const vector<string> & relatedVideos() const { DARABONBA_PTR_GET_CONST(relatedVideos_, vector<string>) };
    inline vector<string> relatedVideos() { DARABONBA_PTR_GET(relatedVideos_, vector<string>) };
    inline InteractTextResponseBody& setRelatedVideos(const vector<string> & relatedVideos) { DARABONBA_PTR_SET_VALUE(relatedVideos_, relatedVideos) };
    inline InteractTextResponseBody& setRelatedVideos(vector<string> && relatedVideos) { DARABONBA_PTR_SET_RVALUE(relatedVideos_, relatedVideos) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InteractTextResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline InteractTextResponseBody& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<string>> relatedImages_ = nullptr;
    std::shared_ptr<vector<string>> relatedVideos_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

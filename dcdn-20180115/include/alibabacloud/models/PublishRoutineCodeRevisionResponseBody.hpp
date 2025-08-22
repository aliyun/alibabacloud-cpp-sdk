// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PublishRoutineCodeRevisionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeRevisionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeRevisionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublishRoutineCodeRevisionResponseBody() = default ;
    PublishRoutineCodeRevisionResponseBody(const PublishRoutineCodeRevisionResponseBody &) = default ;
    PublishRoutineCodeRevisionResponseBody(PublishRoutineCodeRevisionResponseBody &&) = default ;
    PublishRoutineCodeRevisionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeRevisionResponseBody() = default ;
    PublishRoutineCodeRevisionResponseBody& operator=(const PublishRoutineCodeRevisionResponseBody &) = default ;
    PublishRoutineCodeRevisionResponseBody& operator=(PublishRoutineCodeRevisionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & content() const { DARABONBA_GET(content_) };
    Darabonba::Json & content() { DARABONBA_GET(content_) };
    inline PublishRoutineCodeRevisionResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline PublishRoutineCodeRevisionResponseBody& setContent(Darabonba::Json & content) { DARABONBA_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishRoutineCodeRevisionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The version of the routine code that is published to the specified environment.
    Darabonba::Json content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

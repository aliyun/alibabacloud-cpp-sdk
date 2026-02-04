// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSTAGINGROUTINECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSTAGINGROUTINECODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UploadStagingRoutineCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadStagingRoutineCodeResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadStagingRoutineCodeResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UploadStagingRoutineCodeResponseBody() = default ;
    UploadStagingRoutineCodeResponseBody(const UploadStagingRoutineCodeResponseBody &) = default ;
    UploadStagingRoutineCodeResponseBody(UploadStagingRoutineCodeResponseBody &&) = default ;
    UploadStagingRoutineCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadStagingRoutineCodeResponseBody() = default ;
    UploadStagingRoutineCodeResponseBody& operator=(const UploadStagingRoutineCodeResponseBody &) = default ;
    UploadStagingRoutineCodeResponseBody& operator=(UploadStagingRoutineCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline UploadStagingRoutineCodeResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline UploadStagingRoutineCodeResponseBody& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadStagingRoutineCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parameters required by the code.
    Darabonba::Json content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

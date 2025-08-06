// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIVideoTagResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoTagResult, videoTagResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoTagResult, videoTagResult_);
    };
    GetAIVideoTagResultResponseBody() = default ;
    GetAIVideoTagResultResponseBody(const GetAIVideoTagResultResponseBody &) = default ;
    GetAIVideoTagResultResponseBody(GetAIVideoTagResultResponseBody &&) = default ;
    GetAIVideoTagResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBody() = default ;
    GetAIVideoTagResultResponseBody& operator=(const GetAIVideoTagResultResponseBody &) = default ;
    GetAIVideoTagResultResponseBody& operator=(GetAIVideoTagResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->videoTagResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIVideoTagResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoTagResult Field Functions 
    bool hasVideoTagResult() const { return this->videoTagResult_ != nullptr;};
    void deleteVideoTagResult() { this->videoTagResult_ = nullptr;};
    inline const GetAIVideoTagResultResponseBodyVideoTagResult & videoTagResult() const { DARABONBA_PTR_GET_CONST(videoTagResult_, GetAIVideoTagResultResponseBodyVideoTagResult) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult videoTagResult() { DARABONBA_PTR_GET(videoTagResult_, GetAIVideoTagResultResponseBodyVideoTagResult) };
    inline GetAIVideoTagResultResponseBody& setVideoTagResult(const GetAIVideoTagResultResponseBodyVideoTagResult & videoTagResult) { DARABONBA_PTR_SET_VALUE(videoTagResult_, videoTagResult) };
    inline GetAIVideoTagResultResponseBody& setVideoTagResult(GetAIVideoTagResultResponseBodyVideoTagResult && videoTagResult) { DARABONBA_PTR_SET_RVALUE(videoTagResult_, videoTagResult) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<GetAIVideoTagResultResponseBodyVideoTagResult> videoTagResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

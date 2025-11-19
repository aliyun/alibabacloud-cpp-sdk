// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroup, transcodeTemplateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroup, transcodeTemplateGroup_);
    };
    GetTranscodeTemplateGroupResponseBody() = default ;
    GetTranscodeTemplateGroupResponseBody(const GetTranscodeTemplateGroupResponseBody &) = default ;
    GetTranscodeTemplateGroupResponseBody(GetTranscodeTemplateGroupResponseBody &&) = default ;
    GetTranscodeTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTemplateGroupResponseBody() = default ;
    GetTranscodeTemplateGroupResponseBody& operator=(const GetTranscodeTemplateGroupResponseBody &) = default ;
    GetTranscodeTemplateGroupResponseBody& operator=(GetTranscodeTemplateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transcodeTemplateGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTemplateGroup Field Functions 
    bool hasTranscodeTemplateGroup() const { return this->transcodeTemplateGroup_ != nullptr;};
    void deleteTranscodeTemplateGroup() { this->transcodeTemplateGroup_ = nullptr;};
    inline const GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup & transcodeTemplateGroup() const { DARABONBA_PTR_GET_CONST(transcodeTemplateGroup_, GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup transcodeTemplateGroup() { DARABONBA_PTR_GET(transcodeTemplateGroup_, GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroup(const GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup & transcodeTemplateGroup) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroup_, transcodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroup(GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup && transcodeTemplateGroup) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateGroup_, transcodeTemplateGroup) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the transcoding template group.
    std::shared_ptr<GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroup> transcodeTemplateGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

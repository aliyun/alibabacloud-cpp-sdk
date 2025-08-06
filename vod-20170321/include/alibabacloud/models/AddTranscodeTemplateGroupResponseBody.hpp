// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddTranscodeTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    AddTranscodeTemplateGroupResponseBody() = default ;
    AddTranscodeTemplateGroupResponseBody(const AddTranscodeTemplateGroupResponseBody &) = default ;
    AddTranscodeTemplateGroupResponseBody(AddTranscodeTemplateGroupResponseBody &&) = default ;
    AddTranscodeTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTranscodeTemplateGroupResponseBody() = default ;
    AddTranscodeTemplateGroupResponseBody& operator=(const AddTranscodeTemplateGroupResponseBody &) = default ;
    AddTranscodeTemplateGroupResponseBody& operator=(AddTranscodeTemplateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transcodeTemplateGroupId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddTranscodeTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline AddTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

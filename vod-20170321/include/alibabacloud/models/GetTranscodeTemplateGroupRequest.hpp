// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    GetTranscodeTemplateGroupRequest() = default ;
    GetTranscodeTemplateGroupRequest(const GetTranscodeTemplateGroupRequest &) = default ;
    GetTranscodeTemplateGroupRequest(GetTranscodeTemplateGroupRequest &&) = default ;
    GetTranscodeTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTemplateGroupRequest() = default ;
    GetTranscodeTemplateGroupRequest& operator=(const GetTranscodeTemplateGroupRequest &) = default ;
    GetTranscodeTemplateGroupRequest& operator=(GetTranscodeTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transcodeTemplateGroupId_ == nullptr; };
    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline GetTranscodeTemplateGroupRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


  protected:
    // The ID of the transcoding template group.
    // 
    // This parameter is required.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

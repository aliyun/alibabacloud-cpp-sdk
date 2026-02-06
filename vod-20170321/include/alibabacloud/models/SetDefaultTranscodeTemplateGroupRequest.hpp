// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTTRANSCODETEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTTRANSCODETEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetDefaultTranscodeTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    SetDefaultTranscodeTemplateGroupRequest() = default ;
    SetDefaultTranscodeTemplateGroupRequest(const SetDefaultTranscodeTemplateGroupRequest &) = default ;
    SetDefaultTranscodeTemplateGroupRequest(SetDefaultTranscodeTemplateGroupRequest &&) = default ;
    SetDefaultTranscodeTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultTranscodeTemplateGroupRequest() = default ;
    SetDefaultTranscodeTemplateGroupRequest& operator=(const SetDefaultTranscodeTemplateGroupRequest &) = default ;
    SetDefaultTranscodeTemplateGroupRequest& operator=(SetDefaultTranscodeTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transcodeTemplateGroupId_ == nullptr; };
    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline SetDefaultTranscodeTemplateGroupRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


  protected:
    // The ID of the transcoding template group.
    // 
    // This parameter is required.
    shared_ptr<string> transcodeTemplateGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

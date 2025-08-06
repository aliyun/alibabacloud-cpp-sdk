// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteTranscodeTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDelGroup, forceDelGroup_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateIds, transcodeTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDelGroup, forceDelGroup_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateIds, transcodeTemplateIds_);
    };
    DeleteTranscodeTemplateGroupRequest() = default ;
    DeleteTranscodeTemplateGroupRequest(const DeleteTranscodeTemplateGroupRequest &) = default ;
    DeleteTranscodeTemplateGroupRequest(DeleteTranscodeTemplateGroupRequest &&) = default ;
    DeleteTranscodeTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTranscodeTemplateGroupRequest() = default ;
    DeleteTranscodeTemplateGroupRequest& operator=(const DeleteTranscodeTemplateGroupRequest &) = default ;
    DeleteTranscodeTemplateGroupRequest& operator=(DeleteTranscodeTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forceDelGroup_ != nullptr
        && this->transcodeTemplateGroupId_ != nullptr && this->transcodeTemplateIds_ != nullptr; };
    // forceDelGroup Field Functions 
    bool hasForceDelGroup() const { return this->forceDelGroup_ != nullptr;};
    void deleteForceDelGroup() { this->forceDelGroup_ = nullptr;};
    inline string forceDelGroup() const { DARABONBA_PTR_GET_DEFAULT(forceDelGroup_, "") };
    inline DeleteTranscodeTemplateGroupRequest& setForceDelGroup(string forceDelGroup) { DARABONBA_PTR_SET_VALUE(forceDelGroup_, forceDelGroup) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline DeleteTranscodeTemplateGroupRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // transcodeTemplateIds Field Functions 
    bool hasTranscodeTemplateIds() const { return this->transcodeTemplateIds_ != nullptr;};
    void deleteTranscodeTemplateIds() { this->transcodeTemplateIds_ = nullptr;};
    inline string transcodeTemplateIds() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateIds_, "") };
    inline DeleteTranscodeTemplateGroupRequest& setTranscodeTemplateIds(string transcodeTemplateIds) { DARABONBA_PTR_SET_VALUE(transcodeTemplateIds_, transcodeTemplateIds) };


  protected:
    // Specifies whether to forcibly delete the transcoding template group. Valid values:
    // 
    // *   **true**: deletes the transcoding template group and all the transcoding templates in the group.
    // *   **false** (default): deletes only the specified transcoding templates from the transcoding template group.
    std::shared_ptr<string> forceDelGroup_ = nullptr;
    // The ID of the transcoding template group.
    // 
    // This parameter is required.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // The IDs of the transcoding templates that you want to delete.
    // 
    // *   Separate multiple IDs with commas (,).
    // *   You can specify a maximum of 10 IDs.
    // *   This parameter is required if you set ForceDelGroup to false or leave ForceDelGroup empty.
    std::shared_ptr<string> transcodeTemplateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

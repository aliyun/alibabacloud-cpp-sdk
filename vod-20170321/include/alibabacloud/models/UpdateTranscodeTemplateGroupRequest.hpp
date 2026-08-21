// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSCODETEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSCODETEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateTranscodeTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateList, transcodeTemplateList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateList, transcodeTemplateList_);
    };
    UpdateTranscodeTemplateGroupRequest() = default ;
    UpdateTranscodeTemplateGroupRequest(const UpdateTranscodeTemplateGroupRequest &) = default ;
    UpdateTranscodeTemplateGroupRequest(UpdateTranscodeTemplateGroupRequest &&) = default ;
    UpdateTranscodeTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTranscodeTemplateGroupRequest() = default ;
    UpdateTranscodeTemplateGroupRequest& operator=(const UpdateTranscodeTemplateGroupRequest &) = default ;
    UpdateTranscodeTemplateGroupRequest& operator=(UpdateTranscodeTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locked_ == nullptr
        && this->name_ == nullptr && this->transcodeTemplateGroupId_ == nullptr && this->transcodeTemplateList_ == nullptr; };
    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline string getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, "") };
    inline UpdateTranscodeTemplateGroupRequest& setLocked(string locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTranscodeTemplateGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline UpdateTranscodeTemplateGroupRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // transcodeTemplateList Field Functions 
    bool hasTranscodeTemplateList() const { return this->transcodeTemplateList_ != nullptr;};
    void deleteTranscodeTemplateList() { this->transcodeTemplateList_ = nullptr;};
    inline string getTranscodeTemplateList() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateList_, "") };
    inline UpdateTranscodeTemplateGroupRequest& setTranscodeTemplateList(string transcodeTemplateList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateList_, transcodeTemplateList) };


  protected:
    // The lock state of the template group. Valid values:
    // 
    // - **Enabled**: locked. A locked template group cannot be modified.
    // - **Disabled** (default): unlocked.
    // 
    // Default value: **Disabled**. If you specify this parameter, the lock state of the template group is changed, while the name and configurations of the transcoding template group remain unchanged.
    shared_ptr<string> locked_ {};
    // The name of the transcoding template group.
    // 
    // - The name can be up to 128 bytes in length.
    // - The name is encoded in UTF-8.
    shared_ptr<string> name_ {};
    // The ID of the transcoding template group.
    // 
    // This parameter is required.
    shared_ptr<string> transcodeTemplateGroupId_ {};
    // The transcoding template configurations (a JSON string). For more information about the parameter structure, see [TranscodeTemplate](~~52839#title-9mb-8o2-uu6~~).
    shared_ptr<string> transcodeTemplateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

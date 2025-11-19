// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRANSCODETEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTRANSCODETEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddTranscodeTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateList, transcodeTemplateList_);
    };
    friend void from_json(const Darabonba::Json& j, AddTranscodeTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateList, transcodeTemplateList_);
    };
    AddTranscodeTemplateGroupRequest() = default ;
    AddTranscodeTemplateGroupRequest(const AddTranscodeTemplateGroupRequest &) = default ;
    AddTranscodeTemplateGroupRequest(AddTranscodeTemplateGroupRequest &&) = default ;
    AddTranscodeTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTranscodeTemplateGroupRequest() = default ;
    AddTranscodeTemplateGroupRequest& operator=(const AddTranscodeTemplateGroupRequest &) = default ;
    AddTranscodeTemplateGroupRequest& operator=(AddTranscodeTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->name_ == nullptr && return this->transcodeTemplateGroupId_ == nullptr && return this->transcodeTemplateList_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddTranscodeTemplateGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTranscodeTemplateGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline AddTranscodeTemplateGroupRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // transcodeTemplateList Field Functions 
    bool hasTranscodeTemplateList() const { return this->transcodeTemplateList_ != nullptr;};
    void deleteTranscodeTemplateList() { this->transcodeTemplateList_ = nullptr;};
    inline string transcodeTemplateList() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateList_, "") };
    inline AddTranscodeTemplateGroupRequest& setTranscodeTemplateList(string transcodeTemplateList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateList_, transcodeTemplateList) };


  protected:
    // The application ID. Default value: **app-1000000**. For more information, see [Use the multi-application service](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the transcoding template group.
    // 
    // *   The name can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    // 
    // > You must specify TranscodeTemplateGroupId or Name in the request.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the transcoding template group. If a transcoding template group ID is specified, you can add transcoding templates to the template group.
    // 
    // > You must specify TranscodeTemplateGroupId or Name in the request.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // The configurations of the transcoding template. The value is a string in JSON format. For more information about the data structure, see [TranscodeTemplate](https://help.aliyun.com/document_detail/52839.html).
    // 
    // > *   If you do not specify this parameter, the transcoding job cannot be automatically created after you upload a video.
    // > *   If you do not need to set Width or Height, do not specify the corresponding parameter. You cannot set the value to an empty string, such as "Height":"".
    std::shared_ptr<string> transcodeTemplateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

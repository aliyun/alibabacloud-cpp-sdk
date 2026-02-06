// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateVideoInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateContent, updateContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateContent, updateContent_);
    };
    UpdateVideoInfosRequest() = default ;
    UpdateVideoInfosRequest(const UpdateVideoInfosRequest &) = default ;
    UpdateVideoInfosRequest(UpdateVideoInfosRequest &&) = default ;
    UpdateVideoInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoInfosRequest() = default ;
    UpdateVideoInfosRequest& operator=(const UpdateVideoInfosRequest &) = default ;
    UpdateVideoInfosRequest& operator=(UpdateVideoInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateContent_ == nullptr; };
    // updateContent Field Functions 
    bool hasUpdateContent() const { return this->updateContent_ != nullptr;};
    void deleteUpdateContent() { this->updateContent_ = nullptr;};
    inline string getUpdateContent() const { DARABONBA_PTR_GET_DEFAULT(updateContent_, "") };
    inline UpdateVideoInfosRequest& setUpdateContent(string updateContent) { DARABONBA_PTR_SET_VALUE(updateContent_, updateContent) };


  protected:
    // The new information about audios or videos. You can modify the information about up to 20 audios or videos at a time. Separate multiple audios or videos with commas (,). When you modify the information exceed 20 audios or videos at a time, the update will fail with an error code **CountExceededMax**.
    // 
    // The value is a JSON string. For more information, see the **UpdateContent** section of this topic.
    // 
    // This parameter is required.
    shared_ptr<string> updateContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

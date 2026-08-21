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
    // The update content. You can modify the information about up to 20 audio and video files at a time. Separate multiple audio and video object information entries with commas (,). If you specify more than 20 objects, the update is failed and the `CountExceededMax` error is returned.
    // The value is a JSON character string. For more details about the parameters, see the **UpdateContent** table below.
    // 
    // This parameter is required.
    shared_ptr<string> updateContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

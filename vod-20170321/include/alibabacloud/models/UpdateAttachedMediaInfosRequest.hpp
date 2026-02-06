// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTACHEDMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTACHEDMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateAttachedMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttachedMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateContent, updateContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttachedMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateContent, updateContent_);
    };
    UpdateAttachedMediaInfosRequest() = default ;
    UpdateAttachedMediaInfosRequest(const UpdateAttachedMediaInfosRequest &) = default ;
    UpdateAttachedMediaInfosRequest(UpdateAttachedMediaInfosRequest &&) = default ;
    UpdateAttachedMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttachedMediaInfosRequest() = default ;
    UpdateAttachedMediaInfosRequest& operator=(const UpdateAttachedMediaInfosRequest &) = default ;
    UpdateAttachedMediaInfosRequest& operator=(UpdateAttachedMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateContent_ == nullptr; };
    // updateContent Field Functions 
    bool hasUpdateContent() const { return this->updateContent_ != nullptr;};
    void deleteUpdateContent() { this->updateContent_ = nullptr;};
    inline string getUpdateContent() const { DARABONBA_PTR_GET_DEFAULT(updateContent_, "") };
    inline UpdateAttachedMediaInfosRequest& setUpdateContent(string updateContent) { DARABONBA_PTR_SET_VALUE(updateContent_, updateContent) };


  protected:
    // The new information about the one or more images. You can modify the information about up to 20 auxiliary media assets at a time. For more information, see the **UpdateContent** section of this topic.
    // 
    // > *   You cannot specify emojis for `Title`, `Description`, or `Tags`.
    // > *   The specific parameter of a video is updated only when a new value is passed in the parameter.
    // 
    // This parameter is required.
    shared_ptr<string> updateContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

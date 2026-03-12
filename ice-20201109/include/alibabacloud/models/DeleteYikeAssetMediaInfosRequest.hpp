// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEYIKEASSETMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEYIKEASSETMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteYikeAssetMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteYikeAssetMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicDelete, logicDelete_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteYikeAssetMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicDelete, logicDelete_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    DeleteYikeAssetMediaInfosRequest() = default ;
    DeleteYikeAssetMediaInfosRequest(const DeleteYikeAssetMediaInfosRequest &) = default ;
    DeleteYikeAssetMediaInfosRequest(DeleteYikeAssetMediaInfosRequest &&) = default ;
    DeleteYikeAssetMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteYikeAssetMediaInfosRequest() = default ;
    DeleteYikeAssetMediaInfosRequest& operator=(const DeleteYikeAssetMediaInfosRequest &) = default ;
    DeleteYikeAssetMediaInfosRequest& operator=(DeleteYikeAssetMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicDelete_ == nullptr
        && this->mediaIds_ == nullptr; };
    // logicDelete Field Functions 
    bool hasLogicDelete() const { return this->logicDelete_ != nullptr;};
    void deleteLogicDelete() { this->logicDelete_ = nullptr;};
    inline bool getLogicDelete() const { DARABONBA_PTR_GET_DEFAULT(logicDelete_, false) };
    inline DeleteYikeAssetMediaInfosRequest& setLogicDelete(bool logicDelete) { DARABONBA_PTR_SET_VALUE(logicDelete_, logicDelete) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline DeleteYikeAssetMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    shared_ptr<bool> logicDelete_ {};
    shared_ptr<string> mediaIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

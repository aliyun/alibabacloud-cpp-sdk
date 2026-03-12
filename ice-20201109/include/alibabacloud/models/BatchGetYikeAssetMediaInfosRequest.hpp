// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETYIKEASSETMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETYIKEASSETMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetYikeAssetMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetYikeAssetMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetYikeAssetMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    BatchGetYikeAssetMediaInfosRequest() = default ;
    BatchGetYikeAssetMediaInfosRequest(const BatchGetYikeAssetMediaInfosRequest &) = default ;
    BatchGetYikeAssetMediaInfosRequest(BatchGetYikeAssetMediaInfosRequest &&) = default ;
    BatchGetYikeAssetMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetYikeAssetMediaInfosRequest() = default ;
    BatchGetYikeAssetMediaInfosRequest& operator=(const BatchGetYikeAssetMediaInfosRequest &) = default ;
    BatchGetYikeAssetMediaInfosRequest& operator=(BatchGetYikeAssetMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline BatchGetYikeAssetMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    shared_ptr<string> mediaIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

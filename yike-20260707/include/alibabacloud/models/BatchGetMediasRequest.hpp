// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class BatchGetMediasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    BatchGetMediasRequest() = default ;
    BatchGetMediasRequest(const BatchGetMediasRequest &) = default ;
    BatchGetMediasRequest(BatchGetMediasRequest &&) = default ;
    BatchGetMediasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediasRequest() = default ;
    BatchGetMediasRequest& operator=(const BatchGetMediasRequest &) = default ;
    BatchGetMediasRequest& operator=(BatchGetMediasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->mediaIds_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline BatchGetMediasRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline BatchGetMediasRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    shared_ptr<int64_t> authTimeout_ {};
    shared_ptr<string> mediaIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif

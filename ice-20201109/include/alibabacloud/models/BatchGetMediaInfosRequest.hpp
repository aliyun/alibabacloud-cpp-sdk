// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionType, additionType_);
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionType, additionType_);
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    BatchGetMediaInfosRequest() = default ;
    BatchGetMediaInfosRequest(const BatchGetMediaInfosRequest &) = default ;
    BatchGetMediaInfosRequest(BatchGetMediaInfosRequest &&) = default ;
    BatchGetMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosRequest() = default ;
    BatchGetMediaInfosRequest& operator=(const BatchGetMediaInfosRequest &) = default ;
    BatchGetMediaInfosRequest& operator=(BatchGetMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionType_ != nullptr
        && this->authTimeout_ != nullptr && this->mediaIds_ != nullptr; };
    // additionType Field Functions 
    bool hasAdditionType() const { return this->additionType_ != nullptr;};
    void deleteAdditionType() { this->additionType_ = nullptr;};
    inline string additionType() const { DARABONBA_PTR_GET_DEFAULT(additionType_, "") };
    inline BatchGetMediaInfosRequest& setAdditionType(string additionType) { DARABONBA_PTR_SET_VALUE(additionType_, additionType) };


    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline BatchGetMediaInfosRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline BatchGetMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    // The additional information that you want to query about the media assets. By default, only BasicInfo is returned. The following additional information can be queried:
    // 
    // \\- FileInfo
    // 
    // \\- DynamicMetaData
    std::shared_ptr<string> additionType_ = nullptr;
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The IDs of the media assets that you want to query. Separate the IDs with commas (,).
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

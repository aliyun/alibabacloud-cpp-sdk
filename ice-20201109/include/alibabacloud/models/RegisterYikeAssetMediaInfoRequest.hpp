// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERYIKEASSETMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERYIKEASSETMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class RegisterYikeAssetMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterYikeAssetMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterYikeAssetMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
    };
    RegisterYikeAssetMediaInfoRequest() = default ;
    RegisterYikeAssetMediaInfoRequest(const RegisterYikeAssetMediaInfoRequest &) = default ;
    RegisterYikeAssetMediaInfoRequest(RegisterYikeAssetMediaInfoRequest &&) = default ;
    RegisterYikeAssetMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterYikeAssetMediaInfoRequest() = default ;
    RegisterYikeAssetMediaInfoRequest& operator=(const RegisterYikeAssetMediaInfoRequest &) = default ;
    RegisterYikeAssetMediaInfoRequest& operator=(RegisterYikeAssetMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && this->inputURL_ == nullptr && this->mediaType_ == nullptr && this->productionId_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline RegisterYikeAssetMediaInfoRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline RegisterYikeAssetMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RegisterYikeAssetMediaInfoRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline RegisterYikeAssetMediaInfoRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


  protected:
    shared_ptr<string> folderId_ {};
    // This parameter is required.
    shared_ptr<string> inputURL_ {};
    // This parameter is required.
    shared_ptr<string> mediaType_ {};
    shared_ptr<string> productionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

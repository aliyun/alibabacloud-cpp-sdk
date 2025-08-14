// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingAsset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchCreateVodPackagingAssetResponseBodyResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetResponseBodyResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetResponseBodyResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    BatchCreateVodPackagingAssetResponseBodyResultList() = default ;
    BatchCreateVodPackagingAssetResponseBodyResultList(const BatchCreateVodPackagingAssetResponseBodyResultList &) = default ;
    BatchCreateVodPackagingAssetResponseBodyResultList(BatchCreateVodPackagingAssetResponseBodyResultList &&) = default ;
    BatchCreateVodPackagingAssetResponseBodyResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetResponseBodyResultList() = default ;
    BatchCreateVodPackagingAssetResponseBodyResultList& operator=(const BatchCreateVodPackagingAssetResponseBodyResultList &) = default ;
    BatchCreateVodPackagingAssetResponseBodyResultList& operator=(BatchCreateVodPackagingAssetResponseBodyResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asset_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr; };
    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline const Models::VodPackagingAsset & asset() const { DARABONBA_PTR_GET_CONST(asset_, Models::VodPackagingAsset) };
    inline Models::VodPackagingAsset asset() { DARABONBA_PTR_GET(asset_, Models::VodPackagingAsset) };
    inline BatchCreateVodPackagingAssetResponseBodyResultList& setAsset(const Models::VodPackagingAsset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
    inline BatchCreateVodPackagingAssetResponseBodyResultList& setAsset(Models::VodPackagingAsset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchCreateVodPackagingAssetResponseBodyResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCreateVodPackagingAssetResponseBodyResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The information about the ingested asset.
    std::shared_ptr<Models::VodPackagingAsset> asset_ = nullptr;
    // The error code for failed ingestion.
    std::shared_ptr<string> code_ = nullptr;
    // The error message for failed ingestion.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

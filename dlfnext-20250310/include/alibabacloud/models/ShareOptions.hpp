// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHAREOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_SHAREOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ShareOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShareOptions& obj) { 
      DARABONBA_PTR_TO_JSON(catalogSizeLimit, catalogSizeLimit_);
      DARABONBA_PTR_TO_JSON(receiverSizeLimit, receiverSizeLimit_);
      DARABONBA_PTR_TO_JSON(shareResourceSizeLimit, shareResourceSizeLimit_);
      DARABONBA_PTR_TO_JSON(shareSizeLimit, shareSizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ShareOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogSizeLimit, catalogSizeLimit_);
      DARABONBA_PTR_FROM_JSON(receiverSizeLimit, receiverSizeLimit_);
      DARABONBA_PTR_FROM_JSON(shareResourceSizeLimit, shareResourceSizeLimit_);
      DARABONBA_PTR_FROM_JSON(shareSizeLimit, shareSizeLimit_);
    };
    ShareOptions() = default ;
    ShareOptions(const ShareOptions &) = default ;
    ShareOptions(ShareOptions &&) = default ;
    ShareOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShareOptions() = default ;
    ShareOptions& operator=(const ShareOptions &) = default ;
    ShareOptions& operator=(ShareOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogSizeLimit_ == nullptr
        && this->receiverSizeLimit_ == nullptr && this->shareResourceSizeLimit_ == nullptr && this->shareSizeLimit_ == nullptr; };
    // catalogSizeLimit Field Functions 
    bool hasCatalogSizeLimit() const { return this->catalogSizeLimit_ != nullptr;};
    void deleteCatalogSizeLimit() { this->catalogSizeLimit_ = nullptr;};
    inline int32_t getCatalogSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(catalogSizeLimit_, 0) };
    inline ShareOptions& setCatalogSizeLimit(int32_t catalogSizeLimit) { DARABONBA_PTR_SET_VALUE(catalogSizeLimit_, catalogSizeLimit) };


    // receiverSizeLimit Field Functions 
    bool hasReceiverSizeLimit() const { return this->receiverSizeLimit_ != nullptr;};
    void deleteReceiverSizeLimit() { this->receiverSizeLimit_ = nullptr;};
    inline int32_t getReceiverSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(receiverSizeLimit_, 0) };
    inline ShareOptions& setReceiverSizeLimit(int32_t receiverSizeLimit) { DARABONBA_PTR_SET_VALUE(receiverSizeLimit_, receiverSizeLimit) };


    // shareResourceSizeLimit Field Functions 
    bool hasShareResourceSizeLimit() const { return this->shareResourceSizeLimit_ != nullptr;};
    void deleteShareResourceSizeLimit() { this->shareResourceSizeLimit_ = nullptr;};
    inline int32_t getShareResourceSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(shareResourceSizeLimit_, 0) };
    inline ShareOptions& setShareResourceSizeLimit(int32_t shareResourceSizeLimit) { DARABONBA_PTR_SET_VALUE(shareResourceSizeLimit_, shareResourceSizeLimit) };


    // shareSizeLimit Field Functions 
    bool hasShareSizeLimit() const { return this->shareSizeLimit_ != nullptr;};
    void deleteShareSizeLimit() { this->shareSizeLimit_ = nullptr;};
    inline int32_t getShareSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(shareSizeLimit_, 0) };
    inline ShareOptions& setShareSizeLimit(int32_t shareSizeLimit) { DARABONBA_PTR_SET_VALUE(shareSizeLimit_, shareSizeLimit) };


  protected:
    shared_ptr<int32_t> catalogSizeLimit_ {};
    shared_ptr<int32_t> receiverSizeLimit_ {};
    shared_ptr<int32_t> shareResourceSizeLimit_ {};
    shared_ptr<int32_t> shareSizeLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

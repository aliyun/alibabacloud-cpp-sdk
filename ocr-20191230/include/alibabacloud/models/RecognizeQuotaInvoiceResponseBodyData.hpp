// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQUOTAINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQUOTAINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeQuotaInvoiceResponseBodyDataContent.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQuotaInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQuotaInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(KeyValueInfos, keyValueInfos_);
      DARABONBA_PTR_TO_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_TO_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQuotaInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(KeyValueInfos, keyValueInfos_);
      DARABONBA_PTR_FROM_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_FROM_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeQuotaInvoiceResponseBodyData() = default ;
    RecognizeQuotaInvoiceResponseBodyData(const RecognizeQuotaInvoiceResponseBodyData &) = default ;
    RecognizeQuotaInvoiceResponseBodyData(RecognizeQuotaInvoiceResponseBodyData &&) = default ;
    RecognizeQuotaInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQuotaInvoiceResponseBodyData() = default ;
    RecognizeQuotaInvoiceResponseBodyData& operator=(const RecognizeQuotaInvoiceResponseBodyData &) = default ;
    RecognizeQuotaInvoiceResponseBodyData& operator=(RecognizeQuotaInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->content_ == nullptr && return this->height_ == nullptr && return this->keyValueInfos_ == nullptr && return this->orgHeight_ == nullptr && return this->orgWidth_ == nullptr
        && return this->width_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline RecognizeQuotaInvoiceResponseBodyData& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::RecognizeQuotaInvoiceResponseBodyDataContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::RecognizeQuotaInvoiceResponseBodyDataContent) };
    inline Models::RecognizeQuotaInvoiceResponseBodyDataContent content() { DARABONBA_PTR_GET(content_, Models::RecognizeQuotaInvoiceResponseBodyDataContent) };
    inline RecognizeQuotaInvoiceResponseBodyData& setContent(const Models::RecognizeQuotaInvoiceResponseBodyDataContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RecognizeQuotaInvoiceResponseBodyData& setContent(Models::RecognizeQuotaInvoiceResponseBodyDataContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline RecognizeQuotaInvoiceResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // keyValueInfos Field Functions 
    bool hasKeyValueInfos() const { return this->keyValueInfos_ != nullptr;};
    void deleteKeyValueInfos() { this->keyValueInfos_ = nullptr;};
    inline const vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> & keyValueInfos() const { DARABONBA_PTR_GET_CONST(keyValueInfos_, vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>) };
    inline vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> keyValueInfos() { DARABONBA_PTR_GET(keyValueInfos_, vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>) };
    inline RecognizeQuotaInvoiceResponseBodyData& setKeyValueInfos(const vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> & keyValueInfos) { DARABONBA_PTR_SET_VALUE(keyValueInfos_, keyValueInfos) };
    inline RecognizeQuotaInvoiceResponseBodyData& setKeyValueInfos(vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> && keyValueInfos) { DARABONBA_PTR_SET_RVALUE(keyValueInfos_, keyValueInfos) };


    // orgHeight Field Functions 
    bool hasOrgHeight() const { return this->orgHeight_ != nullptr;};
    void deleteOrgHeight() { this->orgHeight_ = nullptr;};
    inline int64_t orgHeight() const { DARABONBA_PTR_GET_DEFAULT(orgHeight_, 0L) };
    inline RecognizeQuotaInvoiceResponseBodyData& setOrgHeight(int64_t orgHeight) { DARABONBA_PTR_SET_VALUE(orgHeight_, orgHeight) };


    // orgWidth Field Functions 
    bool hasOrgWidth() const { return this->orgWidth_ != nullptr;};
    void deleteOrgWidth() { this->orgWidth_ = nullptr;};
    inline int64_t orgWidth() const { DARABONBA_PTR_GET_DEFAULT(orgWidth_, 0L) };
    inline RecognizeQuotaInvoiceResponseBodyData& setOrgWidth(int64_t orgWidth) { DARABONBA_PTR_SET_VALUE(orgWidth_, orgWidth) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline RecognizeQuotaInvoiceResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<Models::RecognizeQuotaInvoiceResponseBodyDataContent> content_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>> keyValueInfos_ = nullptr;
    std::shared_ptr<int64_t> orgHeight_ = nullptr;
    std::shared_ptr<int64_t> orgWidth_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

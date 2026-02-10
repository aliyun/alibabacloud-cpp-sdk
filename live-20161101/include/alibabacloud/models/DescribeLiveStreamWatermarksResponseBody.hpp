// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WatermarkList, watermarkList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WatermarkList, watermarkList_);
    };
    DescribeLiveStreamWatermarksResponseBody() = default ;
    DescribeLiveStreamWatermarksResponseBody(const DescribeLiveStreamWatermarksResponseBody &) = default ;
    DescribeLiveStreamWatermarksResponseBody(DescribeLiveStreamWatermarksResponseBody &&) = default ;
    DescribeLiveStreamWatermarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarksResponseBody() = default ;
    DescribeLiveStreamWatermarksResponseBody& operator=(const DescribeLiveStreamWatermarksResponseBody &) = default ;
    DescribeLiveStreamWatermarksResponseBody& operator=(DescribeLiveStreamWatermarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WatermarkList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WatermarkList& obj) { 
        DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      };
      friend void from_json(const Darabonba::Json& j, WatermarkList& obj) { 
        DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      };
      WatermarkList() = default ;
      WatermarkList(const WatermarkList &) = default ;
      WatermarkList(WatermarkList &&) = default ;
      WatermarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WatermarkList() = default ;
      WatermarkList& operator=(const WatermarkList &) = default ;
      WatermarkList& operator=(WatermarkList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Watermark : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Watermark& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OffsetCorner, offsetCorner_);
          DARABONBA_PTR_TO_JSON(PictureUrl, pictureUrl_);
          DARABONBA_PTR_TO_JSON(RefHeight, refHeight_);
          DARABONBA_PTR_TO_JSON(RefWidth, refWidth_);
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(Transparency, transparency_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(XOffset, XOffset_);
          DARABONBA_PTR_TO_JSON(YOffset, YOffset_);
        };
        friend void from_json(const Darabonba::Json& j, Watermark& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OffsetCorner, offsetCorner_);
          DARABONBA_PTR_FROM_JSON(PictureUrl, pictureUrl_);
          DARABONBA_PTR_FROM_JSON(RefHeight, refHeight_);
          DARABONBA_PTR_FROM_JSON(RefWidth, refWidth_);
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(Transparency, transparency_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(XOffset, XOffset_);
          DARABONBA_PTR_FROM_JSON(YOffset, YOffset_);
        };
        Watermark() = default ;
        Watermark(const Watermark &) = default ;
        Watermark(Watermark &&) = default ;
        Watermark(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Watermark() = default ;
        Watermark& operator=(const Watermark &) = default ;
        Watermark& operator=(Watermark &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->height_ == nullptr && this->name_ == nullptr && this->offsetCorner_ == nullptr && this->pictureUrl_ == nullptr && this->refHeight_ == nullptr
        && this->refWidth_ == nullptr && this->ruleCount_ == nullptr && this->templateId_ == nullptr && this->transparency_ == nullptr && this->type_ == nullptr
        && this->XOffset_ == nullptr && this->YOffset_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Watermark& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline Watermark& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Watermark& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // offsetCorner Field Functions 
        bool hasOffsetCorner() const { return this->offsetCorner_ != nullptr;};
        void deleteOffsetCorner() { this->offsetCorner_ = nullptr;};
        inline string getOffsetCorner() const { DARABONBA_PTR_GET_DEFAULT(offsetCorner_, "") };
        inline Watermark& setOffsetCorner(string offsetCorner) { DARABONBA_PTR_SET_VALUE(offsetCorner_, offsetCorner) };


        // pictureUrl Field Functions 
        bool hasPictureUrl() const { return this->pictureUrl_ != nullptr;};
        void deletePictureUrl() { this->pictureUrl_ = nullptr;};
        inline string getPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(pictureUrl_, "") };
        inline Watermark& setPictureUrl(string pictureUrl) { DARABONBA_PTR_SET_VALUE(pictureUrl_, pictureUrl) };


        // refHeight Field Functions 
        bool hasRefHeight() const { return this->refHeight_ != nullptr;};
        void deleteRefHeight() { this->refHeight_ = nullptr;};
        inline int32_t getRefHeight() const { DARABONBA_PTR_GET_DEFAULT(refHeight_, 0) };
        inline Watermark& setRefHeight(int32_t refHeight) { DARABONBA_PTR_SET_VALUE(refHeight_, refHeight) };


        // refWidth Field Functions 
        bool hasRefWidth() const { return this->refWidth_ != nullptr;};
        void deleteRefWidth() { this->refWidth_ = nullptr;};
        inline int32_t getRefWidth() const { DARABONBA_PTR_GET_DEFAULT(refWidth_, 0) };
        inline Watermark& setRefWidth(int32_t refWidth) { DARABONBA_PTR_SET_VALUE(refWidth_, refWidth) };


        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
        inline Watermark& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Watermark& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // transparency Field Functions 
        bool hasTransparency() const { return this->transparency_ != nullptr;};
        void deleteTransparency() { this->transparency_ = nullptr;};
        inline int32_t getTransparency() const { DARABONBA_PTR_GET_DEFAULT(transparency_, 0) };
        inline Watermark& setTransparency(int32_t transparency) { DARABONBA_PTR_SET_VALUE(transparency_, transparency) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Watermark& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // XOffset Field Functions 
        bool hasXOffset() const { return this->XOffset_ != nullptr;};
        void deleteXOffset() { this->XOffset_ = nullptr;};
        inline float getXOffset() const { DARABONBA_PTR_GET_DEFAULT(XOffset_, 0.0) };
        inline Watermark& setXOffset(float XOffset) { DARABONBA_PTR_SET_VALUE(XOffset_, XOffset) };


        // YOffset Field Functions 
        bool hasYOffset() const { return this->YOffset_ != nullptr;};
        void deleteYOffset() { this->YOffset_ = nullptr;};
        inline float getYOffset() const { DARABONBA_PTR_GET_DEFAULT(YOffset_, 0.0) };
        inline Watermark& setYOffset(float YOffset) { DARABONBA_PTR_SET_VALUE(YOffset_, YOffset) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> offsetCorner_ {};
        shared_ptr<string> pictureUrl_ {};
        shared_ptr<int32_t> refHeight_ {};
        shared_ptr<int32_t> refWidth_ {};
        shared_ptr<int32_t> ruleCount_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<int32_t> transparency_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<float> XOffset_ {};
        shared_ptr<float> YOffset_ {};
      };

      virtual bool empty() const override { return this->watermark_ == nullptr; };
      // watermark Field Functions 
      bool hasWatermark() const { return this->watermark_ != nullptr;};
      void deleteWatermark() { this->watermark_ = nullptr;};
      inline const vector<WatermarkList::Watermark> & getWatermark() const { DARABONBA_PTR_GET_CONST(watermark_, vector<WatermarkList::Watermark>) };
      inline vector<WatermarkList::Watermark> getWatermark() { DARABONBA_PTR_GET(watermark_, vector<WatermarkList::Watermark>) };
      inline WatermarkList& setWatermark(const vector<WatermarkList::Watermark> & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
      inline WatermarkList& setWatermark(vector<WatermarkList::Watermark> && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


    protected:
      shared_ptr<vector<WatermarkList::Watermark>> watermark_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->total_ == nullptr && this->watermarkList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamWatermarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamWatermarksResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // watermarkList Field Functions 
    bool hasWatermarkList() const { return this->watermarkList_ != nullptr;};
    void deleteWatermarkList() { this->watermarkList_ = nullptr;};
    inline const DescribeLiveStreamWatermarksResponseBody::WatermarkList & getWatermarkList() const { DARABONBA_PTR_GET_CONST(watermarkList_, DescribeLiveStreamWatermarksResponseBody::WatermarkList) };
    inline DescribeLiveStreamWatermarksResponseBody::WatermarkList getWatermarkList() { DARABONBA_PTR_GET(watermarkList_, DescribeLiveStreamWatermarksResponseBody::WatermarkList) };
    inline DescribeLiveStreamWatermarksResponseBody& setWatermarkList(const DescribeLiveStreamWatermarksResponseBody::WatermarkList & watermarkList) { DARABONBA_PTR_SET_VALUE(watermarkList_, watermarkList) };
    inline DescribeLiveStreamWatermarksResponseBody& setWatermarkList(DescribeLiveStreamWatermarksResponseBody::WatermarkList && watermarkList) { DARABONBA_PTR_SET_RVALUE(watermarkList_, watermarkList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of watermark templates that meet the specified conditions.
    shared_ptr<int32_t> total_ {};
    shared_ptr<DescribeLiveStreamWatermarksResponseBody::WatermarkList> watermarkList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTITEM_HPP_
#define ALIBABACLOUD_MODELS_CONTENTITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ContentItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentItem& obj) { 
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ContentItem& obj) { 
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ContentItem() = default ;
    ContentItem(const ContentItem &) = default ;
    ContentItem(ContentItem &&) = default ;
    ContentItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentItem() = default ;
    ContentItem& operator=(const ContentItem &) = default ;
    ContentItem& operator=(ContentItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtInfo& obj) { 
        DARABONBA_PTR_TO_JSON(alignment, alignment_);
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pos, pos_);
        DARABONBA_PTR_TO_JSON(subType, subType_);
        DARABONBA_PTR_TO_JSON(text, text_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(uniqueId, uniqueId_);
      };
      friend void from_json(const Darabonba::Json& j, ExtInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(alignment, alignment_);
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pos, pos_);
        DARABONBA_PTR_FROM_JSON(subType, subType_);
        DARABONBA_PTR_FROM_JSON(text, text_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(uniqueId, uniqueId_);
      };
      ExtInfo() = default ;
      ExtInfo(const ExtInfo &) = default ;
      ExtInfo(ExtInfo &&) = default ;
      ExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtInfo() = default ;
      ExtInfo& operator=(const ExtInfo &) = default ;
      ExtInfo& operator=(ExtInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Pos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pos& obj) { 
          DARABONBA_PTR_TO_JSON(x, x_);
          DARABONBA_PTR_TO_JSON(y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Pos& obj) { 
          DARABONBA_PTR_FROM_JSON(x, x_);
          DARABONBA_PTR_FROM_JSON(y, y_);
        };
        Pos() = default ;
        Pos(const Pos &) = default ;
        Pos(Pos &&) = default ;
        Pos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pos() = default ;
        Pos& operator=(const Pos &) = default ;
        Pos& operator=(Pos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
        inline Pos& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
        inline Pos& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        // X coordinate of the layout.
        shared_ptr<int64_t> x_ {};
        // Y coordinate of the layout.
        shared_ptr<int64_t> y_ {};
      };

      virtual bool empty() const override { return this->alignment_ == nullptr
        && this->index_ == nullptr && this->level_ == nullptr && this->pageNum_ == nullptr && this->pos_ == nullptr && this->subType_ == nullptr
        && this->text_ == nullptr && this->type_ == nullptr && this->uniqueId_ == nullptr; };
      // alignment Field Functions 
      bool hasAlignment() const { return this->alignment_ != nullptr;};
      void deleteAlignment() { this->alignment_ = nullptr;};
      inline string getAlignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
      inline ExtInfo& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline ExtInfo& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline ExtInfo& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline const vector<int64_t> & getPageNum() const { DARABONBA_PTR_GET_CONST(pageNum_, vector<int64_t>) };
      inline vector<int64_t> getPageNum() { DARABONBA_PTR_GET(pageNum_, vector<int64_t>) };
      inline ExtInfo& setPageNum(const vector<int64_t> & pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };
      inline ExtInfo& setPageNum(vector<int64_t> && pageNum) { DARABONBA_PTR_SET_RVALUE(pageNum_, pageNum) };


      // pos Field Functions 
      bool hasPos() const { return this->pos_ != nullptr;};
      void deletePos() { this->pos_ = nullptr;};
      inline const vector<ExtInfo::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<ExtInfo::Pos>) };
      inline vector<ExtInfo::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<ExtInfo::Pos>) };
      inline ExtInfo& setPos(const vector<ExtInfo::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
      inline ExtInfo& setPos(vector<ExtInfo::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline ExtInfo& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline ExtInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ExtInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uniqueId Field Functions 
      bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
      void deleteUniqueId() { this->uniqueId_ = nullptr;};
      inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
      inline ExtInfo& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    protected:
      // Enumeration values for page alignment options: center, left, and right.
      shared_ptr<string> alignment_ {};
      // The index of the layout in the text.
      shared_ptr<int64_t> index_ {};
      // Hierarchy of the layout.
      shared_ptr<int64_t> level_ {};
      // Page numbers of the layout, which may include multiple page numbers.
      shared_ptr<vector<int64_t>> pageNum_ {};
      // Position information of the layout, in list format.
      shared_ptr<vector<ExtInfo::Pos>> pos_ {};
      // Enumeration values for the layout subtypes: picture, para, none
      shared_ptr<string> subType_ {};
      // text
      shared_ptr<string> text_ {};
      // Enumeration values for the layout types: table, figure, text, and none.
      shared_ptr<string> type_ {};
      // Unique layout ID.
      shared_ptr<string> uniqueId_ {};
    };

    virtual bool empty() const override { return this->extInfo_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const vector<ContentItem::ExtInfo> & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, vector<ContentItem::ExtInfo>) };
    inline vector<ContentItem::ExtInfo> getExtInfo() { DARABONBA_PTR_GET(extInfo_, vector<ContentItem::ExtInfo>) };
    inline ContentItem& setExtInfo(const vector<ContentItem::ExtInfo> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline ContentItem& setExtInfo(vector<ContentItem::ExtInfo> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ContentItem& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ContentItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ContentItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The coordinates of the text are in list format.
    shared_ptr<vector<ContentItem::ExtInfo>> extInfo_ {};
    // Recall confidence
    shared_ptr<double> score_ {};
    // Recall text.
    shared_ptr<string> text_ {};
    // Text sources: img, table, para.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

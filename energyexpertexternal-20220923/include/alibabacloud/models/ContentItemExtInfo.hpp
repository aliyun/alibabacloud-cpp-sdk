// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTITEMEXTINFO_HPP_
#define ALIBABACLOUD_MODELS_CONTENTITEMEXTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContentItemExtInfoPos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ContentItemExtInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentItemExtInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ContentItemExtInfo& obj) { 
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
    ContentItemExtInfo() = default ;
    ContentItemExtInfo(const ContentItemExtInfo &) = default ;
    ContentItemExtInfo(ContentItemExtInfo &&) = default ;
    ContentItemExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentItemExtInfo() = default ;
    ContentItemExtInfo& operator=(const ContentItemExtInfo &) = default ;
    ContentItemExtInfo& operator=(ContentItemExtInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alignment_ != nullptr
        && this->index_ != nullptr && this->level_ != nullptr && this->pageNum_ != nullptr && this->pos_ != nullptr && this->subType_ != nullptr
        && this->text_ != nullptr && this->type_ != nullptr && this->uniqueId_ != nullptr; };
    // alignment Field Functions 
    bool hasAlignment() const { return this->alignment_ != nullptr;};
    void deleteAlignment() { this->alignment_ = nullptr;};
    inline string alignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
    inline ContentItemExtInfo& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ContentItemExtInfo& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline ContentItemExtInfo& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline const vector<int64_t> & pageNum() const { DARABONBA_PTR_GET_CONST(pageNum_, vector<int64_t>) };
    inline vector<int64_t> pageNum() { DARABONBA_PTR_GET(pageNum_, vector<int64_t>) };
    inline ContentItemExtInfo& setPageNum(const vector<int64_t> & pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };
    inline ContentItemExtInfo& setPageNum(vector<int64_t> && pageNum) { DARABONBA_PTR_SET_RVALUE(pageNum_, pageNum) };


    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline const vector<Models::ContentItemExtInfoPos> & pos() const { DARABONBA_PTR_GET_CONST(pos_, vector<Models::ContentItemExtInfoPos>) };
    inline vector<Models::ContentItemExtInfoPos> pos() { DARABONBA_PTR_GET(pos_, vector<Models::ContentItemExtInfoPos>) };
    inline ContentItemExtInfo& setPos(const vector<Models::ContentItemExtInfoPos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
    inline ContentItemExtInfo& setPos(vector<Models::ContentItemExtInfoPos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ContentItemExtInfo& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ContentItemExtInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ContentItemExtInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string uniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline ContentItemExtInfo& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    std::shared_ptr<string> alignment_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<vector<int64_t>> pageNum_ = nullptr;
    std::shared_ptr<vector<Models::ContentItemExtInfoPos>> pos_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

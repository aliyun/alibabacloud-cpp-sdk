// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONTABLEINFOSCELLINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONTABLEINFOSCELLINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& obj) { 
      DARABONBA_PTR_TO_JSON(pos, pos_);
      DARABONBA_PTR_TO_JSON(tableCellId, tableCellId_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(xec, xec_);
      DARABONBA_PTR_TO_JSON(xsc, xsc_);
      DARABONBA_PTR_TO_JSON(yec, yec_);
      DARABONBA_PTR_TO_JSON(ysc, ysc_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(pos, pos_);
      DARABONBA_PTR_FROM_JSON(tableCellId, tableCellId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(xec, xec_);
      DARABONBA_PTR_FROM_JSON(xsc, xsc_);
      DARABONBA_PTR_FROM_JSON(yec, yec_);
      DARABONBA_PTR_FROM_JSON(ysc, ysc_);
    };
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos(const GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos(GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos &&) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& operator=(const GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& operator=(GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pos_ == nullptr
        && return this->tableCellId_ == nullptr && return this->text_ == nullptr && return this->xec_ == nullptr && return this->xsc_ == nullptr && return this->yec_ == nullptr
        && return this->ysc_ == nullptr; };
    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos> & pos() const { DARABONBA_PTR_GET_CONST(pos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos>) };
    inline vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos> pos() { DARABONBA_PTR_GET(pos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos>) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setPos(const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setPos(vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


    // tableCellId Field Functions 
    bool hasTableCellId() const { return this->tableCellId_ != nullptr;};
    void deleteTableCellId() { this->tableCellId_ = nullptr;};
    inline int64_t tableCellId() const { DARABONBA_PTR_GET_DEFAULT(tableCellId_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setTableCellId(int64_t tableCellId) { DARABONBA_PTR_SET_VALUE(tableCellId_, tableCellId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // xec Field Functions 
    bool hasXec() const { return this->xec_ != nullptr;};
    void deleteXec() { this->xec_ = nullptr;};
    inline int64_t xec() const { DARABONBA_PTR_GET_DEFAULT(xec_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setXec(int64_t xec) { DARABONBA_PTR_SET_VALUE(xec_, xec) };


    // xsc Field Functions 
    bool hasXsc() const { return this->xsc_ != nullptr;};
    void deleteXsc() { this->xsc_ = nullptr;};
    inline int64_t xsc() const { DARABONBA_PTR_GET_DEFAULT(xsc_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setXsc(int64_t xsc) { DARABONBA_PTR_SET_VALUE(xsc_, xsc) };


    // yec Field Functions 
    bool hasYec() const { return this->yec_ != nullptr;};
    void deleteYec() { this->yec_ = nullptr;};
    inline int64_t yec() const { DARABONBA_PTR_GET_DEFAULT(yec_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setYec(int64_t yec) { DARABONBA_PTR_SET_VALUE(yec_, yec) };


    // ysc Field Functions 
    bool hasYsc() const { return this->ysc_ != nullptr;};
    void deleteYsc() { this->ysc_ = nullptr;};
    inline int64_t ysc() const { DARABONBA_PTR_GET_DEFAULT(ysc_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfos& setYsc(int64_t ysc) { DARABONBA_PTR_SET_VALUE(ysc_, ysc) };


  protected:
    std::shared_ptr<vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfosCellInfosPos>> pos_ = nullptr;
    std::shared_ptr<int64_t> tableCellId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<int64_t> xec_ = nullptr;
    std::shared_ptr<int64_t> xsc_ = nullptr;
    std::shared_ptr<int64_t> yec_ = nullptr;
    std::shared_ptr<int64_t> ysc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif

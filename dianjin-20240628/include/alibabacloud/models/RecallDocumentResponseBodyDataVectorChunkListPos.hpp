// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODYDATAVECTORCHUNKLISTPOS_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODYDATAVECTORCHUNKLISTPOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentResponseBodyDataVectorChunkListPos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentResponseBodyDataVectorChunkListPos& obj) { 
      DARABONBA_PTR_TO_JSON(axisArray, axisArray_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(textHighlightArea, textHighlightArea_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentResponseBodyDataVectorChunkListPos& obj) { 
      DARABONBA_PTR_FROM_JSON(axisArray, axisArray_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(textHighlightArea, textHighlightArea_);
    };
    RecallDocumentResponseBodyDataVectorChunkListPos() = default ;
    RecallDocumentResponseBodyDataVectorChunkListPos(const RecallDocumentResponseBodyDataVectorChunkListPos &) = default ;
    RecallDocumentResponseBodyDataVectorChunkListPos(RecallDocumentResponseBodyDataVectorChunkListPos &&) = default ;
    RecallDocumentResponseBodyDataVectorChunkListPos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentResponseBodyDataVectorChunkListPos() = default ;
    RecallDocumentResponseBodyDataVectorChunkListPos& operator=(const RecallDocumentResponseBodyDataVectorChunkListPos &) = default ;
    RecallDocumentResponseBodyDataVectorChunkListPos& operator=(RecallDocumentResponseBodyDataVectorChunkListPos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->axisArray_ != nullptr
        && this->page_ != nullptr && this->textHighlightArea_ != nullptr; };
    // axisArray Field Functions 
    bool hasAxisArray() const { return this->axisArray_ != nullptr;};
    void deleteAxisArray() { this->axisArray_ = nullptr;};
    inline const vector<double> & axisArray() const { DARABONBA_PTR_GET_CONST(axisArray_, vector<double>) };
    inline vector<double> axisArray() { DARABONBA_PTR_GET(axisArray_, vector<double>) };
    inline RecallDocumentResponseBodyDataVectorChunkListPos& setAxisArray(const vector<double> & axisArray) { DARABONBA_PTR_SET_VALUE(axisArray_, axisArray) };
    inline RecallDocumentResponseBodyDataVectorChunkListPos& setAxisArray(vector<double> && axisArray) { DARABONBA_PTR_SET_RVALUE(axisArray_, axisArray) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline RecallDocumentResponseBodyDataVectorChunkListPos& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // textHighlightArea Field Functions 
    bool hasTextHighlightArea() const { return this->textHighlightArea_ != nullptr;};
    void deleteTextHighlightArea() { this->textHighlightArea_ = nullptr;};
    inline const vector<int32_t> & textHighlightArea() const { DARABONBA_PTR_GET_CONST(textHighlightArea_, vector<int32_t>) };
    inline vector<int32_t> textHighlightArea() { DARABONBA_PTR_GET(textHighlightArea_, vector<int32_t>) };
    inline RecallDocumentResponseBodyDataVectorChunkListPos& setTextHighlightArea(const vector<int32_t> & textHighlightArea) { DARABONBA_PTR_SET_VALUE(textHighlightArea_, textHighlightArea) };
    inline RecallDocumentResponseBodyDataVectorChunkListPos& setTextHighlightArea(vector<int32_t> && textHighlightArea) { DARABONBA_PTR_SET_RVALUE(textHighlightArea_, textHighlightArea) };


  protected:
    std::shared_ptr<vector<double>> axisArray_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<vector<int32_t>> textHighlightArea_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

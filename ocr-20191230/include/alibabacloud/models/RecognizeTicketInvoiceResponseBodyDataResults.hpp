// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeTicketInvoiceResponseBodyDataResultsContent.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos.hpp>
#include <alibabacloud/models/RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTicketInvoiceResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTicketInvoiceResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(KeyValueInfos, keyValueInfos_);
      DARABONBA_PTR_TO_JSON(SliceRectangle, sliceRectangle_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTicketInvoiceResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(KeyValueInfos, keyValueInfos_);
      DARABONBA_PTR_FROM_JSON(SliceRectangle, sliceRectangle_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RecognizeTicketInvoiceResponseBodyDataResults() = default ;
    RecognizeTicketInvoiceResponseBodyDataResults(const RecognizeTicketInvoiceResponseBodyDataResults &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResults(RecognizeTicketInvoiceResponseBodyDataResults &&) = default ;
    RecognizeTicketInvoiceResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTicketInvoiceResponseBodyDataResults() = default ;
    RecognizeTicketInvoiceResponseBodyDataResults& operator=(const RecognizeTicketInvoiceResponseBodyDataResults &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResults& operator=(RecognizeTicketInvoiceResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->index_ != nullptr && this->keyValueInfos_ != nullptr && this->sliceRectangle_ != nullptr && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::RecognizeTicketInvoiceResponseBodyDataResultsContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::RecognizeTicketInvoiceResponseBodyDataResultsContent) };
    inline Models::RecognizeTicketInvoiceResponseBodyDataResultsContent content() { DARABONBA_PTR_GET(content_, Models::RecognizeTicketInvoiceResponseBodyDataResultsContent) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setContent(const Models::RecognizeTicketInvoiceResponseBodyDataResultsContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setContent(Models::RecognizeTicketInvoiceResponseBodyDataResultsContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // keyValueInfos Field Functions 
    bool hasKeyValueInfos() const { return this->keyValueInfos_ != nullptr;};
    void deleteKeyValueInfos() { this->keyValueInfos_ = nullptr;};
    inline const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> & keyValueInfos() const { DARABONBA_PTR_GET_CONST(keyValueInfos_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>) };
    inline vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> keyValueInfos() { DARABONBA_PTR_GET(keyValueInfos_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setKeyValueInfos(const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> & keyValueInfos) { DARABONBA_PTR_SET_VALUE(keyValueInfos_, keyValueInfos) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setKeyValueInfos(vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> && keyValueInfos) { DARABONBA_PTR_SET_RVALUE(keyValueInfos_, keyValueInfos) };


    // sliceRectangle Field Functions 
    bool hasSliceRectangle() const { return this->sliceRectangle_ != nullptr;};
    void deleteSliceRectangle() { this->sliceRectangle_ = nullptr;};
    inline const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> & sliceRectangle() const { DARABONBA_PTR_GET_CONST(sliceRectangle_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>) };
    inline vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> sliceRectangle() { DARABONBA_PTR_GET(sliceRectangle_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setSliceRectangle(const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> & sliceRectangle) { DARABONBA_PTR_SET_VALUE(sliceRectangle_, sliceRectangle) };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setSliceRectangle(vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> && sliceRectangle) { DARABONBA_PTR_SET_RVALUE(sliceRectangle_, sliceRectangle) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::RecognizeTicketInvoiceResponseBodyDataResultsContent> content_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>> keyValueInfos_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>> sliceRectangle_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

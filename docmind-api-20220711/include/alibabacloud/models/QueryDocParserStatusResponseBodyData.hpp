// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOCPARSERSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOCPARSERSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class QueryDocParserStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDocParserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(NumberOfSuccessfulParsing, numberOfSuccessfulParsing_);
      DARABONBA_PTR_TO_JSON(PageCountEstimate, pageCountEstimate_);
      DARABONBA_PTR_TO_JSON(ParagraphCount, paragraphCount_);
      DARABONBA_PTR_TO_JSON(Processing, processing_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(Tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDocParserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(NumberOfSuccessfulParsing, numberOfSuccessfulParsing_);
      DARABONBA_PTR_FROM_JSON(PageCountEstimate, pageCountEstimate_);
      DARABONBA_PTR_FROM_JSON(ParagraphCount, paragraphCount_);
      DARABONBA_PTR_FROM_JSON(Processing, processing_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
    };
    QueryDocParserStatusResponseBodyData() = default ;
    QueryDocParserStatusResponseBodyData(const QueryDocParserStatusResponseBodyData &) = default ;
    QueryDocParserStatusResponseBodyData(QueryDocParserStatusResponseBodyData &&) = default ;
    QueryDocParserStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDocParserStatusResponseBodyData() = default ;
    QueryDocParserStatusResponseBodyData& operator=(const QueryDocParserStatusResponseBodyData &) = default ;
    QueryDocParserStatusResponseBodyData& operator=(QueryDocParserStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageCount_ == nullptr
        && return this->numberOfSuccessfulParsing_ == nullptr && return this->pageCountEstimate_ == nullptr && return this->paragraphCount_ == nullptr && return this->processing_ == nullptr && return this->status_ == nullptr
        && return this->tableCount_ == nullptr && return this->tokens_ == nullptr; };
    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline QueryDocParserStatusResponseBodyData& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // numberOfSuccessfulParsing Field Functions 
    bool hasNumberOfSuccessfulParsing() const { return this->numberOfSuccessfulParsing_ != nullptr;};
    void deleteNumberOfSuccessfulParsing() { this->numberOfSuccessfulParsing_ = nullptr;};
    inline int32_t numberOfSuccessfulParsing() const { DARABONBA_PTR_GET_DEFAULT(numberOfSuccessfulParsing_, 0) };
    inline QueryDocParserStatusResponseBodyData& setNumberOfSuccessfulParsing(int32_t numberOfSuccessfulParsing) { DARABONBA_PTR_SET_VALUE(numberOfSuccessfulParsing_, numberOfSuccessfulParsing) };


    // pageCountEstimate Field Functions 
    bool hasPageCountEstimate() const { return this->pageCountEstimate_ != nullptr;};
    void deletePageCountEstimate() { this->pageCountEstimate_ = nullptr;};
    inline int32_t pageCountEstimate() const { DARABONBA_PTR_GET_DEFAULT(pageCountEstimate_, 0) };
    inline QueryDocParserStatusResponseBodyData& setPageCountEstimate(int32_t pageCountEstimate) { DARABONBA_PTR_SET_VALUE(pageCountEstimate_, pageCountEstimate) };


    // paragraphCount Field Functions 
    bool hasParagraphCount() const { return this->paragraphCount_ != nullptr;};
    void deleteParagraphCount() { this->paragraphCount_ = nullptr;};
    inline int32_t paragraphCount() const { DARABONBA_PTR_GET_DEFAULT(paragraphCount_, 0) };
    inline QueryDocParserStatusResponseBodyData& setParagraphCount(int32_t paragraphCount) { DARABONBA_PTR_SET_VALUE(paragraphCount_, paragraphCount) };


    // processing Field Functions 
    bool hasProcessing() const { return this->processing_ != nullptr;};
    void deleteProcessing() { this->processing_ = nullptr;};
    inline float processing() const { DARABONBA_PTR_GET_DEFAULT(processing_, 0.0) };
    inline QueryDocParserStatusResponseBodyData& setProcessing(float processing) { DARABONBA_PTR_SET_VALUE(processing_, processing) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryDocParserStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int32_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
    inline QueryDocParserStatusResponseBodyData& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline int64_t tokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0L) };
    inline QueryDocParserStatusResponseBodyData& setTokens(int64_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


  protected:
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<int32_t> numberOfSuccessfulParsing_ = nullptr;
    std::shared_ptr<int32_t> pageCountEstimate_ = nullptr;
    std::shared_ptr<int32_t> paragraphCount_ = nullptr;
    std::shared_ptr<float> processing_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> tableCount_ = nullptr;
    std::shared_ptr<int64_t> tokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif

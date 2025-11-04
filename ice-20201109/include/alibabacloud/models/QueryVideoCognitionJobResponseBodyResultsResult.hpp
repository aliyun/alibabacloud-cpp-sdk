// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODYRESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODYRESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobResponseBodyResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryVideoCognitionJobResponseBodyResultsResult() = default ;
    QueryVideoCognitionJobResponseBodyResultsResult(const QueryVideoCognitionJobResponseBodyResultsResult &) = default ;
    QueryVideoCognitionJobResponseBodyResultsResult(QueryVideoCognitionJobResponseBodyResultsResult &&) = default ;
    QueryVideoCognitionJobResponseBodyResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobResponseBodyResultsResult() = default ;
    QueryVideoCognitionJobResponseBodyResultsResult& operator=(const QueryVideoCognitionJobResponseBodyResultsResult &) = default ;
    QueryVideoCognitionJobResponseBodyResultsResult& operator=(QueryVideoCognitionJobResponseBodyResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryVideoCognitionJobResponseBodyResultsResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryVideoCognitionJobResponseBodyResultsResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // A JSON string containing the detailed analysis data. The structure of this data depends on the Type field. For details, see the Result parameters section below.
    std::shared_ptr<string> data_ = nullptr;
    // The type of analysis result. Valid values:
    // 
    // 1.  TextLabel: Tags from text content.
    // 2.  VideoLabel: Tags from video content.
    // 3.  ASR: Raw speech recognition results. Not returned by default.
    // 4.  OCR: Raw text recognition results. Not returned by default.
    // 5.  NLP: Natural Language Processing results. Not returned by default.
    // 6.  Process: URL to the raw algorithm output. Not returned by default.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

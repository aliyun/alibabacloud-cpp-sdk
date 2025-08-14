// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYRESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYRESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobResponseBodyResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuerySmarttagJobResponseBodyResultsResult() = default ;
    QuerySmarttagJobResponseBodyResultsResult(const QuerySmarttagJobResponseBodyResultsResult &) = default ;
    QuerySmarttagJobResponseBodyResultsResult(QuerySmarttagJobResponseBodyResultsResult &&) = default ;
    QuerySmarttagJobResponseBodyResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBodyResultsResult() = default ;
    QuerySmarttagJobResponseBodyResultsResult& operator=(const QuerySmarttagJobResponseBodyResultsResult &) = default ;
    QuerySmarttagJobResponseBodyResultsResult& operator=(QuerySmarttagJobResponseBodyResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->type_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QuerySmarttagJobResponseBodyResultsResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySmarttagJobResponseBodyResultsResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The details of the analysis result. The value is a JSON string. For more information about the parameters of different result types, see the "Parameters of different result types" section of this topic.
    std::shared_ptr<string> data_ = nullptr;
    // The type of the analysis result.
    // 
    // *   The type of the analysis result based on Smart tagging V1.0. Valid values:
    // 
    // 1.  TextLabel: the text tag.
    // 2.  VideoLabel: the video tag.
    // 3.  ASR: the original result of automatic speech recognition (ASR). By default, this type of result is not returned.
    // 4.  OCR: the original result of optical character recognition (OCR). By default, this type of result is not returned.
    // 5.  NLP: the natural language processing (NLP)-based result. By default, this type of result is not returned.
    // 
    // *   The type of the analysis result based on Smart tagging V2.0. Valid values:
    // 
    // 1.  CPVLabel
    // 2.  Meta: the information about the video file, such as the title of the video. By default, this type of information is not returned.
    // 
    // *   The type of the analysis result based on Smart tagging V2.0-custom. Valid values:
    // 
    // 1.  CPVLabel
    // 2.  Meta: the information about the video file, such as the title of the video. By default, this type of information is not returned.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

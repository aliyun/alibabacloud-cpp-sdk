// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeCharacterResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeCharacterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeCharacterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeCharacterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RecognizeCharacterResponseBodyData() = default ;
    RecognizeCharacterResponseBodyData(const RecognizeCharacterResponseBodyData &) = default ;
    RecognizeCharacterResponseBodyData(RecognizeCharacterResponseBodyData &&) = default ;
    RecognizeCharacterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeCharacterResponseBodyData() = default ;
    RecognizeCharacterResponseBodyData& operator=(const RecognizeCharacterResponseBodyData &) = default ;
    RecognizeCharacterResponseBodyData& operator=(RecognizeCharacterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->results_ == nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::RecognizeCharacterResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::RecognizeCharacterResponseBodyDataResults>) };
    inline vector<Models::RecognizeCharacterResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::RecognizeCharacterResponseBodyDataResults>) };
    inline RecognizeCharacterResponseBodyData& setResults(const vector<Models::RecognizeCharacterResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RecognizeCharacterResponseBodyData& setResults(vector<Models::RecognizeCharacterResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::RecognizeCharacterResponseBodyDataResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

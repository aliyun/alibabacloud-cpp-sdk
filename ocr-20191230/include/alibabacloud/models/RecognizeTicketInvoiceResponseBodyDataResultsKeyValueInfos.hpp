// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTSKEYVALUEINFOS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTSKEYVALUEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValuePositions, valuePositions_);
      DARABONBA_PTR_TO_JSON(ValueScore, valueScore_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValuePositions, valuePositions_);
      DARABONBA_PTR_FROM_JSON(ValueScore, valueScore_);
    };
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos(const RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos(RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos &&) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& operator=(const RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& operator=(RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr && this->valuePositions_ != nullptr && this->valueScore_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valuePositions Field Functions 
    bool hasValuePositions() const { return this->valuePositions_ != nullptr;};
    void deleteValuePositions() { this->valuePositions_ = nullptr;};
    inline const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> & valuePositions() const { DARABONBA_PTR_GET_CONST(valuePositions_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>) };
    inline vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> valuePositions() { DARABONBA_PTR_GET(valuePositions_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>) };
    inline RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& setValuePositions(const vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> & valuePositions) { DARABONBA_PTR_SET_VALUE(valuePositions_, valuePositions) };
    inline RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& setValuePositions(vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> && valuePositions) { DARABONBA_PTR_SET_RVALUE(valuePositions_, valuePositions) };


    // valueScore Field Functions 
    bool hasValueScore() const { return this->valueScore_ != nullptr;};
    void deleteValueScore() { this->valueScore_ = nullptr;};
    inline float valueScore() const { DARABONBA_PTR_GET_DEFAULT(valueScore_, 0.0) };
    inline RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos& setValueScore(float valueScore) { DARABONBA_PTR_SET_VALUE(valueScore_, valueScore) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>> valuePositions_ = nullptr;
    std::shared_ptr<float> valueScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

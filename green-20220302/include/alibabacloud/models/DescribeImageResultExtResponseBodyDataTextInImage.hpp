// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATATEXTINIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATATEXTINIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageResultExtResponseBodyDataTextInImageCustomTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageResultExtResponseBodyDataTextInImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtResponseBodyDataTextInImage& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTexts, customTexts_);
      DARABONBA_PTR_TO_JSON(OcrDatas, ocrDatas_);
      DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtResponseBodyDataTextInImage& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTexts, customTexts_);
      DARABONBA_PTR_FROM_JSON(OcrDatas, ocrDatas_);
      DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
    };
    DescribeImageResultExtResponseBodyDataTextInImage() = default ;
    DescribeImageResultExtResponseBodyDataTextInImage(const DescribeImageResultExtResponseBodyDataTextInImage &) = default ;
    DescribeImageResultExtResponseBodyDataTextInImage(DescribeImageResultExtResponseBodyDataTextInImage &&) = default ;
    DescribeImageResultExtResponseBodyDataTextInImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtResponseBodyDataTextInImage() = default ;
    DescribeImageResultExtResponseBodyDataTextInImage& operator=(const DescribeImageResultExtResponseBodyDataTextInImage &) = default ;
    DescribeImageResultExtResponseBodyDataTextInImage& operator=(DescribeImageResultExtResponseBodyDataTextInImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customTexts_ != nullptr
        && this->ocrDatas_ != nullptr && this->riskWords_ != nullptr; };
    // customTexts Field Functions 
    bool hasCustomTexts() const { return this->customTexts_ != nullptr;};
    void deleteCustomTexts() { this->customTexts_ = nullptr;};
    inline const vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts> & customTexts() const { DARABONBA_PTR_GET_CONST(customTexts_, vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts>) };
    inline vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts> customTexts() { DARABONBA_PTR_GET(customTexts_, vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts>) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setCustomTexts(const vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts> & customTexts) { DARABONBA_PTR_SET_VALUE(customTexts_, customTexts) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setCustomTexts(vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts> && customTexts) { DARABONBA_PTR_SET_RVALUE(customTexts_, customTexts) };


    // ocrDatas Field Functions 
    bool hasOcrDatas() const { return this->ocrDatas_ != nullptr;};
    void deleteOcrDatas() { this->ocrDatas_ = nullptr;};
    inline const vector<string> & ocrDatas() const { DARABONBA_PTR_GET_CONST(ocrDatas_, vector<string>) };
    inline vector<string> ocrDatas() { DARABONBA_PTR_GET(ocrDatas_, vector<string>) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setOcrDatas(const vector<string> & ocrDatas) { DARABONBA_PTR_SET_VALUE(ocrDatas_, ocrDatas) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setOcrDatas(vector<string> && ocrDatas) { DARABONBA_PTR_SET_RVALUE(ocrDatas_, ocrDatas) };


    // riskWords Field Functions 
    bool hasRiskWords() const { return this->riskWords_ != nullptr;};
    void deleteRiskWords() { this->riskWords_ = nullptr;};
    inline const vector<string> & riskWords() const { DARABONBA_PTR_GET_CONST(riskWords_, vector<string>) };
    inline vector<string> riskWords() { DARABONBA_PTR_GET(riskWords_, vector<string>) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setRiskWords(const vector<string> & riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };
    inline DescribeImageResultExtResponseBodyDataTextInImage& setRiskWords(vector<string> && riskWords) { DARABONBA_PTR_SET_RVALUE(riskWords_, riskWords) };


  protected:
    // When a custom text library is hit, the custom library ID, custom library name, and custom word are returned.
    std::shared_ptr<vector<Models::DescribeImageResultExtResponseBodyDataTextInImageCustomTexts>> customTexts_ = nullptr;
    // Returns the text information in the recognized image.
    std::shared_ptr<vector<string>> ocrDatas_ = nullptr;
    // The risk words that are hit. Multiple words are separated by commas (,).
    std::shared_ptr<vector<string>> riskWords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif

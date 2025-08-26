// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeQrCodeResponseBodyDataElementsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RecognizeQrCodeResponseBodyDataElements() = default ;
    RecognizeQrCodeResponseBodyDataElements(const RecognizeQrCodeResponseBodyDataElements &) = default ;
    RecognizeQrCodeResponseBodyDataElements(RecognizeQrCodeResponseBodyDataElements &&) = default ;
    RecognizeQrCodeResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeResponseBodyDataElements() = default ;
    RecognizeQrCodeResponseBodyDataElements& operator=(const RecognizeQrCodeResponseBodyDataElements &) = default ;
    RecognizeQrCodeResponseBodyDataElements& operator=(RecognizeQrCodeResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->results_ != nullptr && this->taskId_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RecognizeQrCodeResponseBodyDataElements& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::RecognizeQrCodeResponseBodyDataElementsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::RecognizeQrCodeResponseBodyDataElementsResults>) };
    inline vector<Models::RecognizeQrCodeResponseBodyDataElementsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::RecognizeQrCodeResponseBodyDataElementsResults>) };
    inline RecognizeQrCodeResponseBodyDataElements& setResults(const vector<Models::RecognizeQrCodeResponseBodyDataElementsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RecognizeQrCodeResponseBodyDataElements& setResults(vector<Models::RecognizeQrCodeResponseBodyDataElementsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RecognizeQrCodeResponseBodyDataElements& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeQrCodeResponseBodyDataElementsResults>> results_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

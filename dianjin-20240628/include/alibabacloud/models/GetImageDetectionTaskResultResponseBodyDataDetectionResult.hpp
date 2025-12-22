// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATADETECTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATADETECTIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBodyDataDetectionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBodyDataDetectionResult& obj) { 
      DARABONBA_PTR_TO_JSON(detectionDetails, detectionDetails_);
      DARABONBA_PTR_TO_JSON(suggestions, suggestions_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBodyDataDetectionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(detectionDetails, detectionDetails_);
      DARABONBA_PTR_FROM_JSON(suggestions, suggestions_);
    };
    GetImageDetectionTaskResultResponseBodyDataDetectionResult() = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResult(const GetImageDetectionTaskResultResponseBodyDataDetectionResult &) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResult(GetImageDetectionTaskResultResponseBodyDataDetectionResult &&) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBodyDataDetectionResult() = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResult& operator=(const GetImageDetectionTaskResultResponseBodyDataDetectionResult &) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResult& operator=(GetImageDetectionTaskResultResponseBodyDataDetectionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionDetails_ == nullptr
        && return this->suggestions_ == nullptr; };
    // detectionDetails Field Functions 
    bool hasDetectionDetails() const { return this->detectionDetails_ != nullptr;};
    void deleteDetectionDetails() { this->detectionDetails_ = nullptr;};
    inline const vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails> & detectionDetails() const { DARABONBA_PTR_GET_CONST(detectionDetails_, vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails>) };
    inline vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails> detectionDetails() { DARABONBA_PTR_GET(detectionDetails_, vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails>) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResult& setDetectionDetails(const vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails> & detectionDetails) { DARABONBA_PTR_SET_VALUE(detectionDetails_, detectionDetails) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResult& setDetectionDetails(vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails> && detectionDetails) { DARABONBA_PTR_SET_RVALUE(detectionDetails_, detectionDetails) };


    // suggestions Field Functions 
    bool hasSuggestions() const { return this->suggestions_ != nullptr;};
    void deleteSuggestions() { this->suggestions_ = nullptr;};
    inline const vector<string> & suggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<string>) };
    inline vector<string> suggestions() { DARABONBA_PTR_GET(suggestions_, vector<string>) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResult& setSuggestions(const vector<string> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResult& setSuggestions(vector<string> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


  protected:
    std::shared_ptr<vector<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails>> detectionDetails_ = nullptr;
    std::shared_ptr<vector<string>> suggestions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

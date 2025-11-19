// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& obj) { 
      DARABONBA_PTR_TO_JSON(AdResult, adResult_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LiveResult, liveResult_);
      DARABONBA_PTR_TO_JSON(LogoResult, logoResult_);
      DARABONBA_PTR_TO_JSON(PornResult, pornResult_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TerrorismResult, terrorismResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AdResult, adResult_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LiveResult, liveResult_);
      DARABONBA_PTR_FROM_JSON(LogoResult, logoResult_);
      DARABONBA_PTR_FROM_JSON(PornResult, pornResult_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TerrorismResult, terrorismResult_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adResult_ == nullptr
        && return this->label_ == nullptr && return this->liveResult_ == nullptr && return this->logoResult_ == nullptr && return this->pornResult_ == nullptr && return this->suggestion_ == nullptr
        && return this->terrorismResult_ == nullptr; };
    // adResult Field Functions 
    bool hasAdResult() const { return this->adResult_ != nullptr;};
    void deleteAdResult() { this->adResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult & adResult() const { DARABONBA_PTR_GET_CONST(adResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult adResult() { DARABONBA_PTR_GET(adResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setAdResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult & adResult) { DARABONBA_PTR_SET_VALUE(adResult_, adResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setAdResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult && adResult) { DARABONBA_PTR_SET_RVALUE(adResult_, adResult) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // liveResult Field Functions 
    bool hasLiveResult() const { return this->liveResult_ != nullptr;};
    void deleteLiveResult() { this->liveResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult & liveResult() const { DARABONBA_PTR_GET_CONST(liveResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult liveResult() { DARABONBA_PTR_GET(liveResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setLiveResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult & liveResult) { DARABONBA_PTR_SET_VALUE(liveResult_, liveResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setLiveResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult && liveResult) { DARABONBA_PTR_SET_RVALUE(liveResult_, liveResult) };


    // logoResult Field Functions 
    bool hasLogoResult() const { return this->logoResult_ != nullptr;};
    void deleteLogoResult() { this->logoResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult & logoResult() const { DARABONBA_PTR_GET_CONST(logoResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult logoResult() { DARABONBA_PTR_GET(logoResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setLogoResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult & logoResult) { DARABONBA_PTR_SET_VALUE(logoResult_, logoResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setLogoResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult && logoResult) { DARABONBA_PTR_SET_RVALUE(logoResult_, logoResult) };


    // pornResult Field Functions 
    bool hasPornResult() const { return this->pornResult_ != nullptr;};
    void deletePornResult() { this->pornResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult & pornResult() const { DARABONBA_PTR_GET_CONST(pornResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult pornResult() { DARABONBA_PTR_GET(pornResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setPornResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult & pornResult) { DARABONBA_PTR_SET_VALUE(pornResult_, pornResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setPornResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult && pornResult) { DARABONBA_PTR_SET_RVALUE(pornResult_, pornResult) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // terrorismResult Field Functions 
    bool hasTerrorismResult() const { return this->terrorismResult_ != nullptr;};
    void deleteTerrorismResult() { this->terrorismResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult & terrorismResult() const { DARABONBA_PTR_GET_CONST(terrorismResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult terrorismResult() { DARABONBA_PTR_GET(terrorismResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setTerrorismResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult & terrorismResult) { DARABONBA_PTR_SET_VALUE(terrorismResult_, terrorismResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult& setTerrorismResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult && terrorismResult) { DARABONBA_PTR_SET_RVALUE(terrorismResult_, terrorismResult) };


  protected:
    // The results of ad review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult> adResult_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **porn**: pornographic content
    // *   **terrorism**: terrorist or politically sensitive content
    // *   **ad**: ad violation
    // *   **live**: undesirable scene
    // *   **logo**: logo
    // *   **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The results of undesired content review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult> liveResult_ = nullptr;
    // The results of logo review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult> logoResult_ = nullptr;
    // The results of pornographic content review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultPornResult> pornResult_ = nullptr;
    // The recommendation for video review results. Valid values:
    // 
    // *   **block**
    // *   **review**
    // *   **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The results of terrorist content review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultTerrorismResult> terrorismResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

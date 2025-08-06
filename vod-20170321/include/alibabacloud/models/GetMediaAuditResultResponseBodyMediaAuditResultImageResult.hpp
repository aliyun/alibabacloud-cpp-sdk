// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTIMAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTIMAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultImageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultImageResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultImageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult(const GetMediaAuditResultResponseBodyMediaAuditResultImageResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult(GetMediaAuditResultResponseBodyMediaAuditResultImageResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultImageResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultImageResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultImageResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResultImageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->result_ != nullptr && this->suggestion_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setResult(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setResult(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultImageResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The category of the review result. Separate multiple values with commas (,). Valid values:
    // 
    // *   **porn**
    // *   **terrorism**
    // *   **normal**
    std::shared_ptr<string> label_ = nullptr;
    // Details of image review results.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResultResult>> result_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**
    // *   **review**
    // *   **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The type of the image. The value is **cover**.
    std::shared_ptr<string> type_ = nullptr;
    // The URL of the image.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

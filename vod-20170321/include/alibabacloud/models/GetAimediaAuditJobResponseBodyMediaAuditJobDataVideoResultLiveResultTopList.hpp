// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULTTOPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULTTOPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->score_ != nullptr && this->timestamp_ != nullptr && this->url_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content
    // *   **meaningless**: meaningless content, such as a black or white screen.
    // *   **PIP**: picture-in-picture
    // *   **smoking**: smoking
    // *   **drivelive**: live broadcasting in a running vehicle
    std::shared_ptr<string> label_ = nullptr;
    // The score of the snapshot in the category that is indicated by Label.
    std::shared_ptr<string> score_ = nullptr;
    // The timestamp of the snapshot in the video. Unit: milliseconds.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The URL of the video snapshot.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

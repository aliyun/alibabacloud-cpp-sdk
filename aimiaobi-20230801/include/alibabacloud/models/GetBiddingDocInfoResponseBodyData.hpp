// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIDDINGDOCINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBIDDINGDOCINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetBiddingDocInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBiddingDocInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentFormat, contentFormat_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TenderDocUrl, tenderDocUrl_);
      DARABONBA_PTR_TO_JSON(TenderFileType, tenderFileType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBiddingDocInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentFormat, contentFormat_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TenderDocUrl, tenderDocUrl_);
      DARABONBA_PTR_FROM_JSON(TenderFileType, tenderFileType_);
    };
    GetBiddingDocInfoResponseBodyData() = default ;
    GetBiddingDocInfoResponseBodyData(const GetBiddingDocInfoResponseBodyData &) = default ;
    GetBiddingDocInfoResponseBodyData(GetBiddingDocInfoResponseBodyData &&) = default ;
    GetBiddingDocInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBiddingDocInfoResponseBodyData() = default ;
    GetBiddingDocInfoResponseBodyData& operator=(const GetBiddingDocInfoResponseBodyData &) = default ;
    GetBiddingDocInfoResponseBodyData& operator=(GetBiddingDocInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentFormat_ == nullptr && return this->contentType_ == nullptr && return this->status_ == nullptr && return this->step_ == nullptr && return this->taskId_ == nullptr
        && return this->tenderDocUrl_ == nullptr && return this->tenderFileType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetBiddingDocInfoResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentFormat Field Functions 
    bool hasContentFormat() const { return this->contentFormat_ != nullptr;};
    void deleteContentFormat() { this->contentFormat_ = nullptr;};
    inline string contentFormat() const { DARABONBA_PTR_GET_DEFAULT(contentFormat_, "") };
    inline GetBiddingDocInfoResponseBodyData& setContentFormat(string contentFormat) { DARABONBA_PTR_SET_VALUE(contentFormat_, contentFormat) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetBiddingDocInfoResponseBodyData& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetBiddingDocInfoResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline GetBiddingDocInfoResponseBodyData& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetBiddingDocInfoResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenderDocUrl Field Functions 
    bool hasTenderDocUrl() const { return this->tenderDocUrl_ != nullptr;};
    void deleteTenderDocUrl() { this->tenderDocUrl_ = nullptr;};
    inline string tenderDocUrl() const { DARABONBA_PTR_GET_DEFAULT(tenderDocUrl_, "") };
    inline GetBiddingDocInfoResponseBodyData& setTenderDocUrl(string tenderDocUrl) { DARABONBA_PTR_SET_VALUE(tenderDocUrl_, tenderDocUrl) };


    // tenderFileType Field Functions 
    bool hasTenderFileType() const { return this->tenderFileType_ != nullptr;};
    void deleteTenderFileType() { this->tenderFileType_ = nullptr;};
    inline string tenderFileType() const { DARABONBA_PTR_GET_DEFAULT(tenderFileType_, "") };
    inline GetBiddingDocInfoResponseBodyData& setTenderFileType(string tenderFileType) { DARABONBA_PTR_SET_VALUE(tenderFileType_, tenderFileType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentFormat_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> tenderDocUrl_ = nullptr;
    std::shared_ptr<string> tenderFileType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

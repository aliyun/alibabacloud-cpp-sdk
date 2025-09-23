// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADBIDDINGDOCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADBIDDINGDOCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DownloadBiddingDocResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadBiddingDocResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadBiddingDocResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DownloadBiddingDocResponseBodyData() = default ;
    DownloadBiddingDocResponseBodyData(const DownloadBiddingDocResponseBodyData &) = default ;
    DownloadBiddingDocResponseBodyData(DownloadBiddingDocResponseBodyData &&) = default ;
    DownloadBiddingDocResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadBiddingDocResponseBodyData() = default ;
    DownloadBiddingDocResponseBodyData& operator=(const DownloadBiddingDocResponseBodyData &) = default ;
    DownloadBiddingDocResponseBodyData& operator=(DownloadBiddingDocResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->url_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DownloadBiddingDocResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DownloadBiddingDocResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

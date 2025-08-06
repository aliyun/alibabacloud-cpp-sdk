// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODYAIVIDEOCATEGORYJOBLISTAIVIDEOCATEGORYJOB_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODYAIVIDEOCATEGORYJOBLISTAIVIDEOCATEGORYJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob() = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob(const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob &) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob(ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob &&) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob() = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& operator=(const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob &) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& operator=(ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->creationTime_ != nullptr && this->data_ != nullptr && this->jobId_ != nullptr && this->mediaId_ != nullptr && this->message_ != nullptr
        && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

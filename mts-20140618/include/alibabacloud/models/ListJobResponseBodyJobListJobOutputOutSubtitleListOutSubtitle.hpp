// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELISTOUTSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELISTOUTSUBTITLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(Map, map_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutSubtitleFile, outSubtitleFile_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(Map, map_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutSubtitleFile, outSubtitleFile_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle() = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle(const ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle &) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle(ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle &&) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle() = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& operator=(const ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle &) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& operator=(ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->map_ == nullptr
        && return this->message_ == nullptr && return this->outSubtitleFile_ == nullptr && return this->success_ == nullptr; };
    // map Field Functions 
    bool hasMap() const { return this->map_ != nullptr;};
    void deleteMap() { this->map_ = nullptr;};
    inline string _map() const { DARABONBA_PTR_GET_DEFAULT(map_, "") };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& setMap(string _map) { DARABONBA_PTR_SET_VALUE(map_, _map) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outSubtitleFile Field Functions 
    bool hasOutSubtitleFile() const { return this->outSubtitleFile_ != nullptr;};
    void deleteOutSubtitleFile() { this->outSubtitleFile_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile & outSubtitleFile() const { DARABONBA_PTR_GET_CONST(outSubtitleFile_, Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile) };
    inline Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile outSubtitleFile() { DARABONBA_PTR_GET(outSubtitleFile_, Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile) };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& setOutSubtitleFile(const Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile & outSubtitleFile) { DARABONBA_PTR_SET_VALUE(outSubtitleFile_, outSubtitleFile) };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& setOutSubtitleFile(Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile && outSubtitleFile) { DARABONBA_PTR_SET_RVALUE(outSubtitleFile_, outSubtitleFile) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The video track. Format: 0:{Stream}:{Stream sequence number}, that is, 0:v:{video_index}. The value of Stream is v, which indicates a video stream. The sequence number is the index of the video stream in the list and starts from 0.
    std::shared_ptr<string> map_ = nullptr;
    // The error message returned if the job failed to be created. This parameter is not returned if the job was created.
    std::shared_ptr<string> message_ = nullptr;
    // The details of the output file.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitleOutSubtitleFile> outSubtitleFile_ = nullptr;
    // Indicates whether the job was created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeActionRequestURLList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(URLList, URLList_);
      DARABONBA_PTR_TO_JSON(VideoData, videoData_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(URLList, URLList_);
      DARABONBA_PTR_FROM_JSON(VideoData, videoData_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    RecognizeActionRequest() = default ;
    RecognizeActionRequest(const RecognizeActionRequest &) = default ;
    RecognizeActionRequest(RecognizeActionRequest &&) = default ;
    RecognizeActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionRequest() = default ;
    RecognizeActionRequest& operator=(const RecognizeActionRequest &) = default ;
    RecognizeActionRequest& operator=(RecognizeActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->URLList_ == nullptr && return this->videoData_ == nullptr && return this->videoUrl_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline RecognizeActionRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // URLList Field Functions 
    bool hasURLList() const { return this->URLList_ != nullptr;};
    void deleteURLList() { this->URLList_ = nullptr;};
    inline const vector<RecognizeActionRequestURLList> & URLList() const { DARABONBA_PTR_GET_CONST(URLList_, vector<RecognizeActionRequestURLList>) };
    inline vector<RecognizeActionRequestURLList> URLList() { DARABONBA_PTR_GET(URLList_, vector<RecognizeActionRequestURLList>) };
    inline RecognizeActionRequest& setURLList(const vector<RecognizeActionRequestURLList> & URLList) { DARABONBA_PTR_SET_VALUE(URLList_, URLList) };
    inline RecognizeActionRequest& setURLList(vector<RecognizeActionRequestURLList> && URLList) { DARABONBA_PTR_SET_RVALUE(URLList_, URLList) };


    // videoData Field Functions 
    bool hasVideoData() const { return this->videoData_ != nullptr;};
    void deleteVideoData() { this->videoData_ = nullptr;};
    inline string videoData() const { DARABONBA_PTR_GET_DEFAULT(videoData_, "") };
    inline RecognizeActionRequest& setVideoData(string videoData) { DARABONBA_PTR_SET_VALUE(videoData_, videoData) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline RecognizeActionRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<vector<RecognizeActionRequestURLList>> URLList_ = nullptr;
    std::shared_ptr<string> videoData_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif

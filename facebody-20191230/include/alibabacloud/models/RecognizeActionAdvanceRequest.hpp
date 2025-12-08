// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeActionAdvanceRequestURLList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(URLList, URLList_);
      DARABONBA_PTR_TO_JSON(VideoData, videoData_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(URLList, URLList_);
      DARABONBA_PTR_FROM_JSON(VideoData, videoData_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    RecognizeActionAdvanceRequest() = default ;
    RecognizeActionAdvanceRequest(const RecognizeActionAdvanceRequest &) = default ;
    RecognizeActionAdvanceRequest(RecognizeActionAdvanceRequest &&) = default ;
    RecognizeActionAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionAdvanceRequest() = default ;
    RecognizeActionAdvanceRequest& operator=(const RecognizeActionAdvanceRequest &) = default ;
    RecognizeActionAdvanceRequest& operator=(RecognizeActionAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->URLList_ == nullptr && return this->videoData_ == nullptr && return this->videoUrlObject_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline RecognizeActionAdvanceRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // URLList Field Functions 
    bool hasURLList() const { return this->URLList_ != nullptr;};
    void deleteURLList() { this->URLList_ = nullptr;};
    inline const vector<RecognizeActionAdvanceRequestURLList> & URLList() const { DARABONBA_PTR_GET_CONST(URLList_, vector<RecognizeActionAdvanceRequestURLList>) };
    inline vector<RecognizeActionAdvanceRequestURLList> URLList() { DARABONBA_PTR_GET(URLList_, vector<RecognizeActionAdvanceRequestURLList>) };
    inline RecognizeActionAdvanceRequest& setURLList(const vector<RecognizeActionAdvanceRequestURLList> & URLList) { DARABONBA_PTR_SET_VALUE(URLList_, URLList) };
    inline RecognizeActionAdvanceRequest& setURLList(vector<RecognizeActionAdvanceRequestURLList> && URLList) { DARABONBA_PTR_SET_RVALUE(URLList_, URLList) };


    // videoData Field Functions 
    bool hasVideoData() const { return this->videoData_ != nullptr;};
    void deleteVideoData() { this->videoData_ = nullptr;};
    inline string videoData() const { DARABONBA_PTR_GET_DEFAULT(videoData_, "") };
    inline RecognizeActionAdvanceRequest& setVideoData(string videoData) { DARABONBA_PTR_SET_VALUE(videoData_, videoData) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline RecognizeActionAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<vector<RecognizeActionAdvanceRequestURLList>> URLList_ = nullptr;
    std::shared_ptr<string> videoData_ = nullptr;
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif

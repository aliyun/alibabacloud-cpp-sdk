// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCEEDITINGPROJECTVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCEEDITINGPROJECTVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ProduceEditingProjectVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProduceEditingProjectVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ProduceEditingProjectVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ProduceEditingProjectVideoResponseBody() = default ;
    ProduceEditingProjectVideoResponseBody(const ProduceEditingProjectVideoResponseBody &) = default ;
    ProduceEditingProjectVideoResponseBody(ProduceEditingProjectVideoResponseBody &&) = default ;
    ProduceEditingProjectVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProduceEditingProjectVideoResponseBody() = default ;
    ProduceEditingProjectVideoResponseBody& operator=(const ProduceEditingProjectVideoResponseBody &) = default ;
    ProduceEditingProjectVideoResponseBody& operator=(ProduceEditingProjectVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->projectId_ == nullptr && this->requestId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ProduceEditingProjectVideoResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ProduceEditingProjectVideoResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProduceEditingProjectVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the produced video.
    // 
    // > *   This parameter is returned for each request.
    // > *   If a value is returned for this parameter, the video production task is being asynchronously processed.
    shared_ptr<string> mediaId_ {};
    // The ID of the online editing project.
    shared_ptr<string> projectId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

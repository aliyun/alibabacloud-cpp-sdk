// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPTSSCENEBASELINEFROMREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPTSSCENEBASELINEFROMREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class CreatePtsSceneBaseLineFromReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePtsSceneBaseLineFromReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePtsSceneBaseLineFromReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    CreatePtsSceneBaseLineFromReportRequest() = default ;
    CreatePtsSceneBaseLineFromReportRequest(const CreatePtsSceneBaseLineFromReportRequest &) = default ;
    CreatePtsSceneBaseLineFromReportRequest(CreatePtsSceneBaseLineFromReportRequest &&) = default ;
    CreatePtsSceneBaseLineFromReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePtsSceneBaseLineFromReportRequest() = default ;
    CreatePtsSceneBaseLineFromReportRequest& operator=(const CreatePtsSceneBaseLineFromReportRequest &) = default ;
    CreatePtsSceneBaseLineFromReportRequest& operator=(CreatePtsSceneBaseLineFromReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr
        && return this->sceneId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline CreatePtsSceneBaseLineFromReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreatePtsSceneBaseLineFromReportRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the report. For more information, see the [table](https://help.aliyun.com/document_detail/201321.html) provided in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the scene. For more information, see the [table](https://help.aliyun.com/document_detail/201321.html) provided in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetEditingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
    };
    GetEditingProjectRequest() = default ;
    GetEditingProjectRequest(const GetEditingProjectRequest &) = default ;
    GetEditingProjectRequest(GetEditingProjectRequest &&) = default ;
    GetEditingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectRequest() = default ;
    GetEditingProjectRequest& operator=(const GetEditingProjectRequest &) = default ;
    GetEditingProjectRequest& operator=(GetEditingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->requestSource_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetEditingProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline string requestSource() const { DARABONBA_PTR_GET_DEFAULT(requestSource_, "") };
    inline GetEditingProjectRequest& setRequestSource(string requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };


  protected:
    // The ID of the online editing project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // The ID of the request source. Valid values:
    // 
    // \\- OpenAPI (default): Timeline conversion is not performed.
    // 
    // \\- WebSDK: If you specify this value, the project timeline is automatically converted into the frontend style, and the materials in the timeline are associated with the project to enable preview by using frontend web SDKs.
    std::shared_ptr<string> requestSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

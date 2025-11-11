// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEXPORTTERMSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEXPORTTERMSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitExportTermsTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitExportTermsTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitExportTermsTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitExportTermsTaskRequest() = default ;
    SubmitExportTermsTaskRequest(const SubmitExportTermsTaskRequest &) = default ;
    SubmitExportTermsTaskRequest(SubmitExportTermsTaskRequest &&) = default ;
    SubmitExportTermsTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitExportTermsTaskRequest() = default ;
    SubmitExportTermsTaskRequest& operator=(const SubmitExportTermsTaskRequest &) = default ;
    SubmitExportTermsTaskRequest& operator=(SubmitExportTermsTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->termsName_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string termsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline SubmitExportTermsTaskRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitExportTermsTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> termsName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

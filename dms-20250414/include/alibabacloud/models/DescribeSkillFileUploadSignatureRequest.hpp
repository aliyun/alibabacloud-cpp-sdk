// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESKILLFILEUPLOADSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESKILLFILEUPLOADSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeSkillFileUploadSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSkillFileUploadSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSkillFileUploadSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeSkillFileUploadSignatureRequest() = default ;
    DescribeSkillFileUploadSignatureRequest(const DescribeSkillFileUploadSignatureRequest &) = default ;
    DescribeSkillFileUploadSignatureRequest(DescribeSkillFileUploadSignatureRequest &&) = default ;
    DescribeSkillFileUploadSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSkillFileUploadSignatureRequest() = default ;
    DescribeSkillFileUploadSignatureRequest& operator=(const DescribeSkillFileUploadSignatureRequest &) = default ;
    DescribeSkillFileUploadSignatureRequest& operator=(DescribeSkillFileUploadSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeSkillFileUploadSignatureRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

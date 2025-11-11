// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADTENDERDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADTENDERDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadTenderDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadTenderDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(TenderDocName, tenderDocName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadTenderDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(TenderDocName, tenderDocName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncUploadTenderDocRequest() = default ;
    AsyncUploadTenderDocRequest(const AsyncUploadTenderDocRequest &) = default ;
    AsyncUploadTenderDocRequest(AsyncUploadTenderDocRequest &&) = default ;
    AsyncUploadTenderDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadTenderDocRequest() = default ;
    AsyncUploadTenderDocRequest& operator=(const AsyncUploadTenderDocRequest &) = default ;
    AsyncUploadTenderDocRequest& operator=(AsyncUploadTenderDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && return this->tenderDocName_ == nullptr && return this->workspaceId_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline AsyncUploadTenderDocRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // tenderDocName Field Functions 
    bool hasTenderDocName() const { return this->tenderDocName_ != nullptr;};
    void deleteTenderDocName() { this->tenderDocName_ = nullptr;};
    inline string tenderDocName() const { DARABONBA_PTR_GET_DEFAULT(tenderDocName_, "") };
    inline AsyncUploadTenderDocRequest& setTenderDocName(string tenderDocName) { DARABONBA_PTR_SET_VALUE(tenderDocName_, tenderDocName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncUploadTenderDocRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<string> tenderDocName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

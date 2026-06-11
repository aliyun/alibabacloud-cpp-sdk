// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSKILLVIAOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSKILLVIAOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UploadSkillViaOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSkillViaOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSkillViaOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
    };
    UploadSkillViaOssRequest() = default ;
    UploadSkillViaOssRequest(const UploadSkillViaOssRequest &) = default ;
    UploadSkillViaOssRequest(UploadSkillViaOssRequest &&) = default ;
    UploadSkillViaOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSkillViaOssRequest() = default ;
    UploadSkillViaOssRequest& operator=(const UploadSkillViaOssRequest &) = default ;
    UploadSkillViaOssRequest& operator=(UploadSkillViaOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->namespaceId_ == nullptr && this->ossObjectName_ == nullptr && this->overwrite_ == nullptr; };
    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline UploadSkillViaOssRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UploadSkillViaOssRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline UploadSkillViaOssRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline UploadSkillViaOssRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


  protected:
    shared_ptr<string> commitMsg_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> ossObjectName_ {};
    shared_ptr<bool> overwrite_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif

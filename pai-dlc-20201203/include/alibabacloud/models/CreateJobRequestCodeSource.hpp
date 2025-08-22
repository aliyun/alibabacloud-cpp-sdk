// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTCODESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTCODESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobRequestCodeSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestCodeSource& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestCodeSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    CreateJobRequestCodeSource() = default ;
    CreateJobRequestCodeSource(const CreateJobRequestCodeSource &) = default ;
    CreateJobRequestCodeSource(CreateJobRequestCodeSource &&) = default ;
    CreateJobRequestCodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestCodeSource() = default ;
    CreateJobRequestCodeSource& operator=(const CreateJobRequestCodeSource &) = default ;
    CreateJobRequestCodeSource& operator=(CreateJobRequestCodeSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr
        && this->codeSourceId_ != nullptr && this->commit_ != nullptr && this->mountPath_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CreateJobRequestCodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline CreateJobRequestCodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline string commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
    inline CreateJobRequestCodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateJobRequestCodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    // The branch of the referenced code repository. By default, the branch configured in the code source is used. This parameter is optional.
    std::shared_ptr<string> branch_ = nullptr;
    // The ID of the code source.
    std::shared_ptr<string> codeSourceId_ = nullptr;
    // The commit ID of the code to be downloaded. By default, the commit ID configured in the code source is used. This parameter is optional.
    std::shared_ptr<string> commit_ = nullptr;
    // The path to which the job is mounted. By default, the mount path configured in the data source is used. This parameter is optional.
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

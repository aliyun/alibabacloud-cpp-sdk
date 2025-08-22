// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBITEMCODESOURCE_HPP_
#define ALIBABACLOUD_MODELS_JOBITEMCODESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobItemCodeSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobItemCodeSource& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, JobItemCodeSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    JobItemCodeSource() = default ;
    JobItemCodeSource(const JobItemCodeSource &) = default ;
    JobItemCodeSource(JobItemCodeSource &&) = default ;
    JobItemCodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobItemCodeSource() = default ;
    JobItemCodeSource& operator=(const JobItemCodeSource &) = default ;
    JobItemCodeSource& operator=(JobItemCodeSource &&) = default ;
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
    inline JobItemCodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline JobItemCodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline string commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
    inline JobItemCodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline JobItemCodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> codeSourceId_ = nullptr;
    std::shared_ptr<string> commit_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

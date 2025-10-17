// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYCODESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYCODESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBodyCodeSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyCodeSource& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyCodeSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    GetJobResponseBodyCodeSource() = default ;
    GetJobResponseBodyCodeSource(const GetJobResponseBodyCodeSource &) = default ;
    GetJobResponseBodyCodeSource(GetJobResponseBodyCodeSource &&) = default ;
    GetJobResponseBodyCodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyCodeSource() = default ;
    GetJobResponseBodyCodeSource& operator=(const GetJobResponseBodyCodeSource &) = default ;
    GetJobResponseBodyCodeSource& operator=(GetJobResponseBodyCodeSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->codeSourceId_ == nullptr && return this->commit_ == nullptr && return this->mountPath_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetJobResponseBodyCodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline GetJobResponseBodyCodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline string commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
    inline GetJobResponseBodyCodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline GetJobResponseBodyCodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    // The code branch.
    std::shared_ptr<string> branch_ = nullptr;
    // The code source ID.
    std::shared_ptr<string> codeSourceId_ = nullptr;
    // The code commit ID
    std::shared_ptr<string> commit_ = nullptr;
    // The local mount path.
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

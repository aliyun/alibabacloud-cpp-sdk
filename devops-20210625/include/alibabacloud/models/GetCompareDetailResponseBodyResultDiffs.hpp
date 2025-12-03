// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPAREDETAILRESPONSEBODYRESULTDIFFS_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPAREDETAILRESPONSEBODYRESULTDIFFS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCompareDetailResponseBodyResultDiffs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompareDetailResponseBodyResultDiffs& obj) { 
      DARABONBA_PTR_TO_JSON(aMode, aMode_);
      DARABONBA_PTR_TO_JSON(bMode, bMode_);
      DARABONBA_PTR_TO_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_TO_JSON(diff, diff_);
      DARABONBA_PTR_TO_JSON(isBinary, isBinary_);
      DARABONBA_PTR_TO_JSON(isNewLfs, isNewLfs_);
      DARABONBA_PTR_TO_JSON(isOldLfs, isOldLfs_);
      DARABONBA_PTR_TO_JSON(newFile, newFile_);
      DARABONBA_PTR_TO_JSON(newId, newId_);
      DARABONBA_PTR_TO_JSON(newPath, newPath_);
      DARABONBA_PTR_TO_JSON(oldId, oldId_);
      DARABONBA_PTR_TO_JSON(oldPath, oldPath_);
      DARABONBA_PTR_TO_JSON(renamedFile, renamedFile_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompareDetailResponseBodyResultDiffs& obj) { 
      DARABONBA_PTR_FROM_JSON(aMode, aMode_);
      DARABONBA_PTR_FROM_JSON(bMode, bMode_);
      DARABONBA_PTR_FROM_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_FROM_JSON(diff, diff_);
      DARABONBA_PTR_FROM_JSON(isBinary, isBinary_);
      DARABONBA_PTR_FROM_JSON(isNewLfs, isNewLfs_);
      DARABONBA_PTR_FROM_JSON(isOldLfs, isOldLfs_);
      DARABONBA_PTR_FROM_JSON(newFile, newFile_);
      DARABONBA_PTR_FROM_JSON(newId, newId_);
      DARABONBA_PTR_FROM_JSON(newPath, newPath_);
      DARABONBA_PTR_FROM_JSON(oldId, oldId_);
      DARABONBA_PTR_FROM_JSON(oldPath, oldPath_);
      DARABONBA_PTR_FROM_JSON(renamedFile, renamedFile_);
    };
    GetCompareDetailResponseBodyResultDiffs() = default ;
    GetCompareDetailResponseBodyResultDiffs(const GetCompareDetailResponseBodyResultDiffs &) = default ;
    GetCompareDetailResponseBodyResultDiffs(GetCompareDetailResponseBodyResultDiffs &&) = default ;
    GetCompareDetailResponseBodyResultDiffs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompareDetailResponseBodyResultDiffs() = default ;
    GetCompareDetailResponseBodyResultDiffs& operator=(const GetCompareDetailResponseBodyResultDiffs &) = default ;
    GetCompareDetailResponseBodyResultDiffs& operator=(GetCompareDetailResponseBodyResultDiffs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aMode_ == nullptr
        && return this->bMode_ == nullptr && return this->deletedFile_ == nullptr && return this->diff_ == nullptr && return this->isBinary_ == nullptr && return this->isNewLfs_ == nullptr
        && return this->isOldLfs_ == nullptr && return this->newFile_ == nullptr && return this->newId_ == nullptr && return this->newPath_ == nullptr && return this->oldId_ == nullptr
        && return this->oldPath_ == nullptr && return this->renamedFile_ == nullptr; };
    // aMode Field Functions 
    bool hasAMode() const { return this->aMode_ != nullptr;};
    void deleteAMode() { this->aMode_ = nullptr;};
    inline string aMode() const { DARABONBA_PTR_GET_DEFAULT(aMode_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setAMode(string aMode) { DARABONBA_PTR_SET_VALUE(aMode_, aMode) };


    // bMode Field Functions 
    bool hasBMode() const { return this->bMode_ != nullptr;};
    void deleteBMode() { this->bMode_ = nullptr;};
    inline string bMode() const { DARABONBA_PTR_GET_DEFAULT(bMode_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setBMode(string bMode) { DARABONBA_PTR_SET_VALUE(bMode_, bMode) };


    // deletedFile Field Functions 
    bool hasDeletedFile() const { return this->deletedFile_ != nullptr;};
    void deleteDeletedFile() { this->deletedFile_ = nullptr;};
    inline bool deletedFile() const { DARABONBA_PTR_GET_DEFAULT(deletedFile_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setDeletedFile(bool deletedFile) { DARABONBA_PTR_SET_VALUE(deletedFile_, deletedFile) };


    // diff Field Functions 
    bool hasDiff() const { return this->diff_ != nullptr;};
    void deleteDiff() { this->diff_ = nullptr;};
    inline string diff() const { DARABONBA_PTR_GET_DEFAULT(diff_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setDiff(string diff) { DARABONBA_PTR_SET_VALUE(diff_, diff) };


    // isBinary Field Functions 
    bool hasIsBinary() const { return this->isBinary_ != nullptr;};
    void deleteIsBinary() { this->isBinary_ = nullptr;};
    inline bool isBinary() const { DARABONBA_PTR_GET_DEFAULT(isBinary_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setIsBinary(bool isBinary) { DARABONBA_PTR_SET_VALUE(isBinary_, isBinary) };


    // isNewLfs Field Functions 
    bool hasIsNewLfs() const { return this->isNewLfs_ != nullptr;};
    void deleteIsNewLfs() { this->isNewLfs_ = nullptr;};
    inline bool isNewLfs() const { DARABONBA_PTR_GET_DEFAULT(isNewLfs_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setIsNewLfs(bool isNewLfs) { DARABONBA_PTR_SET_VALUE(isNewLfs_, isNewLfs) };


    // isOldLfs Field Functions 
    bool hasIsOldLfs() const { return this->isOldLfs_ != nullptr;};
    void deleteIsOldLfs() { this->isOldLfs_ = nullptr;};
    inline bool isOldLfs() const { DARABONBA_PTR_GET_DEFAULT(isOldLfs_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setIsOldLfs(bool isOldLfs) { DARABONBA_PTR_SET_VALUE(isOldLfs_, isOldLfs) };


    // newFile Field Functions 
    bool hasNewFile() const { return this->newFile_ != nullptr;};
    void deleteNewFile() { this->newFile_ = nullptr;};
    inline bool newFile() const { DARABONBA_PTR_GET_DEFAULT(newFile_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setNewFile(bool newFile) { DARABONBA_PTR_SET_VALUE(newFile_, newFile) };


    // newId Field Functions 
    bool hasNewId() const { return this->newId_ != nullptr;};
    void deleteNewId() { this->newId_ = nullptr;};
    inline string newId() const { DARABONBA_PTR_GET_DEFAULT(newId_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setNewId(string newId) { DARABONBA_PTR_SET_VALUE(newId_, newId) };


    // newPath Field Functions 
    bool hasNewPath() const { return this->newPath_ != nullptr;};
    void deleteNewPath() { this->newPath_ = nullptr;};
    inline string newPath() const { DARABONBA_PTR_GET_DEFAULT(newPath_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setNewPath(string newPath) { DARABONBA_PTR_SET_VALUE(newPath_, newPath) };


    // oldId Field Functions 
    bool hasOldId() const { return this->oldId_ != nullptr;};
    void deleteOldId() { this->oldId_ = nullptr;};
    inline string oldId() const { DARABONBA_PTR_GET_DEFAULT(oldId_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setOldId(string oldId) { DARABONBA_PTR_SET_VALUE(oldId_, oldId) };


    // oldPath Field Functions 
    bool hasOldPath() const { return this->oldPath_ != nullptr;};
    void deleteOldPath() { this->oldPath_ = nullptr;};
    inline string oldPath() const { DARABONBA_PTR_GET_DEFAULT(oldPath_, "") };
    inline GetCompareDetailResponseBodyResultDiffs& setOldPath(string oldPath) { DARABONBA_PTR_SET_VALUE(oldPath_, oldPath) };


    // renamedFile Field Functions 
    bool hasRenamedFile() const { return this->renamedFile_ != nullptr;};
    void deleteRenamedFile() { this->renamedFile_ = nullptr;};
    inline bool renamedFile() const { DARABONBA_PTR_GET_DEFAULT(renamedFile_, false) };
    inline GetCompareDetailResponseBodyResultDiffs& setRenamedFile(bool renamedFile) { DARABONBA_PTR_SET_VALUE(renamedFile_, renamedFile) };


  protected:
    std::shared_ptr<string> aMode_ = nullptr;
    std::shared_ptr<string> bMode_ = nullptr;
    std::shared_ptr<bool> deletedFile_ = nullptr;
    std::shared_ptr<string> diff_ = nullptr;
    std::shared_ptr<bool> isBinary_ = nullptr;
    std::shared_ptr<bool> isNewLfs_ = nullptr;
    std::shared_ptr<bool> isOldLfs_ = nullptr;
    std::shared_ptr<bool> newFile_ = nullptr;
    std::shared_ptr<string> newId_ = nullptr;
    std::shared_ptr<string> newPath_ = nullptr;
    std::shared_ptr<string> oldId_ = nullptr;
    std::shared_ptr<string> oldPath_ = nullptr;
    std::shared_ptr<bool> renamedFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

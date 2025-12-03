// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMERGEREQUESTCHANGETREERESPONSEBODYRESULTCHANGEDFILESINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETMERGEREQUESTCHANGETREERESPONSEBODYRESULTCHANGEDFILESINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& obj) { 
      DARABONBA_PTR_TO_JSON(addLines, addLines_);
      DARABONBA_PTR_TO_JSON(binaryFile, binaryFile_);
      DARABONBA_PTR_TO_JSON(delLines, delLines_);
      DARABONBA_PTR_TO_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_TO_JSON(newFile, newFile_);
      DARABONBA_PTR_TO_JSON(newPath, newPath_);
      DARABONBA_PTR_TO_JSON(oldPath, oldPath_);
      DARABONBA_PTR_TO_JSON(renamedFile, renamedFile_);
    };
    friend void from_json(const Darabonba::Json& j, GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(addLines, addLines_);
      DARABONBA_PTR_FROM_JSON(binaryFile, binaryFile_);
      DARABONBA_PTR_FROM_JSON(delLines, delLines_);
      DARABONBA_PTR_FROM_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_FROM_JSON(newFile, newFile_);
      DARABONBA_PTR_FROM_JSON(newPath, newPath_);
      DARABONBA_PTR_FROM_JSON(oldPath, oldPath_);
      DARABONBA_PTR_FROM_JSON(renamedFile, renamedFile_);
    };
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos() = default ;
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos(const GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos &) = default ;
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos(GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos &&) = default ;
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos() = default ;
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& operator=(const GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos &) = default ;
    GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& operator=(GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addLines_ == nullptr
        && return this->binaryFile_ == nullptr && return this->delLines_ == nullptr && return this->deletedFile_ == nullptr && return this->newFile_ == nullptr && return this->newPath_ == nullptr
        && return this->oldPath_ == nullptr && return this->renamedFile_ == nullptr; };
    // addLines Field Functions 
    bool hasAddLines() const { return this->addLines_ != nullptr;};
    void deleteAddLines() { this->addLines_ = nullptr;};
    inline int64_t addLines() const { DARABONBA_PTR_GET_DEFAULT(addLines_, 0L) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setAddLines(int64_t addLines) { DARABONBA_PTR_SET_VALUE(addLines_, addLines) };


    // binaryFile Field Functions 
    bool hasBinaryFile() const { return this->binaryFile_ != nullptr;};
    void deleteBinaryFile() { this->binaryFile_ = nullptr;};
    inline bool binaryFile() const { DARABONBA_PTR_GET_DEFAULT(binaryFile_, false) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setBinaryFile(bool binaryFile) { DARABONBA_PTR_SET_VALUE(binaryFile_, binaryFile) };


    // delLines Field Functions 
    bool hasDelLines() const { return this->delLines_ != nullptr;};
    void deleteDelLines() { this->delLines_ = nullptr;};
    inline int64_t delLines() const { DARABONBA_PTR_GET_DEFAULT(delLines_, 0L) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setDelLines(int64_t delLines) { DARABONBA_PTR_SET_VALUE(delLines_, delLines) };


    // deletedFile Field Functions 
    bool hasDeletedFile() const { return this->deletedFile_ != nullptr;};
    void deleteDeletedFile() { this->deletedFile_ = nullptr;};
    inline bool deletedFile() const { DARABONBA_PTR_GET_DEFAULT(deletedFile_, false) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setDeletedFile(bool deletedFile) { DARABONBA_PTR_SET_VALUE(deletedFile_, deletedFile) };


    // newFile Field Functions 
    bool hasNewFile() const { return this->newFile_ != nullptr;};
    void deleteNewFile() { this->newFile_ = nullptr;};
    inline bool newFile() const { DARABONBA_PTR_GET_DEFAULT(newFile_, false) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setNewFile(bool newFile) { DARABONBA_PTR_SET_VALUE(newFile_, newFile) };


    // newPath Field Functions 
    bool hasNewPath() const { return this->newPath_ != nullptr;};
    void deleteNewPath() { this->newPath_ = nullptr;};
    inline string newPath() const { DARABONBA_PTR_GET_DEFAULT(newPath_, "") };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setNewPath(string newPath) { DARABONBA_PTR_SET_VALUE(newPath_, newPath) };


    // oldPath Field Functions 
    bool hasOldPath() const { return this->oldPath_ != nullptr;};
    void deleteOldPath() { this->oldPath_ = nullptr;};
    inline string oldPath() const { DARABONBA_PTR_GET_DEFAULT(oldPath_, "") };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setOldPath(string oldPath) { DARABONBA_PTR_SET_VALUE(oldPath_, oldPath) };


    // renamedFile Field Functions 
    bool hasRenamedFile() const { return this->renamedFile_ != nullptr;};
    void deleteRenamedFile() { this->renamedFile_ = nullptr;};
    inline bool renamedFile() const { DARABONBA_PTR_GET_DEFAULT(renamedFile_, false) };
    inline GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos& setRenamedFile(bool renamedFile) { DARABONBA_PTR_SET_VALUE(renamedFile_, renamedFile) };


  protected:
    std::shared_ptr<int64_t> addLines_ = nullptr;
    std::shared_ptr<bool> binaryFile_ = nullptr;
    std::shared_ptr<int64_t> delLines_ = nullptr;
    std::shared_ptr<bool> deletedFile_ = nullptr;
    std::shared_ptr<bool> newFile_ = nullptr;
    std::shared_ptr<string> newPath_ = nullptr;
    std::shared_ptr<string> oldPath_ = nullptr;
    std::shared_ptr<bool> renamedFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

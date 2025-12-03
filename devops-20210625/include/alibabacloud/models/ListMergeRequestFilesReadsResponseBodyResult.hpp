// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMergeRequestFilesReadsResponseBodyResultReadUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestFilesReadsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestFilesReadsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_TO_JSON(newFile, newFile_);
      DARABONBA_PTR_TO_JSON(newFilePath, newFilePath_);
      DARABONBA_PTR_TO_JSON(oldFilePath, oldFilePath_);
      DARABONBA_PTR_TO_JSON(readUsers, readUsers_);
      DARABONBA_PTR_TO_JSON(renamedFile, renamedFile_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestFilesReadsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(deletedFile, deletedFile_);
      DARABONBA_PTR_FROM_JSON(newFile, newFile_);
      DARABONBA_PTR_FROM_JSON(newFilePath, newFilePath_);
      DARABONBA_PTR_FROM_JSON(oldFilePath, oldFilePath_);
      DARABONBA_PTR_FROM_JSON(readUsers, readUsers_);
      DARABONBA_PTR_FROM_JSON(renamedFile, renamedFile_);
    };
    ListMergeRequestFilesReadsResponseBodyResult() = default ;
    ListMergeRequestFilesReadsResponseBodyResult(const ListMergeRequestFilesReadsResponseBodyResult &) = default ;
    ListMergeRequestFilesReadsResponseBodyResult(ListMergeRequestFilesReadsResponseBodyResult &&) = default ;
    ListMergeRequestFilesReadsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestFilesReadsResponseBodyResult() = default ;
    ListMergeRequestFilesReadsResponseBodyResult& operator=(const ListMergeRequestFilesReadsResponseBodyResult &) = default ;
    ListMergeRequestFilesReadsResponseBodyResult& operator=(ListMergeRequestFilesReadsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletedFile_ == nullptr
        && return this->newFile_ == nullptr && return this->newFilePath_ == nullptr && return this->oldFilePath_ == nullptr && return this->readUsers_ == nullptr && return this->renamedFile_ == nullptr; };
    // deletedFile Field Functions 
    bool hasDeletedFile() const { return this->deletedFile_ != nullptr;};
    void deleteDeletedFile() { this->deletedFile_ = nullptr;};
    inline string deletedFile() const { DARABONBA_PTR_GET_DEFAULT(deletedFile_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResult& setDeletedFile(string deletedFile) { DARABONBA_PTR_SET_VALUE(deletedFile_, deletedFile) };


    // newFile Field Functions 
    bool hasNewFile() const { return this->newFile_ != nullptr;};
    void deleteNewFile() { this->newFile_ = nullptr;};
    inline bool newFile() const { DARABONBA_PTR_GET_DEFAULT(newFile_, false) };
    inline ListMergeRequestFilesReadsResponseBodyResult& setNewFile(bool newFile) { DARABONBA_PTR_SET_VALUE(newFile_, newFile) };


    // newFilePath Field Functions 
    bool hasNewFilePath() const { return this->newFilePath_ != nullptr;};
    void deleteNewFilePath() { this->newFilePath_ = nullptr;};
    inline string newFilePath() const { DARABONBA_PTR_GET_DEFAULT(newFilePath_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResult& setNewFilePath(string newFilePath) { DARABONBA_PTR_SET_VALUE(newFilePath_, newFilePath) };


    // oldFilePath Field Functions 
    bool hasOldFilePath() const { return this->oldFilePath_ != nullptr;};
    void deleteOldFilePath() { this->oldFilePath_ = nullptr;};
    inline string oldFilePath() const { DARABONBA_PTR_GET_DEFAULT(oldFilePath_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResult& setOldFilePath(string oldFilePath) { DARABONBA_PTR_SET_VALUE(oldFilePath_, oldFilePath) };


    // readUsers Field Functions 
    bool hasReadUsers() const { return this->readUsers_ != nullptr;};
    void deleteReadUsers() { this->readUsers_ = nullptr;};
    inline const vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers> & readUsers() const { DARABONBA_PTR_GET_CONST(readUsers_, vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers>) };
    inline vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers> readUsers() { DARABONBA_PTR_GET(readUsers_, vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers>) };
    inline ListMergeRequestFilesReadsResponseBodyResult& setReadUsers(const vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers> & readUsers) { DARABONBA_PTR_SET_VALUE(readUsers_, readUsers) };
    inline ListMergeRequestFilesReadsResponseBodyResult& setReadUsers(vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers> && readUsers) { DARABONBA_PTR_SET_RVALUE(readUsers_, readUsers) };


    // renamedFile Field Functions 
    bool hasRenamedFile() const { return this->renamedFile_ != nullptr;};
    void deleteRenamedFile() { this->renamedFile_ = nullptr;};
    inline string renamedFile() const { DARABONBA_PTR_GET_DEFAULT(renamedFile_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResult& setRenamedFile(string renamedFile) { DARABONBA_PTR_SET_VALUE(renamedFile_, renamedFile) };


  protected:
    std::shared_ptr<string> deletedFile_ = nullptr;
    std::shared_ptr<bool> newFile_ = nullptr;
    std::shared_ptr<string> newFilePath_ = nullptr;
    std::shared_ptr<string> oldFilePath_ = nullptr;
    std::shared_ptr<vector<Models::ListMergeRequestFilesReadsResponseBodyResultReadUsers>> readUsers_ = nullptr;
    std::shared_ptr<string> renamedFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

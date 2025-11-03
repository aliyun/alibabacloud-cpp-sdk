// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODYENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODYENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecentlyRecycledDirectoriesResponseBodyEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentlyRecycledDirectoriesResponseBodyEntries& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(LastDeleteTime, lastDeleteTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentlyRecycledDirectoriesResponseBodyEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(LastDeleteTime, lastDeleteTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    ListRecentlyRecycledDirectoriesResponseBodyEntries() = default ;
    ListRecentlyRecycledDirectoriesResponseBodyEntries(const ListRecentlyRecycledDirectoriesResponseBodyEntries &) = default ;
    ListRecentlyRecycledDirectoriesResponseBodyEntries(ListRecentlyRecycledDirectoriesResponseBodyEntries &&) = default ;
    ListRecentlyRecycledDirectoriesResponseBodyEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentlyRecycledDirectoriesResponseBodyEntries() = default ;
    ListRecentlyRecycledDirectoriesResponseBodyEntries& operator=(const ListRecentlyRecycledDirectoriesResponseBodyEntries &) = default ;
    ListRecentlyRecycledDirectoriesResponseBodyEntries& operator=(ListRecentlyRecycledDirectoriesResponseBodyEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->lastDeleteTime_ == nullptr && return this->name_ == nullptr && return this->path_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBodyEntries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // lastDeleteTime Field Functions 
    bool hasLastDeleteTime() const { return this->lastDeleteTime_ != nullptr;};
    void deleteLastDeleteTime() { this->lastDeleteTime_ = nullptr;};
    inline string lastDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(lastDeleteTime_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBodyEntries& setLastDeleteTime(string lastDeleteTime) { DARABONBA_PTR_SET_VALUE(lastDeleteTime_, lastDeleteTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBodyEntries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBodyEntries& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The ID of the directory.
    std::shared_ptr<string> fileId_ = nullptr;
    // The time when the directory was last deleted.
    std::shared_ptr<string> lastDeleteTime_ = nullptr;
    // The name of the directory.
    std::shared_ptr<string> name_ = nullptr;
    // The absolute path to the directory.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

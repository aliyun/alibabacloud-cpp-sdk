// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVECDSFILERESPONSEBODYMOVECDSFILEMODEL_HPP_
#define ALIBABACLOUD_MODELS_MOVECDSFILERESPONSEBODYMOVECDSFILEMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MoveCdsFileResponseBodyMoveCdsFileModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveCdsFileResponseBodyMoveCdsFileModel& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Exist, exist_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveCdsFileResponseBodyMoveCdsFileModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Exist, exist_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    MoveCdsFileResponseBodyMoveCdsFileModel() = default ;
    MoveCdsFileResponseBodyMoveCdsFileModel(const MoveCdsFileResponseBodyMoveCdsFileModel &) = default ;
    MoveCdsFileResponseBodyMoveCdsFileModel(MoveCdsFileResponseBodyMoveCdsFileModel &&) = default ;
    MoveCdsFileResponseBodyMoveCdsFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveCdsFileResponseBodyMoveCdsFileModel() = default ;
    MoveCdsFileResponseBodyMoveCdsFileModel& operator=(const MoveCdsFileResponseBodyMoveCdsFileModel &) = default ;
    MoveCdsFileResponseBodyMoveCdsFileModel& operator=(MoveCdsFileResponseBodyMoveCdsFileModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->exist_ == nullptr && return this->fileId_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline MoveCdsFileResponseBodyMoveCdsFileModel& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // exist Field Functions 
    bool hasExist() const { return this->exist_ != nullptr;};
    void deleteExist() { this->exist_ = nullptr;};
    inline bool exist() const { DARABONBA_PTR_GET_DEFAULT(exist_, false) };
    inline MoveCdsFileResponseBodyMoveCdsFileModel& setExist(bool exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline MoveCdsFileResponseBodyMoveCdsFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    // The ID of the asynchronous task. This parameter is not returned if you copy files. This parameter is returned if you copy folders in the backend in an asynchronous manner. You can call the GetAsyncTask operation to obtain the ID and details of an asynchronous task.
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    // Indicates whether the file exists.
    // 
    // Valid values:
    // 
    // *   <!-- -->
    // 
    //     true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> exist_ = nullptr;
    // The ID of the file.
    std::shared_ptr<string> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

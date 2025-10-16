// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODYCOPYCDSFILEMODEL_HPP_
#define ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODYCOPYCDSFILEMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CopyCdsFileResponseBodyCopyCdsFileModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCdsFileResponseBodyCopyCdsFileModel& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCdsFileResponseBodyCopyCdsFileModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    CopyCdsFileResponseBodyCopyCdsFileModel() = default ;
    CopyCdsFileResponseBodyCopyCdsFileModel(const CopyCdsFileResponseBodyCopyCdsFileModel &) = default ;
    CopyCdsFileResponseBodyCopyCdsFileModel(CopyCdsFileResponseBodyCopyCdsFileModel &&) = default ;
    CopyCdsFileResponseBodyCopyCdsFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCdsFileResponseBodyCopyCdsFileModel() = default ;
    CopyCdsFileResponseBodyCopyCdsFileModel& operator=(const CopyCdsFileResponseBodyCopyCdsFileModel &) = default ;
    CopyCdsFileResponseBodyCopyCdsFileModel& operator=(CopyCdsFileResponseBodyCopyCdsFileModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->fileId_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline CopyCdsFileResponseBodyCopyCdsFileModel& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CopyCdsFileResponseBodyCopyCdsFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    // The ID of the asynchronous task. This parameter is not returned if you copy a file. This parameter is returned if you copy a folder in the backend in an asynchronous manner. You can call the GetAsyncTask operation to obtain the ID and details of an asynchronous task.
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    // The ID of the copied file or folder.
    std::shared_ptr<string> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

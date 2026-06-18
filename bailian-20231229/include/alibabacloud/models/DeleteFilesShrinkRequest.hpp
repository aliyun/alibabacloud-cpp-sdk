// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteFilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIds, fileIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIds, fileIdsShrink_);
    };
    DeleteFilesShrinkRequest() = default ;
    DeleteFilesShrinkRequest(const DeleteFilesShrinkRequest &) = default ;
    DeleteFilesShrinkRequest(DeleteFilesShrinkRequest &&) = default ;
    DeleteFilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFilesShrinkRequest() = default ;
    DeleteFilesShrinkRequest& operator=(const DeleteFilesShrinkRequest &) = default ;
    DeleteFilesShrinkRequest& operator=(DeleteFilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIdsShrink_ == nullptr; };
    // fileIdsShrink Field Functions 
    bool hasFileIdsShrink() const { return this->fileIdsShrink_ != nullptr;};
    void deleteFileIdsShrink() { this->fileIdsShrink_ = nullptr;};
    inline string getFileIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(fileIdsShrink_, "") };
    inline DeleteFilesShrinkRequest& setFileIdsShrink(string fileIdsShrink) { DARABONBA_PTR_SET_VALUE(fileIdsShrink_, fileIdsShrink) };


  protected:
    // The list of IDs of the files to be deleted. A maximum of 20 files can be deleted in a single request.
    // 
    // This parameter is required.
    shared_ptr<string> fileIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

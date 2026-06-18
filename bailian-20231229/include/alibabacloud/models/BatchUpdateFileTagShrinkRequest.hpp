// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class BatchUpdateFileTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfos, fileInfosShrink_);
      DARABONBA_PTR_TO_JSON(UpdateMode, updateMode_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfos, fileInfosShrink_);
      DARABONBA_PTR_FROM_JSON(UpdateMode, updateMode_);
    };
    BatchUpdateFileTagShrinkRequest() = default ;
    BatchUpdateFileTagShrinkRequest(const BatchUpdateFileTagShrinkRequest &) = default ;
    BatchUpdateFileTagShrinkRequest(BatchUpdateFileTagShrinkRequest &&) = default ;
    BatchUpdateFileTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileTagShrinkRequest() = default ;
    BatchUpdateFileTagShrinkRequest& operator=(const BatchUpdateFileTagShrinkRequest &) = default ;
    BatchUpdateFileTagShrinkRequest& operator=(BatchUpdateFileTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileInfosShrink_ == nullptr
        && this->updateMode_ == nullptr; };
    // fileInfosShrink Field Functions 
    bool hasFileInfosShrink() const { return this->fileInfosShrink_ != nullptr;};
    void deleteFileInfosShrink() { this->fileInfosShrink_ = nullptr;};
    inline string getFileInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(fileInfosShrink_, "") };
    inline BatchUpdateFileTagShrinkRequest& setFileInfosShrink(string fileInfosShrink) { DARABONBA_PTR_SET_VALUE(fileInfosShrink_, fileInfosShrink) };


    // updateMode Field Functions 
    bool hasUpdateMode() const { return this->updateMode_ != nullptr;};
    void deleteUpdateMode() { this->updateMode_ = nullptr;};
    inline string getUpdateMode() const { DARABONBA_PTR_GET_DEFAULT(updateMode_, "") };
    inline BatchUpdateFileTagShrinkRequest& setUpdateMode(string updateMode) { DARABONBA_PTR_SET_VALUE(updateMode_, updateMode) };


  protected:
    // A list of files to update.
    // 
    // This parameter is required.
    shared_ptr<string> fileInfosShrink_ {};
    // The update mode. Valid values are APPEND and OVERWRITE.
    shared_ptr<string> updateMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

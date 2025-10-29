// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODYSNAPSHOTDELETEINFOLISTSNAPSHOTDELETEINFO_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODYSNAPSHOTDELETEINFOLISTSNAPSHOTDELETEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo() = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo(const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo &) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo(DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo &&) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo() = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& operator=(const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo &) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& operator=(DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && return this->message_ == nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The timestamp when the snapshot was captured. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The processing result of the snapshot. Valid values:
    // 
    // *   **OK**: The snapshot was deleted.
    // *   **FileNotFound**: The snapshot was not found.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

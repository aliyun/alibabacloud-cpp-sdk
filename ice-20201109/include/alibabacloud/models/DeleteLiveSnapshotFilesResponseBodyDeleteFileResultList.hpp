// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODYDELETEFILERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODYDELETEFILERESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList() = default ;
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList(const DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList &) = default ;
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList(DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList &&) = default ;
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList() = default ;
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& operator=(const DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList &) = default ;
    DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& operator=(DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->result_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The time when the file was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The result of deletion. A value of OK indicates that the file is deleted. Other values indicate that the file failed to be deleted.
    // 
    // Valid values:
    // 
    // *   OK: The file was deleted.
    // *   NotFound: The file was not found.
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

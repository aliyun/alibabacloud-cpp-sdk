// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEditingJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EditingTasksInfo, editingTasksInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EditingTasksInfo, editingTasksInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEditingJobInfoResponseBody() = default ;
    GetEditingJobInfoResponseBody(const GetEditingJobInfoResponseBody &) = default ;
    GetEditingJobInfoResponseBody(GetEditingJobInfoResponseBody &&) = default ;
    GetEditingJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingJobInfoResponseBody() = default ;
    GetEditingJobInfoResponseBody& operator=(const GetEditingJobInfoResponseBody &) = default ;
    GetEditingJobInfoResponseBody& operator=(GetEditingJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->editingTasksInfo_ == nullptr && this->requestId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline GetEditingJobInfoResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // editingTasksInfo Field Functions 
    bool hasEditingTasksInfo() const { return this->editingTasksInfo_ != nullptr;};
    void deleteEditingTasksInfo() { this->editingTasksInfo_ = nullptr;};
    inline string getEditingTasksInfo() const { DARABONBA_PTR_GET_DEFAULT(editingTasksInfo_, "") };
    inline GetEditingJobInfoResponseBody& setEditingTasksInfo(string editingTasksInfo) { DARABONBA_PTR_SET_VALUE(editingTasksInfo_, editingTasksInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEditingJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the production studio.
    shared_ptr<string> casterId_ {};
    // The information about editing tasks. The following fields are returned for each editing task:
    // 
    // *   **OutputVodId**: the ID of the output video-on-demand (VOD) file.
    // *   **TaskStatus**: the status of the editing task. Valid values: -1, 0, 1, 2, and 3. A value of -1 indicates that the editing task fails. A value of 0 indicates that the editing task is being initialized. A value of 1 indicates that editing is in progress. A value of 2 indicates that the output VOD file is being uploaded. A value of 3 indicates that the editing task is successful.
    // *   **StorageLocation**: the storage location in ApsaraVideo VOD.
    // *   **FileName**: the name of the file that is edited.
    // *   **ShowId**: the ID of the episode.
    shared_ptr<string> editingTasksInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

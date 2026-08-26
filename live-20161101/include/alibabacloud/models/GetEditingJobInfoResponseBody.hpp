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
    // The production studio ID.
    shared_ptr<string> casterId_ {};
    // The video clip task information. This includes:
    // 
    // - **OutputVodId**: The ID of the output video-on-demand file.
    // 
    // - **TaskStatus**: The status of the video clip task. (-1: failed. 0: task initialized. 1: clipping in progress. 2: uploading. 3: task succeeded.)
    // 
    // - **StorageLocation**: The video-on-demand storage address.
    // 
    // - **FileName**: The name of the clipped file.
    // 
    // - **ShowId**: The show ID.
    shared_ptr<string> editingTasksInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

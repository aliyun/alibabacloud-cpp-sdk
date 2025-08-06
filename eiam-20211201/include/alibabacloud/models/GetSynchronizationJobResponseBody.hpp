// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJob, synchronizationJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJob, synchronizationJob_);
    };
    GetSynchronizationJobResponseBody() = default ;
    GetSynchronizationJobResponseBody(const GetSynchronizationJobResponseBody &) = default ;
    GetSynchronizationJobResponseBody(GetSynchronizationJobResponseBody &&) = default ;
    GetSynchronizationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBody() = default ;
    GetSynchronizationJobResponseBody& operator=(const GetSynchronizationJobResponseBody &) = default ;
    GetSynchronizationJobResponseBody& operator=(GetSynchronizationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->synchronizationJob_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSynchronizationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationJob Field Functions 
    bool hasSynchronizationJob() const { return this->synchronizationJob_ != nullptr;};
    void deleteSynchronizationJob() { this->synchronizationJob_ = nullptr;};
    inline const GetSynchronizationJobResponseBodySynchronizationJob & synchronizationJob() const { DARABONBA_PTR_GET_CONST(synchronizationJob_, GetSynchronizationJobResponseBodySynchronizationJob) };
    inline GetSynchronizationJobResponseBodySynchronizationJob synchronizationJob() { DARABONBA_PTR_GET(synchronizationJob_, GetSynchronizationJobResponseBodySynchronizationJob) };
    inline GetSynchronizationJobResponseBody& setSynchronizationJob(const GetSynchronizationJobResponseBodySynchronizationJob & synchronizationJob) { DARABONBA_PTR_SET_VALUE(synchronizationJob_, synchronizationJob) };
    inline GetSynchronizationJobResponseBody& setSynchronizationJob(GetSynchronizationJobResponseBodySynchronizationJob && synchronizationJob) { DARABONBA_PTR_SET_RVALUE(synchronizationJob_, synchronizationJob) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the synchronization job.
    std::shared_ptr<GetSynchronizationJobResponseBodySynchronizationJob> synchronizationJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

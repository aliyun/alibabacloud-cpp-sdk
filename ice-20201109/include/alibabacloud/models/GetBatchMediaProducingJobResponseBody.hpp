// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBatchMediaProducingJobResponseBodyEditingBatchJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetBatchMediaProducingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingBatchJob, editingBatchJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingBatchJob, editingBatchJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBatchMediaProducingJobResponseBody() = default ;
    GetBatchMediaProducingJobResponseBody(const GetBatchMediaProducingJobResponseBody &) = default ;
    GetBatchMediaProducingJobResponseBody(GetBatchMediaProducingJobResponseBody &&) = default ;
    GetBatchMediaProducingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchMediaProducingJobResponseBody() = default ;
    GetBatchMediaProducingJobResponseBody& operator=(const GetBatchMediaProducingJobResponseBody &) = default ;
    GetBatchMediaProducingJobResponseBody& operator=(GetBatchMediaProducingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingBatchJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // editingBatchJob Field Functions 
    bool hasEditingBatchJob() const { return this->editingBatchJob_ != nullptr;};
    void deleteEditingBatchJob() { this->editingBatchJob_ = nullptr;};
    inline const GetBatchMediaProducingJobResponseBodyEditingBatchJob & editingBatchJob() const { DARABONBA_PTR_GET_CONST(editingBatchJob_, GetBatchMediaProducingJobResponseBodyEditingBatchJob) };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob editingBatchJob() { DARABONBA_PTR_GET(editingBatchJob_, GetBatchMediaProducingJobResponseBodyEditingBatchJob) };
    inline GetBatchMediaProducingJobResponseBody& setEditingBatchJob(const GetBatchMediaProducingJobResponseBodyEditingBatchJob & editingBatchJob) { DARABONBA_PTR_SET_VALUE(editingBatchJob_, editingBatchJob) };
    inline GetBatchMediaProducingJobResponseBody& setEditingBatchJob(GetBatchMediaProducingJobResponseBodyEditingBatchJob && editingBatchJob) { DARABONBA_PTR_SET_RVALUE(editingBatchJob_, editingBatchJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchMediaProducingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the quick video production job.
    std::shared_ptr<GetBatchMediaProducingJobResponseBodyEditingBatchJob> editingBatchJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

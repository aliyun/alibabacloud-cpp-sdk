// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITSHOWANDREPLACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EDITSHOWANDREPLACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EditShowAndReplaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditShowAndReplaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EditShowAndReplaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EditShowAndReplaceResponseBody() = default ;
    EditShowAndReplaceResponseBody(const EditShowAndReplaceResponseBody &) = default ;
    EditShowAndReplaceResponseBody(EditShowAndReplaceResponseBody &&) = default ;
    EditShowAndReplaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditShowAndReplaceResponseBody() = default ;
    EditShowAndReplaceResponseBody& operator=(const EditShowAndReplaceResponseBody &) = default ;
    EditShowAndReplaceResponseBody& operator=(EditShowAndReplaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // jobInfo Field Functions 
    bool hasJobInfo() const { return this->jobInfo_ != nullptr;};
    void deleteJobInfo() { this->jobInfo_ = nullptr;};
    inline string getJobInfo() const { DARABONBA_PTR_GET_DEFAULT(jobInfo_, "") };
    inline EditShowAndReplaceResponseBody& setJobInfo(string jobInfo) { DARABONBA_PTR_SET_VALUE(jobInfo_, jobInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EditShowAndReplaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the editing task. The following fields are included:
    // 
    // *   **vodId**: the ID of the VOD file.
    // *   **mediaid**: the ID of the media file.
    // *   **jobId**: the ID of the editing task.
    shared_ptr<string> jobInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

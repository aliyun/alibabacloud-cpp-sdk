// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITRAYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITRAYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SubmitRayJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRayJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRayJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
    };
    SubmitRayJobResponseBody() = default ;
    SubmitRayJobResponseBody(const SubmitRayJobResponseBody &) = default ;
    SubmitRayJobResponseBody(SubmitRayJobResponseBody &&) = default ;
    SubmitRayJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRayJobResponseBody() = default ;
    SubmitRayJobResponseBody& operator=(const SubmitRayJobResponseBody &) = default ;
    SubmitRayJobResponseBody& operator=(SubmitRayJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->submissionId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitRayJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submissionId Field Functions 
    bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
    void deleteSubmissionId() { this->submissionId_ = nullptr;};
    inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
    inline SubmitRayJobResponseBody& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> submissionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif

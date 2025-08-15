// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartJobRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StartJobRunResponseBody() = default ;
    StartJobRunResponseBody(const StartJobRunResponseBody &) = default ;
    StartJobRunResponseBody(StartJobRunResponseBody &&) = default ;
    StartJobRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRunResponseBody() = default ;
    StartJobRunResponseBody& operator=(const StartJobRunResponseBody &) = default ;
    StartJobRunResponseBody& operator=(StartJobRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobRunId_ != nullptr
        && this->requestId_ != nullptr; };
    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string jobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline StartJobRunResponseBody& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartJobRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobRunId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif

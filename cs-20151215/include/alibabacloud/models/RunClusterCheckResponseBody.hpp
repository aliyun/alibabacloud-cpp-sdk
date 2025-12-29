// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLUSTERCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCLUSTERCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RunClusterCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunClusterCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(check_id, checkId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunClusterCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(check_id, checkId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    RunClusterCheckResponseBody() = default ;
    RunClusterCheckResponseBody(const RunClusterCheckResponseBody &) = default ;
    RunClusterCheckResponseBody(RunClusterCheckResponseBody &&) = default ;
    RunClusterCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunClusterCheckResponseBody() = default ;
    RunClusterCheckResponseBody& operator=(const RunClusterCheckResponseBody &) = default ;
    RunClusterCheckResponseBody& operator=(RunClusterCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->requestId_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline RunClusterCheckResponseBody& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunClusterCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster check task.
    shared_ptr<string> checkId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

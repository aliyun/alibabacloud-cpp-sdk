// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LEAVEMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LEAVEMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LeaveMessageGroupResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LeaveMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LeaveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, LeaveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    LeaveMessageGroupResponseBody() = default ;
    LeaveMessageGroupResponseBody(const LeaveMessageGroupResponseBody &) = default ;
    LeaveMessageGroupResponseBody(LeaveMessageGroupResponseBody &&) = default ;
    LeaveMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LeaveMessageGroupResponseBody() = default ;
    LeaveMessageGroupResponseBody& operator=(const LeaveMessageGroupResponseBody &) = default ;
    LeaveMessageGroupResponseBody& operator=(LeaveMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LeaveMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const LeaveMessageGroupResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, LeaveMessageGroupResponseBodyResult) };
    inline LeaveMessageGroupResponseBodyResult result() { DARABONBA_PTR_GET(result_, LeaveMessageGroupResponseBodyResult) };
    inline LeaveMessageGroupResponseBody& setResult(const LeaveMessageGroupResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline LeaveMessageGroupResponseBody& setResult(LeaveMessageGroupResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<LeaveMessageGroupResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

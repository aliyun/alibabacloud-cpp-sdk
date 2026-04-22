// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKOSSV2RESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MARKOSSV2RESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class MarkOssV2ResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkOssV2ResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailureRequestIds, failureRequestIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessRequestIds, successRequestIds_);
    };
    friend void from_json(const Darabonba::Json& j, MarkOssV2ResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureRequestIds, failureRequestIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessRequestIds, successRequestIds_);
    };
    MarkOssV2ResultResponseBody() = default ;
    MarkOssV2ResultResponseBody(const MarkOssV2ResultResponseBody &) = default ;
    MarkOssV2ResultResponseBody(MarkOssV2ResultResponseBody &&) = default ;
    MarkOssV2ResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkOssV2ResultResponseBody() = default ;
    MarkOssV2ResultResponseBody& operator=(const MarkOssV2ResultResponseBody &) = default ;
    MarkOssV2ResultResponseBody& operator=(MarkOssV2ResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureRequestIds_ == nullptr
        && this->requestId_ == nullptr && this->successRequestIds_ == nullptr; };
    // failureRequestIds Field Functions 
    bool hasFailureRequestIds() const { return this->failureRequestIds_ != nullptr;};
    void deleteFailureRequestIds() { this->failureRequestIds_ = nullptr;};
    inline const vector<string> & getFailureRequestIds() const { DARABONBA_PTR_GET_CONST(failureRequestIds_, vector<string>) };
    inline vector<string> getFailureRequestIds() { DARABONBA_PTR_GET(failureRequestIds_, vector<string>) };
    inline MarkOssV2ResultResponseBody& setFailureRequestIds(const vector<string> & failureRequestIds) { DARABONBA_PTR_SET_VALUE(failureRequestIds_, failureRequestIds) };
    inline MarkOssV2ResultResponseBody& setFailureRequestIds(vector<string> && failureRequestIds) { DARABONBA_PTR_SET_RVALUE(failureRequestIds_, failureRequestIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MarkOssV2ResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successRequestIds Field Functions 
    bool hasSuccessRequestIds() const { return this->successRequestIds_ != nullptr;};
    void deleteSuccessRequestIds() { this->successRequestIds_ = nullptr;};
    inline const vector<string> & getSuccessRequestIds() const { DARABONBA_PTR_GET_CONST(successRequestIds_, vector<string>) };
    inline vector<string> getSuccessRequestIds() { DARABONBA_PTR_GET(successRequestIds_, vector<string>) };
    inline MarkOssV2ResultResponseBody& setSuccessRequestIds(const vector<string> & successRequestIds) { DARABONBA_PTR_SET_VALUE(successRequestIds_, successRequestIds) };
    inline MarkOssV2ResultResponseBody& setSuccessRequestIds(vector<string> && successRequestIds) { DARABONBA_PTR_SET_RVALUE(successRequestIds_, successRequestIds) };


  protected:
    shared_ptr<vector<string>> failureRequestIds_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> successRequestIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

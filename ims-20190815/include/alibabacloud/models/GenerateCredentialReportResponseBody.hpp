// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECREDENTIALREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECREDENTIALREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GenerateCredentialReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCredentialReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCredentialReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GenerateCredentialReportResponseBody() = default ;
    GenerateCredentialReportResponseBody(const GenerateCredentialReportResponseBody &) = default ;
    GenerateCredentialReportResponseBody(GenerateCredentialReportResponseBody &&) = default ;
    GenerateCredentialReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCredentialReportResponseBody() = default ;
    GenerateCredentialReportResponseBody& operator=(const GenerateCredentialReportResponseBody &) = default ;
    GenerateCredentialReportResponseBody& operator=(GenerateCredentialReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->state_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateCredentialReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GenerateCredentialReportResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The generation status of the user credential report. Valid values:
    // 
    // *   STARTED: The system starts to generate the user credential report.
    // *   INPROGRESS: The user credential report is being generated.
    // *   COMPLETED: The user credential report is generated.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

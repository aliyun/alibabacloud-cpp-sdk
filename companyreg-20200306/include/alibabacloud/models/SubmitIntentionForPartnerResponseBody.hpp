// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINTENTIONFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINTENTIONFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class SubmitIntentionForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIntentionForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIntentionForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitIntentionForPartnerResponseBody() = default ;
    SubmitIntentionForPartnerResponseBody(const SubmitIntentionForPartnerResponseBody &) = default ;
    SubmitIntentionForPartnerResponseBody(SubmitIntentionForPartnerResponseBody &&) = default ;
    SubmitIntentionForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIntentionForPartnerResponseBody() = default ;
    SubmitIntentionForPartnerResponseBody& operator=(const SubmitIntentionForPartnerResponseBody &) = default ;
    SubmitIntentionForPartnerResponseBody& operator=(SubmitIntentionForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->extInfo_ == nullptr && this->intentionBizId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SubmitIntentionForPartnerResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline SubmitIntentionForPartnerResponseBody& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string getIntentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline SubmitIntentionForPartnerResponseBody& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitIntentionForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitIntentionForPartnerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> extInfo_ {};
    shared_ptr<string> intentionBizId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif

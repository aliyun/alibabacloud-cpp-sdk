// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class PatchPolarClawConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchPolarClawConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(PatchedKeys, patchedKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Restarted, restarted_);
    };
    friend void from_json(const Darabonba::Json& j, PatchPolarClawConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(PatchedKeys, patchedKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Restarted, restarted_);
    };
    PatchPolarClawConfigResponseBody() = default ;
    PatchPolarClawConfigResponseBody(const PatchPolarClawConfigResponseBody &) = default ;
    PatchPolarClawConfigResponseBody(PatchPolarClawConfigResponseBody &&) = default ;
    PatchPolarClawConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchPolarClawConfigResponseBody() = default ;
    PatchPolarClawConfigResponseBody& operator=(const PatchPolarClawConfigResponseBody &) = default ;
    PatchPolarClawConfigResponseBody& operator=(PatchPolarClawConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->patchedKeys_ == nullptr && this->requestId_ == nullptr
        && this->restarted_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline PatchPolarClawConfigResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline PatchPolarClawConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PatchPolarClawConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline PatchPolarClawConfigResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // patchedKeys Field Functions 
    bool hasPatchedKeys() const { return this->patchedKeys_ != nullptr;};
    void deletePatchedKeys() { this->patchedKeys_ = nullptr;};
    inline const vector<string> & getPatchedKeys() const { DARABONBA_PTR_GET_CONST(patchedKeys_, vector<string>) };
    inline vector<string> getPatchedKeys() { DARABONBA_PTR_GET(patchedKeys_, vector<string>) };
    inline PatchPolarClawConfigResponseBody& setPatchedKeys(const vector<string> & patchedKeys) { DARABONBA_PTR_SET_VALUE(patchedKeys_, patchedKeys) };
    inline PatchPolarClawConfigResponseBody& setPatchedKeys(vector<string> && patchedKeys) { DARABONBA_PTR_SET_RVALUE(patchedKeys_, patchedKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PatchPolarClawConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restarted Field Functions 
    bool hasRestarted() const { return this->restarted_ != nullptr;};
    void deleteRestarted() { this->restarted_ = nullptr;};
    inline bool getRestarted() const { DARABONBA_PTR_GET_DEFAULT(restarted_, false) };
    inline PatchPolarClawConfigResponseBody& setRestarted(bool restarted) { DARABONBA_PTR_SET_VALUE(restarted_, restarted) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> ok_ {};
    shared_ptr<vector<string>> patchedKeys_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> restarted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

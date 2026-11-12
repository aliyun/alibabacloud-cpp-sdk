// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKPOLARCLAWSKILLRESPONSEBODY_HPP_
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
  class CheckPolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSRegionId, OSSRegionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSRegionId, OSSRegionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckPolarClawSkillResponseBody() = default ;
    CheckPolarClawSkillResponseBody(const CheckPolarClawSkillResponseBody &) = default ;
    CheckPolarClawSkillResponseBody(CheckPolarClawSkillResponseBody &&) = default ;
    CheckPolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPolarClawSkillResponseBody() = default ;
    CheckPolarClawSkillResponseBody& operator=(const CheckPolarClawSkillResponseBody &) = default ;
    CheckPolarClawSkillResponseBody& operator=(CheckPolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->OSSBucket_ == nullptr && this->OSSRegionId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
    inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
    inline CheckPolarClawSkillResponseBody& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline CheckPolarClawSkillResponseBody& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline CheckPolarClawSkillResponseBody& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSRegionId Field Functions 
    bool hasOSSRegionId() const { return this->OSSRegionId_ != nullptr;};
    void deleteOSSRegionId() { this->OSSRegionId_ = nullptr;};
    inline string getOSSRegionId() const { DARABONBA_PTR_GET_DEFAULT(OSSRegionId_, "") };
    inline CheckPolarClawSkillResponseBody& setOSSRegionId(string OSSRegionId) { DARABONBA_PTR_SET_VALUE(OSSRegionId_, OSSRegionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckPolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckPolarClawSkillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned message.
    shared_ptr<vector<string>> message_ {};
    // The name of the OSS bucket where the skill files are stored.
    shared_ptr<string> OSSBucket_ {};
    // The region ID of the OSS bucket where the skill files are stored.
    shared_ptr<string> OSSRegionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request result. Valid values:
    // 
    // - **true**: The request is successful.
    // 
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

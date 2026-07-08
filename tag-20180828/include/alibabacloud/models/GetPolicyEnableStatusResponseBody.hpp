// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyEnableStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyEnableStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusModels, statusModels_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyEnableStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusModels, statusModels_);
    };
    GetPolicyEnableStatusResponseBody() = default ;
    GetPolicyEnableStatusResponseBody(const GetPolicyEnableStatusResponseBody &) = default ;
    GetPolicyEnableStatusResponseBody(GetPolicyEnableStatusResponseBody &&) = default ;
    GetPolicyEnableStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyEnableStatusResponseBody() = default ;
    GetPolicyEnableStatusResponseBody& operator=(const GetPolicyEnableStatusResponseBody &) = default ;
    GetPolicyEnableStatusResponseBody& operator=(GetPolicyEnableStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatusModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusModels& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, StatusModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      StatusModels() = default ;
      StatusModels(const StatusModels &) = default ;
      StatusModels(StatusModels &&) = default ;
      StatusModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusModels() = default ;
      StatusModels& operator=(const StatusModels &) = default ;
      StatusModels& operator=(StatusModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->userType_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StatusModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline StatusModels& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The status of the Tag Policy feature. Valid values:
      // 
      // *   PendingEnable: The feature is being enabled.
      // *   Enabled: The feature is enabled.
      // *   Closing: The feature is being disabled.
      // *   Disabled: The feature is disabled.
      shared_ptr<string> status_ {};
      // The mode of the Tag Policy feature. Valid values:
      // 
      // *   USER: single-account mode
      // *   RD: multi-account mode
      // 
      // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statusModels_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyEnableStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusModels Field Functions 
    bool hasStatusModels() const { return this->statusModels_ != nullptr;};
    void deleteStatusModels() { this->statusModels_ = nullptr;};
    inline const vector<GetPolicyEnableStatusResponseBody::StatusModels> & getStatusModels() const { DARABONBA_PTR_GET_CONST(statusModels_, vector<GetPolicyEnableStatusResponseBody::StatusModels>) };
    inline vector<GetPolicyEnableStatusResponseBody::StatusModels> getStatusModels() { DARABONBA_PTR_GET(statusModels_, vector<GetPolicyEnableStatusResponseBody::StatusModels>) };
    inline GetPolicyEnableStatusResponseBody& setStatusModels(const vector<GetPolicyEnableStatusResponseBody::StatusModels> & statusModels) { DARABONBA_PTR_SET_VALUE(statusModels_, statusModels) };
    inline GetPolicyEnableStatusResponseBody& setStatusModels(vector<GetPolicyEnableStatusResponseBody::StatusModels> && statusModels) { DARABONBA_PTR_SET_RVALUE(statusModels_, statusModels) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the Tag Policy feature.
    shared_ptr<vector<GetPolicyEnableStatusResponseBody::StatusModels>> statusModels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif

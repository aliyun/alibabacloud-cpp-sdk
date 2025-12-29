// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationImageResponseBody() = default ;
    DescribeApplicationImageResponseBody(const DescribeApplicationImageResponseBody &) = default ;
    DescribeApplicationImageResponseBody(DescribeApplicationImageResponseBody &&) = default ;
    DescribeApplicationImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationImageResponseBody() = default ;
    DescribeApplicationImageResponseBody& operator=(const DescribeApplicationImageResponseBody &) = default ;
    DescribeApplicationImageResponseBody& operator=(DescribeApplicationImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CrUrl, crUrl_);
        DARABONBA_PTR_TO_JSON(Logo, logo_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RepoOriginType, repoOriginType_);
        DARABONBA_PTR_TO_JSON(RepoTag, repoTag_);
        DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CrUrl, crUrl_);
        DARABONBA_PTR_FROM_JSON(Logo, logo_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RepoOriginType, repoOriginType_);
        DARABONBA_PTR_FROM_JSON(RepoTag, repoTag_);
        DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->crUrl_ == nullptr
        && this->logo_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoOriginType_ == nullptr
        && this->repoTag_ == nullptr && this->repoType_ == nullptr; };
      // crUrl Field Functions 
      bool hasCrUrl() const { return this->crUrl_ != nullptr;};
      void deleteCrUrl() { this->crUrl_ = nullptr;};
      inline string getCrUrl() const { DARABONBA_PTR_GET_DEFAULT(crUrl_, "") };
      inline Data& setCrUrl(string crUrl) { DARABONBA_PTR_SET_VALUE(crUrl_, crUrl) };


      // logo Field Functions 
      bool hasLogo() const { return this->logo_ != nullptr;};
      void deleteLogo() { this->logo_ = nullptr;};
      inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
      inline Data& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Data& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline Data& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // repoOriginType Field Functions 
      bool hasRepoOriginType() const { return this->repoOriginType_ != nullptr;};
      void deleteRepoOriginType() { this->repoOriginType_ = nullptr;};
      inline string getRepoOriginType() const { DARABONBA_PTR_GET_DEFAULT(repoOriginType_, "") };
      inline Data& setRepoOriginType(string repoOriginType) { DARABONBA_PTR_SET_VALUE(repoOriginType_, repoOriginType) };


      // repoTag Field Functions 
      bool hasRepoTag() const { return this->repoTag_ != nullptr;};
      void deleteRepoTag() { this->repoTag_ = nullptr;};
      inline string getRepoTag() const { DARABONBA_PTR_GET_DEFAULT(repoTag_, "") };
      inline Data& setRepoTag(string repoTag) { DARABONBA_PTR_SET_VALUE(repoTag_, repoTag) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline Data& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    protected:
      // This parameter is reserved.
      shared_ptr<string> crUrl_ {};
      // This parameter is reserved.
      shared_ptr<string> logo_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the repository.
      shared_ptr<string> repoName_ {};
      // The name of the namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The type of the repository. Only Container Registry is supported.
      shared_ptr<string> repoOriginType_ {};
      // The tag of the image.
      shared_ptr<string> repoTag_ {};
      // This parameter is reserved.
      shared_ptr<string> repoType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationImageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationImageResponseBody::Data) };
    inline DescribeApplicationImageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationImageResponseBody::Data) };
    inline DescribeApplicationImageResponseBody& setData(const DescribeApplicationImageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationImageResponseBody& setData(DescribeApplicationImageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationImageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationImageResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information about the image of the application.
    shared_ptr<DescribeApplicationImageResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Valid values:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the information about the image was obtained. Valid values:
    // 
    // *   **true**: The information was obtained.
    // *   **false**: The information failed to be obtained.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

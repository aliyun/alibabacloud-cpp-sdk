// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEGROUPFEATUREGATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEGROUPFEATUREGATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class GetNodeGroupFeatureGateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeGroupFeatureGateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeGroupFeatureGateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetNodeGroupFeatureGateResponseBody() = default ;
    GetNodeGroupFeatureGateResponseBody(const GetNodeGroupFeatureGateResponseBody &) = default ;
    GetNodeGroupFeatureGateResponseBody(GetNodeGroupFeatureGateResponseBody &&) = default ;
    GetNodeGroupFeatureGateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeGroupFeatureGateResponseBody() = default ;
    GetNodeGroupFeatureGateResponseBody& operator=(const GetNodeGroupFeatureGateResponseBody &) = default ;
    GetNodeGroupFeatureGateResponseBody& operator=(GetNodeGroupFeatureGateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NeedRestartAfterModifyDiskSize, needRestartAfterModifyDiskSize_);
        DARABONBA_PTR_TO_JSON(SupportFastModeModifyResource, supportFastModeModifyResource_);
        DARABONBA_PTR_TO_JSON(SupportFastRestart, supportFastRestart_);
        DARABONBA_PTR_TO_JSON(SupportModifySpecType, supportModifySpecType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedRestartAfterModifyDiskSize, needRestartAfterModifyDiskSize_);
        DARABONBA_PTR_FROM_JSON(SupportFastModeModifyResource, supportFastModeModifyResource_);
        DARABONBA_PTR_FROM_JSON(SupportFastRestart, supportFastRestart_);
        DARABONBA_PTR_FROM_JSON(SupportModifySpecType, supportModifySpecType_);
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
      virtual bool empty() const override { return this->needRestartAfterModifyDiskSize_ == nullptr
        && this->supportFastModeModifyResource_ == nullptr && this->supportFastRestart_ == nullptr && this->supportModifySpecType_ == nullptr; };
      // needRestartAfterModifyDiskSize Field Functions 
      bool hasNeedRestartAfterModifyDiskSize() const { return this->needRestartAfterModifyDiskSize_ != nullptr;};
      void deleteNeedRestartAfterModifyDiskSize() { this->needRestartAfterModifyDiskSize_ = nullptr;};
      inline bool getNeedRestartAfterModifyDiskSize() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterModifyDiskSize_, false) };
      inline Data& setNeedRestartAfterModifyDiskSize(bool needRestartAfterModifyDiskSize) { DARABONBA_PTR_SET_VALUE(needRestartAfterModifyDiskSize_, needRestartAfterModifyDiskSize) };


      // supportFastModeModifyResource Field Functions 
      bool hasSupportFastModeModifyResource() const { return this->supportFastModeModifyResource_ != nullptr;};
      void deleteSupportFastModeModifyResource() { this->supportFastModeModifyResource_ = nullptr;};
      inline bool getSupportFastModeModifyResource() const { DARABONBA_PTR_GET_DEFAULT(supportFastModeModifyResource_, false) };
      inline Data& setSupportFastModeModifyResource(bool supportFastModeModifyResource) { DARABONBA_PTR_SET_VALUE(supportFastModeModifyResource_, supportFastModeModifyResource) };


      // supportFastRestart Field Functions 
      bool hasSupportFastRestart() const { return this->supportFastRestart_ != nullptr;};
      void deleteSupportFastRestart() { this->supportFastRestart_ = nullptr;};
      inline bool getSupportFastRestart() const { DARABONBA_PTR_GET_DEFAULT(supportFastRestart_, false) };
      inline Data& setSupportFastRestart(bool supportFastRestart) { DARABONBA_PTR_SET_VALUE(supportFastRestart_, supportFastRestart) };


      // supportModifySpecType Field Functions 
      bool hasSupportModifySpecType() const { return this->supportModifySpecType_ != nullptr;};
      void deleteSupportModifySpecType() { this->supportModifySpecType_ = nullptr;};
      inline bool getSupportModifySpecType() const { DARABONBA_PTR_GET_DEFAULT(supportModifySpecType_, false) };
      inline Data& setSupportModifySpecType(bool supportModifySpecType) { DARABONBA_PTR_SET_VALUE(supportModifySpecType_, supportModifySpecType) };


    protected:
      shared_ptr<bool> needRestartAfterModifyDiskSize_ {};
      shared_ptr<bool> supportFastModeModifyResource_ {};
      shared_ptr<bool> supportFastRestart_ {};
      shared_ptr<bool> supportModifySpecType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetNodeGroupFeatureGateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNodeGroupFeatureGateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNodeGroupFeatureGateResponseBody::Data) };
    inline GetNodeGroupFeatureGateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNodeGroupFeatureGateResponseBody::Data) };
    inline GetNodeGroupFeatureGateResponseBody& setData(const GetNodeGroupFeatureGateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNodeGroupFeatureGateResponseBody& setData(GetNodeGroupFeatureGateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetNodeGroupFeatureGateResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetNodeGroupFeatureGateResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetNodeGroupFeatureGateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeGroupFeatureGateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNodeGroupFeatureGateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetNodeGroupFeatureGateResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<GetNodeGroupFeatureGateResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif

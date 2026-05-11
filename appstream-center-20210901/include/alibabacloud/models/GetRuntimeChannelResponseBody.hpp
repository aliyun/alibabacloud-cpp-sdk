// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetRuntimeChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetRuntimeChannelResponseBody() = default ;
    GetRuntimeChannelResponseBody(const GetRuntimeChannelResponseBody &) = default ;
    GetRuntimeChannelResponseBody(GetRuntimeChannelResponseBody &&) = default ;
    GetRuntimeChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeChannelResponseBody() = default ;
    GetRuntimeChannelResponseBody& operator=(const GetRuntimeChannelResponseBody &) = default ;
    GetRuntimeChannelResponseBody& operator=(GetRuntimeChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_TO_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_TO_JSON(QrCodeStatus, qrCodeStatus_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_FROM_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_FROM_JSON(QrCodeStatus, qrCodeStatus_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->code_ == nullptr && this->config_ == nullptr && this->configMode_ == nullptr && this->qrCodeNotifyUrl_ == nullptr && this->qrCodeStatus_ == nullptr
        && this->riskType_ == nullptr && this->status_ == nullptr; };
      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline Data& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // configMode Field Functions 
      bool hasConfigMode() const { return this->configMode_ != nullptr;};
      void deleteConfigMode() { this->configMode_ = nullptr;};
      inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
      inline Data& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


      // qrCodeNotifyUrl Field Functions 
      bool hasQrCodeNotifyUrl() const { return this->qrCodeNotifyUrl_ != nullptr;};
      void deleteQrCodeNotifyUrl() { this->qrCodeNotifyUrl_ = nullptr;};
      inline string getQrCodeNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(qrCodeNotifyUrl_, "") };
      inline Data& setQrCodeNotifyUrl(string qrCodeNotifyUrl) { DARABONBA_PTR_SET_VALUE(qrCodeNotifyUrl_, qrCodeNotifyUrl) };


      // qrCodeStatus Field Functions 
      bool hasQrCodeStatus() const { return this->qrCodeStatus_ != nullptr;};
      void deleteQrCodeStatus() { this->qrCodeStatus_ = nullptr;};
      inline string getQrCodeStatus() const { DARABONBA_PTR_GET_DEFAULT(qrCodeStatus_, "") };
      inline Data& setQrCodeStatus(string qrCodeStatus) { DARABONBA_PTR_SET_VALUE(qrCodeStatus_, qrCodeStatus) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline Data& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> configMode_ {};
      shared_ptr<string> qrCodeNotifyUrl_ {};
      shared_ptr<string> qrCodeStatus_ {};
      shared_ptr<string> riskType_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetRuntimeChannelResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetRuntimeChannelResponseBody::Data>) };
    inline vector<GetRuntimeChannelResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetRuntimeChannelResponseBody::Data>) };
    inline GetRuntimeChannelResponseBody& setData(const vector<GetRuntimeChannelResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuntimeChannelResponseBody& setData(vector<GetRuntimeChannelResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuntimeChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetRuntimeChannelResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<GetRuntimeChannelResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

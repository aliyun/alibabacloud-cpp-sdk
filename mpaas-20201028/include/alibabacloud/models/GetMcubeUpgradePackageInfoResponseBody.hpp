// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeUpgradePackageInfoResponseBodyGetPackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetPackageResult, getPackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetPackageResult, getPackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeUpgradePackageInfoResponseBody() = default ;
    GetMcubeUpgradePackageInfoResponseBody(const GetMcubeUpgradePackageInfoResponseBody &) = default ;
    GetMcubeUpgradePackageInfoResponseBody(GetMcubeUpgradePackageInfoResponseBody &&) = default ;
    GetMcubeUpgradePackageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBody() = default ;
    GetMcubeUpgradePackageInfoResponseBody& operator=(const GetMcubeUpgradePackageInfoResponseBody &) = default ;
    GetMcubeUpgradePackageInfoResponseBody& operator=(GetMcubeUpgradePackageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->getPackageResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // getPackageResult Field Functions 
    bool hasGetPackageResult() const { return this->getPackageResult_ != nullptr;};
    void deleteGetPackageResult() { this->getPackageResult_ = nullptr;};
    inline const GetMcubeUpgradePackageInfoResponseBodyGetPackageResult & getPackageResult() const { DARABONBA_PTR_GET_CONST(getPackageResult_, GetMcubeUpgradePackageInfoResponseBodyGetPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResult getPackageResult() { DARABONBA_PTR_GET(getPackageResult_, GetMcubeUpgradePackageInfoResponseBodyGetPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBody& setGetPackageResult(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResult & getPackageResult) { DARABONBA_PTR_SET_VALUE(getPackageResult_, getPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBody& setGetPackageResult(GetMcubeUpgradePackageInfoResponseBodyGetPackageResult && getPackageResult) { DARABONBA_PTR_SET_RVALUE(getPackageResult_, getPackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<GetMcubeUpgradePackageInfoResponseBodyGetPackageResult> getPackageResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

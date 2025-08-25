// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODYLISTPACKAGESRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODYLISTPACKAGESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListMcubeUpgradePackagesResponseBodyListPackagesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradePackagesResponseBodyListPackagesResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradePackagesResponseBodyListPackagesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMcubeUpgradePackagesResponseBodyListPackagesResult() = default ;
    ListMcubeUpgradePackagesResponseBodyListPackagesResult(const ListMcubeUpgradePackagesResponseBodyListPackagesResult &) = default ;
    ListMcubeUpgradePackagesResponseBodyListPackagesResult(ListMcubeUpgradePackagesResponseBodyListPackagesResult &&) = default ;
    ListMcubeUpgradePackagesResponseBodyListPackagesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradePackagesResponseBodyListPackagesResult() = default ;
    ListMcubeUpgradePackagesResponseBodyListPackagesResult& operator=(const ListMcubeUpgradePackagesResponseBodyListPackagesResult &) = default ;
    ListMcubeUpgradePackagesResponseBodyListPackagesResult& operator=(ListMcubeUpgradePackagesResponseBodyListPackagesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->packages_ != nullptr && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages> & packages() const { DARABONBA_PTR_GET_CONST(packages_, vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages>) };
    inline vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages> packages() { DARABONBA_PTR_GET(packages_, vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages>) };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setPackages(const vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setPackages(vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeUpgradePackagesResponseBodyListPackagesResultPackages>> packages_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif

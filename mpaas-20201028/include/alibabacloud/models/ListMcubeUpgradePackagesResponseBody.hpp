// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeUpgradePackagesResponseBodyListPackagesResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeUpgradePackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradePackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListPackagesResult, listPackagesResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradePackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListPackagesResult, listPackagesResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeUpgradePackagesResponseBody() = default ;
    ListMcubeUpgradePackagesResponseBody(const ListMcubeUpgradePackagesResponseBody &) = default ;
    ListMcubeUpgradePackagesResponseBody(ListMcubeUpgradePackagesResponseBody &&) = default ;
    ListMcubeUpgradePackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradePackagesResponseBody() = default ;
    ListMcubeUpgradePackagesResponseBody& operator=(const ListMcubeUpgradePackagesResponseBody &) = default ;
    ListMcubeUpgradePackagesResponseBody& operator=(ListMcubeUpgradePackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listPackagesResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // listPackagesResult Field Functions 
    bool hasListPackagesResult() const { return this->listPackagesResult_ != nullptr;};
    void deleteListPackagesResult() { this->listPackagesResult_ = nullptr;};
    inline const ListMcubeUpgradePackagesResponseBodyListPackagesResult & listPackagesResult() const { DARABONBA_PTR_GET_CONST(listPackagesResult_, ListMcubeUpgradePackagesResponseBodyListPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBodyListPackagesResult listPackagesResult() { DARABONBA_PTR_GET(listPackagesResult_, ListMcubeUpgradePackagesResponseBodyListPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBody& setListPackagesResult(const ListMcubeUpgradePackagesResponseBodyListPackagesResult & listPackagesResult) { DARABONBA_PTR_SET_VALUE(listPackagesResult_, listPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBody& setListPackagesResult(ListMcubeUpgradePackagesResponseBodyListPackagesResult && listPackagesResult) { DARABONBA_PTR_SET_RVALUE(listPackagesResult_, listPackagesResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeUpgradePackagesResponseBodyListPackagesResult> listPackagesResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

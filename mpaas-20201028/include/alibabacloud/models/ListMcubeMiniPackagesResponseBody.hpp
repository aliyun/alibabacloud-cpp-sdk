// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeMiniPackagesResponseBodyListMiniPackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMiniPackageResult, listMiniPackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMiniPackageResult, listMiniPackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeMiniPackagesResponseBody() = default ;
    ListMcubeMiniPackagesResponseBody(const ListMcubeMiniPackagesResponseBody &) = default ;
    ListMcubeMiniPackagesResponseBody(ListMcubeMiniPackagesResponseBody &&) = default ;
    ListMcubeMiniPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniPackagesResponseBody() = default ;
    ListMcubeMiniPackagesResponseBody& operator=(const ListMcubeMiniPackagesResponseBody &) = default ;
    ListMcubeMiniPackagesResponseBody& operator=(ListMcubeMiniPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listMiniPackageResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // listMiniPackageResult Field Functions 
    bool hasListMiniPackageResult() const { return this->listMiniPackageResult_ != nullptr;};
    void deleteListMiniPackageResult() { this->listMiniPackageResult_ = nullptr;};
    inline const ListMcubeMiniPackagesResponseBodyListMiniPackageResult & listMiniPackageResult() const { DARABONBA_PTR_GET_CONST(listMiniPackageResult_, ListMcubeMiniPackagesResponseBodyListMiniPackageResult) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult listMiniPackageResult() { DARABONBA_PTR_GET(listMiniPackageResult_, ListMcubeMiniPackagesResponseBodyListMiniPackageResult) };
    inline ListMcubeMiniPackagesResponseBody& setListMiniPackageResult(const ListMcubeMiniPackagesResponseBodyListMiniPackageResult & listMiniPackageResult) { DARABONBA_PTR_SET_VALUE(listMiniPackageResult_, listMiniPackageResult) };
    inline ListMcubeMiniPackagesResponseBody& setListMiniPackageResult(ListMcubeMiniPackagesResponseBodyListMiniPackageResult && listMiniPackageResult) { DARABONBA_PTR_SET_RVALUE(listMiniPackageResult_, listMiniPackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeMiniPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeMiniPackagesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeMiniPackagesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeMiniPackagesResponseBodyListMiniPackageResult> listMiniPackageResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

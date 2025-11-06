// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaAppsResult, listMcubeNebulaAppsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaAppsResult, listMcubeNebulaAppsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaAppsResponseBody() = default ;
    ListMcubeNebulaAppsResponseBody(const ListMcubeNebulaAppsResponseBody &) = default ;
    ListMcubeNebulaAppsResponseBody(ListMcubeNebulaAppsResponseBody &&) = default ;
    ListMcubeNebulaAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaAppsResponseBody() = default ;
    ListMcubeNebulaAppsResponseBody& operator=(const ListMcubeNebulaAppsResponseBody &) = default ;
    ListMcubeNebulaAppsResponseBody& operator=(ListMcubeNebulaAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listMcubeNebulaAppsResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // listMcubeNebulaAppsResult Field Functions 
    bool hasListMcubeNebulaAppsResult() const { return this->listMcubeNebulaAppsResult_ != nullptr;};
    void deleteListMcubeNebulaAppsResult() { this->listMcubeNebulaAppsResult_ = nullptr;};
    inline const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult & listMcubeNebulaAppsResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaAppsResult_, ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult listMcubeNebulaAppsResult() { DARABONBA_PTR_GET(listMcubeNebulaAppsResult_, ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBody& setListMcubeNebulaAppsResult(const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult & listMcubeNebulaAppsResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaAppsResult_, listMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBody& setListMcubeNebulaAppsResult(ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult && listMcubeNebulaAppsResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaAppsResult_, listMcubeNebulaAppsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaAppsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaAppsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult> listMcubeNebulaAppsResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

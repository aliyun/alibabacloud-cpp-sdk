// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaResourceResult, listMcubeNebulaResourceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaResourceResult, listMcubeNebulaResourceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaResourcesResponseBody() = default ;
    ListMcubeNebulaResourcesResponseBody(const ListMcubeNebulaResourcesResponseBody &) = default ;
    ListMcubeNebulaResourcesResponseBody(ListMcubeNebulaResourcesResponseBody &&) = default ;
    ListMcubeNebulaResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaResourcesResponseBody() = default ;
    ListMcubeNebulaResourcesResponseBody& operator=(const ListMcubeNebulaResourcesResponseBody &) = default ;
    ListMcubeNebulaResourcesResponseBody& operator=(ListMcubeNebulaResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listMcubeNebulaResourceResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // listMcubeNebulaResourceResult Field Functions 
    bool hasListMcubeNebulaResourceResult() const { return this->listMcubeNebulaResourceResult_ != nullptr;};
    void deleteListMcubeNebulaResourceResult() { this->listMcubeNebulaResourceResult_ = nullptr;};
    inline const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult & listMcubeNebulaResourceResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaResourceResult_, ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult listMcubeNebulaResourceResult() { DARABONBA_PTR_GET(listMcubeNebulaResourceResult_, ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBody& setListMcubeNebulaResourceResult(const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult & listMcubeNebulaResourceResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaResourceResult_, listMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBody& setListMcubeNebulaResourceResult(ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult && listMcubeNebulaResourceResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaResourceResult_, listMcubeNebulaResourceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult> listMcubeNebulaResourceResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

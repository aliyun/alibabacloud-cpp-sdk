// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeWhitelistsResponseBodyListWhitelistResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeWhitelistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListWhitelistResult, listWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListWhitelistResult, listWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeWhitelistsResponseBody() = default ;
    ListMcubeWhitelistsResponseBody(const ListMcubeWhitelistsResponseBody &) = default ;
    ListMcubeWhitelistsResponseBody(ListMcubeWhitelistsResponseBody &&) = default ;
    ListMcubeWhitelistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeWhitelistsResponseBody() = default ;
    ListMcubeWhitelistsResponseBody& operator=(const ListMcubeWhitelistsResponseBody &) = default ;
    ListMcubeWhitelistsResponseBody& operator=(ListMcubeWhitelistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listWhitelistResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // listWhitelistResult Field Functions 
    bool hasListWhitelistResult() const { return this->listWhitelistResult_ != nullptr;};
    void deleteListWhitelistResult() { this->listWhitelistResult_ = nullptr;};
    inline const ListMcubeWhitelistsResponseBodyListWhitelistResult & listWhitelistResult() const { DARABONBA_PTR_GET_CONST(listWhitelistResult_, ListMcubeWhitelistsResponseBodyListWhitelistResult) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult listWhitelistResult() { DARABONBA_PTR_GET(listWhitelistResult_, ListMcubeWhitelistsResponseBodyListWhitelistResult) };
    inline ListMcubeWhitelistsResponseBody& setListWhitelistResult(const ListMcubeWhitelistsResponseBodyListWhitelistResult & listWhitelistResult) { DARABONBA_PTR_SET_VALUE(listWhitelistResult_, listWhitelistResult) };
    inline ListMcubeWhitelistsResponseBody& setListWhitelistResult(ListMcubeWhitelistsResponseBodyListWhitelistResult && listWhitelistResult) { DARABONBA_PTR_SET_RVALUE(listWhitelistResult_, listWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeWhitelistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeWhitelistsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeWhitelistsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeWhitelistsResponseBodyListWhitelistResult> listWhitelistResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

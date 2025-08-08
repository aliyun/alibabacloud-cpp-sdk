// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMappCenterAppsResponseBodyListMappCenterAppResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMappCenterAppResult, listMappCenterAppResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMappCenterAppResult, listMappCenterAppResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMappCenterAppsResponseBody() = default ;
    ListMappCenterAppsResponseBody(const ListMappCenterAppsResponseBody &) = default ;
    ListMappCenterAppsResponseBody(ListMappCenterAppsResponseBody &&) = default ;
    ListMappCenterAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterAppsResponseBody() = default ;
    ListMappCenterAppsResponseBody& operator=(const ListMappCenterAppsResponseBody &) = default ;
    ListMappCenterAppsResponseBody& operator=(ListMappCenterAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listMappCenterAppResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // listMappCenterAppResult Field Functions 
    bool hasListMappCenterAppResult() const { return this->listMappCenterAppResult_ != nullptr;};
    void deleteListMappCenterAppResult() { this->listMappCenterAppResult_ = nullptr;};
    inline const ListMappCenterAppsResponseBodyListMappCenterAppResult & listMappCenterAppResult() const { DARABONBA_PTR_GET_CONST(listMappCenterAppResult_, ListMappCenterAppsResponseBodyListMappCenterAppResult) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResult listMappCenterAppResult() { DARABONBA_PTR_GET(listMappCenterAppResult_, ListMappCenterAppsResponseBodyListMappCenterAppResult) };
    inline ListMappCenterAppsResponseBody& setListMappCenterAppResult(const ListMappCenterAppsResponseBodyListMappCenterAppResult & listMappCenterAppResult) { DARABONBA_PTR_SET_VALUE(listMappCenterAppResult_, listMappCenterAppResult) };
    inline ListMappCenterAppsResponseBody& setListMappCenterAppResult(ListMappCenterAppsResponseBodyListMappCenterAppResult && listMappCenterAppResult) { DARABONBA_PTR_SET_RVALUE(listMappCenterAppResult_, listMappCenterAppResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMappCenterAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMappCenterAppsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMappCenterAppsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMappCenterAppsResponseBodyListMappCenterAppResult> listMappCenterAppResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

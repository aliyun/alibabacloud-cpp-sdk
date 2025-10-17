// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSaasInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaasToken, saasToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaasToken, saasToken_);
    };
    ListSaasInfoResponseBody() = default ;
    ListSaasInfoResponseBody(const ListSaasInfoResponseBody &) = default ;
    ListSaasInfoResponseBody(ListSaasInfoResponseBody &&) = default ;
    ListSaasInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasInfoResponseBody() = default ;
    ListSaasInfoResponseBody& operator=(const ListSaasInfoResponseBody &) = default ;
    ListSaasInfoResponseBody& operator=(ListSaasInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->saasToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSaasInfoResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSaasInfoResponseBodyData>) };
    inline vector<ListSaasInfoResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListSaasInfoResponseBodyData>) };
    inline ListSaasInfoResponseBody& setData(const vector<ListSaasInfoResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSaasInfoResponseBody& setData(vector<ListSaasInfoResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSaasInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saasToken Field Functions 
    bool hasSaasToken() const { return this->saasToken_ != nullptr;};
    void deleteSaasToken() { this->saasToken_ = nullptr;};
    inline string saasToken() const { DARABONBA_PTR_GET_DEFAULT(saasToken_, "") };
    inline ListSaasInfoResponseBody& setSaasToken(string saasToken) { DARABONBA_PTR_SET_VALUE(saasToken_, saasToken) };


  protected:
    std::shared_ptr<vector<ListSaasInfoResponseBodyData>> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> saasToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif

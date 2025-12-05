// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClientKeysResponseBodyClientKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListClientKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientKeys, clientKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientKeys, clientKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClientKeysResponseBody() = default ;
    ListClientKeysResponseBody(const ListClientKeysResponseBody &) = default ;
    ListClientKeysResponseBody(ListClientKeysResponseBody &&) = default ;
    ListClientKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientKeysResponseBody() = default ;
    ListClientKeysResponseBody& operator=(const ListClientKeysResponseBody &) = default ;
    ListClientKeysResponseBody& operator=(ListClientKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientKeys_ == nullptr
        && return this->requestId_ == nullptr; };
    // clientKeys Field Functions 
    bool hasClientKeys() const { return this->clientKeys_ != nullptr;};
    void deleteClientKeys() { this->clientKeys_ = nullptr;};
    inline const vector<ListClientKeysResponseBodyClientKeys> & clientKeys() const { DARABONBA_PTR_GET_CONST(clientKeys_, vector<ListClientKeysResponseBodyClientKeys>) };
    inline vector<ListClientKeysResponseBodyClientKeys> clientKeys() { DARABONBA_PTR_GET(clientKeys_, vector<ListClientKeysResponseBodyClientKeys>) };
    inline ListClientKeysResponseBody& setClientKeys(const vector<ListClientKeysResponseBodyClientKeys> & clientKeys) { DARABONBA_PTR_SET_VALUE(clientKeys_, clientKeys) };
    inline ListClientKeysResponseBody& setClientKeys(vector<ListClientKeysResponseBodyClientKeys> && clientKeys) { DARABONBA_PTR_SET_RVALUE(clientKeys_, clientKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of client keys.
    std::shared_ptr<vector<ListClientKeysResponseBodyClientKeys>> clientKeys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

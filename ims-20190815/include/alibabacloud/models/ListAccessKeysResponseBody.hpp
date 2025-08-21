// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAccessKeysResponseBodyAccessKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeys, accessKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeys, accessKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccessKeysResponseBody() = default ;
    ListAccessKeysResponseBody(const ListAccessKeysResponseBody &) = default ;
    ListAccessKeysResponseBody(ListAccessKeysResponseBody &&) = default ;
    ListAccessKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysResponseBody() = default ;
    ListAccessKeysResponseBody& operator=(const ListAccessKeysResponseBody &) = default ;
    ListAccessKeysResponseBody& operator=(ListAccessKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeys_ != nullptr
        && this->requestId_ != nullptr; };
    // accessKeys Field Functions 
    bool hasAccessKeys() const { return this->accessKeys_ != nullptr;};
    void deleteAccessKeys() { this->accessKeys_ = nullptr;};
    inline const ListAccessKeysResponseBodyAccessKeys & accessKeys() const { DARABONBA_PTR_GET_CONST(accessKeys_, ListAccessKeysResponseBodyAccessKeys) };
    inline ListAccessKeysResponseBodyAccessKeys accessKeys() { DARABONBA_PTR_GET(accessKeys_, ListAccessKeysResponseBodyAccessKeys) };
    inline ListAccessKeysResponseBody& setAccessKeys(const ListAccessKeysResponseBodyAccessKeys & accessKeys) { DARABONBA_PTR_SET_VALUE(accessKeys_, accessKeys) };
    inline ListAccessKeysResponseBody& setAccessKeys(ListAccessKeysResponseBodyAccessKeys && accessKeys) { DARABONBA_PTR_SET_RVALUE(accessKeys_, accessKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AccessKey pairs.
    std::shared_ptr<ListAccessKeysResponseBodyAccessKeys> accessKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPasskeysResponseBodyPasskeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPasskeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPasskeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Passkeys, passkeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPasskeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Passkeys, passkeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPasskeysResponseBody() = default ;
    ListPasskeysResponseBody(const ListPasskeysResponseBody &) = default ;
    ListPasskeysResponseBody(ListPasskeysResponseBody &&) = default ;
    ListPasskeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPasskeysResponseBody() = default ;
    ListPasskeysResponseBody& operator=(const ListPasskeysResponseBody &) = default ;
    ListPasskeysResponseBody& operator=(ListPasskeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passkeys_ != nullptr
        && this->requestId_ != nullptr; };
    // passkeys Field Functions 
    bool hasPasskeys() const { return this->passkeys_ != nullptr;};
    void deletePasskeys() { this->passkeys_ = nullptr;};
    inline const vector<ListPasskeysResponseBodyPasskeys> & passkeys() const { DARABONBA_PTR_GET_CONST(passkeys_, vector<ListPasskeysResponseBodyPasskeys>) };
    inline vector<ListPasskeysResponseBodyPasskeys> passkeys() { DARABONBA_PTR_GET(passkeys_, vector<ListPasskeysResponseBodyPasskeys>) };
    inline ListPasskeysResponseBody& setPasskeys(const vector<ListPasskeysResponseBodyPasskeys> & passkeys) { DARABONBA_PTR_SET_VALUE(passkeys_, passkeys) };
    inline ListPasskeysResponseBody& setPasskeys(vector<ListPasskeysResponseBodyPasskeys> && passkeys) { DARABONBA_PTR_SET_RVALUE(passkeys_, passkeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPasskeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the passkeys.
    std::shared_ptr<vector<ListPasskeysResponseBodyPasskeys>> passkeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

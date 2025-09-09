// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserPublicKeysResponseBodyPublicKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUserPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserPublicKeysResponseBody() = default ;
    ListUserPublicKeysResponseBody(const ListUserPublicKeysResponseBody &) = default ;
    ListUserPublicKeysResponseBody(ListUserPublicKeysResponseBody &&) = default ;
    ListUserPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPublicKeysResponseBody() = default ;
    ListUserPublicKeysResponseBody& operator=(const ListUserPublicKeysResponseBody &) = default ;
    ListUserPublicKeysResponseBody& operator=(ListUserPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publicKeys_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // publicKeys Field Functions 
    bool hasPublicKeys() const { return this->publicKeys_ != nullptr;};
    void deletePublicKeys() { this->publicKeys_ = nullptr;};
    inline const vector<ListUserPublicKeysResponseBodyPublicKeys> & publicKeys() const { DARABONBA_PTR_GET_CONST(publicKeys_, vector<ListUserPublicKeysResponseBodyPublicKeys>) };
    inline vector<ListUserPublicKeysResponseBodyPublicKeys> publicKeys() { DARABONBA_PTR_GET(publicKeys_, vector<ListUserPublicKeysResponseBodyPublicKeys>) };
    inline ListUserPublicKeysResponseBody& setPublicKeys(const vector<ListUserPublicKeysResponseBodyPublicKeys> & publicKeys) { DARABONBA_PTR_SET_VALUE(publicKeys_, publicKeys) };
    inline ListUserPublicKeysResponseBody& setPublicKeys(vector<ListUserPublicKeysResponseBodyPublicKeys> && publicKeys) { DARABONBA_PTR_SET_RVALUE(publicKeys_, publicKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the public keys of the user.
    std::shared_ptr<vector<ListUserPublicKeysResponseBodyPublicKeys>> publicKeys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of public keys.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

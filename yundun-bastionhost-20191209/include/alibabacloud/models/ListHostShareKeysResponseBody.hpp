// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHostShareKeysResponseBodyHostShareKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostShareKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostShareKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeys, hostShareKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostShareKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeys, hostShareKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostShareKeysResponseBody() = default ;
    ListHostShareKeysResponseBody(const ListHostShareKeysResponseBody &) = default ;
    ListHostShareKeysResponseBody(ListHostShareKeysResponseBody &&) = default ;
    ListHostShareKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostShareKeysResponseBody() = default ;
    ListHostShareKeysResponseBody& operator=(const ListHostShareKeysResponseBody &) = default ;
    ListHostShareKeysResponseBody& operator=(ListHostShareKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostShareKeys_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // hostShareKeys Field Functions 
    bool hasHostShareKeys() const { return this->hostShareKeys_ != nullptr;};
    void deleteHostShareKeys() { this->hostShareKeys_ = nullptr;};
    inline const vector<ListHostShareKeysResponseBodyHostShareKeys> & hostShareKeys() const { DARABONBA_PTR_GET_CONST(hostShareKeys_, vector<ListHostShareKeysResponseBodyHostShareKeys>) };
    inline vector<ListHostShareKeysResponseBodyHostShareKeys> hostShareKeys() { DARABONBA_PTR_GET(hostShareKeys_, vector<ListHostShareKeysResponseBodyHostShareKeys>) };
    inline ListHostShareKeysResponseBody& setHostShareKeys(const vector<ListHostShareKeysResponseBodyHostShareKeys> & hostShareKeys) { DARABONBA_PTR_SET_VALUE(hostShareKeys_, hostShareKeys) };
    inline ListHostShareKeysResponseBody& setHostShareKeys(vector<ListHostShareKeysResponseBodyHostShareKeys> && hostShareKeys) { DARABONBA_PTR_SET_RVALUE(hostShareKeys_, hostShareKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostShareKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListHostShareKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the shared keys.
    std::shared_ptr<vector<ListHostShareKeysResponseBodyHostShareKeys>> hostShareKeys_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the shared keys.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

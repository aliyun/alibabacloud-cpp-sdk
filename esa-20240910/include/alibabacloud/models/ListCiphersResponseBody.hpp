// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCIPHERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCIPHERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCiphersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCiphersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CiphersGroup, ciphersGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCiphersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphersGroup, ciphersGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCiphersResponseBody() = default ;
    ListCiphersResponseBody(const ListCiphersResponseBody &) = default ;
    ListCiphersResponseBody(ListCiphersResponseBody &&) = default ;
    ListCiphersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCiphersResponseBody() = default ;
    ListCiphersResponseBody& operator=(const ListCiphersResponseBody &) = default ;
    ListCiphersResponseBody& operator=(ListCiphersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphersGroup_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->totalCount_ == nullptr; };
    // ciphersGroup Field Functions 
    bool hasCiphersGroup() const { return this->ciphersGroup_ != nullptr;};
    void deleteCiphersGroup() { this->ciphersGroup_ = nullptr;};
    inline string ciphersGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersGroup_, "") };
    inline ListCiphersResponseBody& setCiphersGroup(string ciphersGroup) { DARABONBA_PTR_SET_VALUE(ciphersGroup_, ciphersGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCiphersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<string> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
    inline vector<string> result() { DARABONBA_PTR_GET(result_, vector<string>) };
    inline ListCiphersResponseBody& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCiphersResponseBody& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCiphersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Name of the cipher suite group.
    std::shared_ptr<string> ciphersGroup_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned result.
    std::shared_ptr<vector<string>> result_ = nullptr;
    // Total number of cipher suites.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

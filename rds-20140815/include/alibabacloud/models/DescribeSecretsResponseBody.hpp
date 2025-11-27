// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecretsResponseBodySecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    DescribeSecretsResponseBody() = default ;
    DescribeSecretsResponseBody(const DescribeSecretsResponseBody &) = default ;
    DescribeSecretsResponseBody(DescribeSecretsResponseBody &&) = default ;
    DescribeSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretsResponseBody() = default ;
    DescribeSecretsResponseBody& operator=(const DescribeSecretsResponseBody &) = default ;
    DescribeSecretsResponseBody& operator=(DescribeSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->secrets_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSecretsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSecretsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<DescribeSecretsResponseBodySecrets> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<DescribeSecretsResponseBodySecrets>) };
    inline vector<DescribeSecretsResponseBodySecrets> secrets() { DARABONBA_PTR_GET(secrets_, vector<DescribeSecretsResponseBodySecrets>) };
    inline DescribeSecretsResponseBody& setSecrets(const vector<DescribeSecretsResponseBodySecrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline DescribeSecretsResponseBody& setSecrets(vector<DescribeSecretsResponseBodySecrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the credential.
    std::shared_ptr<vector<DescribeSecretsResponseBodySecrets>> secrets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

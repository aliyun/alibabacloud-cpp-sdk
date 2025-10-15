// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCLIENTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCLIENTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationClientSecretsResponseBodyApplicationClientSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationClientSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecrets, applicationClientSecrets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecrets, applicationClientSecrets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationClientSecretsResponseBody() = default ;
    ListApplicationClientSecretsResponseBody(const ListApplicationClientSecretsResponseBody &) = default ;
    ListApplicationClientSecretsResponseBody(ListApplicationClientSecretsResponseBody &&) = default ;
    ListApplicationClientSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationClientSecretsResponseBody() = default ;
    ListApplicationClientSecretsResponseBody& operator=(const ListApplicationClientSecretsResponseBody &) = default ;
    ListApplicationClientSecretsResponseBody& operator=(ListApplicationClientSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationClientSecrets_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // applicationClientSecrets Field Functions 
    bool hasApplicationClientSecrets() const { return this->applicationClientSecrets_ != nullptr;};
    void deleteApplicationClientSecrets() { this->applicationClientSecrets_ = nullptr;};
    inline const vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets> & applicationClientSecrets() const { DARABONBA_PTR_GET_CONST(applicationClientSecrets_, vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets>) };
    inline vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets> applicationClientSecrets() { DARABONBA_PTR_GET(applicationClientSecrets_, vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets>) };
    inline ListApplicationClientSecretsResponseBody& setApplicationClientSecrets(const vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets> & applicationClientSecrets) { DARABONBA_PTR_SET_VALUE(applicationClientSecrets_, applicationClientSecrets) };
    inline ListApplicationClientSecretsResponseBody& setApplicationClientSecrets(vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets> && applicationClientSecrets) { DARABONBA_PTR_SET_RVALUE(applicationClientSecrets_, applicationClientSecrets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationClientSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationClientSecretsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the client keys.
    std::shared_ptr<vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets>> applicationClientSecrets_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(storageRequirements, storageRequirements_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(storageRequirements, storageRequirements_);
    };
    ListIntegrationPolicyStorageRequirementsResponseBody() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(const ListIntegrationPolicyStorageRequirementsResponseBody &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(ListIntegrationPolicyStorageRequirementsResponseBody &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBody() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody& operator=(const ListIntegrationPolicyStorageRequirementsResponseBody &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody& operator=(ListIntegrationPolicyStorageRequirementsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->storageRequirements_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageRequirements Field Functions 
    bool hasStorageRequirements() const { return this->storageRequirements_ != nullptr;};
    void deleteStorageRequirements() { this->storageRequirements_ = nullptr;};
    inline const vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements> & storageRequirements() const { DARABONBA_PTR_GET_CONST(storageRequirements_, vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements>) };
    inline vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements> storageRequirements() { DARABONBA_PTR_GET(storageRequirements_, vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setStorageRequirements(const vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements> & storageRequirements) { DARABONBA_PTR_SET_VALUE(storageRequirements_, storageRequirements) };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setStorageRequirements(vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements> && storageRequirements) { DARABONBA_PTR_SET_RVALUE(storageRequirements_, storageRequirements) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements>> storageRequirements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGKMSGRANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGKMSGRANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetCatalogKmsGrantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogKmsGrantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dataAccessRoleArn, dataAccessRoleArn_);
      DARABONBA_PTR_TO_JSON(keyPolicyStatement, keyPolicyStatement_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(workflowRoleArn, workflowRoleArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogKmsGrantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dataAccessRoleArn, dataAccessRoleArn_);
      DARABONBA_PTR_FROM_JSON(keyPolicyStatement, keyPolicyStatement_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(workflowRoleArn, workflowRoleArn_);
    };
    GetCatalogKmsGrantsResponseBody() = default ;
    GetCatalogKmsGrantsResponseBody(const GetCatalogKmsGrantsResponseBody &) = default ;
    GetCatalogKmsGrantsResponseBody(GetCatalogKmsGrantsResponseBody &&) = default ;
    GetCatalogKmsGrantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogKmsGrantsResponseBody() = default ;
    GetCatalogKmsGrantsResponseBody& operator=(const GetCatalogKmsGrantsResponseBody &) = default ;
    GetCatalogKmsGrantsResponseBody& operator=(GetCatalogKmsGrantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataAccessRoleArn_ == nullptr
        && this->keyPolicyStatement_ == nullptr && this->region_ == nullptr && this->workflowRoleArn_ == nullptr; };
    // dataAccessRoleArn Field Functions 
    bool hasDataAccessRoleArn() const { return this->dataAccessRoleArn_ != nullptr;};
    void deleteDataAccessRoleArn() { this->dataAccessRoleArn_ = nullptr;};
    inline string getDataAccessRoleArn() const { DARABONBA_PTR_GET_DEFAULT(dataAccessRoleArn_, "") };
    inline GetCatalogKmsGrantsResponseBody& setDataAccessRoleArn(string dataAccessRoleArn) { DARABONBA_PTR_SET_VALUE(dataAccessRoleArn_, dataAccessRoleArn) };


    // keyPolicyStatement Field Functions 
    bool hasKeyPolicyStatement() const { return this->keyPolicyStatement_ != nullptr;};
    void deleteKeyPolicyStatement() { this->keyPolicyStatement_ = nullptr;};
    inline string getKeyPolicyStatement() const { DARABONBA_PTR_GET_DEFAULT(keyPolicyStatement_, "") };
    inline GetCatalogKmsGrantsResponseBody& setKeyPolicyStatement(string keyPolicyStatement) { DARABONBA_PTR_SET_VALUE(keyPolicyStatement_, keyPolicyStatement) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetCatalogKmsGrantsResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // workflowRoleArn Field Functions 
    bool hasWorkflowRoleArn() const { return this->workflowRoleArn_ != nullptr;};
    void deleteWorkflowRoleArn() { this->workflowRoleArn_ = nullptr;};
    inline string getWorkflowRoleArn() const { DARABONBA_PTR_GET_DEFAULT(workflowRoleArn_, "") };
    inline GetCatalogKmsGrantsResponseBody& setWorkflowRoleArn(string workflowRoleArn) { DARABONBA_PTR_SET_VALUE(workflowRoleArn_, workflowRoleArn) };


  protected:
    shared_ptr<string> dataAccessRoleArn_ {};
    shared_ptr<string> keyPolicyStatement_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> workflowRoleArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

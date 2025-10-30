// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessApplicationResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessApplicationResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessApplicationResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
    };
    ListPolicesForPrivateAccessApplicationResponseBodyApplications() = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplications(const ListPolicesForPrivateAccessApplicationResponseBodyApplications &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplications(ListPolicesForPrivateAccessApplicationResponseBodyApplications &&) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessApplicationResponseBodyApplications() = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplications& operator=(const ListPolicesForPrivateAccessApplicationResponseBodyApplications &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplications& operator=(ListPolicesForPrivateAccessApplicationResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->policies_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies>) };
    inline vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies>) };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplications& setPolicies(const vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplications& setPolicies(vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies>> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

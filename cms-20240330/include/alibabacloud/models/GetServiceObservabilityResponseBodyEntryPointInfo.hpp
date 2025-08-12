// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODYENTRYPOINTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODYENTRYPOINTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceObservabilityResponseBodyEntryPointInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceObservabilityResponseBodyEntryPointInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(privateDomain, privateDomain_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceObservabilityResponseBodyEntryPointInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(privateDomain, privateDomain_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
    };
    GetServiceObservabilityResponseBodyEntryPointInfo() = default ;
    GetServiceObservabilityResponseBodyEntryPointInfo(const GetServiceObservabilityResponseBodyEntryPointInfo &) = default ;
    GetServiceObservabilityResponseBodyEntryPointInfo(GetServiceObservabilityResponseBodyEntryPointInfo &&) = default ;
    GetServiceObservabilityResponseBodyEntryPointInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceObservabilityResponseBodyEntryPointInfo() = default ;
    GetServiceObservabilityResponseBodyEntryPointInfo& operator=(const GetServiceObservabilityResponseBodyEntryPointInfo &) = default ;
    GetServiceObservabilityResponseBodyEntryPointInfo& operator=(GetServiceObservabilityResponseBodyEntryPointInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authToken_ != nullptr
        && this->privateDomain_ != nullptr && this->project_ != nullptr && this->publicDomain_ != nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline GetServiceObservabilityResponseBodyEntryPointInfo& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // privateDomain Field Functions 
    bool hasPrivateDomain() const { return this->privateDomain_ != nullptr;};
    void deletePrivateDomain() { this->privateDomain_ = nullptr;};
    inline string privateDomain() const { DARABONBA_PTR_GET_DEFAULT(privateDomain_, "") };
    inline GetServiceObservabilityResponseBodyEntryPointInfo& setPrivateDomain(string privateDomain) { DARABONBA_PTR_SET_VALUE(privateDomain_, privateDomain) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetServiceObservabilityResponseBodyEntryPointInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string publicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline GetServiceObservabilityResponseBodyEntryPointInfo& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


  protected:
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<string> privateDomain_ = nullptr;
    // SLS Project
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> publicDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

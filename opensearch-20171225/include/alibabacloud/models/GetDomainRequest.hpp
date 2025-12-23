// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appGroupIdentity, appGroupIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appGroupIdentity, appGroupIdentity_);
    };
    GetDomainRequest() = default ;
    GetDomainRequest(const GetDomainRequest &) = default ;
    GetDomainRequest(GetDomainRequest &&) = default ;
    GetDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainRequest() = default ;
    GetDomainRequest& operator=(const GetDomainRequest &) = default ;
    GetDomainRequest& operator=(GetDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupIdentity_ == nullptr; };
    // appGroupIdentity Field Functions 
    bool hasAppGroupIdentity() const { return this->appGroupIdentity_ != nullptr;};
    void deleteAppGroupIdentity() { this->appGroupIdentity_ = nullptr;};
    inline string appGroupIdentity() const { DARABONBA_PTR_GET_DEFAULT(appGroupIdentity_, "") };
    inline GetDomainRequest& setAppGroupIdentity(string appGroupIdentity) { DARABONBA_PTR_SET_VALUE(appGroupIdentity_, appGroupIdentity) };


  protected:
    // The name or ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appGroupIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

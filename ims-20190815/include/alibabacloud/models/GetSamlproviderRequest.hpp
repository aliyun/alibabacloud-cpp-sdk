// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMLPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAMLPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSAMLProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSAMLProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSAMLProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
    };
    GetSAMLProviderRequest() = default ;
    GetSAMLProviderRequest(const GetSAMLProviderRequest &) = default ;
    GetSAMLProviderRequest(GetSAMLProviderRequest &&) = default ;
    GetSAMLProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSAMLProviderRequest() = default ;
    GetSAMLProviderRequest& operator=(const GetSAMLProviderRequest &) = default ;
    GetSAMLProviderRequest& operator=(GetSAMLProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SAMLProviderName_ != nullptr; };
    // SAMLProviderName Field Functions 
    bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
    void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
    inline string SAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
    inline GetSAMLProviderRequest& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


  protected:
    // The name of the IdP.
    // 
    // This parameter is required.
    std::shared_ptr<string> SAMLProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

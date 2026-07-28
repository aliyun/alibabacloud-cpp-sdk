// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROVIDERDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROVIDERDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetProviderDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProviderDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(providerVersion, providerVersion_);
      DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetProviderDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(providerVersion, providerVersion_);
      DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
    };
    GetProviderDocumentRequest() = default ;
    GetProviderDocumentRequest(const GetProviderDocumentRequest &) = default ;
    GetProviderDocumentRequest(GetProviderDocumentRequest &&) = default ;
    GetProviderDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProviderDocumentRequest() = default ;
    GetProviderDocumentRequest& operator=(const GetProviderDocumentRequest &) = default ;
    GetProviderDocumentRequest& operator=(GetProviderDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->providerVersion_ == nullptr
        && this->terraformResourceType_ == nullptr; };
    // providerVersion Field Functions 
    bool hasProviderVersion() const { return this->providerVersion_ != nullptr;};
    void deleteProviderVersion() { this->providerVersion_ = nullptr;};
    inline string getProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(providerVersion_, "") };
    inline GetProviderDocumentRequest& setProviderVersion(string providerVersion) { DARABONBA_PTR_SET_VALUE(providerVersion_, providerVersion) };


    // terraformResourceType Field Functions 
    bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
    void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
    inline string getTerraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
    inline GetProviderDocumentRequest& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


  protected:
    shared_ptr<string> providerVersion_ {};
    // This parameter is required.
    shared_ptr<string> terraformResourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

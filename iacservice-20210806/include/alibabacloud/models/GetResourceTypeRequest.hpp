// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(filterReadOnly, filterReadOnly_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(filterReadOnly, filterReadOnly_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    GetResourceTypeRequest() = default ;
    GetResourceTypeRequest(const GetResourceTypeRequest &) = default ;
    GetResourceTypeRequest(GetResourceTypeRequest &&) = default ;
    GetResourceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeRequest() = default ;
    GetResourceTypeRequest& operator=(const GetResourceTypeRequest &) = default ;
    GetResourceTypeRequest& operator=(GetResourceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->filterReadOnly_ == nullptr && this->terraformProviderVersion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetResourceTypeRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // filterReadOnly Field Functions 
    bool hasFilterReadOnly() const { return this->filterReadOnly_ != nullptr;};
    void deleteFilterReadOnly() { this->filterReadOnly_ = nullptr;};
    inline bool getFilterReadOnly() const { DARABONBA_PTR_GET_DEFAULT(filterReadOnly_, false) };
    inline GetResourceTypeRequest& setFilterReadOnly(bool filterReadOnly) { DARABONBA_PTR_SET_VALUE(filterReadOnly_, filterReadOnly) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GetResourceTypeRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<bool> filterReadOnly_ {};
    shared_ptr<string> terraformProviderVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

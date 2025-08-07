// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage.hpp>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthroughExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthroughExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(Criticals, criticals_);
      DARABONBA_PTR_TO_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthroughExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Criticals, criticals_);
      DARABONBA_PTR_FROM_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
    };
    CreateCustomCertificateRequestApiPassthroughExtensions() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensions(const CreateCustomCertificateRequestApiPassthroughExtensions &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensions(CreateCustomCertificateRequestApiPassthroughExtensions &&) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthroughExtensions() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensions& operator=(const CreateCustomCertificateRequestApiPassthroughExtensions &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensions& operator=(CreateCustomCertificateRequestApiPassthroughExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->criticals_ != nullptr
        && this->extendedKeyUsages_ != nullptr && this->keyUsage_ != nullptr && this->subjectAlternativeNames_ != nullptr; };
    // criticals Field Functions 
    bool hasCriticals() const { return this->criticals_ != nullptr;};
    void deleteCriticals() { this->criticals_ = nullptr;};
    inline const vector<string> & criticals() const { DARABONBA_PTR_GET_CONST(criticals_, vector<string>) };
    inline vector<string> criticals() { DARABONBA_PTR_GET(criticals_, vector<string>) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setCriticals(const vector<string> & criticals) { DARABONBA_PTR_SET_VALUE(criticals_, criticals) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setCriticals(vector<string> && criticals) { DARABONBA_PTR_SET_RVALUE(criticals_, criticals) };


    // extendedKeyUsages Field Functions 
    bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
    void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
    inline const vector<string> & extendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
    inline vector<string> extendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline const Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage & keyUsage() const { DARABONBA_PTR_GET_CONST(keyUsage_, Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage) };
    inline Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage keyUsage() { DARABONBA_PTR_GET(keyUsage_, Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setKeyUsage(const Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage & keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setKeyUsage(Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage && keyUsage) { DARABONBA_PTR_SET_RVALUE(keyUsage_, keyUsage) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames> & subjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames>) };
    inline vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames> subjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames>) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setSubjectAlternativeNames(const vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline CreateCustomCertificateRequestApiPassthroughExtensions& setSubjectAlternativeNames(vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


  protected:
    // If it is a necessary parameter, the critical list contains the parameter name.
    std::shared_ptr<vector<string>> criticals_ = nullptr;
    // The extended key usage.
    std::shared_ptr<vector<string>> extendedKeyUsages_ = nullptr;
    // The key usage.
    std::shared_ptr<Models::CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage> keyUsage_ = nullptr;
    // The aliases of the entities.
    std::shared_ptr<vector<Models::CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames>> subjectAlternativeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

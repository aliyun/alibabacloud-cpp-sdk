// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CDCYAMLARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_CDCYAMLARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CdcYamlArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CdcYamlArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_TO_JSON(cdcYaml, cdcYaml_);
    };
    friend void from_json(const Darabonba::Json& j, CdcYamlArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_FROM_JSON(cdcYaml, cdcYaml_);
    };
    CdcYamlArtifact() = default ;
    CdcYamlArtifact(const CdcYamlArtifact &) = default ;
    CdcYamlArtifact(CdcYamlArtifact &&) = default ;
    CdcYamlArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CdcYamlArtifact() = default ;
    CdcYamlArtifact& operator=(const CdcYamlArtifact &) = default ;
    CdcYamlArtifact& operator=(CdcYamlArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalDependencies_ == nullptr
        && this->cdcYaml_ == nullptr; };
    // additionalDependencies Field Functions 
    bool hasAdditionalDependencies() const { return this->additionalDependencies_ != nullptr;};
    void deleteAdditionalDependencies() { this->additionalDependencies_ = nullptr;};
    inline const vector<string> & getAdditionalDependencies() const { DARABONBA_PTR_GET_CONST(additionalDependencies_, vector<string>) };
    inline vector<string> getAdditionalDependencies() { DARABONBA_PTR_GET(additionalDependencies_, vector<string>) };
    inline CdcYamlArtifact& setAdditionalDependencies(const vector<string> & additionalDependencies) { DARABONBA_PTR_SET_VALUE(additionalDependencies_, additionalDependencies) };
    inline CdcYamlArtifact& setAdditionalDependencies(vector<string> && additionalDependencies) { DARABONBA_PTR_SET_RVALUE(additionalDependencies_, additionalDependencies) };


    // cdcYaml Field Functions 
    bool hasCdcYaml() const { return this->cdcYaml_ != nullptr;};
    void deleteCdcYaml() { this->cdcYaml_ = nullptr;};
    inline string getCdcYaml() const { DARABONBA_PTR_GET_DEFAULT(cdcYaml_, "") };
    inline CdcYamlArtifact& setCdcYaml(string cdcYaml) { DARABONBA_PTR_SET_VALUE(cdcYaml_, cdcYaml) };


  protected:
    shared_ptr<vector<string>> additionalDependencies_ {};
    shared_ptr<string> cdcYaml_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

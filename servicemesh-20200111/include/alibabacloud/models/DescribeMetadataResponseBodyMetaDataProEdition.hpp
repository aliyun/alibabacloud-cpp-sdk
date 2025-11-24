// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATAPROEDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATAPROEDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeMetadataResponseBodyMetaDataProEdition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetadataResponseBodyMetaDataProEdition& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(VersionCrds, versionCrds_);
      DARABONBA_PTR_TO_JSON(VersionRegistry, versionRegistry_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetadataResponseBodyMetaDataProEdition& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(VersionCrds, versionCrds_);
      DARABONBA_PTR_FROM_JSON(VersionRegistry, versionRegistry_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    DescribeMetadataResponseBodyMetaDataProEdition() = default ;
    DescribeMetadataResponseBodyMetaDataProEdition(const DescribeMetadataResponseBodyMetaDataProEdition &) = default ;
    DescribeMetadataResponseBodyMetaDataProEdition(DescribeMetadataResponseBodyMetaDataProEdition &&) = default ;
    DescribeMetadataResponseBodyMetaDataProEdition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetadataResponseBodyMetaDataProEdition() = default ;
    DescribeMetadataResponseBodyMetaDataProEdition& operator=(const DescribeMetadataResponseBodyMetaDataProEdition &) = default ;
    DescribeMetadataResponseBodyMetaDataProEdition& operator=(DescribeMetadataResponseBodyMetaDataProEdition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentVersion_ == nullptr
        && return this->versionCrds_ == nullptr && return this->versionRegistry_ == nullptr && return this->versions_ == nullptr; };
    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // versionCrds Field Functions 
    bool hasVersionCrds() const { return this->versionCrds_ != nullptr;};
    void deleteVersionCrds() { this->versionCrds_ = nullptr;};
    inline const vector<Darabonba::Json> & versionCrds() const { DARABONBA_PTR_GET_CONST(versionCrds_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> versionCrds() { DARABONBA_PTR_GET(versionCrds_, vector<Darabonba::Json>) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersionCrds(const vector<Darabonba::Json> & versionCrds) { DARABONBA_PTR_SET_VALUE(versionCrds_, versionCrds) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersionCrds(vector<Darabonba::Json> && versionCrds) { DARABONBA_PTR_SET_RVALUE(versionCrds_, versionCrds) };


    // versionRegistry Field Functions 
    bool hasVersionRegistry() const { return this->versionRegistry_ != nullptr;};
    void deleteVersionRegistry() { this->versionRegistry_ = nullptr;};
    inline const vector<Darabonba::Json> & versionRegistry() const { DARABONBA_PTR_GET_CONST(versionRegistry_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> versionRegistry() { DARABONBA_PTR_GET(versionRegistry_, vector<Darabonba::Json>) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersionRegistry(const vector<Darabonba::Json> & versionRegistry) { DARABONBA_PTR_SET_VALUE(versionRegistry_, versionRegistry) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersionRegistry(vector<Darabonba::Json> && versionRegistry) { DARABONBA_PTR_SET_RVALUE(versionRegistry_, versionRegistry) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline DescribeMetadataResponseBodyMetaDataProEdition& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The current version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The CRDs of all ASM versions.
    std::shared_ptr<vector<Darabonba::Json>> versionCrds_ = nullptr;
    // The Istio versions corresponding to the ASM versions.
    std::shared_ptr<vector<Darabonba::Json>> versionRegistry_ = nullptr;
    // The list of ASM versions.
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif

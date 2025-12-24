// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATAPRODUCTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATAPRODUCTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupProductionsResponseBodyDataProductionsPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsResponseBodyDataProductions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsResponseBodyDataProductions& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FullDomains, fullDomains_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RamCode, ramCode_);
      DARABONBA_PTR_TO_JSON(ShortName, shortName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsResponseBodyDataProductions& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FullDomains, fullDomains_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RamCode, ramCode_);
      DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    DescribeGroupProductionsResponseBodyDataProductions() = default ;
    DescribeGroupProductionsResponseBodyDataProductions(const DescribeGroupProductionsResponseBodyDataProductions &) = default ;
    DescribeGroupProductionsResponseBodyDataProductions(DescribeGroupProductionsResponseBodyDataProductions &&) = default ;
    DescribeGroupProductionsResponseBodyDataProductions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsResponseBodyDataProductions() = default ;
    DescribeGroupProductionsResponseBodyDataProductions& operator=(const DescribeGroupProductionsResponseBodyDataProductions &) = default ;
    DescribeGroupProductionsResponseBodyDataProductions& operator=(DescribeGroupProductionsResponseBodyDataProductions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->defaultDomain_ == nullptr && return this->defaultVersion_ == nullptr && return this->description_ == nullptr && return this->fullDomains_ == nullptr && return this->group_ == nullptr
        && return this->name_ == nullptr && return this->policyList_ == nullptr && return this->ramCode_ == nullptr && return this->shortName_ == nullptr && return this->source_ == nullptr
        && return this->versions_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string defaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline string defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fullDomains Field Functions 
    bool hasFullDomains() const { return this->fullDomains_ != nullptr;};
    void deleteFullDomains() { this->fullDomains_ = nullptr;};
    inline const vector<string> & fullDomains() const { DARABONBA_PTR_GET_CONST(fullDomains_, vector<string>) };
    inline vector<string> fullDomains() { DARABONBA_PTR_GET(fullDomains_, vector<string>) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setFullDomains(const vector<string> & fullDomains) { DARABONBA_PTR_SET_VALUE(fullDomains_, fullDomains) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setFullDomains(vector<string> && fullDomains) { DARABONBA_PTR_SET_RVALUE(fullDomains_, fullDomains) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList> & policyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList>) };
    inline vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList> policyList() { DARABONBA_PTR_GET(policyList_, vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList>) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setPolicyList(const vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setPolicyList(vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // ramCode Field Functions 
    bool hasRamCode() const { return this->ramCode_ != nullptr;};
    void deleteRamCode() { this->ramCode_ = nullptr;};
    inline string ramCode() const { DARABONBA_PTR_GET_DEFAULT(ramCode_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setRamCode(string ramCode) { DARABONBA_PTR_SET_VALUE(ramCode_, ramCode) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline DescribeGroupProductionsResponseBodyDataProductions& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The code of the cloud service.
    std::shared_ptr<string> code_ = nullptr;
    // The default requested domain name.
    std::shared_ptr<string> defaultDomain_ = nullptr;
    // The default version.
    std::shared_ptr<string> defaultVersion_ = nullptr;
    // The description of the cloud service.
    std::shared_ptr<string> description_ = nullptr;
    // The requested domain names.
    std::shared_ptr<vector<string>> fullDomains_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> group_ = nullptr;
    // The name of the cloud service.
    std::shared_ptr<string> name_ = nullptr;
    // The RAM policies of the cloud service.
    std::shared_ptr<vector<Models::DescribeGroupProductionsResponseBodyDataProductionsPolicyList>> policyList_ = nullptr;
    // The Resource Access Management (RAM) code of the POP to which the resource belongs.
    std::shared_ptr<string> ramCode_ = nullptr;
    // The short name of the cloud service.
    std::shared_ptr<string> shortName_ = nullptr;
    // The information source of the cloud service.
    std::shared_ptr<string> source_ = nullptr;
    // The API versions.
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

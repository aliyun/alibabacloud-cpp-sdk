// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPPBC_HPP_
#define ALIBABACLOUD_MODELS_PDPPBC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpPbc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpPbc& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(gitGroupInfo, gitGroupInfo_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(snowbergDisplay, snowbergDisplay_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpPbc& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(gitGroupInfo, gitGroupInfo_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(snowbergDisplay, snowbergDisplay_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpPbc() = default ;
    PdpPbc(const PdpPbc &) = default ;
    PdpPbc(PdpPbc &&) = default ;
    PdpPbc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpPbc() = default ;
    PdpPbc& operator=(const PdpPbc &) = default ;
    PdpPbc& operator=(PdpPbc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->company_ == nullptr && this->companyId_ == nullptr && this->description_ == nullptr && this->developerId_ == nullptr && this->gitGroup_ == nullptr
        && this->gitGroupInfo_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->snowbergDisplay_ == nullptr && this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpPbc& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline PdpPbc& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpPbc& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpPbc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
    inline PdpPbc& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline PdpPbc& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // gitGroupInfo Field Functions 
    bool hasGitGroupInfo() const { return this->gitGroupInfo_ != nullptr;};
    void deleteGitGroupInfo() { this->gitGroupInfo_ = nullptr;};
    inline string getGitGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(gitGroupInfo_, "") };
    inline PdpPbc& setGitGroupInfo(string gitGroupInfo) { DARABONBA_PTR_SET_VALUE(gitGroupInfo_, gitGroupInfo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PdpPbc& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpPbc& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpPbc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpPbc& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snowbergDisplay Field Functions 
    bool hasSnowbergDisplay() const { return this->snowbergDisplay_ != nullptr;};
    void deleteSnowbergDisplay() { this->snowbergDisplay_ = nullptr;};
    inline bool getSnowbergDisplay() const { DARABONBA_PTR_GET_DEFAULT(snowbergDisplay_, false) };
    inline PdpPbc& setSnowbergDisplay(bool snowbergDisplay) { DARABONBA_PTR_SET_VALUE(snowbergDisplay_, snowbergDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpPbc& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> alias_ {};
    // This parameter is required.
    shared_ptr<string> company_ {};
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> developerId_ {};
    shared_ptr<string> gitGroup_ {};
    shared_ptr<string> gitGroupInfo_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> snowbergDisplay_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

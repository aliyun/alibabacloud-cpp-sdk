// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANEINFO_HPP_
#define ALIBABACLOUD_MODELS_PDPLANEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpLaneInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLaneInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_TO_JSON(inletServices, inletServices_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(serviceGroupIds, serviceGroupIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLaneInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_FROM_JSON(inletServices, inletServices_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(serviceGroupIds, serviceGroupIds_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpLaneInfo() = default ;
    PdpLaneInfo(const PdpLaneInfo &) = default ;
    PdpLaneInfo(PdpLaneInfo &&) = default ;
    PdpLaneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLaneInfo() = default ;
    PdpLaneInfo& operator=(const PdpLaneInfo &) = default ;
    PdpLaneInfo& operator=(PdpLaneInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->companyId_ == nullptr && this->creatorName_ == nullptr && this->creatorUid_ == nullptr && this->description_ == nullptr && this->env_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->initGroupFlag_ == nullptr && this->inletServices_ == nullptr && this->name_ == nullptr
        && this->productId_ == nullptr && this->productName_ == nullptr && this->serviceGroupIds_ == nullptr && this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpLaneInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpLaneInfo& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline PdpLaneInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline PdpLaneInfo& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpLaneInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpLaneInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PdpLaneInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpLaneInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initGroupFlag Field Functions 
    bool hasInitGroupFlag() const { return this->initGroupFlag_ != nullptr;};
    void deleteInitGroupFlag() { this->initGroupFlag_ = nullptr;};
    inline bool getInitGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(initGroupFlag_, false) };
    inline PdpLaneInfo& setInitGroupFlag(bool initGroupFlag) { DARABONBA_PTR_SET_VALUE(initGroupFlag_, initGroupFlag) };


    // inletServices Field Functions 
    bool hasInletServices() const { return this->inletServices_ != nullptr;};
    void deleteInletServices() { this->inletServices_ = nullptr;};
    inline string getInletServices() const { DARABONBA_PTR_GET_DEFAULT(inletServices_, "") };
    inline PdpLaneInfo& setInletServices(string inletServices) { DARABONBA_PTR_SET_VALUE(inletServices_, inletServices) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpLaneInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline PdpLaneInfo& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline PdpLaneInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // serviceGroupIds Field Functions 
    bool hasServiceGroupIds() const { return this->serviceGroupIds_ != nullptr;};
    void deleteServiceGroupIds() { this->serviceGroupIds_ = nullptr;};
    inline string getServiceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupIds_, "") };
    inline PdpLaneInfo& setServiceGroupIds(string serviceGroupIds) { DARABONBA_PTR_SET_VALUE(serviceGroupIds_, serviceGroupIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpLaneInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> creatorName_ {};
    shared_ptr<string> creatorUid_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> env_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> initGroupFlag_ {};
    shared_ptr<string> inletServices_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> serviceGroupIds_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONSDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONSDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureResponseBodyRelationsDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBodyRelationsDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBodyRelationsDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetModelFeatureResponseBodyRelationsDomains() = default ;
    GetModelFeatureResponseBodyRelationsDomains(const GetModelFeatureResponseBodyRelationsDomains &) = default ;
    GetModelFeatureResponseBodyRelationsDomains(GetModelFeatureResponseBodyRelationsDomains &&) = default ;
    GetModelFeatureResponseBodyRelationsDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBodyRelationsDomains() = default ;
    GetModelFeatureResponseBodyRelationsDomains& operator=(const GetModelFeatureResponseBodyRelationsDomains &) = default ;
    GetModelFeatureResponseBodyRelationsDomains& operator=(GetModelFeatureResponseBodyRelationsDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainType_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr; };
    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline GetModelFeatureResponseBodyRelationsDomains& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetModelFeatureResponseBodyRelationsDomains& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModelFeatureResponseBodyRelationsDomains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> domainType_ = nullptr;
    // Domain ID。
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODYPRIVATEPOOLOPTIONSIDSET_HPP_
#define ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODYPRIVATEPOOLOPTIONSIDSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
    };
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet() = default ;
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet(const RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet &) = default ;
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet(RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet &&) = default ;
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet() = default ;
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& operator=(const RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet &) = default ;
    RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& operator=(RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolOptionsId_ == nullptr; };
    // privatePoolOptionsId Field Functions 
    bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
    void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
    inline const vector<string> & privatePoolOptionsId() const { DARABONBA_PTR_GET_CONST(privatePoolOptionsId_, vector<string>) };
    inline vector<string> privatePoolOptionsId() { DARABONBA_PTR_GET(privatePoolOptionsId_, vector<string>) };
    inline RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& setPrivatePoolOptionsId(const vector<string> & privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };
    inline RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet& setPrivatePoolOptionsId(vector<string> && privatePoolOptionsId) { DARABONBA_PTR_SET_RVALUE(privatePoolOptionsId_, privatePoolOptionsId) };


  protected:
    std::shared_ptr<vector<string>> privatePoolOptionsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

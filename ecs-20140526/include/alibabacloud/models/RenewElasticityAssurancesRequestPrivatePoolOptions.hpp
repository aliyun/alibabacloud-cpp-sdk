// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESREQUESTPRIVATEPOOLOPTIONS_HPP_
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
  class RenewElasticityAssurancesRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewElasticityAssurancesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, RenewElasticityAssurancesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    RenewElasticityAssurancesRequestPrivatePoolOptions() = default ;
    RenewElasticityAssurancesRequestPrivatePoolOptions(const RenewElasticityAssurancesRequestPrivatePoolOptions &) = default ;
    RenewElasticityAssurancesRequestPrivatePoolOptions(RenewElasticityAssurancesRequestPrivatePoolOptions &&) = default ;
    RenewElasticityAssurancesRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewElasticityAssurancesRequestPrivatePoolOptions() = default ;
    RenewElasticityAssurancesRequestPrivatePoolOptions& operator=(const RenewElasticityAssurancesRequestPrivatePoolOptions &) = default ;
    RenewElasticityAssurancesRequestPrivatePoolOptions& operator=(RenewElasticityAssurancesRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<string> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<string>) };
    inline vector<string> id() { DARABONBA_PTR_GET(id_, vector<string>) };
    inline RenewElasticityAssurancesRequestPrivatePoolOptions& setId(const vector<string> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline RenewElasticityAssurancesRequestPrivatePoolOptions& setId(vector<string> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


  protected:
    // The IDs of elasticity assurances.
    // 
    // **Limits**: You can renew up to 20 elasticity assurances at a time.
    // 
    // You can call the [DescribeElasticityAssurances](https://help.aliyun.com/document_detail/2679748.html) operation to query the elasticity assurances that you purchased.
    std::shared_ptr<vector<string>> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

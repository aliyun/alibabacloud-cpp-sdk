// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERBUCUSERCMD_HPP_
#define ALIBABACLOUD_MODELS_REGISTERBUCUSERCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RegisterBucUserCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterBucUserCmd& obj) { 
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(enterpriseName, enterpriseName_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterBucUserCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(enterpriseName, enterpriseName_);
    };
    RegisterBucUserCmd() = default ;
    RegisterBucUserCmd(const RegisterBucUserCmd &) = default ;
    RegisterBucUserCmd(RegisterBucUserCmd &&) = default ;
    RegisterBucUserCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterBucUserCmd() = default ;
    RegisterBucUserCmd& operator=(const RegisterBucUserCmd &) = default ;
    RegisterBucUserCmd& operator=(RegisterBucUserCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->enterpriseName_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline RegisterBucUserCmd& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline RegisterBucUserCmd& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


  protected:
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> enterpriseName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

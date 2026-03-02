// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEINFOUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEINFOUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class EnterpriseInfoUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseInfoUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseInfoUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    EnterpriseInfoUpdateCmd() = default ;
    EnterpriseInfoUpdateCmd(const EnterpriseInfoUpdateCmd &) = default ;
    EnterpriseInfoUpdateCmd(EnterpriseInfoUpdateCmd &&) = default ;
    EnterpriseInfoUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseInfoUpdateCmd() = default ;
    EnterpriseInfoUpdateCmd& operator=(const EnterpriseInfoUpdateCmd &) = default ;
    EnterpriseInfoUpdateCmd& operator=(EnterpriseInfoUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EnterpriseInfoUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline EnterpriseInfoUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EnterpriseInfoUpdateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

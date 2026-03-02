// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICEGROUPUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICEGROUPUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpServiceGroupUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpServiceGroupUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, PdpServiceGroupUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    PdpServiceGroupUpdateCmd() = default ;
    PdpServiceGroupUpdateCmd(const PdpServiceGroupUpdateCmd &) = default ;
    PdpServiceGroupUpdateCmd(PdpServiceGroupUpdateCmd &&) = default ;
    PdpServiceGroupUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpServiceGroupUpdateCmd() = default ;
    PdpServiceGroupUpdateCmd& operator=(const PdpServiceGroupUpdateCmd &) = default ;
    PdpServiceGroupUpdateCmd& operator=(PdpServiceGroupUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpServiceGroupUpdateCmd& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpServiceGroupUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpServiceGroupUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

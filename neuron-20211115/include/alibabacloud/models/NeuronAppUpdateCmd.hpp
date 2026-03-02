// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    NeuronAppUpdateCmd() = default ;
    NeuronAppUpdateCmd(const NeuronAppUpdateCmd &) = default ;
    NeuronAppUpdateCmd(NeuronAppUpdateCmd &&) = default ;
    NeuronAppUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppUpdateCmd() = default ;
    NeuronAppUpdateCmd& operator=(const NeuronAppUpdateCmd &) = default ;
    NeuronAppUpdateCmd& operator=(NeuronAppUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline NeuronAppUpdateCmd& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronAppUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NeuronAppUpdateCmd& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> desc_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

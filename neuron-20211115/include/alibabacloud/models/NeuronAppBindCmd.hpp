// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPBINDCMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPBINDCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppBindCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppBindCmd& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppBindCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
    };
    NeuronAppBindCmd() = default ;
    NeuronAppBindCmd(const NeuronAppBindCmd &) = default ;
    NeuronAppBindCmd(NeuronAppBindCmd &&) = default ;
    NeuronAppBindCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppBindCmd() = default ;
    NeuronAppBindCmd& operator=(const NeuronAppBindCmd &) = default ;
    NeuronAppBindCmd& operator=(NeuronAppBindCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppBindCmd& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

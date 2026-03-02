// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPVERSIONOPCMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPVERSIONOPCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppVersionOpCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppVersionOpCmd& obj) { 
      DARABONBA_PTR_TO_JSON(appVersionId, appVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppVersionOpCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(appVersionId, appVersionId_);
    };
    NeuronAppVersionOpCmd() = default ;
    NeuronAppVersionOpCmd(const NeuronAppVersionOpCmd &) = default ;
    NeuronAppVersionOpCmd(NeuronAppVersionOpCmd &&) = default ;
    NeuronAppVersionOpCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppVersionOpCmd() = default ;
    NeuronAppVersionOpCmd& operator=(const NeuronAppVersionOpCmd &) = default ;
    NeuronAppVersionOpCmd& operator=(NeuronAppVersionOpCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersionId_ == nullptr; };
    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline int64_t getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, 0L) };
    inline NeuronAppVersionOpCmd& setAppVersionId(int64_t appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

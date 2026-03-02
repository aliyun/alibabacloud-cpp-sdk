// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPUNBINDCMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPUNBINDCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppUnBindCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppUnBindCmd& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppUnBindCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    NeuronAppUnBindCmd() = default ;
    NeuronAppUnBindCmd(const NeuronAppUnBindCmd &) = default ;
    NeuronAppUnBindCmd(NeuronAppUnBindCmd &&) = default ;
    NeuronAppUnBindCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppUnBindCmd() = default ;
    NeuronAppUnBindCmd& operator=(const NeuronAppUnBindCmd &) = default ;
    NeuronAppUnBindCmd& operator=(NeuronAppUnBindCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->reason_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppUnBindCmd& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline NeuronAppUnBindCmd& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

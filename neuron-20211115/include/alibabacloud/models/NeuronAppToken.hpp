// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPTOKEN_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppToken& obj) { 
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppToken& obj) { 
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    NeuronAppToken() = default ;
    NeuronAppToken(const NeuronAppToken &) = default ;
    NeuronAppToken(NeuronAppToken &&) = default ;
    NeuronAppToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppToken() = default ;
    NeuronAppToken& operator=(const NeuronAppToken &) = default ;
    NeuronAppToken& operator=(NeuronAppToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->token_ == nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline NeuronAppToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

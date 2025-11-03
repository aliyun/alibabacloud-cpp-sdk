// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERSTO_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERSTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigRoutersTo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigRoutersTo& obj) { 
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigRoutersTo& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetChainResponseBodyChainConfigRoutersTo() = default ;
    GetChainResponseBodyChainConfigRoutersTo(const GetChainResponseBodyChainConfigRoutersTo &) = default ;
    GetChainResponseBodyChainConfigRoutersTo(GetChainResponseBodyChainConfigRoutersTo &&) = default ;
    GetChainResponseBodyChainConfigRoutersTo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigRoutersTo() = default ;
    GetChainResponseBodyChainConfigRoutersTo& operator=(const GetChainResponseBodyChainConfigRoutersTo &) = default ;
    GetChainResponseBodyChainConfigRoutersTo& operator=(GetChainResponseBodyChainConfigRoutersTo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeName_ == nullptr; };
    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetChainResponseBodyChainConfigRoutersTo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

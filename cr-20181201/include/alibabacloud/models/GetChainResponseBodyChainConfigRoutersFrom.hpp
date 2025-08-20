// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERSFROM_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERSFROM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigRoutersFrom : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigRoutersFrom& obj) { 
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigRoutersFrom& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetChainResponseBodyChainConfigRoutersFrom() = default ;
    GetChainResponseBodyChainConfigRoutersFrom(const GetChainResponseBodyChainConfigRoutersFrom &) = default ;
    GetChainResponseBodyChainConfigRoutersFrom(GetChainResponseBodyChainConfigRoutersFrom &&) = default ;
    GetChainResponseBodyChainConfigRoutersFrom(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigRoutersFrom() = default ;
    GetChainResponseBodyChainConfigRoutersFrom& operator=(const GetChainResponseBodyChainConfigRoutersFrom &) = default ;
    GetChainResponseBodyChainConfigRoutersFrom& operator=(GetChainResponseBodyChainConfigRoutersFrom &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeName_ != nullptr; };
    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetChainResponseBodyChainConfigRoutersFrom& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

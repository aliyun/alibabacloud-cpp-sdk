// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASANTCHAINPEERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASANTCHAINPEERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSAntChainPeerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSAntChainPeerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSAntChainPeerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    ListBaaSAntChainPeerResponseBodyData() = default ;
    ListBaaSAntChainPeerResponseBodyData(const ListBaaSAntChainPeerResponseBodyData &) = default ;
    ListBaaSAntChainPeerResponseBodyData(ListBaaSAntChainPeerResponseBodyData &&) = default ;
    ListBaaSAntChainPeerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSAntChainPeerResponseBodyData() = default ;
    ListBaaSAntChainPeerResponseBodyData& operator=(const ListBaaSAntChainPeerResponseBodyData &) = default ;
    ListBaaSAntChainPeerResponseBodyData& operator=(ListBaaSAntChainPeerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeName_ == nullptr; };
    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListBaaSAntChainPeerResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif

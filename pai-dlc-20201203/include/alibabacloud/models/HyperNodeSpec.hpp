// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HYPERNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_HYPERNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class HyperNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HyperNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(HyperNodeName, hyperNodeName_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
    };
    friend void from_json(const Darabonba::Json& j, HyperNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(HyperNodeName, hyperNodeName_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
    };
    HyperNodeSpec() = default ;
    HyperNodeSpec(const HyperNodeSpec &) = default ;
    HyperNodeSpec(HyperNodeSpec &&) = default ;
    HyperNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HyperNodeSpec() = default ;
    HyperNodeSpec& operator=(const HyperNodeSpec &) = default ;
    HyperNodeSpec& operator=(HyperNodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hyperNodeName_ == nullptr
        && this->nodeNames_ == nullptr; };
    // hyperNodeName Field Functions 
    bool hasHyperNodeName() const { return this->hyperNodeName_ != nullptr;};
    void deleteHyperNodeName() { this->hyperNodeName_ = nullptr;};
    inline string getHyperNodeName() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeName_, "") };
    inline HyperNodeSpec& setHyperNodeName(string hyperNodeName) { DARABONBA_PTR_SET_VALUE(hyperNodeName_, hyperNodeName) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string getNodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline HyperNodeSpec& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


  protected:
    shared_ptr<string> hyperNodeName_ {};
    shared_ptr<string> nodeNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

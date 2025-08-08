// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATEREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATEREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    ValuateTemplateRequestInstances() = default ;
    ValuateTemplateRequestInstances(const ValuateTemplateRequestInstances &) = default ;
    ValuateTemplateRequestInstances(ValuateTemplateRequestInstances &&) = default ;
    ValuateTemplateRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateRequestInstances() = default ;
    ValuateTemplateRequestInstances& operator=(const ValuateTemplateRequestInstances &) = default ;
    ValuateTemplateRequestInstances& operator=(ValuateTemplateRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->nodeName_ != nullptr && this->nodeType_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ValuateTemplateRequestInstances& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ValuateTemplateRequestInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValuateTemplateRequestInstances& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // The instance ID.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the application instance that is displayed on the diagram.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The instance type.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif

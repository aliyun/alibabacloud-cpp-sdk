// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAINODEREQUESTAINODESPECINFOS_HPP_
#define ALIBABACLOUD_MODELS_ADDAINODEREQUESTAINODESPECINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class AddAINodeRequestAINodeSpecInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAINodeRequestAINodeSpecInfos& obj) { 
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
    };
    friend void from_json(const Darabonba::Json& j, AddAINodeRequestAINodeSpecInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
    };
    AddAINodeRequestAINodeSpecInfos() = default ;
    AddAINodeRequestAINodeSpecInfos(const AddAINodeRequestAINodeSpecInfos &) = default ;
    AddAINodeRequestAINodeSpecInfos(AddAINodeRequestAINodeSpecInfos &&) = default ;
    AddAINodeRequestAINodeSpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAINodeRequestAINodeSpecInfos() = default ;
    AddAINodeRequestAINodeSpecInfos& operator=(const AddAINodeRequestAINodeSpecInfos &) = default ;
    AddAINodeRequestAINodeSpecInfos& operator=(AddAINodeRequestAINodeSpecInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeNum_ == nullptr
        && return this->nodeSpec_ == nullptr; };
    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline string nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, "") };
    inline AddAINodeRequestAINodeSpecInfos& setNodeNum(string nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline string nodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
    inline AddAINodeRequestAINodeSpecInfos& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

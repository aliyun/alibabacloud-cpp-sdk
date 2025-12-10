// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEOUTPUTSRESPONSEBODYOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEOUTPUTSRESPONSEBODYOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListNodeOutputsResponseBodyOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeOutputsResponseBodyOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(AlgoName, algoName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(LocationType, locationType_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OutputId, outputId_);
      DARABONBA_PTR_TO_JSON(OutputIndex, outputIndex_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeOutputsResponseBodyOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgoName, algoName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(LocationType, locationType_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OutputId, outputId_);
      DARABONBA_PTR_FROM_JSON(OutputIndex, outputIndex_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    ListNodeOutputsResponseBodyOutputs() = default ;
    ListNodeOutputsResponseBodyOutputs(const ListNodeOutputsResponseBodyOutputs &) = default ;
    ListNodeOutputsResponseBodyOutputs(ListNodeOutputsResponseBodyOutputs &&) = default ;
    ListNodeOutputsResponseBodyOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeOutputsResponseBodyOutputs() = default ;
    ListNodeOutputsResponseBodyOutputs& operator=(const ListNodeOutputsResponseBodyOutputs &) = default ;
    ListNodeOutputsResponseBodyOutputs& operator=(ListNodeOutputsResponseBodyOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algoName_ == nullptr
        && return this->displayName_ == nullptr && return this->locationType_ == nullptr && return this->nodeName_ == nullptr && return this->outputId_ == nullptr && return this->outputIndex_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // algoName Field Functions 
    bool hasAlgoName() const { return this->algoName_ != nullptr;};
    void deleteAlgoName() { this->algoName_ = nullptr;};
    inline string algoName() const { DARABONBA_PTR_GET_DEFAULT(algoName_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setAlgoName(string algoName) { DARABONBA_PTR_SET_VALUE(algoName_, algoName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // locationType Field Functions 
    bool hasLocationType() const { return this->locationType_ != nullptr;};
    void deleteLocationType() { this->locationType_ = nullptr;};
    inline string locationType() const { DARABONBA_PTR_GET_DEFAULT(locationType_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setLocationType(string locationType) { DARABONBA_PTR_SET_VALUE(locationType_, locationType) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // outputId Field Functions 
    bool hasOutputId() const { return this->outputId_ != nullptr;};
    void deleteOutputId() { this->outputId_ = nullptr;};
    inline string outputId() const { DARABONBA_PTR_GET_DEFAULT(outputId_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setOutputId(string outputId) { DARABONBA_PTR_SET_VALUE(outputId_, outputId) };


    // outputIndex Field Functions 
    bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
    void deleteOutputIndex() { this->outputIndex_ = nullptr;};
    inline string outputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setOutputIndex(string outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListNodeOutputsResponseBodyOutputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline ListNodeOutputsResponseBodyOutputs& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline ListNodeOutputsResponseBodyOutputs& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> algoName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> locationType_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> outputId_ = nullptr;
    std::shared_ptr<string> outputIndex_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

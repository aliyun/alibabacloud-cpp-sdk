// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetNodeOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgoName, algoName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(LocationType, locationType_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgoName, algoName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(LocationType, locationType_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    GetNodeOutputResponseBody() = default ;
    GetNodeOutputResponseBody(const GetNodeOutputResponseBody &) = default ;
    GetNodeOutputResponseBody(GetNodeOutputResponseBody &&) = default ;
    GetNodeOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeOutputResponseBody() = default ;
    GetNodeOutputResponseBody& operator=(const GetNodeOutputResponseBody &) = default ;
    GetNodeOutputResponseBody& operator=(GetNodeOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algoName_ == nullptr
        && return this->displayName_ == nullptr && return this->locationType_ == nullptr && return this->nodeName_ == nullptr && return this->requestId_ == nullptr && return this->type_ == nullptr
        && return this->value_ == nullptr; };
    // algoName Field Functions 
    bool hasAlgoName() const { return this->algoName_ != nullptr;};
    void deleteAlgoName() { this->algoName_ = nullptr;};
    inline string algoName() const { DARABONBA_PTR_GET_DEFAULT(algoName_, "") };
    inline GetNodeOutputResponseBody& setAlgoName(string algoName) { DARABONBA_PTR_SET_VALUE(algoName_, algoName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetNodeOutputResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // locationType Field Functions 
    bool hasLocationType() const { return this->locationType_ != nullptr;};
    void deleteLocationType() { this->locationType_ = nullptr;};
    inline string locationType() const { DARABONBA_PTR_GET_DEFAULT(locationType_, "") };
    inline GetNodeOutputResponseBody& setLocationType(string locationType) { DARABONBA_PTR_SET_VALUE(locationType_, locationType) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetNodeOutputResponseBody& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNodeOutputResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline GetNodeOutputResponseBody& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline GetNodeOutputResponseBody& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> algoName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> locationType_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

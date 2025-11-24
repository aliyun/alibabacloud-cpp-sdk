// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODESINSTANCETYPERESPONSEBODYINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODESINSTANCETYPERESPONSEBODYINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNodesInstanceTypeResponseBodyInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodesInstanceTypeResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodesInstanceTypeResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeNodesInstanceTypeResponseBodyInstanceTypes() = default ;
    DescribeNodesInstanceTypeResponseBodyInstanceTypes(const DescribeNodesInstanceTypeResponseBodyInstanceTypes &) = default ;
    DescribeNodesInstanceTypeResponseBodyInstanceTypes(DescribeNodesInstanceTypeResponseBodyInstanceTypes &&) = default ;
    DescribeNodesInstanceTypeResponseBodyInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodesInstanceTypeResponseBodyInstanceTypes() = default ;
    DescribeNodesInstanceTypeResponseBodyInstanceTypes& operator=(const DescribeNodesInstanceTypeResponseBodyInstanceTypes &) = default ;
    DescribeNodesInstanceTypeResponseBodyInstanceTypes& operator=(DescribeNodesInstanceTypeResponseBodyInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->multiBufferEnabled_ == nullptr && return this->nodeType_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeNodesInstanceTypeResponseBodyInstanceTypes& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // multiBufferEnabled Field Functions 
    bool hasMultiBufferEnabled() const { return this->multiBufferEnabled_ != nullptr;};
    void deleteMultiBufferEnabled() { this->multiBufferEnabled_ = nullptr;};
    inline bool multiBufferEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiBufferEnabled_, false) };
    inline DescribeNodesInstanceTypeResponseBodyInstanceTypes& setMultiBufferEnabled(bool multiBufferEnabled) { DARABONBA_PTR_SET_VALUE(multiBufferEnabled_, multiBufferEnabled) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeNodesInstanceTypeResponseBodyInstanceTypes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeNodesInstanceTypeResponseBodyInstanceTypes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The label keys of nodes which have MultiBuffer optimization supported. (Enable optimization only if pod being scheduled to node which have a label key specified by this field and its value equals with the value field)
    std::shared_ptr<string> key_ = nullptr;
    // Indicates whether the instance type supports Multi-Buffer acceleration. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> multiBufferEnabled_ = nullptr;
    // The instance type of the node.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The label keys of nodes which have MultiBuffer optimization supported. (Enable optimization only if pod being scheduled to node which have a label key specified by the key field and its value equals with this field)
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif

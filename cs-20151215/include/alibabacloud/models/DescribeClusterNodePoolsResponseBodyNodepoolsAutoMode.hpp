// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSAUTOMODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSAUTOMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode(const DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode(DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

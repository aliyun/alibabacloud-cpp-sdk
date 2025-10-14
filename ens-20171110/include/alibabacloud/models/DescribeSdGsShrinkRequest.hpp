// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGIds, SDGIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGIds, SDGIdsShrink_);
    };
    DescribeSDGsShrinkRequest() = default ;
    DescribeSDGsShrinkRequest(const DescribeSDGsShrinkRequest &) = default ;
    DescribeSDGsShrinkRequest(DescribeSDGsShrinkRequest &&) = default ;
    DescribeSDGsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGsShrinkRequest() = default ;
    DescribeSDGsShrinkRequest& operator=(const DescribeSDGsShrinkRequest &) = default ;
    DescribeSDGsShrinkRequest& operator=(DescribeSDGsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && return this->SDGIdsShrink_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DescribeSDGsShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // SDGIdsShrink Field Functions 
    bool hasSDGIdsShrink() const { return this->SDGIdsShrink_ != nullptr;};
    void deleteSDGIdsShrink() { this->SDGIdsShrink_ = nullptr;};
    inline string SDGIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(SDGIdsShrink_, "") };
    inline DescribeSDGsShrinkRequest& setSDGIdsShrink(string SDGIdsShrink) { DARABONBA_PTR_SET_VALUE(SDGIdsShrink_, SDGIdsShrink) };


  protected:
    // The AIC instance ID to be queried.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The IDs of SDGs that you want to query. By default, all SDGs are queried.
    std::shared_ptr<string> SDGIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

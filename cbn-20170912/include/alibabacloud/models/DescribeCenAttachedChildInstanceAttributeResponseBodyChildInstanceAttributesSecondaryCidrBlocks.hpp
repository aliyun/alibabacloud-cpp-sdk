// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODYCHILDINSTANCEATTRIBUTESSECONDARYCIDRBLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODYCHILDINSTANCEATTRIBUTESSECONDARYCIDRBLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& obj) { 
      DARABONBA_PTR_TO_JSON(secondaryCidrBlock, secondaryCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& obj) { 
      DARABONBA_PTR_FROM_JSON(secondaryCidrBlock, secondaryCidrBlock_);
    };
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks(const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks(DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks &&) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& operator=(const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& operator=(DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->secondaryCidrBlock_ != nullptr; };
    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline const vector<string> & secondaryCidrBlock() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlock_, vector<string>) };
    inline vector<string> secondaryCidrBlock() { DARABONBA_PTR_GET(secondaryCidrBlock_, vector<string>) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& setSecondaryCidrBlock(const vector<string> & secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks& setSecondaryCidrBlock(vector<string> && secondaryCidrBlock) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlock_, secondaryCidrBlock) };


  protected:
    std::shared_ptr<vector<string>> secondaryCidrBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

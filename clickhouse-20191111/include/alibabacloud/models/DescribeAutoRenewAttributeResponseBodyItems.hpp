// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAutoRenewAttributeResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewAttribute, autoRenewAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewAttribute, autoRenewAttribute_);
    };
    DescribeAutoRenewAttributeResponseBodyItems() = default ;
    DescribeAutoRenewAttributeResponseBodyItems(const DescribeAutoRenewAttributeResponseBodyItems &) = default ;
    DescribeAutoRenewAttributeResponseBodyItems(DescribeAutoRenewAttributeResponseBodyItems &&) = default ;
    DescribeAutoRenewAttributeResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewAttributeResponseBodyItems() = default ;
    DescribeAutoRenewAttributeResponseBodyItems& operator=(const DescribeAutoRenewAttributeResponseBodyItems &) = default ;
    DescribeAutoRenewAttributeResponseBodyItems& operator=(DescribeAutoRenewAttributeResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewAttribute_ == nullptr; };
    // autoRenewAttribute Field Functions 
    bool hasAutoRenewAttribute() const { return this->autoRenewAttribute_ != nullptr;};
    void deleteAutoRenewAttribute() { this->autoRenewAttribute_ = nullptr;};
    inline const vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> & autoRenewAttribute() const { DARABONBA_PTR_GET_CONST(autoRenewAttribute_, vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>) };
    inline vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> autoRenewAttribute() { DARABONBA_PTR_GET(autoRenewAttribute_, vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>) };
    inline DescribeAutoRenewAttributeResponseBodyItems& setAutoRenewAttribute(const vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> & autoRenewAttribute) { DARABONBA_PTR_SET_VALUE(autoRenewAttribute_, autoRenewAttribute) };
    inline DescribeAutoRenewAttributeResponseBodyItems& setAutoRenewAttribute(vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> && autoRenewAttribute) { DARABONBA_PTR_SET_RVALUE(autoRenewAttribute_, autoRenewAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>> autoRenewAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif

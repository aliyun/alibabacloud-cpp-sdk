// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFOWANGWANGSWANGWANG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFOWANGWANGSWANGWANG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyShopInfoWangWangsWangWang : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyShopInfoWangWangsWangWang& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyShopInfoWangWangsWangWang& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeProductResponseBodyShopInfoWangWangsWangWang() = default ;
    DescribeProductResponseBodyShopInfoWangWangsWangWang(const DescribeProductResponseBodyShopInfoWangWangsWangWang &) = default ;
    DescribeProductResponseBodyShopInfoWangWangsWangWang(DescribeProductResponseBodyShopInfoWangWangsWangWang &&) = default ;
    DescribeProductResponseBodyShopInfoWangWangsWangWang(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyShopInfoWangWangsWangWang() = default ;
    DescribeProductResponseBodyShopInfoWangWangsWangWang& operator=(const DescribeProductResponseBodyShopInfoWangWangsWangWang &) = default ;
    DescribeProductResponseBodyShopInfoWangWangsWangWang& operator=(DescribeProductResponseBodyShopInfoWangWangsWangWang &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remark_ != nullptr
        && this->userName_ != nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeProductResponseBodyShopInfoWangWangsWangWang& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeProductResponseBodyShopInfoWangWangsWangWang& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFOWANGWANGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFOWANGWANGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyShopInfoWangWangsWangWang.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyShopInfoWangWangs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyShopInfoWangWangs& obj) { 
      DARABONBA_PTR_TO_JSON(WangWang, wangWang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyShopInfoWangWangs& obj) { 
      DARABONBA_PTR_FROM_JSON(WangWang, wangWang_);
    };
    DescribeProductResponseBodyShopInfoWangWangs() = default ;
    DescribeProductResponseBodyShopInfoWangWangs(const DescribeProductResponseBodyShopInfoWangWangs &) = default ;
    DescribeProductResponseBodyShopInfoWangWangs(DescribeProductResponseBodyShopInfoWangWangs &&) = default ;
    DescribeProductResponseBodyShopInfoWangWangs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyShopInfoWangWangs() = default ;
    DescribeProductResponseBodyShopInfoWangWangs& operator=(const DescribeProductResponseBodyShopInfoWangWangs &) = default ;
    DescribeProductResponseBodyShopInfoWangWangs& operator=(DescribeProductResponseBodyShopInfoWangWangs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wangWang_ != nullptr; };
    // wangWang Field Functions 
    bool hasWangWang() const { return this->wangWang_ != nullptr;};
    void deleteWangWang() { this->wangWang_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang> & wangWang() const { DARABONBA_PTR_GET_CONST(wangWang_, vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang>) };
    inline vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang> wangWang() { DARABONBA_PTR_GET(wangWang_, vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang>) };
    inline DescribeProductResponseBodyShopInfoWangWangs& setWangWang(const vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang> & wangWang) { DARABONBA_PTR_SET_VALUE(wangWang_, wangWang) };
    inline DescribeProductResponseBodyShopInfoWangWangs& setWangWang(vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang> && wangWang) { DARABONBA_PTR_SET_RVALUE(wangWang_, wangWang) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyShopInfoWangWangsWangWang>> wangWang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

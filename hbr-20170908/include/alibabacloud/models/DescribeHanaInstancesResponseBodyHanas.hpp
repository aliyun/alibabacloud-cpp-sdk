// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHanaInstancesResponseBodyHanasHana.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaInstancesResponseBodyHanas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaInstancesResponseBodyHanas& obj) { 
      DARABONBA_PTR_TO_JSON(Hana, hana_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaInstancesResponseBodyHanas& obj) { 
      DARABONBA_PTR_FROM_JSON(Hana, hana_);
    };
    DescribeHanaInstancesResponseBodyHanas() = default ;
    DescribeHanaInstancesResponseBodyHanas(const DescribeHanaInstancesResponseBodyHanas &) = default ;
    DescribeHanaInstancesResponseBodyHanas(DescribeHanaInstancesResponseBodyHanas &&) = default ;
    DescribeHanaInstancesResponseBodyHanas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaInstancesResponseBodyHanas() = default ;
    DescribeHanaInstancesResponseBodyHanas& operator=(const DescribeHanaInstancesResponseBodyHanas &) = default ;
    DescribeHanaInstancesResponseBodyHanas& operator=(DescribeHanaInstancesResponseBodyHanas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hana_ != nullptr; };
    // hana Field Functions 
    bool hasHana() const { return this->hana_ != nullptr;};
    void deleteHana() { this->hana_ = nullptr;};
    inline const vector<Models::DescribeHanaInstancesResponseBodyHanasHana> & hana() const { DARABONBA_PTR_GET_CONST(hana_, vector<Models::DescribeHanaInstancesResponseBodyHanasHana>) };
    inline vector<Models::DescribeHanaInstancesResponseBodyHanasHana> hana() { DARABONBA_PTR_GET(hana_, vector<Models::DescribeHanaInstancesResponseBodyHanasHana>) };
    inline DescribeHanaInstancesResponseBodyHanas& setHana(const vector<Models::DescribeHanaInstancesResponseBodyHanasHana> & hana) { DARABONBA_PTR_SET_VALUE(hana_, hana) };
    inline DescribeHanaInstancesResponseBodyHanas& setHana(vector<Models::DescribeHanaInstancesResponseBodyHanasHana> && hana) { DARABONBA_PTR_SET_RVALUE(hana_, hana) };


  protected:
    std::shared_ptr<vector<Models::DescribeHanaInstancesResponseBodyHanasHana>> hana_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif

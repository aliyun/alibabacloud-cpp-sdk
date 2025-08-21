// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDisksResponseBodyDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
    };
    DescribeDisksResponseBodyDisks() = default ;
    DescribeDisksResponseBodyDisks(const DescribeDisksResponseBodyDisks &) = default ;
    DescribeDisksResponseBodyDisks(DescribeDisksResponseBodyDisks &&) = default ;
    DescribeDisksResponseBodyDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisks() = default ;
    DescribeDisksResponseBodyDisks& operator=(const DescribeDisksResponseBodyDisks &) = default ;
    DescribeDisksResponseBodyDisks& operator=(DescribeDisksResponseBodyDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disks_ != nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeDisksResponseBodyDisksDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeDisksResponseBodyDisksDisks>) };
    inline vector<Models::DescribeDisksResponseBodyDisksDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeDisksResponseBodyDisksDisks>) };
    inline DescribeDisksResponseBodyDisks& setDisks(const vector<Models::DescribeDisksResponseBodyDisksDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDisksResponseBodyDisks& setDisks(vector<Models::DescribeDisksResponseBodyDisksDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksResponseBodyDisksDisks>> disks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

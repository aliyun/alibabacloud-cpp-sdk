// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPASSOCIATEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPASSOCIATEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(associatedInstance, associatedInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(associatedInstance, associatedInstance_);
    };
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances(const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances(DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances &&) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& operator=(const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& operator=(DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedInstance_ == nullptr; };
    // associatedInstance Field Functions 
    bool hasAssociatedInstance() const { return this->associatedInstance_ != nullptr;};
    void deleteAssociatedInstance() { this->associatedInstance_ = nullptr;};
    inline const vector<string> & associatedInstance() const { DARABONBA_PTR_GET_CONST(associatedInstance_, vector<string>) };
    inline vector<string> associatedInstance() { DARABONBA_PTR_GET(associatedInstance_, vector<string>) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& setAssociatedInstance(const vector<string> & associatedInstance) { DARABONBA_PTR_SET_VALUE(associatedInstance_, associatedInstance) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances& setAssociatedInstance(vector<string> && associatedInstance) { DARABONBA_PTR_SET_RVALUE(associatedInstance_, associatedInstance) };


  protected:
    std::shared_ptr<vector<string>> associatedInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

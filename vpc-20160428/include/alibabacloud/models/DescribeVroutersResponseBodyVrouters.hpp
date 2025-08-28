// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVRoutersResponseBodyVRoutersVRouter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVRoutersResponseBodyVRouters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVRoutersResponseBodyVRouters& obj) { 
      DARABONBA_PTR_TO_JSON(VRouter, VRouter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVRoutersResponseBodyVRouters& obj) { 
      DARABONBA_PTR_FROM_JSON(VRouter, VRouter_);
    };
    DescribeVRoutersResponseBodyVRouters() = default ;
    DescribeVRoutersResponseBodyVRouters(const DescribeVRoutersResponseBodyVRouters &) = default ;
    DescribeVRoutersResponseBodyVRouters(DescribeVRoutersResponseBodyVRouters &&) = default ;
    DescribeVRoutersResponseBodyVRouters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVRoutersResponseBodyVRouters() = default ;
    DescribeVRoutersResponseBodyVRouters& operator=(const DescribeVRoutersResponseBodyVRouters &) = default ;
    DescribeVRoutersResponseBodyVRouters& operator=(DescribeVRoutersResponseBodyVRouters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->VRouter_ != nullptr; };
    // VRouter Field Functions 
    bool hasVRouter() const { return this->VRouter_ != nullptr;};
    void deleteVRouter() { this->VRouter_ = nullptr;};
    inline const vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter> & VRouter() const { DARABONBA_PTR_GET_CONST(VRouter_, vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter>) };
    inline vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter> VRouter() { DARABONBA_PTR_GET(VRouter_, vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter>) };
    inline DescribeVRoutersResponseBodyVRouters& setVRouter(const vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter> & VRouter) { DARABONBA_PTR_SET_VALUE(VRouter_, VRouter) };
    inline DescribeVRoutersResponseBodyVRouters& setVRouter(vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter> && VRouter) { DARABONBA_PTR_SET_RVALUE(VRouter_, VRouter) };


  protected:
    std::shared_ptr<vector<Models::DescribeVRoutersResponseBodyVRoutersVRouter>> VRouter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

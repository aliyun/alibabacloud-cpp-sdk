// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODYDELAYTEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODYDELAYTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyDelayTestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNetTestResultResponseBodyDelayTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetTestResultResponseBodyDelayTest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetTestResultResponseBodyDelayTest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
    };
    DescribeNetTestResultResponseBodyDelayTest() = default ;
    DescribeNetTestResultResponseBodyDelayTest(const DescribeNetTestResultResponseBodyDelayTest &) = default ;
    DescribeNetTestResultResponseBodyDelayTest(DescribeNetTestResultResponseBodyDelayTest &&) = default ;
    DescribeNetTestResultResponseBodyDelayTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetTestResultResponseBodyDelayTest() = default ;
    DescribeNetTestResultResponseBodyDelayTest& operator=(const DescribeNetTestResultResponseBodyDelayTest &) = default ;
    DescribeNetTestResultResponseBodyDelayTest& operator=(DescribeNetTestResultResponseBodyDelayTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hosts_ != nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts>) };
    inline vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts>) };
    inline DescribeNetTestResultResponseBodyDelayTest& setHosts(const vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline DescribeNetTestResultResponseBodyDelayTest& setHosts(vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


  protected:
    // All hosts infomation
    std::shared_ptr<vector<Models::DescribeNetTestResultResponseBodyDelayTestHosts>> hosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

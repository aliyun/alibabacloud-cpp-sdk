// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTSDELAYTEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTSDELAYTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNetTestResultsResponseBodyNetTestResultsDelayTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetTestResultsResponseBodyNetTestResultsDelayTest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetTestResultsResponseBodyNetTestResultsDelayTest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
    };
    ListNetTestResultsResponseBodyNetTestResultsDelayTest() = default ;
    ListNetTestResultsResponseBodyNetTestResultsDelayTest(const ListNetTestResultsResponseBodyNetTestResultsDelayTest &) = default ;
    ListNetTestResultsResponseBodyNetTestResultsDelayTest(ListNetTestResultsResponseBodyNetTestResultsDelayTest &&) = default ;
    ListNetTestResultsResponseBodyNetTestResultsDelayTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetTestResultsResponseBodyNetTestResultsDelayTest() = default ;
    ListNetTestResultsResponseBodyNetTestResultsDelayTest& operator=(const ListNetTestResultsResponseBodyNetTestResultsDelayTest &) = default ;
    ListNetTestResultsResponseBodyNetTestResultsDelayTest& operator=(ListNetTestResultsResponseBodyNetTestResultsDelayTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hosts_ == nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts>) };
    inline vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts>) };
    inline ListNetTestResultsResponseBodyNetTestResultsDelayTest& setHosts(const vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ListNetTestResultsResponseBodyNetTestResultsDelayTest& setHosts(vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


  protected:
    // The hosts.
    std::shared_ptr<vector<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts>> hosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

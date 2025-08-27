// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTDELAYTEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTDELAYTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetTestTaskRequestDelayTestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskRequestDelayTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskRequestDelayTest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskRequestDelayTest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
    };
    CreateNetTestTaskRequestDelayTest() = default ;
    CreateNetTestTaskRequestDelayTest(const CreateNetTestTaskRequestDelayTest &) = default ;
    CreateNetTestTaskRequestDelayTest(CreateNetTestTaskRequestDelayTest &&) = default ;
    CreateNetTestTaskRequestDelayTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskRequestDelayTest() = default ;
    CreateNetTestTaskRequestDelayTest& operator=(const CreateNetTestTaskRequestDelayTest &) = default ;
    CreateNetTestTaskRequestDelayTest& operator=(CreateNetTestTaskRequestDelayTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hosts_ != nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::CreateNetTestTaskRequestDelayTestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::CreateNetTestTaskRequestDelayTestHosts>) };
    inline vector<Models::CreateNetTestTaskRequestDelayTestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::CreateNetTestTaskRequestDelayTestHosts>) };
    inline CreateNetTestTaskRequestDelayTest& setHosts(const vector<Models::CreateNetTestTaskRequestDelayTestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline CreateNetTestTaskRequestDelayTest& setHosts(vector<Models::CreateNetTestTaskRequestDelayTestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


  protected:
    // The hosts of the test node.
    std::shared_ptr<vector<Models::CreateNetTestTaskRequestDelayTestHosts>> hosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

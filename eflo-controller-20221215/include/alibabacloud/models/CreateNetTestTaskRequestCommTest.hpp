// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTCOMMTEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTCOMMTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetTestTaskRequestCommTestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskRequestCommTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskRequestCommTest& obj) { 
      DARABONBA_PTR_TO_JSON(GPUNum, GPUNum_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskRequestCommTest& obj) { 
      DARABONBA_PTR_FROM_JSON(GPUNum, GPUNum_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateNetTestTaskRequestCommTest() = default ;
    CreateNetTestTaskRequestCommTest(const CreateNetTestTaskRequestCommTest &) = default ;
    CreateNetTestTaskRequestCommTest(CreateNetTestTaskRequestCommTest &&) = default ;
    CreateNetTestTaskRequestCommTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskRequestCommTest() = default ;
    CreateNetTestTaskRequestCommTest& operator=(const CreateNetTestTaskRequestCommTest &) = default ;
    CreateNetTestTaskRequestCommTest& operator=(CreateNetTestTaskRequestCommTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GPUNum_ == nullptr
        && return this->hosts_ == nullptr && return this->model_ == nullptr && return this->type_ == nullptr; };
    // GPUNum Field Functions 
    bool hasGPUNum() const { return this->GPUNum_ != nullptr;};
    void deleteGPUNum() { this->GPUNum_ = nullptr;};
    inline int64_t GPUNum() const { DARABONBA_PTR_GET_DEFAULT(GPUNum_, 0L) };
    inline CreateNetTestTaskRequestCommTest& setGPUNum(int64_t GPUNum) { DARABONBA_PTR_SET_VALUE(GPUNum_, GPUNum) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::CreateNetTestTaskRequestCommTestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::CreateNetTestTaskRequestCommTestHosts>) };
    inline vector<Models::CreateNetTestTaskRequestCommTestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::CreateNetTestTaskRequestCommTestHosts>) };
    inline CreateNetTestTaskRequestCommTest& setHosts(const vector<Models::CreateNetTestTaskRequestCommTestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline CreateNetTestTaskRequestCommTest& setHosts(vector<Models::CreateNetTestTaskRequestCommTestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateNetTestTaskRequestCommTest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateNetTestTaskRequestCommTest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of GPUs.
    std::shared_ptr<int64_t> GPUNum_ = nullptr;
    // The host IDs.
    std::shared_ptr<vector<Models::CreateNetTestTaskRequestCommTestHosts>> hosts_ = nullptr;
    // The communication library model.
    std::shared_ptr<string> model_ = nullptr;
    // The CommTest type, which can be ACCL or NCCL.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

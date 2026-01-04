// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceActiveOpsTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceActiveOpsTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceActiveOpsTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    CreateInstanceActiveOpsTaskRequest() = default ;
    CreateInstanceActiveOpsTaskRequest(const CreateInstanceActiveOpsTaskRequest &) = default ;
    CreateInstanceActiveOpsTaskRequest(CreateInstanceActiveOpsTaskRequest &&) = default ;
    CreateInstanceActiveOpsTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceActiveOpsTaskRequest() = default ;
    CreateInstanceActiveOpsTaskRequest& operator=(const CreateInstanceActiveOpsTaskRequest &) = default ;
    CreateInstanceActiveOpsTaskRequest& operator=(CreateInstanceActiveOpsTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateInstanceActiveOpsTaskRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateInstanceActiveOpsTaskRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    shared_ptr<vector<string>> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

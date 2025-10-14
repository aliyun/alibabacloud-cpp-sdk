// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODYINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODYINSTANCEIDS_HPP_
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
  class CreateInstanceResponseBodyInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBodyInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBodyInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateInstanceResponseBodyInstanceIds() = default ;
    CreateInstanceResponseBodyInstanceIds(const CreateInstanceResponseBodyInstanceIds &) = default ;
    CreateInstanceResponseBodyInstanceIds(CreateInstanceResponseBodyInstanceIds &&) = default ;
    CreateInstanceResponseBodyInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBodyInstanceIds() = default ;
    CreateInstanceResponseBodyInstanceIds& operator=(const CreateInstanceResponseBodyInstanceIds &) = default ;
    CreateInstanceResponseBodyInstanceIds& operator=(CreateInstanceResponseBodyInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline CreateInstanceResponseBodyInstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline CreateInstanceResponseBodyInstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

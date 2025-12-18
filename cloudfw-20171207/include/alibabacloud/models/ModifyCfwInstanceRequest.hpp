// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCFWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCFWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCfwInstanceRequestUpdateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyCfwInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCfwInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UpdateList, updateList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCfwInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UpdateList, updateList_);
    };
    ModifyCfwInstanceRequest() = default ;
    ModifyCfwInstanceRequest(const ModifyCfwInstanceRequest &) = default ;
    ModifyCfwInstanceRequest(ModifyCfwInstanceRequest &&) = default ;
    ModifyCfwInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCfwInstanceRequest() = default ;
    ModifyCfwInstanceRequest& operator=(const ModifyCfwInstanceRequest &) = default ;
    ModifyCfwInstanceRequest& operator=(ModifyCfwInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->updateList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCfwInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateList Field Functions 
    bool hasUpdateList() const { return this->updateList_ != nullptr;};
    void deleteUpdateList() { this->updateList_ = nullptr;};
    inline const vector<ModifyCfwInstanceRequestUpdateList> & updateList() const { DARABONBA_PTR_GET_CONST(updateList_, vector<ModifyCfwInstanceRequestUpdateList>) };
    inline vector<ModifyCfwInstanceRequestUpdateList> updateList() { DARABONBA_PTR_GET(updateList_, vector<ModifyCfwInstanceRequestUpdateList>) };
    inline ModifyCfwInstanceRequest& setUpdateList(const vector<ModifyCfwInstanceRequestUpdateList> & updateList) { DARABONBA_PTR_SET_VALUE(updateList_, updateList) };
    inline ModifyCfwInstanceRequest& setUpdateList(vector<ModifyCfwInstanceRequestUpdateList> && updateList) { DARABONBA_PTR_SET_RVALUE(updateList_, updateList) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<ModifyCfwInstanceRequestUpdateList>> updateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

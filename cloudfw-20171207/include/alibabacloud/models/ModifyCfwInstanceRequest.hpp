// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCFWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCFWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class UpdateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      UpdateList() = default ;
      UpdateList(const UpdateList &) = default ;
      UpdateList(UpdateList &&) = default ;
      UpdateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateList() = default ;
      UpdateList& operator=(const UpdateList &) = default ;
      UpdateList& operator=(UpdateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UpdateList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline UpdateList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->updateList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCfwInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateList Field Functions 
    bool hasUpdateList() const { return this->updateList_ != nullptr;};
    void deleteUpdateList() { this->updateList_ = nullptr;};
    inline const vector<ModifyCfwInstanceRequest::UpdateList> & getUpdateList() const { DARABONBA_PTR_GET_CONST(updateList_, vector<ModifyCfwInstanceRequest::UpdateList>) };
    inline vector<ModifyCfwInstanceRequest::UpdateList> getUpdateList() { DARABONBA_PTR_GET(updateList_, vector<ModifyCfwInstanceRequest::UpdateList>) };
    inline ModifyCfwInstanceRequest& setUpdateList(const vector<ModifyCfwInstanceRequest::UpdateList> & updateList) { DARABONBA_PTR_SET_VALUE(updateList_, updateList) };
    inline ModifyCfwInstanceRequest& setUpdateList(vector<ModifyCfwInstanceRequest::UpdateList> && updateList) { DARABONBA_PTR_SET_RVALUE(updateList_, updateList) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<ModifyCfwInstanceRequest::UpdateList>> updateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

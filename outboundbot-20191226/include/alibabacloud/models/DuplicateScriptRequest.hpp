// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLICATESCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DUPLICATESCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DuplicateScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplicateScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceScriptId, sourceScriptId_);
    };
    friend void from_json(const Darabonba::Json& j, DuplicateScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceScriptId, sourceScriptId_);
    };
    DuplicateScriptRequest() = default ;
    DuplicateScriptRequest(const DuplicateScriptRequest &) = default ;
    DuplicateScriptRequest(DuplicateScriptRequest &&) = default ;
    DuplicateScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplicateScriptRequest() = default ;
    DuplicateScriptRequest& operator=(const DuplicateScriptRequest &) = default ;
    DuplicateScriptRequest& operator=(DuplicateScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->sourceScriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DuplicateScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DuplicateScriptRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceScriptId Field Functions 
    bool hasSourceScriptId() const { return this->sourceScriptId_ != nullptr;};
    void deleteSourceScriptId() { this->sourceScriptId_ = nullptr;};
    inline string getSourceScriptId() const { DARABONBA_PTR_GET_DEFAULT(sourceScriptId_, "") };
    inline DuplicateScriptRequest& setSourceScriptId(string sourceScriptId) { DARABONBA_PTR_SET_VALUE(sourceScriptId_, sourceScriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> sourceScriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

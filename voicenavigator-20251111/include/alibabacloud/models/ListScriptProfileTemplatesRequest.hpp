// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTPROFILETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTPROFILETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListScriptProfileTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptProfileTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptProfileTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListScriptProfileTemplatesRequest() = default ;
    ListScriptProfileTemplatesRequest(const ListScriptProfileTemplatesRequest &) = default ;
    ListScriptProfileTemplatesRequest(ListScriptProfileTemplatesRequest &&) = default ;
    ListScriptProfileTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptProfileTemplatesRequest() = default ;
    ListScriptProfileTemplatesRequest& operator=(const ListScriptProfileTemplatesRequest &) = default ;
    ListScriptProfileTemplatesRequest& operator=(ListScriptProfileTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptProfileTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif

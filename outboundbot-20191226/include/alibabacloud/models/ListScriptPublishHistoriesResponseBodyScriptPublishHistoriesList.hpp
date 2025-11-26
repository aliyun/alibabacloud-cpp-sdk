// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTPUBLISHHISTORIESRESPONSEBODYSCRIPTPUBLISHHISTORIESLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTPUBLISHHISTORIESRESPONSEBODYSCRIPTPUBLISHHISTORIESLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
    };
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList() = default ;
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList(const ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList &) = default ;
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList(ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList &&) = default ;
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList() = default ;
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& operator=(const ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList &) = default ;
    ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& operator=(ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->instanceId_ == nullptr && return this->publishTime_ == nullptr && return this->scriptId_ == nullptr && return this->scriptVersion_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline ListScriptPublishHistoriesResponseBodyScriptPublishHistoriesList& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

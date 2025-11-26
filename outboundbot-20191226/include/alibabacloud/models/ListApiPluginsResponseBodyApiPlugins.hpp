// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIPLUGINSRESPONSEBODYAPIPLUGINS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIPLUGINSRESPONSEBODYAPIPLUGINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListApiPluginsResponseBodyApiPlugins : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiPluginsResponseBodyApiPlugins& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DraftedConfigJson, draftedConfigJson_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishedConfigJson, publishedConfigJson_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiPluginsResponseBodyApiPlugins& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DraftedConfigJson, draftedConfigJson_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishedConfigJson, publishedConfigJson_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListApiPluginsResponseBodyApiPlugins() = default ;
    ListApiPluginsResponseBodyApiPlugins(const ListApiPluginsResponseBodyApiPlugins &) = default ;
    ListApiPluginsResponseBodyApiPlugins(ListApiPluginsResponseBodyApiPlugins &&) = default ;
    ListApiPluginsResponseBodyApiPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiPluginsResponseBodyApiPlugins() = default ;
    ListApiPluginsResponseBodyApiPlugins& operator=(const ListApiPluginsResponseBodyApiPlugins &) = default ;
    ListApiPluginsResponseBodyApiPlugins& operator=(ListApiPluginsResponseBodyApiPlugins &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->draftedConfigJson_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr
        && return this->publishedConfigJson_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // draftedConfigJson Field Functions 
    bool hasDraftedConfigJson() const { return this->draftedConfigJson_ != nullptr;};
    void deleteDraftedConfigJson() { this->draftedConfigJson_ = nullptr;};
    inline string draftedConfigJson() const { DARABONBA_PTR_GET_DEFAULT(draftedConfigJson_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setDraftedConfigJson(string draftedConfigJson) { DARABONBA_PTR_SET_VALUE(draftedConfigJson_, draftedConfigJson) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListApiPluginsResponseBodyApiPlugins& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListApiPluginsResponseBodyApiPlugins& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishedConfigJson Field Functions 
    bool hasPublishedConfigJson() const { return this->publishedConfigJson_ != nullptr;};
    void deletePublishedConfigJson() { this->publishedConfigJson_ = nullptr;};
    inline string publishedConfigJson() const { DARABONBA_PTR_GET_DEFAULT(publishedConfigJson_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setPublishedConfigJson(string publishedConfigJson) { DARABONBA_PTR_SET_VALUE(publishedConfigJson_, publishedConfigJson) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListApiPluginsResponseBodyApiPlugins& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> draftedConfigJson_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> publishedConfigJson_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

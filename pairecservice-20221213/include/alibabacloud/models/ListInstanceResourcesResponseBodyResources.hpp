// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(GmtCreateAt, gmtCreateAt_);
      DARABONBA_PTR_TO_JSON(GmtModifiedAt, gmtModifiedAt_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(GmtCreateAt, gmtCreateAt_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedAt, gmtModifiedAt_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    ListInstanceResourcesResponseBodyResources() = default ;
    ListInstanceResourcesResponseBodyResources(const ListInstanceResourcesResponseBodyResources &) = default ;
    ListInstanceResourcesResponseBodyResources(ListInstanceResourcesResponseBodyResources &&) = default ;
    ListInstanceResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourcesResponseBodyResources() = default ;
    ListInstanceResourcesResponseBodyResources& operator=(const ListInstanceResourcesResponseBodyResources &) = default ;
    ListInstanceResourcesResponseBodyResources& operator=(ListInstanceResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->config_ != nullptr && this->gmtCreateAt_ != nullptr && this->gmtModifiedAt_ != nullptr && this->group_ != nullptr && this->resourceId_ != nullptr
        && this->type_ != nullptr && this->uri_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListInstanceResourcesResponseBodyResources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListInstanceResourcesResponseBodyResources& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // gmtCreateAt Field Functions 
    bool hasGmtCreateAt() const { return this->gmtCreateAt_ != nullptr;};
    void deleteGmtCreateAt() { this->gmtCreateAt_ = nullptr;};
    inline string gmtCreateAt() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateAt_, "") };
    inline ListInstanceResourcesResponseBodyResources& setGmtCreateAt(string gmtCreateAt) { DARABONBA_PTR_SET_VALUE(gmtCreateAt_, gmtCreateAt) };


    // gmtModifiedAt Field Functions 
    bool hasGmtModifiedAt() const { return this->gmtModifiedAt_ != nullptr;};
    void deleteGmtModifiedAt() { this->gmtModifiedAt_ = nullptr;};
    inline string gmtModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedAt_, "") };
    inline ListInstanceResourcesResponseBodyResources& setGmtModifiedAt(string gmtModifiedAt) { DARABONBA_PTR_SET_VALUE(gmtModifiedAt_, gmtModifiedAt) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListInstanceResourcesResponseBodyResources& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListInstanceResourcesResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstanceResourcesResponseBodyResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline ListInstanceResourcesResponseBodyResources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> gmtCreateAt_ = nullptr;
    std::shared_ptr<string> gmtModifiedAt_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

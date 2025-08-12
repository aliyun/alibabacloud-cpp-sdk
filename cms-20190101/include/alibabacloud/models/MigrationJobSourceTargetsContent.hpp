// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCETARGETSCONTENT_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCETARGETSCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobSourceTargetsContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobSourceTargetsContent& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourcePath, resourcePath_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobSourceTargetsContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourcePath, resourcePath_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    MigrationJobSourceTargetsContent() = default ;
    MigrationJobSourceTargetsContent(const MigrationJobSourceTargetsContent &) = default ;
    MigrationJobSourceTargetsContent(MigrationJobSourceTargetsContent &&) = default ;
    MigrationJobSourceTargetsContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobSourceTargetsContent() = default ;
    MigrationJobSourceTargetsContent& operator=(const MigrationJobSourceTargetsContent &) = default ;
    MigrationJobSourceTargetsContent& operator=(MigrationJobSourceTargetsContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->level_ != nullptr && this->method_ != nullptr && this->region_ != nullptr && this->resourcePath_ != nullptr && this->url_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline MigrationJobSourceTargetsContent& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline MigrationJobSourceTargetsContent& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline MigrationJobSourceTargetsContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline MigrationJobSourceTargetsContent& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourcePath Field Functions 
    bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
    void deleteResourcePath() { this->resourcePath_ = nullptr;};
    inline string resourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
    inline MigrationJobSourceTargetsContent& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MigrationJobSourceTargetsContent& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourcePath_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

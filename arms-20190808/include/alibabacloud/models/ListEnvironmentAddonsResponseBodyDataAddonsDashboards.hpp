// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSDASHBOARDS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSDASHBOARDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddonsDashboards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddonsDashboards& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddonsDashboards& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards(const ListEnvironmentAddonsResponseBodyDataAddonsDashboards &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards(ListEnvironmentAddonsResponseBodyDataAddonsDashboards &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddonsDashboards() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards& operator=(const ListEnvironmentAddonsResponseBodyDataAddonsDashboards &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsDashboards& operator=(ListEnvironmentAddonsResponseBodyDataAddonsDashboards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->url_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsDashboards& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsDashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsDashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The description of the dashboard.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the dashboard.
    std::shared_ptr<string> name_ = nullptr;
    // The URL of the dashboard.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSCONFIGSRESPONSEBODYCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSCONFIGSRESPONSEBODYCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosConfigsResponseBodyConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosConfigsResponseBodyConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosConfigsResponseBodyConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ListNacosConfigsResponseBodyConfigurations() = default ;
    ListNacosConfigsResponseBodyConfigurations(const ListNacosConfigsResponseBodyConfigurations &) = default ;
    ListNacosConfigsResponseBodyConfigurations(ListNacosConfigsResponseBodyConfigurations &&) = default ;
    ListNacosConfigsResponseBodyConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosConfigsResponseBodyConfigurations() = default ;
    ListNacosConfigsResponseBodyConfigurations& operator=(const ListNacosConfigsResponseBodyConfigurations &) = default ;
    ListNacosConfigsResponseBodyConfigurations& operator=(ListNacosConfigsResponseBodyConfigurations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->dataId_ != nullptr && this->group_ != nullptr && this->id_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListNacosConfigsResponseBodyConfigurations& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListNacosConfigsResponseBodyConfigurations& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListNacosConfigsResponseBodyConfigurations& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListNacosConfigsResponseBodyConfigurations& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the configuration.
    std::shared_ptr<string> dataId_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

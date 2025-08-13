// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODYDATAGATEWAYCONFIGLISTRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODYDATAGATEWAYCONFIGLISTRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginConfigResponseBodyDataGatewayConfigListResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginConfigResponseBodyDataGatewayConfigListResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginConfigResponseBodyDataGatewayConfigListResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList() = default ;
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList(const GetPluginConfigResponseBodyDataGatewayConfigListResourceList &) = default ;
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList(GetPluginConfigResponseBodyDataGatewayConfigListResourceList &&) = default ;
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginConfigResponseBodyDataGatewayConfigListResourceList() = default ;
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList& operator=(const GetPluginConfigResponseBodyDataGatewayConfigListResourceList &) = default ;
    GetPluginConfigResponseBodyDataGatewayConfigListResourceList& operator=(GetPluginConfigResponseBodyDataGatewayConfigListResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPluginConfigResponseBodyDataGatewayConfigListResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPluginConfigResponseBodyDataGatewayConfigListResourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

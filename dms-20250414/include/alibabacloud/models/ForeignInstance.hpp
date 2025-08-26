// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FOREIGNINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_FOREIGNINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ForeignInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForeignInstance& obj) { 
      DARABONBA_PTR_TO_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
    };
    friend void from_json(const Darabonba::Json& j, ForeignInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
    };
    ForeignInstance() = default ;
    ForeignInstance(const ForeignInstance &) = default ;
    ForeignInstance(ForeignInstance &&) = default ;
    ForeignInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForeignInstance() = default ;
    ForeignInstance& operator=(const ForeignInstance &) = default ;
    ForeignInstance& operator=(ForeignInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataLinkName_ != nullptr
        && this->host_ != nullptr && this->instanceSource_ != nullptr && this->instanceType_ != nullptr && this->port_ != nullptr && this->properties_ != nullptr
        && this->regionId_ != nullptr && this->sid_ != nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string dataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline ForeignInstance& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ForeignInstance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline ForeignInstance& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ForeignInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ForeignInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
    inline map<string, string> properties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
    inline ForeignInstance& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ForeignInstance& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ForeignInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline ForeignInstance& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


  protected:
    std::shared_ptr<string> dataLinkName_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceSource_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<map<string, string>> properties_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODYCONFIGSETS_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODYCONFIGSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigSetListResponseBodyConfigSetsIpPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetListResponseBodyConfigSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetListResponseBodyConfigSets& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FromAddresses, fromAddresses_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetListResponseBodyConfigSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FromAddresses, fromAddresses_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ConfigSetListResponseBodyConfigSets() = default ;
    ConfigSetListResponseBodyConfigSets(const ConfigSetListResponseBodyConfigSets &) = default ;
    ConfigSetListResponseBodyConfigSets(ConfigSetListResponseBodyConfigSets &&) = default ;
    ConfigSetListResponseBodyConfigSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetListResponseBodyConfigSets() = default ;
    ConfigSetListResponseBodyConfigSets& operator=(const ConfigSetListResponseBodyConfigSets &) = default ;
    ConfigSetListResponseBodyConfigSets& operator=(ConfigSetListResponseBodyConfigSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fromAddresses_ == nullptr && return this->id_ == nullptr && return this->ipPool_ == nullptr && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigSetListResponseBodyConfigSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fromAddresses Field Functions 
    bool hasFromAddresses() const { return this->fromAddresses_ != nullptr;};
    void deleteFromAddresses() { this->fromAddresses_ = nullptr;};
    inline const vector<string> & fromAddresses() const { DARABONBA_PTR_GET_CONST(fromAddresses_, vector<string>) };
    inline vector<string> fromAddresses() { DARABONBA_PTR_GET(fromAddresses_, vector<string>) };
    inline ConfigSetListResponseBodyConfigSets& setFromAddresses(const vector<string> & fromAddresses) { DARABONBA_PTR_SET_VALUE(fromAddresses_, fromAddresses) };
    inline ConfigSetListResponseBodyConfigSets& setFromAddresses(vector<string> && fromAddresses) { DARABONBA_PTR_SET_RVALUE(fromAddresses_, fromAddresses) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ConfigSetListResponseBodyConfigSets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipPool Field Functions 
    bool hasIpPool() const { return this->ipPool_ != nullptr;};
    void deleteIpPool() { this->ipPool_ = nullptr;};
    inline const Models::ConfigSetListResponseBodyConfigSetsIpPool & ipPool() const { DARABONBA_PTR_GET_CONST(ipPool_, Models::ConfigSetListResponseBodyConfigSetsIpPool) };
    inline Models::ConfigSetListResponseBodyConfigSetsIpPool ipPool() { DARABONBA_PTR_GET(ipPool_, Models::ConfigSetListResponseBodyConfigSetsIpPool) };
    inline ConfigSetListResponseBodyConfigSets& setIpPool(const Models::ConfigSetListResponseBodyConfigSetsIpPool & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
    inline ConfigSetListResponseBodyConfigSets& setIpPool(Models::ConfigSetListResponseBodyConfigSetsIpPool && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigSetListResponseBodyConfigSets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> fromAddresses_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::ConfigSetListResponseBodyConfigSetsIpPool> ipPool_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif

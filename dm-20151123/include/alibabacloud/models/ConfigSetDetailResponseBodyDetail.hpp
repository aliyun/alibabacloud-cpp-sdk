// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODYDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigSetDetailResponseBodyDetailIpPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetDetailResponseBodyDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetDetailResponseBodyDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetDetailResponseBodyDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ConfigSetDetailResponseBodyDetail() = default ;
    ConfigSetDetailResponseBodyDetail(const ConfigSetDetailResponseBodyDetail &) = default ;
    ConfigSetDetailResponseBodyDetail(ConfigSetDetailResponseBodyDetail &&) = default ;
    ConfigSetDetailResponseBodyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetDetailResponseBodyDetail() = default ;
    ConfigSetDetailResponseBodyDetail& operator=(const ConfigSetDetailResponseBodyDetail &) = default ;
    ConfigSetDetailResponseBodyDetail& operator=(ConfigSetDetailResponseBodyDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->ipPool_ == nullptr && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigSetDetailResponseBodyDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ConfigSetDetailResponseBodyDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipPool Field Functions 
    bool hasIpPool() const { return this->ipPool_ != nullptr;};
    void deleteIpPool() { this->ipPool_ = nullptr;};
    inline const Models::ConfigSetDetailResponseBodyDetailIpPool & ipPool() const { DARABONBA_PTR_GET_CONST(ipPool_, Models::ConfigSetDetailResponseBodyDetailIpPool) };
    inline Models::ConfigSetDetailResponseBodyDetailIpPool ipPool() { DARABONBA_PTR_GET(ipPool_, Models::ConfigSetDetailResponseBodyDetailIpPool) };
    inline ConfigSetDetailResponseBodyDetail& setIpPool(const Models::ConfigSetDetailResponseBodyDetailIpPool & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
    inline ConfigSetDetailResponseBodyDetail& setIpPool(Models::ConfigSetDetailResponseBodyDetailIpPool && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigSetDetailResponseBodyDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::ConfigSetDetailResponseBodyDetailIpPool> ipPool_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif

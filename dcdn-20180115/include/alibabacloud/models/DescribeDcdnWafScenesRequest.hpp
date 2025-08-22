// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafScenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafScenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafScenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
    };
    DescribeDcdnWafScenesRequest() = default ;
    DescribeDcdnWafScenesRequest(const DescribeDcdnWafScenesRequest &) = default ;
    DescribeDcdnWafScenesRequest(DescribeDcdnWafScenesRequest &&) = default ;
    DescribeDcdnWafScenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafScenesRequest() = default ;
    DescribeDcdnWafScenesRequest& operator=(const DescribeDcdnWafScenesRequest &) = default ;
    DescribeDcdnWafScenesRequest& operator=(DescribeDcdnWafScenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScenes_ != nullptr; };
    // defenseScenes Field Functions 
    bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
    void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
    inline string defenseScenes() const { DARABONBA_PTR_GET_DEFAULT(defenseScenes_, "") };
    inline DescribeDcdnWafScenesRequest& setDefenseScenes(string defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };


  protected:
    // The types of the protection policies that you want to query. Separate multiple types with commas (,). Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: IP address whitelist
    // *   ip_blacklist: IP address blacklist
    // *   region_block: region blacklist
    // *   bot: bot management
    // 
    // > If you do not set this parameter, all types of protection policies are queried.
    std::shared_ptr<string> defenseScenes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

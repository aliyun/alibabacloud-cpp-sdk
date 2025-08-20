// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEHIVEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEHIVEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EmrClusterId, emrClusterId_);
      DARABONBA_PTR_TO_JSON(MetaStoreUri, metaStoreUri_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EmrClusterId, emrClusterId_);
      DARABONBA_PTR_FROM_JSON(MetaStoreUri, metaStoreUri_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
    };
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo(const DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo(DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo &&) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& operator=(const DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& operator=(DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->emrClusterId_ != nullptr
        && this->metaStoreUri_ != nullptr && this->securityGroup_ != nullptr && this->vswitch_ != nullptr; };
    // emrClusterId Field Functions 
    bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
    void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
    inline string emrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


    // metaStoreUri Field Functions 
    bool hasMetaStoreUri() const { return this->metaStoreUri_ != nullptr;};
    void deleteMetaStoreUri() { this->metaStoreUri_ = nullptr;};
    inline string metaStoreUri() const { DARABONBA_PTR_GET_DEFAULT(metaStoreUri_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& setMetaStoreUri(string metaStoreUri) { DARABONBA_PTR_SET_VALUE(metaStoreUri_, metaStoreUri) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline string vswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


  protected:
    // The ID of the E-MapReduce (EMR) cluster.
    std::shared_ptr<string> emrClusterId_ = nullptr;
    // The URL of the Hive Metastore.
    std::shared_ptr<string> metaStoreUri_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINSREALVULLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINSREALVULLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList(const DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList(DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList &&) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& operator=(const DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& operator=(DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->name_ != nullptr && this->necessity_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The priority to fix the vulnerability. Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    // 
    // >  We recommend that you fix the vulnerabilities that have the **high** priority at the earliest opportunity.
    std::shared_ptr<string> necessity_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerabilities
    // *   **sys**: Windows system vulnerabilities
    // *   **cms**: Web-CMS vulnerabilities
    // *   **app**: application vulnerabilities
    // *   **emg**: urgent vulnerabilities
    // *   **sca**: middleware vulnerabilities
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONAREASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONAREASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListCommonAreasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonAreasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IsEpg, isEpg_);
      DARABONBA_PTR_TO_JSON(IsIpSet, isIpSet_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonAreasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IsEpg, isEpg_);
      DARABONBA_PTR_FROM_JSON(IsIpSet, isIpSet_);
    };
    ListCommonAreasRequest() = default ;
    ListCommonAreasRequest(const ListCommonAreasRequest &) = default ;
    ListCommonAreasRequest(ListCommonAreasRequest &&) = default ;
    ListCommonAreasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonAreasRequest() = default ;
    ListCommonAreasRequest& operator=(const ListCommonAreasRequest &) = default ;
    ListCommonAreasRequest& operator=(ListCommonAreasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipVersion_ == nullptr
        && this->isEpg_ == nullptr && this->isIpSet_ == nullptr; };
    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListCommonAreasRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isEpg Field Functions 
    bool hasIsEpg() const { return this->isEpg_ != nullptr;};
    void deleteIsEpg() { this->isEpg_ = nullptr;};
    inline bool getIsEpg() const { DARABONBA_PTR_GET_DEFAULT(isEpg_, false) };
    inline ListCommonAreasRequest& setIsEpg(bool isEpg) { DARABONBA_PTR_SET_VALUE(isEpg_, isEpg) };


    // isIpSet Field Functions 
    bool hasIsIpSet() const { return this->isIpSet_ != nullptr;};
    void deleteIsIpSet() { this->isIpSet_ = nullptr;};
    inline bool getIsIpSet() const { DARABONBA_PTR_GET_DEFAULT(isIpSet_, false) };
    inline ListCommonAreasRequest& setIsIpSet(bool isIpSet) { DARABONBA_PTR_SET_VALUE(isIpSet_, isIpSet) };


  protected:
    // The IP version used to connect to the GA instance. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **IPv6**
    shared_ptr<string> ipVersion_ {};
    // Specifies whether to query regions where endpoint groups of GA can be deployed. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    shared_ptr<bool> isEpg_ {};
    // Specifies whether to query regions supported by GA. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> isIpSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif

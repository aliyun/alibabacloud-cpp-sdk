// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESFEATUREDBINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESFEATUREDBINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListInstancesResponseBodyInstancesFeatureDBInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesFeatureDBInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesFeatureDBInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo() = default ;
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo(const ListInstancesResponseBodyInstancesFeatureDBInstanceInfo &) = default ;
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo(ListInstancesResponseBodyInstancesFeatureDBInstanceInfo &&) = default ;
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesFeatureDBInstanceInfo() = default ;
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo& operator=(const ListInstancesResponseBodyInstancesFeatureDBInstanceInfo &) = default ;
    ListInstancesResponseBodyInstancesFeatureDBInstanceInfo& operator=(ListInstancesResponseBodyInstancesFeatureDBInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstancesFeatureDBInstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUPGRADABLEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUPGRADABLEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class QueryUpgradableVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUpgradableVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Minor, minor_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUpgradableVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Minor, minor_);
    };
    QueryUpgradableVersionsRequest() = default ;
    QueryUpgradableVersionsRequest(const QueryUpgradableVersionsRequest &) = default ;
    QueryUpgradableVersionsRequest(QueryUpgradableVersionsRequest &&) = default ;
    QueryUpgradableVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUpgradableVersionsRequest() = default ;
    QueryUpgradableVersionsRequest& operator=(const QueryUpgradableVersionsRequest &) = default ;
    QueryUpgradableVersionsRequest& operator=(QueryUpgradableVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->minor_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryUpgradableVersionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // minor Field Functions 
    bool hasMinor() const { return this->minor_ != nullptr;};
    void deleteMinor() { this->minor_ = nullptr;};
    inline bool minor() const { DARABONBA_PTR_GET_DEFAULT(minor_, false) };
    inline QueryUpgradableVersionsRequest& setMinor(bool minor) { DARABONBA_PTR_SET_VALUE(minor_, minor) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to query the minor versions that you can upgrade to. Default value: true. Valid values:
    // 
    // *   true: The minor versions that you can upgrade to.
    // *   false: The major versions that you can upgrade to.
    std::shared_ptr<bool> minor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODYDEVICELISTDEVICEUNIONIDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODYDEVICELISTDEVICEUNIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class QueryDeviceListResponseBodyDeviceListDeviceUnionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceListResponseBodyDeviceListDeviceUnionIds& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceListResponseBodyDeviceListDeviceUnionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds() = default ;
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds(const QueryDeviceListResponseBodyDeviceListDeviceUnionIds &) = default ;
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds(QueryDeviceListResponseBodyDeviceListDeviceUnionIds &&) = default ;
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceListResponseBodyDeviceListDeviceUnionIds() = default ;
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds& operator=(const QueryDeviceListResponseBodyDeviceListDeviceUnionIds &) = default ;
    QueryDeviceListResponseBodyDeviceListDeviceUnionIds& operator=(QueryDeviceListResponseBodyDeviceListDeviceUnionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->organizationId_ != nullptr
        && this->unionId_ != nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline QueryDeviceListResponseBodyDeviceListDeviceUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline QueryDeviceListResponseBodyDeviceListDeviceUnionIds& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif

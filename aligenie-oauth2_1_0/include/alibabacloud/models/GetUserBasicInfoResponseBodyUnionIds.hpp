// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBASICINFORESPONSEBODYUNIONIDS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBASICINFORESPONSEBODYUNIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetUserBasicInfoResponseBodyUnionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserBasicInfoResponseBodyUnionIds& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserBasicInfoResponseBodyUnionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    GetUserBasicInfoResponseBodyUnionIds() = default ;
    GetUserBasicInfoResponseBodyUnionIds(const GetUserBasicInfoResponseBodyUnionIds &) = default ;
    GetUserBasicInfoResponseBodyUnionIds(GetUserBasicInfoResponseBodyUnionIds &&) = default ;
    GetUserBasicInfoResponseBodyUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserBasicInfoResponseBodyUnionIds() = default ;
    GetUserBasicInfoResponseBodyUnionIds& operator=(const GetUserBasicInfoResponseBodyUnionIds &) = default ;
    GetUserBasicInfoResponseBodyUnionIds& operator=(GetUserBasicInfoResponseBodyUnionIds &&) = default ;
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
    inline GetUserBasicInfoResponseBodyUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline GetUserBasicInfoResponseBodyUnionIds& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif

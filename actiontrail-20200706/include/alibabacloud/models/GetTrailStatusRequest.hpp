// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAILSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAILSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetTrailStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrailStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrailStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetTrailStatusRequest() = default ;
    GetTrailStatusRequest(const GetTrailStatusRequest &) = default ;
    GetTrailStatusRequest(GetTrailStatusRequest &&) = default ;
    GetTrailStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrailStatusRequest() = default ;
    GetTrailStatusRequest& operator=(const GetTrailStatusRequest &) = default ;
    GetTrailStatusRequest& operator=(GetTrailStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isOrganizationTrail_ != nullptr
        && this->name_ != nullptr; };
    // isOrganizationTrail Field Functions 
    bool hasIsOrganizationTrail() const { return this->isOrganizationTrail_ != nullptr;};
    void deleteIsOrganizationTrail() { this->isOrganizationTrail_ = nullptr;};
    inline bool isOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(isOrganizationTrail_, false) };
    inline GetTrailStatusRequest& setIsOrganizationTrail(bool isOrganizationTrail) { DARABONBA_PTR_SET_VALUE(isOrganizationTrail_, isOrganizationTrail) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTrailStatusRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Specifies whether to query the status of a multi-account trail. Valid values:
    // 
    // *   true: Query the status of a multi-account trail.
    // *   false: Query the status of a single-account trail. It is the default value.
    std::shared_ptr<bool> isOrganizationTrail_ = nullptr;
    // The name of the trail.
    // 
    // The name must be 6 to 36 characters in length. The name must start with a lowercase letter and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // > The name must be unique within your Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif

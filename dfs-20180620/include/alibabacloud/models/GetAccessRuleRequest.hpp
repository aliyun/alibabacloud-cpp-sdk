// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
    };
    GetAccessRuleRequest() = default ;
    GetAccessRuleRequest(const GetAccessRuleRequest &) = default ;
    GetAccessRuleRequest(GetAccessRuleRequest &&) = default ;
    GetAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessRuleRequest() = default ;
    GetAccessRuleRequest& operator=(const GetAccessRuleRequest &) = default ;
    GetAccessRuleRequest& operator=(GetAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->accessRuleId_ == nullptr && return this->inputRegionId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline GetAccessRuleRequest& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline GetAccessRuleRequest& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline GetAccessRuleRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> accessRuleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif

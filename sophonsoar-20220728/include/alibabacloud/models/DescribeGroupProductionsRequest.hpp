// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeGroupProductionsRequest() = default ;
    DescribeGroupProductionsRequest(const DescribeGroupProductionsRequest &) = default ;
    DescribeGroupProductionsRequest(DescribeGroupProductionsRequest &&) = default ;
    DescribeGroupProductionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsRequest() = default ;
    DescribeGroupProductionsRequest& operator=(const DescribeGroupProductionsRequest &) = default ;
    DescribeGroupProductionsRequest& operator=(DescribeGroupProductionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupProductionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeGroupProductionsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeGroupProductionsRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    shared_ptr<string> lang_ {};
    // The ID of the user who switches from the current view to the destination view by using the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // 
    // *  **0**  (default): the view of the current Alibaba Cloud account.
    // *   **1**: the view of all accounts for the enterprise.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

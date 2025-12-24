// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessTaskCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTaskCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityUuidList, entityUuidList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessTaskCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityUuidList, entityUuidList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeProcessTaskCountRequest() = default ;
    DescribeProcessTaskCountRequest(const DescribeProcessTaskCountRequest &) = default ;
    DescribeProcessTaskCountRequest(DescribeProcessTaskCountRequest &&) = default ;
    DescribeProcessTaskCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTaskCountRequest() = default ;
    DescribeProcessTaskCountRequest& operator=(const DescribeProcessTaskCountRequest &) = default ;
    DescribeProcessTaskCountRequest& operator=(DescribeProcessTaskCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityUuidList_ == nullptr
        && return this->lang_ == nullptr && return this->roleFor_ == nullptr && return this->roleType_ == nullptr; };
    // entityUuidList Field Functions 
    bool hasEntityUuidList() const { return this->entityUuidList_ != nullptr;};
    void deleteEntityUuidList() { this->entityUuidList_ = nullptr;};
    inline const vector<string> & entityUuidList() const { DARABONBA_PTR_GET_CONST(entityUuidList_, vector<string>) };
    inline vector<string> entityUuidList() { DARABONBA_PTR_GET(entityUuidList_, vector<string>) };
    inline DescribeProcessTaskCountRequest& setEntityUuidList(const vector<string> & entityUuidList) { DARABONBA_PTR_SET_VALUE(entityUuidList_, entityUuidList) };
    inline DescribeProcessTaskCountRequest& setEntityUuidList(vector<string> && entityUuidList) { DARABONBA_PTR_SET_RVALUE(entityUuidList_, entityUuidList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeProcessTaskCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeProcessTaskCountRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeProcessTaskCountRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // Collection of entity UUIDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> entityUuidList_ = nullptr;
    // Language type for request and response messages. Values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // User ID for administrators to switch to other member\\"s perspective.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // View type.
    // 
    // - **0**: Current Alibaba Cloud account view.
    // - **1**: View for all accounts under the enterprise.
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

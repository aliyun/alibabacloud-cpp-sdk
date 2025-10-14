// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactNames, contactNames_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(EnableSubscribed, enableSubscribed_);
    };
    friend void from_json(const Darabonba::Json& j, PutContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactNames, contactNames_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(EnableSubscribed, enableSubscribed_);
    };
    PutContactGroupRequest() = default ;
    PutContactGroupRequest(const PutContactGroupRequest &) = default ;
    PutContactGroupRequest(PutContactGroupRequest &&) = default ;
    PutContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutContactGroupRequest() = default ;
    PutContactGroupRequest& operator=(const PutContactGroupRequest &) = default ;
    PutContactGroupRequest& operator=(PutContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupName_ == nullptr
        && return this->contactNames_ == nullptr && return this->describe_ == nullptr && return this->enableSubscribed_ == nullptr; };
    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline PutContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactNames Field Functions 
    bool hasContactNames() const { return this->contactNames_ != nullptr;};
    void deleteContactNames() { this->contactNames_ = nullptr;};
    inline const vector<string> & contactNames() const { DARABONBA_PTR_GET_CONST(contactNames_, vector<string>) };
    inline vector<string> contactNames() { DARABONBA_PTR_GET(contactNames_, vector<string>) };
    inline PutContactGroupRequest& setContactNames(const vector<string> & contactNames) { DARABONBA_PTR_SET_VALUE(contactNames_, contactNames) };
    inline PutContactGroupRequest& setContactNames(vector<string> && contactNames) { DARABONBA_PTR_SET_RVALUE(contactNames_, contactNames) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline PutContactGroupRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // enableSubscribed Field Functions 
    bool hasEnableSubscribed() const { return this->enableSubscribed_ != nullptr;};
    void deleteEnableSubscribed() { this->enableSubscribed_ = nullptr;};
    inline bool enableSubscribed() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribed_, false) };
    inline PutContactGroupRequest& setEnableSubscribed(bool enableSubscribed) { DARABONBA_PTR_SET_VALUE(enableSubscribed_, enableSubscribed) };


  protected:
    // The name of the alert contact group.
    // 
    // For information about how to obtain the name of an alert contact group, see [DescribeContactGroupList](https://help.aliyun.com/document_detail/114922.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The name of the alert contact. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> contactNames_ = nullptr;
    // The description of the alert contact group.
    std::shared_ptr<string> describe_ = nullptr;
    // Specifies whether to enable the weekly report subscription feature. Valid values:
    // 
    // *   true: The weekly report subscription feature is enabled.
    // *   false: The weekly report subscription feature is disabled.
    // 
    // >  You can enable the weekly report subscription feature only for an Alibaba Cloud account that has at least five Elastic Compute Service (ECS) instances.
    std::shared_ptr<bool> enableSubscribed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAppBySwimmingLaneGroupTagsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppBySwimmingLaneGroupTagsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppBySwimmingLaneGroupTagsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListAppBySwimmingLaneGroupTagsShrinkRequest() = default ;
    ListAppBySwimmingLaneGroupTagsShrinkRequest(const ListAppBySwimmingLaneGroupTagsShrinkRequest &) = default ;
    ListAppBySwimmingLaneGroupTagsShrinkRequest(ListAppBySwimmingLaneGroupTagsShrinkRequest &&) = default ;
    ListAppBySwimmingLaneGroupTagsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppBySwimmingLaneGroupTagsShrinkRequest() = default ;
    ListAppBySwimmingLaneGroupTagsShrinkRequest& operator=(const ListAppBySwimmingLaneGroupTagsShrinkRequest &) = default ;
    ListAppBySwimmingLaneGroupTagsShrinkRequest& operator=(ListAppBySwimmingLaneGroupTagsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->groupId_ == nullptr && return this->namespace_ == nullptr && return this->tagsShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListAppBySwimmingLaneGroupTagsShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListAppBySwimmingLaneGroupTagsShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAppBySwimmingLaneGroupTagsShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListAppBySwimmingLaneGroupTagsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the MSE namespace that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The tag based on which you want to list applications.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

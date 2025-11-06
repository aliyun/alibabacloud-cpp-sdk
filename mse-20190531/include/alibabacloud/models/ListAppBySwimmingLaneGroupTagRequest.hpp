// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAppBySwimmingLaneGroupTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppBySwimmingLaneGroupTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppBySwimmingLaneGroupTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAppBySwimmingLaneGroupTagRequest() = default ;
    ListAppBySwimmingLaneGroupTagRequest(const ListAppBySwimmingLaneGroupTagRequest &) = default ;
    ListAppBySwimmingLaneGroupTagRequest(ListAppBySwimmingLaneGroupTagRequest &&) = default ;
    ListAppBySwimmingLaneGroupTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppBySwimmingLaneGroupTagRequest() = default ;
    ListAppBySwimmingLaneGroupTagRequest& operator=(const ListAppBySwimmingLaneGroupTagRequest &) = default ;
    ListAppBySwimmingLaneGroupTagRequest& operator=(ListAppBySwimmingLaneGroupTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->groupId_ == nullptr && return this->namespace_ == nullptr && return this->tag_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListAppBySwimmingLaneGroupTagRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListAppBySwimmingLaneGroupTagRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAppBySwimmingLaneGroupTagRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListAppBySwimmingLaneGroupTagRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace that you want to query.
    std::shared_ptr<string> namespace_ = nullptr;
    // The tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

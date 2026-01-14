// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPBYSWIMMINGLANEGROUPTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAppBySwimmingLaneGroupTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppBySwimmingLaneGroupTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppBySwimmingLaneGroupTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAppBySwimmingLaneGroupTagsRequest() = default ;
    ListAppBySwimmingLaneGroupTagsRequest(const ListAppBySwimmingLaneGroupTagsRequest &) = default ;
    ListAppBySwimmingLaneGroupTagsRequest(ListAppBySwimmingLaneGroupTagsRequest &&) = default ;
    ListAppBySwimmingLaneGroupTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppBySwimmingLaneGroupTagsRequest() = default ;
    ListAppBySwimmingLaneGroupTagsRequest& operator=(const ListAppBySwimmingLaneGroupTagsRequest &) = default ;
    ListAppBySwimmingLaneGroupTagsRequest& operator=(ListAppBySwimmingLaneGroupTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->groupId_ == nullptr && this->namespace_ == nullptr && this->tags_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListAppBySwimmingLaneGroupTagsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListAppBySwimmingLaneGroupTagsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAppBySwimmingLaneGroupTagsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListAppBySwimmingLaneGroupTagsRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAppBySwimmingLaneGroupTagsRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the lane group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The name of the MSE namespace that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The tag based on which you want to list applications.
    shared_ptr<vector<string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

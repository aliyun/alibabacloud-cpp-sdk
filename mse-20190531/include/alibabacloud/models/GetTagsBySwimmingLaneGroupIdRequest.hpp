// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGSBYSWIMMINGLANEGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTAGSBYSWIMMINGLANEGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetTagsBySwimmingLaneGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagsBySwimmingLaneGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagsBySwimmingLaneGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    GetTagsBySwimmingLaneGroupIdRequest() = default ;
    GetTagsBySwimmingLaneGroupIdRequest(const GetTagsBySwimmingLaneGroupIdRequest &) = default ;
    GetTagsBySwimmingLaneGroupIdRequest(GetTagsBySwimmingLaneGroupIdRequest &&) = default ;
    GetTagsBySwimmingLaneGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagsBySwimmingLaneGroupIdRequest() = default ;
    GetTagsBySwimmingLaneGroupIdRequest& operator=(const GetTagsBySwimmingLaneGroupIdRequest &) = default ;
    GetTagsBySwimmingLaneGroupIdRequest& operator=(GetTagsBySwimmingLaneGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->groupId_ == nullptr && this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetTagsBySwimmingLaneGroupIdRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline GetTagsBySwimmingLaneGroupIdRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetTagsBySwimmingLaneGroupIdRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the lane group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The name of the Microservices Engine (MSE) namespace that you want to query.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

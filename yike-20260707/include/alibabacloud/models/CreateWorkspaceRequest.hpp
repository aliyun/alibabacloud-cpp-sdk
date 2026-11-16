// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserCountLimit, userCountLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserCountLimit, userCountLimit_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->title_ == nullptr
        && this->userCountLimit_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateWorkspaceRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userCountLimit Field Functions 
    bool hasUserCountLimit() const { return this->userCountLimit_ != nullptr;};
    void deleteUserCountLimit() { this->userCountLimit_ = nullptr;};
    inline int64_t getUserCountLimit() const { DARABONBA_PTR_GET_DEFAULT(userCountLimit_, 0L) };
    inline CreateWorkspaceRequest& setUserCountLimit(int64_t userCountLimit) { DARABONBA_PTR_SET_VALUE(userCountLimit_, userCountLimit) };


  protected:
    // The name of the studio. The name can be up to 50 characters in length and cannot contain single quotation marks, semicolons, less than signs, greater than signs, equal signs, vertical lines, or parentheses.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The maximum number of users allowed in the studio team. Valid values: 2 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> userCountLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif

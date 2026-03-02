// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONRESOURCEPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONRESOURCEPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPermissionResourcePopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionResourcePopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(operatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(resourcePrefix, resourcePrefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionResourcePopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(operatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(resourcePrefix, resourcePrefix_);
    };
    ListPermissionResourcePopRequest() = default ;
    ListPermissionResourcePopRequest(const ListPermissionResourcePopRequest &) = default ;
    ListPermissionResourcePopRequest(ListPermissionResourcePopRequest &&) = default ;
    ListPermissionResourcePopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionResourcePopRequest() = default ;
    ListPermissionResourcePopRequest& operator=(const ListPermissionResourcePopRequest &) = default ;
    ListPermissionResourcePopRequest& operator=(ListPermissionResourcePopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->operatorId_ == nullptr && this->operatorType_ == nullptr && this->resourcePrefix_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListPermissionResourcePopRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline ListPermissionResourcePopRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ListPermissionResourcePopRequest& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // resourcePrefix Field Functions 
    bool hasResourcePrefix() const { return this->resourcePrefix_ != nullptr;};
    void deleteResourcePrefix() { this->resourcePrefix_ = nullptr;};
    inline string getResourcePrefix() const { DARABONBA_PTR_GET_DEFAULT(resourcePrefix_, "") };
    inline ListPermissionResourcePopRequest& setResourcePrefix(string resourcePrefix) { DARABONBA_PTR_SET_VALUE(resourcePrefix_, resourcePrefix) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<string> operatorId_ {};
    shared_ptr<string> operatorType_ {};
    shared_ptr<string> resourcePrefix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONRESOURCEFORFRONTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONRESOURCEFORFRONTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPermissionResourceForFrontRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionResourceForFrontRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(operatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(queryType, queryType_);
      DARABONBA_PTR_TO_JSON(resourcePrefix, resourcePrefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionResourceForFrontRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(operatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(queryType, queryType_);
      DARABONBA_PTR_FROM_JSON(resourcePrefix, resourcePrefix_);
    };
    ListPermissionResourceForFrontRequest() = default ;
    ListPermissionResourceForFrontRequest(const ListPermissionResourceForFrontRequest &) = default ;
    ListPermissionResourceForFrontRequest(ListPermissionResourceForFrontRequest &&) = default ;
    ListPermissionResourceForFrontRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionResourceForFrontRequest() = default ;
    ListPermissionResourceForFrontRequest& operator=(const ListPermissionResourceForFrontRequest &) = default ;
    ListPermissionResourceForFrontRequest& operator=(ListPermissionResourceForFrontRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->enterpriseId_ == nullptr && this->operatorId_ == nullptr && this->operatorType_ == nullptr && this->queryType_ == nullptr && this->resourcePrefix_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListPermissionResourceForFrontRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
    inline ListPermissionResourceForFrontRequest& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline ListPermissionResourceForFrontRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ListPermissionResourceForFrontRequest& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListPermissionResourceForFrontRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // resourcePrefix Field Functions 
    bool hasResourcePrefix() const { return this->resourcePrefix_ != nullptr;};
    void deleteResourcePrefix() { this->resourcePrefix_ = nullptr;};
    inline string getResourcePrefix() const { DARABONBA_PTR_GET_DEFAULT(resourcePrefix_, "") };
    inline ListPermissionResourceForFrontRequest& setResourcePrefix(string resourcePrefix) { DARABONBA_PTR_SET_VALUE(resourcePrefix_, resourcePrefix) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<string> enterpriseId_ {};
    shared_ptr<string> operatorId_ {};
    shared_ptr<string> operatorType_ {};
    shared_ptr<string> queryType_ {};
    shared_ptr<string> resourcePrefix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

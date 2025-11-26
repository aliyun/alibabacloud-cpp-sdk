// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteContactWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactWhiteListId, contactWhiteListId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactWhiteListId, contactWhiteListId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    DeleteContactWhiteListRequest() = default ;
    DeleteContactWhiteListRequest(const DeleteContactWhiteListRequest &) = default ;
    DeleteContactWhiteListRequest(DeleteContactWhiteListRequest &&) = default ;
    DeleteContactWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactWhiteListRequest() = default ;
    DeleteContactWhiteListRequest& operator=(const DeleteContactWhiteListRequest &) = default ;
    DeleteContactWhiteListRequest& operator=(DeleteContactWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactWhiteListId_ == nullptr
        && return this->instanceId_ == nullptr && return this->operator_ == nullptr; };
    // contactWhiteListId Field Functions 
    bool hasContactWhiteListId() const { return this->contactWhiteListId_ != nullptr;};
    void deleteContactWhiteListId() { this->contactWhiteListId_ = nullptr;};
    inline string contactWhiteListId() const { DARABONBA_PTR_GET_DEFAULT(contactWhiteListId_, "") };
    inline DeleteContactWhiteListRequest& setContactWhiteListId(string contactWhiteListId) { DARABONBA_PTR_SET_VALUE(contactWhiteListId_, contactWhiteListId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteContactWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DeleteContactWhiteListRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactWhiteListId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

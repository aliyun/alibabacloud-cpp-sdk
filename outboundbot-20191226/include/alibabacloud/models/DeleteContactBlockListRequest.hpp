// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTBLOCKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTBLOCKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteContactBlockListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactBlockListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactBlockListId, contactBlockListId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactBlockListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactBlockListId, contactBlockListId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    DeleteContactBlockListRequest() = default ;
    DeleteContactBlockListRequest(const DeleteContactBlockListRequest &) = default ;
    DeleteContactBlockListRequest(DeleteContactBlockListRequest &&) = default ;
    DeleteContactBlockListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactBlockListRequest() = default ;
    DeleteContactBlockListRequest& operator=(const DeleteContactBlockListRequest &) = default ;
    DeleteContactBlockListRequest& operator=(DeleteContactBlockListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactBlockListId_ == nullptr
        && return this->instanceId_ == nullptr && return this->operator_ == nullptr; };
    // contactBlockListId Field Functions 
    bool hasContactBlockListId() const { return this->contactBlockListId_ != nullptr;};
    void deleteContactBlockListId() { this->contactBlockListId_ = nullptr;};
    inline string contactBlockListId() const { DARABONBA_PTR_GET_DEFAULT(contactBlockListId_, "") };
    inline DeleteContactBlockListRequest& setContactBlockListId(string contactBlockListId) { DARABONBA_PTR_SET_VALUE(contactBlockListId_, contactBlockListId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteContactBlockListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DeleteContactBlockListRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactBlockListId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeleteMonitorGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
    };
    DeleteMonitorGroupMemberRequest() = default ;
    DeleteMonitorGroupMemberRequest(const DeleteMonitorGroupMemberRequest &) = default ;
    DeleteMonitorGroupMemberRequest(DeleteMonitorGroupMemberRequest &&) = default ;
    DeleteMonitorGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupMemberRequest() = default ;
    DeleteMonitorGroupMemberRequest& operator=(const DeleteMonitorGroupMemberRequest &) = default ;
    DeleteMonitorGroupMemberRequest& operator=(DeleteMonitorGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string getContactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline DeleteMonitorGroupMemberRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> contactIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

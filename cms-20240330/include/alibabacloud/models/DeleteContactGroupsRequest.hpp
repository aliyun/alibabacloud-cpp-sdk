// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContactGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroupIds, contactGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroupIds, contactGroupIds_);
    };
    DeleteContactGroupsRequest() = default ;
    DeleteContactGroupsRequest(const DeleteContactGroupsRequest &) = default ;
    DeleteContactGroupsRequest(DeleteContactGroupsRequest &&) = default ;
    DeleteContactGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactGroupsRequest() = default ;
    DeleteContactGroupsRequest& operator=(const DeleteContactGroupsRequest &) = default ;
    DeleteContactGroupsRequest& operator=(DeleteContactGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIds_ == nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline const vector<string> & getContactGroupIds() const { DARABONBA_PTR_GET_CONST(contactGroupIds_, vector<string>) };
    inline vector<string> getContactGroupIds() { DARABONBA_PTR_GET(contactGroupIds_, vector<string>) };
    inline DeleteContactGroupsRequest& setContactGroupIds(const vector<string> & contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };
    inline DeleteContactGroupsRequest& setContactGroupIds(vector<string> && contactGroupIds) { DARABONBA_PTR_SET_RVALUE(contactGroupIds_, contactGroupIds) };


  protected:
    // The IDs of the contact groups.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> contactGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

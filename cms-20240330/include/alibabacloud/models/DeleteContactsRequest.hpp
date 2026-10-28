// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTSREQUEST_HPP_
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
  class DeleteContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
    };
    DeleteContactsRequest() = default ;
    DeleteContactsRequest(const DeleteContactsRequest &) = default ;
    DeleteContactsRequest(DeleteContactsRequest &&) = default ;
    DeleteContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactsRequest() = default ;
    DeleteContactsRequest& operator=(const DeleteContactsRequest &) = default ;
    DeleteContactsRequest& operator=(DeleteContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<string> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<string>) };
    inline vector<string> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<string>) };
    inline DeleteContactsRequest& setContactIds(const vector<string> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline DeleteContactsRequest& setContactIds(vector<string> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


  protected:
    shared_ptr<vector<string>> contactIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

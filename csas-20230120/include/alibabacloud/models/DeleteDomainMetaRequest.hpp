// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOMAINMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOMAINMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteDomainMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDomainMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListId, listId_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDomainMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListId, listId_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
    };
    DeleteDomainMetaRequest() = default ;
    DeleteDomainMetaRequest(const DeleteDomainMetaRequest &) = default ;
    DeleteDomainMetaRequest(DeleteDomainMetaRequest &&) = default ;
    DeleteDomainMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDomainMetaRequest() = default ;
    DeleteDomainMetaRequest& operator=(const DeleteDomainMetaRequest &) = default ;
    DeleteDomainMetaRequest& operator=(DeleteDomainMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listId_ == nullptr
        && this->listType_ == nullptr; };
    // listId Field Functions 
    bool hasListId() const { return this->listId_ != nullptr;};
    void deleteListId() { this->listId_ = nullptr;};
    inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
    inline DeleteDomainMetaRequest& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline DeleteDomainMetaRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


  protected:
    // The list ID, which is a unique business identifier used for policy references and create, update, and delete operations.
    // 
    // This parameter is required.
    shared_ptr<string> listId_ {};
    // The list type. Valid values:
    // - la_domain_white_list: domain name whitelist.
    // - la_domain_black_list: domain name blacklist.
    // 
    // This parameter is required.
    shared_ptr<string> listType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

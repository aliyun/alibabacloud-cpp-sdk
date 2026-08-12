// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateDomainMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListId, listId_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListId, listId_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateDomainMetaRequest() = default ;
    UpdateDomainMetaRequest(const UpdateDomainMetaRequest &) = default ;
    UpdateDomainMetaRequest(UpdateDomainMetaRequest &&) = default ;
    UpdateDomainMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainMetaRequest() = default ;
    UpdateDomainMetaRequest& operator=(const UpdateDomainMetaRequest &) = default ;
    UpdateDomainMetaRequest& operator=(UpdateDomainMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listId_ == nullptr
        && this->listType_ == nullptr && this->name_ == nullptr; };
    // listId Field Functions 
    bool hasListId() const { return this->listId_ != nullptr;};
    void deleteListId() { this->listId_ = nullptr;};
    inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
    inline UpdateDomainMetaRequest& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline UpdateDomainMetaRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDomainMetaRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The list ID. This is a unique business identifier used for policy references and add, delete, or modify operations.
    shared_ptr<string> listId_ {};
    // The list type.
    shared_ptr<string> listType_ {};
    // The list name. Maximum length: 32 characters.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

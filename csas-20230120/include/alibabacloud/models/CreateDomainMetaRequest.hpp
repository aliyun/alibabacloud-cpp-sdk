// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateDomainMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateDomainMetaRequest() = default ;
    CreateDomainMetaRequest(const CreateDomainMetaRequest &) = default ;
    CreateDomainMetaRequest(CreateDomainMetaRequest &&) = default ;
    CreateDomainMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainMetaRequest() = default ;
    CreateDomainMetaRequest& operator=(const CreateDomainMetaRequest &) = default ;
    CreateDomainMetaRequest& operator=(CreateDomainMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listType_ == nullptr
        && this->name_ == nullptr; };
    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline CreateDomainMetaRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDomainMetaRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The list type.
    shared_ptr<string> listType_ {};
    // The list name. Maximum length: 32 characters.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

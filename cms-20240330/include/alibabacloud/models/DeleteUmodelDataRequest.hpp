// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUMODELDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUMODELDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteUmodelDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUmodelDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUmodelDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DeleteUmodelDataRequest() = default ;
    DeleteUmodelDataRequest(const DeleteUmodelDataRequest &) = default ;
    DeleteUmodelDataRequest(DeleteUmodelDataRequest &&) = default ;
    DeleteUmodelDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUmodelDataRequest() = default ;
    DeleteUmodelDataRequest& operator=(const DeleteUmodelDataRequest &) = default ;
    DeleteUmodelDataRequest& operator=(DeleteUmodelDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->kind_ == nullptr && return this->name_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteUmodelDataRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline DeleteUmodelDataRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteUmodelDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

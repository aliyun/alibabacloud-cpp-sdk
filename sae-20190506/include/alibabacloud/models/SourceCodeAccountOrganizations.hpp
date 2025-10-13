// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECODEACCOUNTORGANIZATIONS_HPP_
#define ALIBABACLOUD_MODELS_SOURCECODEACCOUNTORGANIZATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SourceCodeAccountOrganizations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceCodeAccountOrganizations& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SourceCodeAccountOrganizations& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SourceCodeAccountOrganizations() = default ;
    SourceCodeAccountOrganizations(const SourceCodeAccountOrganizations &) = default ;
    SourceCodeAccountOrganizations(SourceCodeAccountOrganizations &&) = default ;
    SourceCodeAccountOrganizations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceCodeAccountOrganizations() = default ;
    SourceCodeAccountOrganizations& operator=(const SourceCodeAccountOrganizations &) = default ;
    SourceCodeAccountOrganizations& operator=(SourceCodeAccountOrganizations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline SourceCodeAccountOrganizations& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SourceCodeAccountOrganizations& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SourceCodeAccountOrganizations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECODEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_SOURCECODEACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SourceCodeAccountOrganizations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SourceCodeAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceCodeAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Organizations, organizations_);
    };
    friend void from_json(const Darabonba::Json& j, SourceCodeAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Organizations, organizations_);
    };
    SourceCodeAccount() = default ;
    SourceCodeAccount(const SourceCodeAccount &) = default ;
    SourceCodeAccount(SourceCodeAccount &&) = default ;
    SourceCodeAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceCodeAccount() = default ;
    SourceCodeAccount& operator=(const SourceCodeAccount &) = default ;
    SourceCodeAccount& operator=(SourceCodeAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarUrl_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->organizations_ != nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline SourceCodeAccount& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SourceCodeAccount& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SourceCodeAccount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // organizations Field Functions 
    bool hasOrganizations() const { return this->organizations_ != nullptr;};
    void deleteOrganizations() { this->organizations_ = nullptr;};
    inline const vector<SourceCodeAccountOrganizations> & organizations() const { DARABONBA_PTR_GET_CONST(organizations_, vector<SourceCodeAccountOrganizations>) };
    inline vector<SourceCodeAccountOrganizations> organizations() { DARABONBA_PTR_GET(organizations_, vector<SourceCodeAccountOrganizations>) };
    inline SourceCodeAccount& setOrganizations(const vector<SourceCodeAccountOrganizations> & organizations) { DARABONBA_PTR_SET_VALUE(organizations_, organizations) };
    inline SourceCodeAccount& setOrganizations(vector<SourceCodeAccountOrganizations> && organizations) { DARABONBA_PTR_SET_RVALUE(organizations_, organizations) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<SourceCodeAccountOrganizations>> organizations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

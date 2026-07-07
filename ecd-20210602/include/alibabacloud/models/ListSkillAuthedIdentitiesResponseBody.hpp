// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLAUTHEDIDENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLAUTHEDIDENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListSkillAuthedIdentitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillAuthedIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Identities, identities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillAuthedIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Identities, identities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSkillAuthedIdentitiesResponseBody() = default ;
    ListSkillAuthedIdentitiesResponseBody(const ListSkillAuthedIdentitiesResponseBody &) = default ;
    ListSkillAuthedIdentitiesResponseBody(ListSkillAuthedIdentitiesResponseBody &&) = default ;
    ListSkillAuthedIdentitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillAuthedIdentitiesResponseBody() = default ;
    ListSkillAuthedIdentitiesResponseBody& operator=(const ListSkillAuthedIdentitiesResponseBody &) = default ;
    ListSkillAuthedIdentitiesResponseBody& operator=(ListSkillAuthedIdentitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Identities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Identities& obj) { 
        DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
        DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
      };
      friend void from_json(const Darabonba::Json& j, Identities& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
        DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
      };
      Identities() = default ;
      Identities(const Identities &) = default ;
      Identities(Identities &&) = default ;
      Identities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Identities() = default ;
      Identities& operator=(const Identities &) = default ;
      Identities& operator=(Identities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoInstall_ == nullptr
        && this->identityId_ == nullptr; };
      // autoInstall Field Functions 
      bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
      void deleteAutoInstall() { this->autoInstall_ = nullptr;};
      inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
      inline Identities& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


      // identityId Field Functions 
      bool hasIdentityId() const { return this->identityId_ != nullptr;};
      void deleteIdentityId() { this->identityId_ = nullptr;};
      inline string getIdentityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, "") };
      inline Identities& setIdentityId(string identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


    protected:
      // Indicates whether automatic installation is enabled. Valid values:
      // 
      // - true: Automatic installation is enabled.
      // - false: Automatic installation is disabled.
      shared_ptr<bool> autoInstall_ {};
      // The ID of the authorized object.
      shared_ptr<string> identityId_ {};
    };

    virtual bool empty() const override { return this->identities_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identities Field Functions 
    bool hasIdentities() const { return this->identities_ != nullptr;};
    void deleteIdentities() { this->identities_ = nullptr;};
    inline const vector<ListSkillAuthedIdentitiesResponseBody::Identities> & getIdentities() const { DARABONBA_PTR_GET_CONST(identities_, vector<ListSkillAuthedIdentitiesResponseBody::Identities>) };
    inline vector<ListSkillAuthedIdentitiesResponseBody::Identities> getIdentities() { DARABONBA_PTR_GET(identities_, vector<ListSkillAuthedIdentitiesResponseBody::Identities>) };
    inline ListSkillAuthedIdentitiesResponseBody& setIdentities(const vector<ListSkillAuthedIdentitiesResponseBody::Identities> & identities) { DARABONBA_PTR_SET_VALUE(identities_, identities) };
    inline ListSkillAuthedIdentitiesResponseBody& setIdentities(vector<ListSkillAuthedIdentitiesResponseBody::Identities> && identities) { DARABONBA_PTR_SET_RVALUE(identities_, identities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillAuthedIdentitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSkillAuthedIdentitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of authorized objects.
    shared_ptr<vector<ListSkillAuthedIdentitiesResponseBody::Identities>> identities_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif

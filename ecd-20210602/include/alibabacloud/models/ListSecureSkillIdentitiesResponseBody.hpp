// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURESKILLIDENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURESKILLIDENTITIESRESPONSEBODY_HPP_
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
  class ListSecureSkillIdentitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecureSkillIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Identities, identities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecureSkillIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Identities, identities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecureSkillIdentitiesResponseBody() = default ;
    ListSecureSkillIdentitiesResponseBody(const ListSecureSkillIdentitiesResponseBody &) = default ;
    ListSecureSkillIdentitiesResponseBody(ListSecureSkillIdentitiesResponseBody &&) = default ;
    ListSecureSkillIdentitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecureSkillIdentitiesResponseBody() = default ;
    ListSecureSkillIdentitiesResponseBody& operator=(const ListSecureSkillIdentitiesResponseBody &) = default ;
    ListSecureSkillIdentitiesResponseBody& operator=(ListSecureSkillIdentitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identities_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identities Field Functions 
    bool hasIdentities() const { return this->identities_ != nullptr;};
    void deleteIdentities() { this->identities_ = nullptr;};
    inline const vector<string> & getIdentities() const { DARABONBA_PTR_GET_CONST(identities_, vector<string>) };
    inline vector<string> getIdentities() { DARABONBA_PTR_GET(identities_, vector<string>) };
    inline ListSecureSkillIdentitiesResponseBody& setIdentities(const vector<string> & identities) { DARABONBA_PTR_SET_VALUE(identities_, identities) };
    inline ListSecureSkillIdentitiesResponseBody& setIdentities(vector<string> && identities) { DARABONBA_PTR_SET_RVALUE(identities_, identities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecureSkillIdentitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSecureSkillIdentitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of resource information.
    shared_ptr<vector<string>> identities_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif

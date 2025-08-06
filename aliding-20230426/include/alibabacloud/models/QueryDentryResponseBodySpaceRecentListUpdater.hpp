// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTUPDATER_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTUPDATER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpaceRecentListUpdater : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpaceRecentListUpdater& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpaceRecentListUpdater& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryDentryResponseBodySpaceRecentListUpdater() = default ;
    QueryDentryResponseBodySpaceRecentListUpdater(const QueryDentryResponseBodySpaceRecentListUpdater &) = default ;
    QueryDentryResponseBodySpaceRecentListUpdater(QueryDentryResponseBodySpaceRecentListUpdater &&) = default ;
    QueryDentryResponseBodySpaceRecentListUpdater(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpaceRecentListUpdater() = default ;
    QueryDentryResponseBodySpaceRecentListUpdater& operator=(const QueryDentryResponseBodySpaceRecentListUpdater &) = default ;
    QueryDentryResponseBodySpaceRecentListUpdater& operator=(QueryDentryResponseBodySpaceRecentListUpdater &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->userId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDentryResponseBodySpaceRecentListUpdater& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDentryResponseBodySpaceRecentListUpdater& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

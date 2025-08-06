// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTUPDATER_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTUPDATER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpaceRecentListUpdater : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpaceRecentListUpdater& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpaceRecentListUpdater& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CopyDentryResponseBodySpaceRecentListUpdater() = default ;
    CopyDentryResponseBodySpaceRecentListUpdater(const CopyDentryResponseBodySpaceRecentListUpdater &) = default ;
    CopyDentryResponseBodySpaceRecentListUpdater(CopyDentryResponseBodySpaceRecentListUpdater &&) = default ;
    CopyDentryResponseBodySpaceRecentListUpdater(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpaceRecentListUpdater() = default ;
    CopyDentryResponseBodySpaceRecentListUpdater& operator=(const CopyDentryResponseBodySpaceRecentListUpdater &) = default ;
    CopyDentryResponseBodySpaceRecentListUpdater& operator=(CopyDentryResponseBodySpaceRecentListUpdater &&) = default ;
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
    inline CopyDentryResponseBodySpaceRecentListUpdater& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CopyDentryResponseBodySpaceRecentListUpdater& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

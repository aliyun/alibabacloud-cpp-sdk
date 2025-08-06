// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTVISITORINFO_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTVISITORINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpaceRecentListVisitorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpaceRecentListVisitorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DentryActions, dentryActions_);
      DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(SpaceActions, spaceActions_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpaceRecentListVisitorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryActions, dentryActions_);
      DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(SpaceActions, spaceActions_);
    };
    CopyDentryResponseBodySpaceRecentListVisitorInfo() = default ;
    CopyDentryResponseBodySpaceRecentListVisitorInfo(const CopyDentryResponseBodySpaceRecentListVisitorInfo &) = default ;
    CopyDentryResponseBodySpaceRecentListVisitorInfo(CopyDentryResponseBodySpaceRecentListVisitorInfo &&) = default ;
    CopyDentryResponseBodySpaceRecentListVisitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpaceRecentListVisitorInfo() = default ;
    CopyDentryResponseBodySpaceRecentListVisitorInfo& operator=(const CopyDentryResponseBodySpaceRecentListVisitorInfo &) = default ;
    CopyDentryResponseBodySpaceRecentListVisitorInfo& operator=(CopyDentryResponseBodySpaceRecentListVisitorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryActions_ != nullptr
        && this->roleCode_ != nullptr && this->spaceActions_ != nullptr; };
    // dentryActions Field Functions 
    bool hasDentryActions() const { return this->dentryActions_ != nullptr;};
    void deleteDentryActions() { this->dentryActions_ = nullptr;};
    inline const vector<string> & dentryActions() const { DARABONBA_PTR_GET_CONST(dentryActions_, vector<string>) };
    inline vector<string> dentryActions() { DARABONBA_PTR_GET(dentryActions_, vector<string>) };
    inline CopyDentryResponseBodySpaceRecentListVisitorInfo& setDentryActions(const vector<string> & dentryActions) { DARABONBA_PTR_SET_VALUE(dentryActions_, dentryActions) };
    inline CopyDentryResponseBodySpaceRecentListVisitorInfo& setDentryActions(vector<string> && dentryActions) { DARABONBA_PTR_SET_RVALUE(dentryActions_, dentryActions) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline CopyDentryResponseBodySpaceRecentListVisitorInfo& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // spaceActions Field Functions 
    bool hasSpaceActions() const { return this->spaceActions_ != nullptr;};
    void deleteSpaceActions() { this->spaceActions_ = nullptr;};
    inline const vector<string> & spaceActions() const { DARABONBA_PTR_GET_CONST(spaceActions_, vector<string>) };
    inline vector<string> spaceActions() { DARABONBA_PTR_GET(spaceActions_, vector<string>) };
    inline CopyDentryResponseBodySpaceRecentListVisitorInfo& setSpaceActions(const vector<string> & spaceActions) { DARABONBA_PTR_SET_VALUE(spaceActions_, spaceActions) };
    inline CopyDentryResponseBodySpaceRecentListVisitorInfo& setSpaceActions(vector<string> && spaceActions) { DARABONBA_PTR_SET_RVALUE(spaceActions_, spaceActions) };


  protected:
    std::shared_ptr<vector<string>> dentryActions_ = nullptr;
    std::shared_ptr<string> roleCode_ = nullptr;
    std::shared_ptr<vector<string>> spaceActions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIGASSIGNCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIGASSIGNCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AssignConfigContests, assignConfigContests_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignConfigContests, assignConfigContests_);
    };
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs(const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs(GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs &&) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& operator=(const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& operator=(GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignConfigContests_ == nullptr; };
    // assignConfigContests Field Functions 
    bool hasAssignConfigContests() const { return this->assignConfigContests_ != nullptr;};
    void deleteAssignConfigContests() { this->assignConfigContests_ = nullptr;};
    inline const vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests> & assignConfigContests() const { DARABONBA_PTR_GET_CONST(assignConfigContests_, vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests>) };
    inline vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests> assignConfigContests() { DARABONBA_PTR_GET(assignConfigContests_, vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests>) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& setAssignConfigContests(const vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests> & assignConfigContests) { DARABONBA_PTR_SET_VALUE(assignConfigContests_, assignConfigContests) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs& setAssignConfigContests(vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests> && assignConfigContests) { DARABONBA_PTR_SET_RVALUE(assignConfigContests_, assignConfigContests) };


  protected:
    std::shared_ptr<vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests>> assignConfigContests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

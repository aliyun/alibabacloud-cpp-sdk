// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSkillGroupConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SkillGroupConfig, skillGroupConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillGroupConfig, skillGroupConfig_);
    };
    ListSkillGroupConfigResponseBodyData() = default ;
    ListSkillGroupConfigResponseBodyData(const ListSkillGroupConfigResponseBodyData &) = default ;
    ListSkillGroupConfigResponseBodyData(ListSkillGroupConfigResponseBodyData &&) = default ;
    ListSkillGroupConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBodyData() = default ;
    ListSkillGroupConfigResponseBodyData& operator=(const ListSkillGroupConfigResponseBodyData &) = default ;
    ListSkillGroupConfigResponseBodyData& operator=(ListSkillGroupConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillGroupConfig_ == nullptr; };
    // skillGroupConfig Field Functions 
    bool hasSkillGroupConfig() const { return this->skillGroupConfig_ != nullptr;};
    void deleteSkillGroupConfig() { this->skillGroupConfig_ = nullptr;};
    inline const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig> & skillGroupConfig() const { DARABONBA_PTR_GET_CONST(skillGroupConfig_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig>) };
    inline vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig> skillGroupConfig() { DARABONBA_PTR_GET(skillGroupConfig_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig>) };
    inline ListSkillGroupConfigResponseBodyData& setSkillGroupConfig(const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig> & skillGroupConfig) { DARABONBA_PTR_SET_VALUE(skillGroupConfig_, skillGroupConfig) };
    inline ListSkillGroupConfigResponseBodyData& setSkillGroupConfig(vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig> && skillGroupConfig) { DARABONBA_PTR_SET_RVALUE(skillGroupConfig_, skillGroupConfig) };


  protected:
    std::shared_ptr<vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfig>> skillGroupConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

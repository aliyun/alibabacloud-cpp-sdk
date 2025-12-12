// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAAGENT_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAAGENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBodyDataAgent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBodyDataAgent& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBodyDataAgent& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
    };
    GetSyncResultResponseBodyDataAgent() = default ;
    GetSyncResultResponseBodyDataAgent(const GetSyncResultResponseBodyDataAgent &) = default ;
    GetSyncResultResponseBodyDataAgent(GetSyncResultResponseBodyDataAgent &&) = default ;
    GetSyncResultResponseBodyDataAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBodyDataAgent() = default ;
    GetSyncResultResponseBodyDataAgent& operator=(const GetSyncResultResponseBodyDataAgent &) = default ;
    GetSyncResultResponseBodyDataAgent& operator=(GetSyncResultResponseBodyDataAgent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->skillGroup_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSyncResultResponseBodyDataAgent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSyncResultResponseBodyDataAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline string skillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, "") };
    inline GetSyncResultResponseBodyDataAgent& setSkillGroup(string skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> skillGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

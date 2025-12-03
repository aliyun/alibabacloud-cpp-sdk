// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUSHRULERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUSHRULERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePushRuleResponseBodyResultRuleInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreatePushRuleResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePushRuleResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(ruleInfos, ruleInfos_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePushRuleResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(ruleInfos, ruleInfos_);
    };
    CreatePushRuleResponseBodyResult() = default ;
    CreatePushRuleResponseBodyResult(const CreatePushRuleResponseBodyResult &) = default ;
    CreatePushRuleResponseBodyResult(CreatePushRuleResponseBodyResult &&) = default ;
    CreatePushRuleResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePushRuleResponseBodyResult() = default ;
    CreatePushRuleResponseBodyResult& operator=(const CreatePushRuleResponseBodyResult &) = default ;
    CreatePushRuleResponseBodyResult& operator=(CreatePushRuleResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->ruleInfos_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreatePushRuleResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreatePushRuleResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreatePushRuleResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleInfos Field Functions 
    bool hasRuleInfos() const { return this->ruleInfos_ != nullptr;};
    void deleteRuleInfos() { this->ruleInfos_ = nullptr;};
    inline const vector<Models::CreatePushRuleResponseBodyResultRuleInfos> & ruleInfos() const { DARABONBA_PTR_GET_CONST(ruleInfos_, vector<Models::CreatePushRuleResponseBodyResultRuleInfos>) };
    inline vector<Models::CreatePushRuleResponseBodyResultRuleInfos> ruleInfos() { DARABONBA_PTR_GET(ruleInfos_, vector<Models::CreatePushRuleResponseBodyResultRuleInfos>) };
    inline CreatePushRuleResponseBodyResult& setRuleInfos(const vector<Models::CreatePushRuleResponseBodyResultRuleInfos> & ruleInfos) { DARABONBA_PTR_SET_VALUE(ruleInfos_, ruleInfos) };
    inline CreatePushRuleResponseBodyResult& setRuleInfos(vector<Models::CreatePushRuleResponseBodyResultRuleInfos> && ruleInfos) { DARABONBA_PTR_SET_RVALUE(ruleInfos_, ruleInfos) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::CreatePushRuleResponseBodyResultRuleInfos>> ruleInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

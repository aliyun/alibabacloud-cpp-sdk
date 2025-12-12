// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRULEV4REQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRULEV4REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class AddRuleV4Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRuleV4Request& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_TO_JSON(JsonStrForRule, jsonStrForRule_);
    };
    friend void from_json(const Darabonba::Json& j, AddRuleV4Request& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_FROM_JSON(JsonStrForRule, jsonStrForRule_);
    };
    AddRuleV4Request() = default ;
    AddRuleV4Request(const AddRuleV4Request &) = default ;
    AddRuleV4Request(AddRuleV4Request &&) = default ;
    AddRuleV4Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRuleV4Request() = default ;
    AddRuleV4Request& operator=(const AddRuleV4Request &) = default ;
    AddRuleV4Request& operator=(AddRuleV4Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && return this->isCopy_ == nullptr && return this->jsonStrForRule_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline AddRuleV4Request& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // isCopy Field Functions 
    bool hasIsCopy() const { return this->isCopy_ != nullptr;};
    void deleteIsCopy() { this->isCopy_ = nullptr;};
    inline bool isCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
    inline AddRuleV4Request& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


    // jsonStrForRule Field Functions 
    bool hasJsonStrForRule() const { return this->jsonStrForRule_ != nullptr;};
    void deleteJsonStrForRule() { this->jsonStrForRule_ = nullptr;};
    inline string jsonStrForRule() const { DARABONBA_PTR_GET_DEFAULT(jsonStrForRule_, "") };
    inline AddRuleV4Request& setJsonStrForRule(string jsonStrForRule) { DARABONBA_PTR_SET_VALUE(jsonStrForRule_, jsonStrForRule) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<bool> isCopy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jsonStrForRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

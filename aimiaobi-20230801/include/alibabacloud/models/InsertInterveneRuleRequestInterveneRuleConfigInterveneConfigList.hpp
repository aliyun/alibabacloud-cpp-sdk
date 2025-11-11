// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIGINTERVENECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIGINTERVENECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList() = default ;
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList(const InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList(InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList &&) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList() = default ;
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& operator=(const InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& operator=(InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->operationType_ == nullptr && return this->query_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline int32_t operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
    inline InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> operationType_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

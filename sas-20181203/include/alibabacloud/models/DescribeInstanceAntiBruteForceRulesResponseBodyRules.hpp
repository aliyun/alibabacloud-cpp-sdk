// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEANTIBRUTEFORCERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEANTIBRUTEFORCERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceAntiBruteForceRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAntiBruteForceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAntiBruteForceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeInstanceAntiBruteForceRulesResponseBodyRules() = default ;
    DescribeInstanceAntiBruteForceRulesResponseBodyRules(const DescribeInstanceAntiBruteForceRulesResponseBodyRules &) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBodyRules(DescribeInstanceAntiBruteForceRulesResponseBodyRules &&) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAntiBruteForceRulesResponseBodyRules() = default ;
    DescribeInstanceAntiBruteForceRulesResponseBodyRules& operator=(const DescribeInstanceAntiBruteForceRulesResponseBodyRules &) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBodyRules& operator=(DescribeInstanceAntiBruteForceRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->uuid_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeInstanceAntiBruteForceRulesResponseBodyRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceAntiBruteForceRulesResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeInstanceAntiBruteForceRulesResponseBodyRules& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the defense rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the defense rule.
    std::shared_ptr<string> name_ = nullptr;
    // The UUID of the server to which the defense rule is applied.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODYECRGRANTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODYECRGRANTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGrantRulesToEcrResponseBodyEcrGrantRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToEcrResponseBodyEcrGrantRules& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EcrInstanceId, ecrInstanceId_);
      DARABONBA_PTR_TO_JSON(EcrUid, ecrUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToEcrResponseBodyEcrGrantRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EcrInstanceId, ecrInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcrUid, ecrUid_);
    };
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules() = default ;
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules(const DescribeGrantRulesToEcrResponseBodyEcrGrantRules &) = default ;
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules(DescribeGrantRulesToEcrResponseBodyEcrGrantRules &&) = default ;
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToEcrResponseBodyEcrGrantRules() = default ;
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules& operator=(const DescribeGrantRulesToEcrResponseBodyEcrGrantRules &) = default ;
    DescribeGrantRulesToEcrResponseBodyEcrGrantRules& operator=(DescribeGrantRulesToEcrResponseBodyEcrGrantRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->ecrInstanceId_ == nullptr && return this->ecrUid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGrantRulesToEcrResponseBodyEcrGrantRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ecrInstanceId Field Functions 
    bool hasEcrInstanceId() const { return this->ecrInstanceId_ != nullptr;};
    void deleteEcrInstanceId() { this->ecrInstanceId_ = nullptr;};
    inline string ecrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecrInstanceId_, "") };
    inline DescribeGrantRulesToEcrResponseBodyEcrGrantRules& setEcrInstanceId(string ecrInstanceId) { DARABONBA_PTR_SET_VALUE(ecrInstanceId_, ecrInstanceId) };


    // ecrUid Field Functions 
    bool hasEcrUid() const { return this->ecrUid_ != nullptr;};
    void deleteEcrUid() { this->ecrUid_ = nullptr;};
    inline int64_t ecrUid() const { DARABONBA_PTR_GET_DEFAULT(ecrUid_, 0L) };
    inline DescribeGrantRulesToEcrResponseBodyEcrGrantRules& setEcrUid(int64_t ecrUid) { DARABONBA_PTR_SET_VALUE(ecrUid_, ecrUid) };


  protected:
    // The authorization time. The time follows the ISO8601 standard and uses UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ECR account ID.
    std::shared_ptr<string> ecrInstanceId_ = nullptr;
    // The ECR account ID.
    std::shared_ptr<int64_t> ecrUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODYWARNINGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODYWARNINGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedCheckWarningResponseBodyWarningList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedCheckWarningResponseBodyWarningList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(SubTypeAlias, subTypeAlias_);
      DARABONBA_PTR_TO_JSON(TypeAlias, typeAlias_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedCheckWarningResponseBodyWarningList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(SubTypeAlias, subTypeAlias_);
      DARABONBA_PTR_FROM_JSON(TypeAlias, typeAlias_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExposedCheckWarningResponseBodyWarningList() = default ;
    DescribeExposedCheckWarningResponseBodyWarningList(const DescribeExposedCheckWarningResponseBodyWarningList &) = default ;
    DescribeExposedCheckWarningResponseBodyWarningList(DescribeExposedCheckWarningResponseBodyWarningList &&) = default ;
    DescribeExposedCheckWarningResponseBodyWarningList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedCheckWarningResponseBodyWarningList() = default ;
    DescribeExposedCheckWarningResponseBodyWarningList& operator=(const DescribeExposedCheckWarningResponseBodyWarningList &) = default ;
    DescribeExposedCheckWarningResponseBodyWarningList& operator=(DescribeExposedCheckWarningResponseBodyWarningList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->riskId_ != nullptr
        && this->riskName_ != nullptr && this->subTypeAlias_ != nullptr && this->typeAlias_ != nullptr && this->uuid_ != nullptr; };
    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeExposedCheckWarningResponseBodyWarningList& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline DescribeExposedCheckWarningResponseBodyWarningList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // subTypeAlias Field Functions 
    bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
    void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
    inline string subTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
    inline DescribeExposedCheckWarningResponseBodyWarningList& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


    // typeAlias Field Functions 
    bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
    void deleteTypeAlias() { this->typeAlias_ = nullptr;};
    inline string typeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
    inline DescribeExposedCheckWarningResponseBodyWarningList& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedCheckWarningResponseBodyWarningList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the baseline.
    // 
    // >  You can call the [DescribeCheckWarningSummary](https://help.aliyun.com/document_detail/116179.html) operation to query the IDs of baselines.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> riskName_ = nullptr;
    // The display name of the baseline sub type.
    std::shared_ptr<string> subTypeAlias_ = nullptr;
    // The display name of the baseline type.
    std::shared_ptr<string> typeAlias_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

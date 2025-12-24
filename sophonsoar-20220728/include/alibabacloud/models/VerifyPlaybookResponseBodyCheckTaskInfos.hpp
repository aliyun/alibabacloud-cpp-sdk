// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODYCHECKTASKINFOS_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODYCHECKTASKINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPlaybookResponseBodyCheckTaskInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPlaybookResponseBodyCheckTaskInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPlaybookResponseBodyCheckTaskInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    VerifyPlaybookResponseBodyCheckTaskInfos() = default ;
    VerifyPlaybookResponseBodyCheckTaskInfos(const VerifyPlaybookResponseBodyCheckTaskInfos &) = default ;
    VerifyPlaybookResponseBodyCheckTaskInfos(VerifyPlaybookResponseBodyCheckTaskInfos &&) = default ;
    VerifyPlaybookResponseBodyCheckTaskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPlaybookResponseBodyCheckTaskInfos() = default ;
    VerifyPlaybookResponseBodyCheckTaskInfos& operator=(const VerifyPlaybookResponseBodyCheckTaskInfos &) = default ;
    VerifyPlaybookResponseBodyCheckTaskInfos& operator=(VerifyPlaybookResponseBodyCheckTaskInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->nodeName_ == nullptr && return this->riskLevel_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline VerifyPlaybookResponseBodyCheckTaskInfos& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline VerifyPlaybookResponseBodyCheckTaskInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VerifyPlaybookResponseBodyCheckTaskInfos& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The error message returned when the playbook does not pass the check.
    std::shared_ptr<string> detail_ = nullptr;
    // The name of the node in the playbook.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The severity level of the verification information. Valid values:
    // 
    // *   warn: An issue may occur during playbook running.
    // *   error: The playbook cannot be compiled.
    // *   remind: The publishing and running of the playbook are not affected. We recommend that you optimize the playbook format.
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

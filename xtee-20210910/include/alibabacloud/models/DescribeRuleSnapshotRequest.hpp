// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(snapshotVersion, snapshotVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(snapshotVersion, snapshotVersion_);
    };
    DescribeRuleSnapshotRequest() = default ;
    DescribeRuleSnapshotRequest(const DescribeRuleSnapshotRequest &) = default ;
    DescribeRuleSnapshotRequest(DescribeRuleSnapshotRequest &&) = default ;
    DescribeRuleSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleSnapshotRequest() = default ;
    DescribeRuleSnapshotRequest& operator=(const DescribeRuleSnapshotRequest &) = default ;
    DescribeRuleSnapshotRequest& operator=(DescribeRuleSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->regId_ != nullptr && this->ruleId_ != nullptr && this->snapshotVersion_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRuleSnapshotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRuleSnapshotRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleSnapshotRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // snapshotVersion Field Functions 
    bool hasSnapshotVersion() const { return this->snapshotVersion_ != nullptr;};
    void deleteSnapshotVersion() { this->snapshotVersion_ = nullptr;};
    inline string snapshotVersion() const { DARABONBA_PTR_GET_DEFAULT(snapshotVersion_, "") };
    inline DescribeRuleSnapshotRequest& setSnapshotVersion(string snapshotVersion) { DARABONBA_PTR_SET_VALUE(snapshotVersion_, snapshotVersion) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Snapshot version.
    std::shared_ptr<string> snapshotVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

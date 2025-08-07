// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RidInfo, ridInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RidInfo, ridInfo_);
    };
    UploadRuleResponseBodyData() = default ;
    UploadRuleResponseBodyData(const UploadRuleResponseBodyData &) = default ;
    UploadRuleResponseBodyData(UploadRuleResponseBodyData &&) = default ;
    UploadRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRuleResponseBodyData() = default ;
    UploadRuleResponseBodyData& operator=(const UploadRuleResponseBodyData &) = default ;
    UploadRuleResponseBodyData& operator=(UploadRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ridInfo_ != nullptr; };
    // ridInfo Field Functions 
    bool hasRidInfo() const { return this->ridInfo_ != nullptr;};
    void deleteRidInfo() { this->ridInfo_ = nullptr;};
    inline const vector<string> & ridInfo() const { DARABONBA_PTR_GET_CONST(ridInfo_, vector<string>) };
    inline vector<string> ridInfo() { DARABONBA_PTR_GET(ridInfo_, vector<string>) };
    inline UploadRuleResponseBodyData& setRidInfo(const vector<string> & ridInfo) { DARABONBA_PTR_SET_VALUE(ridInfo_, ridInfo) };
    inline UploadRuleResponseBodyData& setRidInfo(vector<string> && ridInfo) { DARABONBA_PTR_SET_RVALUE(ridInfo_, ridInfo) };


  protected:
    std::shared_ptr<vector<string>> ridInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

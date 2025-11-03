// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSESANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSESANALYSIS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLogAnalysisResponseBodyAnalysesAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogAnalysisResponseBodyAnalysesAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(MetaKey, metaKey_);
      DARABONBA_PTR_TO_JSON(MetaValue, metaValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogAnalysisResponseBodyAnalysesAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaKey, metaKey_);
      DARABONBA_PTR_FROM_JSON(MetaValue, metaValue_);
    };
    DescribeLogAnalysisResponseBodyAnalysesAnalysis() = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysis(const DescribeLogAnalysisResponseBodyAnalysesAnalysis &) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysis(DescribeLogAnalysisResponseBodyAnalysesAnalysis &&) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogAnalysisResponseBodyAnalysesAnalysis() = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysis& operator=(const DescribeLogAnalysisResponseBodyAnalysesAnalysis &) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysis& operator=(DescribeLogAnalysisResponseBodyAnalysesAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaKey_ == nullptr
        && return this->metaValue_ == nullptr; };
    // metaKey Field Functions 
    bool hasMetaKey() const { return this->metaKey_ != nullptr;};
    void deleteMetaKey() { this->metaKey_ = nullptr;};
    inline string metaKey() const { DARABONBA_PTR_GET_DEFAULT(metaKey_, "") };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysis& setMetaKey(string metaKey) { DARABONBA_PTR_SET_VALUE(metaKey_, metaKey) };


    // metaValue Field Functions 
    bool hasMetaValue() const { return this->metaValue_ != nullptr;};
    void deleteMetaValue() { this->metaValue_ = nullptr;};
    inline const Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue & metaValue() const { DARABONBA_PTR_GET_CONST(metaValue_, Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue) };
    inline Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue metaValue() { DARABONBA_PTR_GET(metaValue_, Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue) };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysis& setMetaValue(const Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue & metaValue) { DARABONBA_PTR_SET_VALUE(metaValue_, metaValue) };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysis& setMetaValue(Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue && metaValue) { DARABONBA_PTR_SET_RVALUE(metaValue_, metaValue) };


  protected:
    // The ID of the file system.
    std::shared_ptr<string> metaKey_ = nullptr;
    // The log dump information of the file system.
    std::shared_ptr<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue> metaValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

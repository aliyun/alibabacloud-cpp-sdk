// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTSUMMARIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppResponseBodyResultSummariesMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppResponseBodyResultSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppResponseBodyResultSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppResponseBodyResultSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeAppResponseBodyResultSummaries() = default ;
    DescribeAppResponseBodyResultSummaries(const DescribeAppResponseBodyResultSummaries &) = default ;
    DescribeAppResponseBodyResultSummaries(DescribeAppResponseBodyResultSummaries &&) = default ;
    DescribeAppResponseBodyResultSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppResponseBodyResultSummaries() = default ;
    DescribeAppResponseBodyResultSummaries& operator=(const DescribeAppResponseBodyResultSummaries &) = default ;
    DescribeAppResponseBodyResultSummaries& operator=(DescribeAppResponseBodyResultSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->meta_ == nullptr
        && return this->name_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultSummariesMeta> & meta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Models::DescribeAppResponseBodyResultSummariesMeta>) };
    inline vector<Models::DescribeAppResponseBodyResultSummariesMeta> meta() { DARABONBA_PTR_GET(meta_, vector<Models::DescribeAppResponseBodyResultSummariesMeta>) };
    inline DescribeAppResponseBodyResultSummaries& setMeta(const vector<Models::DescribeAppResponseBodyResultSummariesMeta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline DescribeAppResponseBodyResultSummaries& setMeta(vector<Models::DescribeAppResponseBodyResultSummariesMeta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppResponseBodyResultSummaries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The summary configurations.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultSummariesMeta>> meta_ = nullptr;
    // The group name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

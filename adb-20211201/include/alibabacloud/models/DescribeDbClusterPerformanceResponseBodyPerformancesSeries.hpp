// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TranslateKey, translateKey_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TranslateKey, translateKey_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const DescribeDBClusterPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(DescribeDBClusterPerformanceResponseBodyPerformancesSeries &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries& operator=(const DescribeDBClusterPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries& operator=(DescribeDBClusterPerformanceResponseBodyPerformancesSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->tags_ == nullptr && return this->translateKey_ == nullptr && return this->values_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // translateKey Field Functions 
    bool hasTranslateKey() const { return this->translateKey_ != nullptr;};
    void deleteTranslateKey() { this->translateKey_ = nullptr;};
    inline string translateKey() const { DARABONBA_PTR_GET_DEFAULT(translateKey_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setTranslateKey(string translateKey) { DARABONBA_PTR_SET_VALUE(translateKey_, translateKey) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the performance metric value. For more information about the performance metrics, see [Metric overview](https://help.aliyun.com/document_detail/2863211.html).
    std::shared_ptr<string> name_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<string> translateKey_ = nullptr;
    // The values of the performance metric at different points in time.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

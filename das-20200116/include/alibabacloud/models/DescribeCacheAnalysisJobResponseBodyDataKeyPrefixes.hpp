// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAKEYPREFIXES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAKEYPREFIXES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& obj) { 
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& obj) { 
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes() = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes(const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes(DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes() = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& operator=(const DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& operator=(DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prefix_ == nullptr; };
    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix> & prefix() const { DARABONBA_PTR_GET_CONST(prefix_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix>) };
    inline vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix> prefix() { DARABONBA_PTR_GET(prefix_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix>) };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& setPrefix(const vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix> & prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };
    inline DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes& setPrefix(vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix> && prefix) { DARABONBA_PTR_SET_RVALUE(prefix_, prefix) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixesPrefix>> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

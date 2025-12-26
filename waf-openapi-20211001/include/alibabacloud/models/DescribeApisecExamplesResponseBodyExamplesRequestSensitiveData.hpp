// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODYEXAMPLESREQUESTSENSITIVEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODYEXAMPLESREQUESTSENSITIVEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_TO_JSON(SensitiveDataList, sensitiveDataList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataList, sensitiveDataList_);
    };
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData() = default ;
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData(const DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData &) = default ;
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData(DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData &&) = default ;
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData() = default ;
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& operator=(const DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData &) = default ;
    DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& operator=(DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sensitiveCode_ == nullptr
        && return this->sensitiveDataList_ == nullptr; };
    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline string sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
    inline DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


    // sensitiveDataList Field Functions 
    bool hasSensitiveDataList() const { return this->sensitiveDataList_ != nullptr;};
    void deleteSensitiveDataList() { this->sensitiveDataList_ = nullptr;};
    inline const vector<string> & sensitiveDataList() const { DARABONBA_PTR_GET_CONST(sensitiveDataList_, vector<string>) };
    inline vector<string> sensitiveDataList() { DARABONBA_PTR_GET(sensitiveDataList_, vector<string>) };
    inline DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& setSensitiveDataList(const vector<string> & sensitiveDataList) { DARABONBA_PTR_SET_VALUE(sensitiveDataList_, sensitiveDataList) };
    inline DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData& setSensitiveDataList(vector<string> && sensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataList_, sensitiveDataList) };


  protected:
    std::shared_ptr<string> sensitiveCode_ = nullptr;
    std::shared_ptr<vector<string>> sensitiveDataList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

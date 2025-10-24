// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODYDATALIST_HPP_
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
  class DescribeSensitiveApiStatisticResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveApiStatisticResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveApiStatisticResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
    };
    DescribeSensitiveApiStatisticResponseBodyDataList() = default ;
    DescribeSensitiveApiStatisticResponseBodyDataList(const DescribeSensitiveApiStatisticResponseBodyDataList &) = default ;
    DescribeSensitiveApiStatisticResponseBodyDataList(DescribeSensitiveApiStatisticResponseBodyDataList &&) = default ;
    DescribeSensitiveApiStatisticResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveApiStatisticResponseBodyDataList() = default ;
    DescribeSensitiveApiStatisticResponseBodyDataList& operator=(const DescribeSensitiveApiStatisticResponseBodyDataList &) = default ;
    DescribeSensitiveApiStatisticResponseBodyDataList& operator=(DescribeSensitiveApiStatisticResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiFormat_ == nullptr
        && return this->apiId_ == nullptr && return this->infoCount_ == nullptr && return this->sensitiveCode_ == nullptr && return this->sensitiveCount_ == nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // infoCount Field Functions 
    bool hasInfoCount() const { return this->infoCount_ != nullptr;};
    void deleteInfoCount() { this->infoCount_ = nullptr;};
    inline int64_t infoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline const vector<string> & sensitiveCode() const { DARABONBA_PTR_GET_CONST(sensitiveCode_, vector<string>) };
    inline vector<string> sensitiveCode() { DARABONBA_PTR_GET(sensitiveCode_, vector<string>) };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setSensitiveCode(const vector<string> & sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setSensitiveCode(vector<string> && sensitiveCode) { DARABONBA_PTR_SET_RVALUE(sensitiveCode_, sensitiveCode) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int64_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
    inline DescribeSensitiveApiStatisticResponseBodyDataList& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The number of personal information records involved in cross-border data transfer by API.
    std::shared_ptr<int64_t> infoCount_ = nullptr;
    // The types of sensitive data.
    std::shared_ptr<vector<string>> sensitiveCode_ = nullptr;
    // The number of sensitive personal information records involved in cross-border data transfer by API.
    std::shared_ptr<int64_t> sensitiveCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

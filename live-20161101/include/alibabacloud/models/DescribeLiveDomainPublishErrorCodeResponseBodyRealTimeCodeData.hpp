// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODYREALTIMECODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODYREALTIMECODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(CodeData, codeData_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeData, codeData_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData(const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData(DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData &&) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& operator=(const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& operator=(DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeData_ == nullptr
        && return this->timeStamp_ == nullptr; };
    // codeData Field Functions 
    bool hasCodeData() const { return this->codeData_ != nullptr;};
    void deleteCodeData() { this->codeData_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData> & codeData() const { DARABONBA_PTR_GET_CONST(codeData_, vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData>) };
    inline vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData> codeData() { DARABONBA_PTR_GET(codeData_, vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData>) };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& setCodeData(const vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData> & codeData) { DARABONBA_PTR_SET_VALUE(codeData_, codeData) };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& setCodeData(vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData> && codeData) { DARABONBA_PTR_SET_RVALUE(codeData_, codeData) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The proportions of error codes.
    std::shared_ptr<vector<Models::DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData>> codeData_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODYREALTIMECODEDATACODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODYREALTIMECODEDATACODEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Proportion, proportion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
    };
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData(const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData(DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData &&) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& operator=(const DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& operator=(DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->count_ != nullptr && this->proportion_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // proportion Field Functions 
    bool hasProportion() const { return this->proportion_ != nullptr;};
    void deleteProportion() { this->proportion_ = nullptr;};
    inline string proportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeDataCodeData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


  protected:
    // The response code. Valid values:
    // 
    // *   3: The data read timed out.
    // *   4: A data write error occurred.
    // *   6: The data write timed out.
    // *   200: The request is successful.
    // *   500: An unknown internal error occurred.
    // *   501: The stream ingest failed.
    // *   502: The signaling operation timed out.
    // *   401: A stream ingest parameter is invalid.
    // *   403: The stream ingest authentication failed.
    std::shared_ptr<string> code_ = nullptr;
    // The number of times the HTTP status code was returned.
    std::shared_ptr<string> count_ = nullptr;
    // The proportion of the HTTP status code.
    std::shared_ptr<string> proportion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

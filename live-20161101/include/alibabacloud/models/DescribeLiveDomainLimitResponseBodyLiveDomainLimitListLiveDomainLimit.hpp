// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODYLIVEDOMAINLIMITLISTLIVEDOMAINLIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODYLIVEDOMAINLIMITLISTLIVEDOMAINLIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentNum, currentNum_);
      DARABONBA_PTR_TO_JSON(CurrentTranscodeNum, currentTranscodeNum_);
      DARABONBA_PTR_TO_JSON(CurrentTransferNum, currentTransferNum_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LimitNum, limitNum_);
      DARABONBA_PTR_TO_JSON(LimitTranscodeNum, limitTranscodeNum_);
      DARABONBA_PTR_TO_JSON(LimitTransferNum, limitTransferNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentNum, currentNum_);
      DARABONBA_PTR_FROM_JSON(CurrentTranscodeNum, currentTranscodeNum_);
      DARABONBA_PTR_FROM_JSON(CurrentTransferNum, currentTransferNum_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LimitNum, limitNum_);
      DARABONBA_PTR_FROM_JSON(LimitTranscodeNum, limitTranscodeNum_);
      DARABONBA_PTR_FROM_JSON(LimitTransferNum, limitTransferNum_);
    };
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit() = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit(const DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit &) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit(DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit &&) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit() = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& operator=(const DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit &) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& operator=(DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentNum_ != nullptr
        && this->currentTranscodeNum_ != nullptr && this->currentTransferNum_ != nullptr && this->domainName_ != nullptr && this->limitNum_ != nullptr && this->limitTranscodeNum_ != nullptr
        && this->limitTransferNum_ != nullptr; };
    // currentNum Field Functions 
    bool hasCurrentNum() const { return this->currentNum_ != nullptr;};
    void deleteCurrentNum() { this->currentNum_ = nullptr;};
    inline int32_t currentNum() const { DARABONBA_PTR_GET_DEFAULT(currentNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setCurrentNum(int32_t currentNum) { DARABONBA_PTR_SET_VALUE(currentNum_, currentNum) };


    // currentTranscodeNum Field Functions 
    bool hasCurrentTranscodeNum() const { return this->currentTranscodeNum_ != nullptr;};
    void deleteCurrentTranscodeNum() { this->currentTranscodeNum_ = nullptr;};
    inline int32_t currentTranscodeNum() const { DARABONBA_PTR_GET_DEFAULT(currentTranscodeNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setCurrentTranscodeNum(int32_t currentTranscodeNum) { DARABONBA_PTR_SET_VALUE(currentTranscodeNum_, currentTranscodeNum) };


    // currentTransferNum Field Functions 
    bool hasCurrentTransferNum() const { return this->currentTransferNum_ != nullptr;};
    void deleteCurrentTransferNum() { this->currentTransferNum_ = nullptr;};
    inline int32_t currentTransferNum() const { DARABONBA_PTR_GET_DEFAULT(currentTransferNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setCurrentTransferNum(int32_t currentTransferNum) { DARABONBA_PTR_SET_VALUE(currentTransferNum_, currentTransferNum) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // limitNum Field Functions 
    bool hasLimitNum() const { return this->limitNum_ != nullptr;};
    void deleteLimitNum() { this->limitNum_ = nullptr;};
    inline int32_t limitNum() const { DARABONBA_PTR_GET_DEFAULT(limitNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setLimitNum(int32_t limitNum) { DARABONBA_PTR_SET_VALUE(limitNum_, limitNum) };


    // limitTranscodeNum Field Functions 
    bool hasLimitTranscodeNum() const { return this->limitTranscodeNum_ != nullptr;};
    void deleteLimitTranscodeNum() { this->limitTranscodeNum_ = nullptr;};
    inline int32_t limitTranscodeNum() const { DARABONBA_PTR_GET_DEFAULT(limitTranscodeNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setLimitTranscodeNum(int32_t limitTranscodeNum) { DARABONBA_PTR_SET_VALUE(limitTranscodeNum_, limitTranscodeNum) };


    // limitTransferNum Field Functions 
    bool hasLimitTransferNum() const { return this->limitTransferNum_ != nullptr;};
    void deleteLimitTransferNum() { this->limitTransferNum_ = nullptr;};
    inline int32_t limitTransferNum() const { DARABONBA_PTR_GET_DEFAULT(limitTransferNum_, 0) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit& setLimitTransferNum(int32_t limitTransferNum) { DARABONBA_PTR_SET_VALUE(limitTransferNum_, limitTransferNum) };


  protected:
    // The current number of ingested streams.
    std::shared_ptr<int32_t> currentNum_ = nullptr;
    // The current number of transcoded streams.
    std::shared_ptr<int32_t> currentTranscodeNum_ = nullptr;
    // The current number of streams relayed from the live center.
    std::shared_ptr<int32_t> currentTransferNum_ = nullptr;
    // The name of the queried main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The maximum number of ingested streams.
    std::shared_ptr<int32_t> limitNum_ = nullptr;
    // The maximum number of transcoded streams.
    std::shared_ptr<int32_t> limitTranscodeNum_ = nullptr;
    // The maximum allowed number of streams relayed from the live center.
    std::shared_ptr<int32_t> limitTransferNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

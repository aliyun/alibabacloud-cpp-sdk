// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDomainLimitList, liveDomainLimitList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDomainLimitList, liveDomainLimitList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainLimitResponseBody() = default ;
    DescribeLiveDomainLimitResponseBody(const DescribeLiveDomainLimitResponseBody &) = default ;
    DescribeLiveDomainLimitResponseBody(DescribeLiveDomainLimitResponseBody &&) = default ;
    DescribeLiveDomainLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLimitResponseBody() = default ;
    DescribeLiveDomainLimitResponseBody& operator=(const DescribeLiveDomainLimitResponseBody &) = default ;
    DescribeLiveDomainLimitResponseBody& operator=(DescribeLiveDomainLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveDomainLimitList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveDomainLimitList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveDomainLimit, liveDomainLimit_);
      };
      friend void from_json(const Darabonba::Json& j, LiveDomainLimitList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveDomainLimit, liveDomainLimit_);
      };
      LiveDomainLimitList() = default ;
      LiveDomainLimitList(const LiveDomainLimitList &) = default ;
      LiveDomainLimitList(LiveDomainLimitList &&) = default ;
      LiveDomainLimitList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveDomainLimitList() = default ;
      LiveDomainLimitList& operator=(const LiveDomainLimitList &) = default ;
      LiveDomainLimitList& operator=(LiveDomainLimitList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveDomainLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveDomainLimit& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentNum, currentNum_);
          DARABONBA_PTR_TO_JSON(CurrentTranscodeNum, currentTranscodeNum_);
          DARABONBA_PTR_TO_JSON(CurrentTransferNum, currentTransferNum_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(LimitNum, limitNum_);
          DARABONBA_PTR_TO_JSON(LimitTranscodeNum, limitTranscodeNum_);
          DARABONBA_PTR_TO_JSON(LimitTransferNum, limitTransferNum_);
        };
        friend void from_json(const Darabonba::Json& j, LiveDomainLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentNum, currentNum_);
          DARABONBA_PTR_FROM_JSON(CurrentTranscodeNum, currentTranscodeNum_);
          DARABONBA_PTR_FROM_JSON(CurrentTransferNum, currentTransferNum_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(LimitNum, limitNum_);
          DARABONBA_PTR_FROM_JSON(LimitTranscodeNum, limitTranscodeNum_);
          DARABONBA_PTR_FROM_JSON(LimitTransferNum, limitTransferNum_);
        };
        LiveDomainLimit() = default ;
        LiveDomainLimit(const LiveDomainLimit &) = default ;
        LiveDomainLimit(LiveDomainLimit &&) = default ;
        LiveDomainLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveDomainLimit() = default ;
        LiveDomainLimit& operator=(const LiveDomainLimit &) = default ;
        LiveDomainLimit& operator=(LiveDomainLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentNum_ == nullptr
        && this->currentTranscodeNum_ == nullptr && this->currentTransferNum_ == nullptr && this->domainName_ == nullptr && this->limitNum_ == nullptr && this->limitTranscodeNum_ == nullptr
        && this->limitTransferNum_ == nullptr; };
        // currentNum Field Functions 
        bool hasCurrentNum() const { return this->currentNum_ != nullptr;};
        void deleteCurrentNum() { this->currentNum_ = nullptr;};
        inline int32_t getCurrentNum() const { DARABONBA_PTR_GET_DEFAULT(currentNum_, 0) };
        inline LiveDomainLimit& setCurrentNum(int32_t currentNum) { DARABONBA_PTR_SET_VALUE(currentNum_, currentNum) };


        // currentTranscodeNum Field Functions 
        bool hasCurrentTranscodeNum() const { return this->currentTranscodeNum_ != nullptr;};
        void deleteCurrentTranscodeNum() { this->currentTranscodeNum_ = nullptr;};
        inline int32_t getCurrentTranscodeNum() const { DARABONBA_PTR_GET_DEFAULT(currentTranscodeNum_, 0) };
        inline LiveDomainLimit& setCurrentTranscodeNum(int32_t currentTranscodeNum) { DARABONBA_PTR_SET_VALUE(currentTranscodeNum_, currentTranscodeNum) };


        // currentTransferNum Field Functions 
        bool hasCurrentTransferNum() const { return this->currentTransferNum_ != nullptr;};
        void deleteCurrentTransferNum() { this->currentTransferNum_ = nullptr;};
        inline int32_t getCurrentTransferNum() const { DARABONBA_PTR_GET_DEFAULT(currentTransferNum_, 0) };
        inline LiveDomainLimit& setCurrentTransferNum(int32_t currentTransferNum) { DARABONBA_PTR_SET_VALUE(currentTransferNum_, currentTransferNum) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveDomainLimit& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // limitNum Field Functions 
        bool hasLimitNum() const { return this->limitNum_ != nullptr;};
        void deleteLimitNum() { this->limitNum_ = nullptr;};
        inline int32_t getLimitNum() const { DARABONBA_PTR_GET_DEFAULT(limitNum_, 0) };
        inline LiveDomainLimit& setLimitNum(int32_t limitNum) { DARABONBA_PTR_SET_VALUE(limitNum_, limitNum) };


        // limitTranscodeNum Field Functions 
        bool hasLimitTranscodeNum() const { return this->limitTranscodeNum_ != nullptr;};
        void deleteLimitTranscodeNum() { this->limitTranscodeNum_ = nullptr;};
        inline int32_t getLimitTranscodeNum() const { DARABONBA_PTR_GET_DEFAULT(limitTranscodeNum_, 0) };
        inline LiveDomainLimit& setLimitTranscodeNum(int32_t limitTranscodeNum) { DARABONBA_PTR_SET_VALUE(limitTranscodeNum_, limitTranscodeNum) };


        // limitTransferNum Field Functions 
        bool hasLimitTransferNum() const { return this->limitTransferNum_ != nullptr;};
        void deleteLimitTransferNum() { this->limitTransferNum_ = nullptr;};
        inline int32_t getLimitTransferNum() const { DARABONBA_PTR_GET_DEFAULT(limitTransferNum_, 0) };
        inline LiveDomainLimit& setLimitTransferNum(int32_t limitTransferNum) { DARABONBA_PTR_SET_VALUE(limitTransferNum_, limitTransferNum) };


      protected:
        // The current number of ingested streams.
        shared_ptr<int32_t> currentNum_ {};
        // The current number of transcoded streams.
        shared_ptr<int32_t> currentTranscodeNum_ {};
        // The current number of streams relayed from the live center.
        shared_ptr<int32_t> currentTransferNum_ {};
        // The name of the queried main streaming domain.
        shared_ptr<string> domainName_ {};
        // The maximum number of ingested streams.
        shared_ptr<int32_t> limitNum_ {};
        // The maximum number of transcoded streams.
        shared_ptr<int32_t> limitTranscodeNum_ {};
        // The maximum allowed number of streams relayed from the live center.
        shared_ptr<int32_t> limitTransferNum_ {};
      };

      virtual bool empty() const override { return this->liveDomainLimit_ == nullptr; };
      // liveDomainLimit Field Functions 
      bool hasLiveDomainLimit() const { return this->liveDomainLimit_ != nullptr;};
      void deleteLiveDomainLimit() { this->liveDomainLimit_ = nullptr;};
      inline const vector<LiveDomainLimitList::LiveDomainLimit> & getLiveDomainLimit() const { DARABONBA_PTR_GET_CONST(liveDomainLimit_, vector<LiveDomainLimitList::LiveDomainLimit>) };
      inline vector<LiveDomainLimitList::LiveDomainLimit> getLiveDomainLimit() { DARABONBA_PTR_GET(liveDomainLimit_, vector<LiveDomainLimitList::LiveDomainLimit>) };
      inline LiveDomainLimitList& setLiveDomainLimit(const vector<LiveDomainLimitList::LiveDomainLimit> & liveDomainLimit) { DARABONBA_PTR_SET_VALUE(liveDomainLimit_, liveDomainLimit) };
      inline LiveDomainLimitList& setLiveDomainLimit(vector<LiveDomainLimitList::LiveDomainLimit> && liveDomainLimit) { DARABONBA_PTR_SET_RVALUE(liveDomainLimit_, liveDomainLimit) };


    protected:
      shared_ptr<vector<LiveDomainLimitList::LiveDomainLimit>> liveDomainLimit_ {};
    };

    virtual bool empty() const override { return this->liveDomainLimitList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveDomainLimitList Field Functions 
    bool hasLiveDomainLimitList() const { return this->liveDomainLimitList_ != nullptr;};
    void deleteLiveDomainLimitList() { this->liveDomainLimitList_ = nullptr;};
    inline const DescribeLiveDomainLimitResponseBody::LiveDomainLimitList & getLiveDomainLimitList() const { DARABONBA_PTR_GET_CONST(liveDomainLimitList_, DescribeLiveDomainLimitResponseBody::LiveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBody::LiveDomainLimitList getLiveDomainLimitList() { DARABONBA_PTR_GET(liveDomainLimitList_, DescribeLiveDomainLimitResponseBody::LiveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBody& setLiveDomainLimitList(const DescribeLiveDomainLimitResponseBody::LiveDomainLimitList & liveDomainLimitList) { DARABONBA_PTR_SET_VALUE(liveDomainLimitList_, liveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBody& setLiveDomainLimitList(DescribeLiveDomainLimitResponseBody::LiveDomainLimitList && liveDomainLimitList) { DARABONBA_PTR_SET_RVALUE(liveDomainLimitList_, liveDomainLimitList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The limits.
    shared_ptr<DescribeLiveDomainLimitResponseBody::LiveDomainLimitList> liveDomainLimitList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

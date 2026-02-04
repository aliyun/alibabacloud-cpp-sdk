// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserSecDropByMinuteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserSecDropByMinuteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Len, len_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserSecDropByMinuteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Len, len_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnUserSecDropByMinuteResponseBody() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(const DescribeDcdnUserSecDropByMinuteResponseBody &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(DescribeDcdnUserSecDropByMinuteResponseBody &&) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserSecDropByMinuteResponseBody() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody& operator=(const DescribeDcdnUserSecDropByMinuteResponseBody &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody& operator=(DescribeDcdnUserSecDropByMinuteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rows& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Drops, drops_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SecFunc, secFunc_);
        DARABONBA_PTR_TO_JSON(TmStr, tmStr_);
      };
      friend void from_json(const Darabonba::Json& j, Rows& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Drops, drops_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SecFunc, secFunc_);
        DARABONBA_PTR_FROM_JSON(TmStr, tmStr_);
      };
      Rows() = default ;
      Rows(const Rows &) = default ;
      Rows(Rows &&) = default ;
      Rows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rows() = default ;
      Rows& operator=(const Rows &) = default ;
      Rows& operator=(Rows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->drops_ == nullptr && this->object_ == nullptr && this->ruleName_ == nullptr && this->secFunc_ == nullptr && this->tmStr_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Rows& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // drops Field Functions 
      bool hasDrops() const { return this->drops_ != nullptr;};
      void deleteDrops() { this->drops_ = nullptr;};
      inline int32_t getDrops() const { DARABONBA_PTR_GET_DEFAULT(drops_, 0) };
      inline Rows& setDrops(int32_t drops) { DARABONBA_PTR_SET_VALUE(drops_, drops) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Rows& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rows& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // secFunc Field Functions 
      bool hasSecFunc() const { return this->secFunc_ != nullptr;};
      void deleteSecFunc() { this->secFunc_ = nullptr;};
      inline string getSecFunc() const { DARABONBA_PTR_GET_DEFAULT(secFunc_, "") };
      inline Rows& setSecFunc(string secFunc) { DARABONBA_PTR_SET_VALUE(secFunc_, secFunc) };


      // tmStr Field Functions 
      bool hasTmStr() const { return this->tmStr_ != nullptr;};
      void deleteTmStr() { this->tmStr_ = nullptr;};
      inline string getTmStr() const { DARABONBA_PTR_GET_DEFAULT(tmStr_, "") };
      inline Rows& setTmStr(string tmStr) { DARABONBA_PTR_SET_VALUE(tmStr_, tmStr) };


    protected:
      // The domain name.
      shared_ptr<string> domain_ {};
      // The number of packets blocked within 5 minutes.
      shared_ptr<int32_t> drops_ {};
      // The object that triggered rate limiting.
      shared_ptr<string> object_ {};
      // The rule that was triggered.
      shared_ptr<string> ruleName_ {};
      // The security feature that blocked the packets.
      shared_ptr<string> secFunc_ {};
      // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> tmStr_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->len_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rows_ == nullptr
        && this->totalCount_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // len Field Functions 
    bool hasLen() const { return this->len_ != nullptr;};
    void deleteLen() { this->len_ = nullptr;};
    inline int32_t getLen() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows>) };
    inline vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows> getRows() { DARABONBA_PTR_GET(rows_, vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows>) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRows(const vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRows(vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The description of HTTP responses.
    shared_ptr<string> description_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> len_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array.
    shared_ptr<vector<DescribeDcdnUserSecDropByMinuteResponseBody::Rows>> rows_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

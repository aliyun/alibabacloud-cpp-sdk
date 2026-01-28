// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDSRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDSRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DSRecordList, DSRecordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDSRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DSRecordList, DSRecordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDSRecordResponseBody() = default ;
    QueryDSRecordResponseBody(const QueryDSRecordResponseBody &) = default ;
    QueryDSRecordResponseBody(QueryDSRecordResponseBody &&) = default ;
    QueryDSRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDSRecordResponseBody() = default ;
    QueryDSRecordResponseBody& operator=(const QueryDSRecordResponseBody &) = default ;
    QueryDSRecordResponseBody& operator=(QueryDSRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DSRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DSRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(DigestType, digestType_);
        DARABONBA_PTR_TO_JSON(KeyTag, keyTag_);
      };
      friend void from_json(const Darabonba::Json& j, DSRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(DigestType, digestType_);
        DARABONBA_PTR_FROM_JSON(KeyTag, keyTag_);
      };
      DSRecordList() = default ;
      DSRecordList(const DSRecordList &) = default ;
      DSRecordList(DSRecordList &&) = default ;
      DSRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DSRecordList() = default ;
      DSRecordList& operator=(const DSRecordList &) = default ;
      DSRecordList& operator=(DSRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->digest_ == nullptr && this->digestType_ == nullptr && this->keyTag_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
      inline DSRecordList& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline DSRecordList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // digestType Field Functions 
      bool hasDigestType() const { return this->digestType_ != nullptr;};
      void deleteDigestType() { this->digestType_ = nullptr;};
      inline int32_t getDigestType() const { DARABONBA_PTR_GET_DEFAULT(digestType_, 0) };
      inline DSRecordList& setDigestType(int32_t digestType) { DARABONBA_PTR_SET_VALUE(digestType_, digestType) };


      // keyTag Field Functions 
      bool hasKeyTag() const { return this->keyTag_ != nullptr;};
      void deleteKeyTag() { this->keyTag_ = nullptr;};
      inline int32_t getKeyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
      inline DSRecordList& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


    protected:
      shared_ptr<int32_t> algorithm_ {};
      shared_ptr<string> digest_ {};
      shared_ptr<int32_t> digestType_ {};
      shared_ptr<int32_t> keyTag_ {};
    };

    virtual bool empty() const override { return this->DSRecordList_ == nullptr
        && this->requestId_ == nullptr; };
    // DSRecordList Field Functions 
    bool hasDSRecordList() const { return this->DSRecordList_ != nullptr;};
    void deleteDSRecordList() { this->DSRecordList_ = nullptr;};
    inline const vector<QueryDSRecordResponseBody::DSRecordList> & getDSRecordList() const { DARABONBA_PTR_GET_CONST(DSRecordList_, vector<QueryDSRecordResponseBody::DSRecordList>) };
    inline vector<QueryDSRecordResponseBody::DSRecordList> getDSRecordList() { DARABONBA_PTR_GET(DSRecordList_, vector<QueryDSRecordResponseBody::DSRecordList>) };
    inline QueryDSRecordResponseBody& setDSRecordList(const vector<QueryDSRecordResponseBody::DSRecordList> & dSRecordList) { DARABONBA_PTR_SET_VALUE(DSRecordList_, dSRecordList) };
    inline QueryDSRecordResponseBody& setDSRecordList(vector<QueryDSRecordResponseBody::DSRecordList> && dSRecordList) { DARABONBA_PTR_SET_RVALUE(DSRecordList_, dSRecordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDSRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryDSRecordResponseBody::DSRecordList>> DSRecordList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif

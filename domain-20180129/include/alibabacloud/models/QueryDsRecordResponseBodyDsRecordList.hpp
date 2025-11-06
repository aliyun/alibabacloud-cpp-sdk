// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODYDSRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODYDSRECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDSRecordResponseBodyDSRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDSRecordResponseBodyDSRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(DigestType, digestType_);
      DARABONBA_PTR_TO_JSON(KeyTag, keyTag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDSRecordResponseBodyDSRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(DigestType, digestType_);
      DARABONBA_PTR_FROM_JSON(KeyTag, keyTag_);
    };
    QueryDSRecordResponseBodyDSRecordList() = default ;
    QueryDSRecordResponseBodyDSRecordList(const QueryDSRecordResponseBodyDSRecordList &) = default ;
    QueryDSRecordResponseBodyDSRecordList(QueryDSRecordResponseBodyDSRecordList &&) = default ;
    QueryDSRecordResponseBodyDSRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDSRecordResponseBodyDSRecordList() = default ;
    QueryDSRecordResponseBodyDSRecordList& operator=(const QueryDSRecordResponseBodyDSRecordList &) = default ;
    QueryDSRecordResponseBodyDSRecordList& operator=(QueryDSRecordResponseBodyDSRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->digest_ == nullptr && return this->digestType_ == nullptr && return this->keyTag_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline int32_t algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
    inline QueryDSRecordResponseBodyDSRecordList& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline QueryDSRecordResponseBodyDSRecordList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // digestType Field Functions 
    bool hasDigestType() const { return this->digestType_ != nullptr;};
    void deleteDigestType() { this->digestType_ = nullptr;};
    inline int32_t digestType() const { DARABONBA_PTR_GET_DEFAULT(digestType_, 0) };
    inline QueryDSRecordResponseBodyDSRecordList& setDigestType(int32_t digestType) { DARABONBA_PTR_SET_VALUE(digestType_, digestType) };


    // keyTag Field Functions 
    bool hasKeyTag() const { return this->keyTag_ != nullptr;};
    void deleteKeyTag() { this->keyTag_ = nullptr;};
    inline int32_t keyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
    inline QueryDSRecordResponseBodyDSRecordList& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


  protected:
    std::shared_ptr<int32_t> algorithm_ = nullptr;
    std::shared_ptr<string> digest_ = nullptr;
    std::shared_ptr<int32_t> digestType_ = nullptr;
    std::shared_ptr<int32_t> keyTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif

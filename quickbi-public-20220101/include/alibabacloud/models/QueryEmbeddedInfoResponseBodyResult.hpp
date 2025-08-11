// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryEmbeddedInfoResponseBodyResultDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryEmbeddedInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmbeddedInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EmbeddedCount, embeddedCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmbeddedInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EmbeddedCount, embeddedCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
    };
    QueryEmbeddedInfoResponseBodyResult() = default ;
    QueryEmbeddedInfoResponseBodyResult(const QueryEmbeddedInfoResponseBodyResult &) = default ;
    QueryEmbeddedInfoResponseBodyResult(QueryEmbeddedInfoResponseBodyResult &&) = default ;
    QueryEmbeddedInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmbeddedInfoResponseBodyResult() = default ;
    QueryEmbeddedInfoResponseBodyResult& operator=(const QueryEmbeddedInfoResponseBodyResult &) = default ;
    QueryEmbeddedInfoResponseBodyResult& operator=(QueryEmbeddedInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->embeddedCount_ != nullptr && this->maxCount_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::QueryEmbeddedInfoResponseBodyResultDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::QueryEmbeddedInfoResponseBodyResultDetail) };
    inline Models::QueryEmbeddedInfoResponseBodyResultDetail detail() { DARABONBA_PTR_GET(detail_, Models::QueryEmbeddedInfoResponseBodyResultDetail) };
    inline QueryEmbeddedInfoResponseBodyResult& setDetail(const Models::QueryEmbeddedInfoResponseBodyResultDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline QueryEmbeddedInfoResponseBodyResult& setDetail(Models::QueryEmbeddedInfoResponseBodyResultDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // embeddedCount Field Functions 
    bool hasEmbeddedCount() const { return this->embeddedCount_ != nullptr;};
    void deleteEmbeddedCount() { this->embeddedCount_ = nullptr;};
    inline int32_t embeddedCount() const { DARABONBA_PTR_GET_DEFAULT(embeddedCount_, 0) };
    inline QueryEmbeddedInfoResponseBodyResult& setEmbeddedCount(int32_t embeddedCount) { DARABONBA_PTR_SET_VALUE(embeddedCount_, embeddedCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline QueryEmbeddedInfoResponseBodyResult& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


  protected:
    // Embed the statistics of the work.
    std::shared_ptr<Models::QueryEmbeddedInfoResponseBodyResultDetail> detail_ = nullptr;
    // The number of reports that are currently embedded.
    std::shared_ptr<int32_t> embeddedCount_ = nullptr;
    // The maximum number of reports that can be embedded.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

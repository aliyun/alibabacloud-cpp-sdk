// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATISTICSREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STATISTICSREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StatisticsReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatisticsReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commentNum, commentNum_);
      DARABONBA_PTR_TO_JSON(commentUserNum, commentUserNum_);
      DARABONBA_PTR_TO_JSON(likeNum, likeNum_);
      DARABONBA_PTR_TO_JSON(readNum, readNum_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StatisticsReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commentNum, commentNum_);
      DARABONBA_PTR_FROM_JSON(commentUserNum, commentUserNum_);
      DARABONBA_PTR_FROM_JSON(likeNum, likeNum_);
      DARABONBA_PTR_FROM_JSON(readNum, readNum_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StatisticsReportResponseBody() = default ;
    StatisticsReportResponseBody(const StatisticsReportResponseBody &) = default ;
    StatisticsReportResponseBody(StatisticsReportResponseBody &&) = default ;
    StatisticsReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatisticsReportResponseBody() = default ;
    StatisticsReportResponseBody& operator=(const StatisticsReportResponseBody &) = default ;
    StatisticsReportResponseBody& operator=(StatisticsReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commentNum_ == nullptr
        && return this->commentUserNum_ == nullptr && return this->likeNum_ == nullptr && return this->readNum_ == nullptr && return this->requestId_ == nullptr; };
    // commentNum Field Functions 
    bool hasCommentNum() const { return this->commentNum_ != nullptr;};
    void deleteCommentNum() { this->commentNum_ = nullptr;};
    inline int64_t commentNum() const { DARABONBA_PTR_GET_DEFAULT(commentNum_, 0L) };
    inline StatisticsReportResponseBody& setCommentNum(int64_t commentNum) { DARABONBA_PTR_SET_VALUE(commentNum_, commentNum) };


    // commentUserNum Field Functions 
    bool hasCommentUserNum() const { return this->commentUserNum_ != nullptr;};
    void deleteCommentUserNum() { this->commentUserNum_ = nullptr;};
    inline int64_t commentUserNum() const { DARABONBA_PTR_GET_DEFAULT(commentUserNum_, 0L) };
    inline StatisticsReportResponseBody& setCommentUserNum(int64_t commentUserNum) { DARABONBA_PTR_SET_VALUE(commentUserNum_, commentUserNum) };


    // likeNum Field Functions 
    bool hasLikeNum() const { return this->likeNum_ != nullptr;};
    void deleteLikeNum() { this->likeNum_ = nullptr;};
    inline int64_t likeNum() const { DARABONBA_PTR_GET_DEFAULT(likeNum_, 0L) };
    inline StatisticsReportResponseBody& setLikeNum(int64_t likeNum) { DARABONBA_PTR_SET_VALUE(likeNum_, likeNum) };


    // readNum Field Functions 
    bool hasReadNum() const { return this->readNum_ != nullptr;};
    void deleteReadNum() { this->readNum_ = nullptr;};
    inline int64_t readNum() const { DARABONBA_PTR_GET_DEFAULT(readNum_, 0L) };
    inline StatisticsReportResponseBody& setReadNum(int64_t readNum) { DARABONBA_PTR_SET_VALUE(readNum_, readNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StatisticsReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> commentNum_ = nullptr;
    std::shared_ptr<int64_t> commentUserNum_ = nullptr;
    std::shared_ptr<int64_t> likeNum_ = nullptr;
    std::shared_ptr<int64_t> readNum_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

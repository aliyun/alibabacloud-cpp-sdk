// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCredit, ddosCredit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCredit, ddosCredit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDdosCreditResponseBody() = default ;
    DescribeDdosCreditResponseBody(const DescribeDdosCreditResponseBody &) = default ;
    DescribeDdosCreditResponseBody(DescribeDdosCreditResponseBody &&) = default ;
    DescribeDdosCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCreditResponseBody() = default ;
    DescribeDdosCreditResponseBody& operator=(const DescribeDdosCreditResponseBody &) = default ;
    DescribeDdosCreditResponseBody& operator=(DescribeDdosCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DdosCredit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosCredit& obj) { 
        DARABONBA_PTR_TO_JSON(BlackholeTime, blackholeTime_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(ScoreLevel, scoreLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DdosCredit& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackholeTime, blackholeTime_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(ScoreLevel, scoreLevel_);
      };
      DdosCredit() = default ;
      DdosCredit(const DdosCredit &) = default ;
      DdosCredit(DdosCredit &&) = default ;
      DdosCredit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosCredit() = default ;
      DdosCredit& operator=(const DdosCredit &) = default ;
      DdosCredit& operator=(DdosCredit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blackholeTime_ == nullptr
        && this->score_ == nullptr && this->scoreLevel_ == nullptr; };
      // blackholeTime Field Functions 
      bool hasBlackholeTime() const { return this->blackholeTime_ != nullptr;};
      void deleteBlackholeTime() { this->blackholeTime_ = nullptr;};
      inline int32_t getBlackholeTime() const { DARABONBA_PTR_GET_DEFAULT(blackholeTime_, 0) };
      inline DdosCredit& setBlackholeTime(int32_t blackholeTime) { DARABONBA_PTR_SET_VALUE(blackholeTime_, blackholeTime) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline DdosCredit& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // scoreLevel Field Functions 
      bool hasScoreLevel() const { return this->scoreLevel_ != nullptr;};
      void deleteScoreLevel() { this->scoreLevel_ = nullptr;};
      inline string getScoreLevel() const { DARABONBA_PTR_GET_DEFAULT(scoreLevel_, "") };
      inline DdosCredit& setScoreLevel(string scoreLevel) { DARABONBA_PTR_SET_VALUE(scoreLevel_, scoreLevel) };


    protected:
      // The time period after which blackhole filtering is automatically deactivated in the specified region. Unit: minutes.
      shared_ptr<int32_t> blackholeTime_ {};
      // The security credit score. The full score is **1000**.
      shared_ptr<int32_t> score_ {};
      // The security credit level. Valid values:
      // 
      // - **A**: outstanding
      // 
      // - **B**: excellent
      // 
      // - **C**: good
      // 
      // - **D**: average
      // 
      // - **E**: poor
      // 
      // - **F**: poorer
      shared_ptr<string> scoreLevel_ {};
    };

    virtual bool empty() const override { return this->ddosCredit_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // ddosCredit Field Functions 
    bool hasDdosCredit() const { return this->ddosCredit_ != nullptr;};
    void deleteDdosCredit() { this->ddosCredit_ = nullptr;};
    inline const DescribeDdosCreditResponseBody::DdosCredit & getDdosCredit() const { DARABONBA_PTR_GET_CONST(ddosCredit_, DescribeDdosCreditResponseBody::DdosCredit) };
    inline DescribeDdosCreditResponseBody::DdosCredit getDdosCredit() { DARABONBA_PTR_GET(ddosCredit_, DescribeDdosCreditResponseBody::DdosCredit) };
    inline DescribeDdosCreditResponseBody& setDdosCredit(const DescribeDdosCreditResponseBody::DdosCredit & ddosCredit) { DARABONBA_PTR_SET_VALUE(ddosCredit_, ddosCredit) };
    inline DescribeDdosCreditResponseBody& setDdosCredit(DescribeDdosCreditResponseBody::DdosCredit && ddosCredit) { DARABONBA_PTR_SET_RVALUE(ddosCredit_, ddosCredit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDdosCreditResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the security credit score of the current Alibaba Cloud account in the specified region.
    shared_ptr<DescribeDdosCreditResponseBody::DdosCredit> ddosCredit_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: yes
    // 
    // - **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif

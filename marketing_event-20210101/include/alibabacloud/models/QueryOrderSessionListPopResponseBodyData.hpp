// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORDERSESSIONLISTPOPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYORDERSESSIONLISTPOPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryOrderSessionListPopResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrderSessionListPopResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SignInDate, signInDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrderSessionListPopResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SignInDate, signInDate_);
    };
    QueryOrderSessionListPopResponseBodyData() = default ;
    QueryOrderSessionListPopResponseBodyData(const QueryOrderSessionListPopResponseBodyData &) = default ;
    QueryOrderSessionListPopResponseBodyData(QueryOrderSessionListPopResponseBodyData &&) = default ;
    QueryOrderSessionListPopResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrderSessionListPopResponseBodyData() = default ;
    QueryOrderSessionListPopResponseBodyData& operator=(const QueryOrderSessionListPopResponseBodyData &) = default ;
    QueryOrderSessionListPopResponseBodyData& operator=(QueryOrderSessionListPopResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr
        && this->signInDate_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline QueryOrderSessionListPopResponseBodyData& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // signInDate Field Functions 
    bool hasSignInDate() const { return this->signInDate_ != nullptr;};
    void deleteSignInDate() { this->signInDate_ = nullptr;};
    inline string signInDate() const { DARABONBA_PTR_GET_DEFAULT(signInDate_, "") };
    inline QueryOrderSessionListPopResponseBodyData& setSignInDate(string signInDate) { DARABONBA_PTR_SET_VALUE(signInDate_, signInDate) };


  protected:
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    std::shared_ptr<string> signInDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASKDIALEXCEPTIONCODES_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASKDIALEXCEPTIONCODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Hint, hint_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Hint, hint_);
    };
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes(const QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes(QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes &&) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& operator=(const QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& operator=(QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hint_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hint Field Functions 
    bool hasHint() const { return this->hint_ != nullptr;};
    void deleteHint() { this->hint_ = nullptr;};
    inline string hint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> hint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

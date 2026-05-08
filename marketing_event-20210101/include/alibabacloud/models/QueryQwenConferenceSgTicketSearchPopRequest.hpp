// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETSEARCHPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETSEARCHPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryQwenConferenceSgTicketSearchPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQwenConferenceSgTicketSearchPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQwenConferenceSgTicketSearchPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
    };
    QueryQwenConferenceSgTicketSearchPopRequest() = default ;
    QueryQwenConferenceSgTicketSearchPopRequest(const QueryQwenConferenceSgTicketSearchPopRequest &) = default ;
    QueryQwenConferenceSgTicketSearchPopRequest(QueryQwenConferenceSgTicketSearchPopRequest &&) = default ;
    QueryQwenConferenceSgTicketSearchPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQwenConferenceSgTicketSearchPopRequest() = default ;
    QueryQwenConferenceSgTicketSearchPopRequest& operator=(const QueryQwenConferenceSgTicketSearchPopRequest &) = default ;
    QueryQwenConferenceSgTicketSearchPopRequest& operator=(QueryQwenConferenceSgTicketSearchPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryQwenConferenceSgTicketSearchPopRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    shared_ptr<string> keyword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif

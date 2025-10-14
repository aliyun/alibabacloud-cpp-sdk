// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODYRECORDMINUTESURLS_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODYRECORDMINUTESURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRecordMinutesUrlResponseBodyRecordMinutesUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordMinutesUrlResponseBodyRecordMinutesUrls& obj) { 
      DARABONBA_PTR_TO_JSON(RecordMinutesUrl, recordMinutesUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordMinutesUrlResponseBodyRecordMinutesUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordMinutesUrl, recordMinutesUrl_);
    };
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls() = default ;
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls(const QueryRecordMinutesUrlResponseBodyRecordMinutesUrls &) = default ;
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls(QueryRecordMinutesUrlResponseBodyRecordMinutesUrls &&) = default ;
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordMinutesUrlResponseBodyRecordMinutesUrls() = default ;
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls& operator=(const QueryRecordMinutesUrlResponseBodyRecordMinutesUrls &) = default ;
    QueryRecordMinutesUrlResponseBodyRecordMinutesUrls& operator=(QueryRecordMinutesUrlResponseBodyRecordMinutesUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordMinutesUrl_ == nullptr; };
    // recordMinutesUrl Field Functions 
    bool hasRecordMinutesUrl() const { return this->recordMinutesUrl_ != nullptr;};
    void deleteRecordMinutesUrl() { this->recordMinutesUrl_ = nullptr;};
    inline string recordMinutesUrl() const { DARABONBA_PTR_GET_DEFAULT(recordMinutesUrl_, "") };
    inline QueryRecordMinutesUrlResponseBodyRecordMinutesUrls& setRecordMinutesUrl(string recordMinutesUrl) { DARABONBA_PTR_SET_VALUE(recordMinutesUrl_, recordMinutesUrl) };


  protected:
    std::shared_ptr<string> recordMinutesUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

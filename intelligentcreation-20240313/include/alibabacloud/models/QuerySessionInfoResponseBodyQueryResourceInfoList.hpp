// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONINFORESPONSEBODYQUERYRESOURCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONINFORESPONSEBODYQUERYRESOURCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QuerySessionInfoResponseBodyQueryResourceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionInfoResponseBodyQueryResourceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionInfoResponseBodyQueryResourceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    QuerySessionInfoResponseBodyQueryResourceInfoList() = default ;
    QuerySessionInfoResponseBodyQueryResourceInfoList(const QuerySessionInfoResponseBodyQueryResourceInfoList &) = default ;
    QuerySessionInfoResponseBodyQueryResourceInfoList(QuerySessionInfoResponseBodyQueryResourceInfoList &&) = default ;
    QuerySessionInfoResponseBodyQueryResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionInfoResponseBodyQueryResourceInfoList() = default ;
    QuerySessionInfoResponseBodyQueryResourceInfoList& operator=(const QuerySessionInfoResponseBodyQueryResourceInfoList &) = default ;
    QuerySessionInfoResponseBodyQueryResourceInfoList& operator=(QuerySessionInfoResponseBodyQueryResourceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && return this->status_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline QuerySessionInfoResponseBodyQueryResourceInfoList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySessionInfoResponseBodyQueryResourceInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

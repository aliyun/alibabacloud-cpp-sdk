// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCACertificateLogResponseBodyLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCACertificateLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCACertificateLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogList, logList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCACertificateLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogList, logList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCACertificateLogResponseBody() = default ;
    ListCACertificateLogResponseBody(const ListCACertificateLogResponseBody &) = default ;
    ListCACertificateLogResponseBody(ListCACertificateLogResponseBody &&) = default ;
    ListCACertificateLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCACertificateLogResponseBody() = default ;
    ListCACertificateLogResponseBody& operator=(const ListCACertificateLogResponseBody &) = default ;
    ListCACertificateLogResponseBody& operator=(ListCACertificateLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logList_ == nullptr
        && return this->requestId_ == nullptr; };
    // logList Field Functions 
    bool hasLogList() const { return this->logList_ != nullptr;};
    void deleteLogList() { this->logList_ = nullptr;};
    inline const vector<ListCACertificateLogResponseBodyLogList> & logList() const { DARABONBA_PTR_GET_CONST(logList_, vector<ListCACertificateLogResponseBodyLogList>) };
    inline vector<ListCACertificateLogResponseBodyLogList> logList() { DARABONBA_PTR_GET(logList_, vector<ListCACertificateLogResponseBodyLogList>) };
    inline ListCACertificateLogResponseBody& setLogList(const vector<ListCACertificateLogResponseBodyLogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
    inline ListCACertificateLogResponseBody& setLogList(vector<ListCACertificateLogResponseBodyLogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCACertificateLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListCACertificateLogResponseBodyLogList>> logList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

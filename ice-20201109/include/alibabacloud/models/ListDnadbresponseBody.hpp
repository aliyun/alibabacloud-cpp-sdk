// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDNADBResponseBodyDBList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDNADBResponseBody() = default ;
    ListDNADBResponseBody(const ListDNADBResponseBody &) = default ;
    ListDNADBResponseBody(ListDNADBResponseBody &&) = default ;
    ListDNADBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNADBResponseBody() = default ;
    ListDNADBResponseBody& operator=(const ListDNADBResponseBody &) = default ;
    ListDNADBResponseBody& operator=(ListDNADBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBList_ != nullptr
        && this->requestId_ != nullptr; };
    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline const vector<ListDNADBResponseBodyDBList> & DBList() const { DARABONBA_PTR_GET_CONST(DBList_, vector<ListDNADBResponseBodyDBList>) };
    inline vector<ListDNADBResponseBodyDBList> DBList() { DARABONBA_PTR_GET(DBList_, vector<ListDNADBResponseBodyDBList>) };
    inline ListDNADBResponseBody& setDBList(const vector<ListDNADBResponseBodyDBList> & DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };
    inline ListDNADBResponseBody& setDBList(vector<ListDNADBResponseBodyDBList> && DBList) { DARABONBA_PTR_SET_RVALUE(DBList_, DBList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried media fingerprint libraries.
    std::shared_ptr<vector<ListDNADBResponseBodyDBList>> DBList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

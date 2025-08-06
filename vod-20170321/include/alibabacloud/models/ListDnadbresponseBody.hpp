// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDNADBResponseBodyDNADBList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DNADBList, DNADBList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DNADBList, DNADBList_);
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
    virtual bool empty() const override { this->DNADBList_ != nullptr
        && this->requestId_ != nullptr; };
    // DNADBList Field Functions 
    bool hasDNADBList() const { return this->DNADBList_ != nullptr;};
    void deleteDNADBList() { this->DNADBList_ = nullptr;};
    inline const vector<ListDNADBResponseBodyDNADBList> & DNADBList() const { DARABONBA_PTR_GET_CONST(DNADBList_, vector<ListDNADBResponseBodyDNADBList>) };
    inline vector<ListDNADBResponseBodyDNADBList> DNADBList() { DARABONBA_PTR_GET(DNADBList_, vector<ListDNADBResponseBodyDNADBList>) };
    inline ListDNADBResponseBody& setDNADBList(const vector<ListDNADBResponseBodyDNADBList> & DNADBList) { DARABONBA_PTR_SET_VALUE(DNADBList_, DNADBList) };
    inline ListDNADBResponseBody& setDNADBList(vector<ListDNADBResponseBodyDNADBList> && DNADBList) { DARABONBA_PTR_SET_RVALUE(DNADBList_, DNADBList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDNADBResponseBodyDNADBList>> DNADBList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

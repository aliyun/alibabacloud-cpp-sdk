// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDNADBResponseBodyDNADB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DNADB, DNADB_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DNADB, DNADB_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDNADBResponseBody() = default ;
    GetDNADBResponseBody(const GetDNADBResponseBody &) = default ;
    GetDNADBResponseBody(GetDNADBResponseBody &&) = default ;
    GetDNADBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDNADBResponseBody() = default ;
    GetDNADBResponseBody& operator=(const GetDNADBResponseBody &) = default ;
    GetDNADBResponseBody& operator=(GetDNADBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DNADB_ != nullptr
        && this->requestId_ != nullptr; };
    // DNADB Field Functions 
    bool hasDNADB() const { return this->DNADB_ != nullptr;};
    void deleteDNADB() { this->DNADB_ = nullptr;};
    inline const GetDNADBResponseBodyDNADB & DNADB() const { DARABONBA_PTR_GET_CONST(DNADB_, GetDNADBResponseBodyDNADB) };
    inline GetDNADBResponseBodyDNADB DNADB() { DARABONBA_PTR_GET(DNADB_, GetDNADBResponseBodyDNADB) };
    inline GetDNADBResponseBody& setDNADB(const GetDNADBResponseBodyDNADB & DNADB) { DARABONBA_PTR_SET_VALUE(DNADB_, DNADB) };
    inline GetDNADBResponseBody& setDNADB(GetDNADBResponseBodyDNADB && DNADB) { DARABONBA_PTR_SET_RVALUE(DNADB_, DNADB) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetDNADBResponseBodyDNADB> DNADB_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDNADBResponseBodyDBInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInfo, DBInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInfo, DBInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDNADBResponseBody() = default ;
    CreateDNADBResponseBody(const CreateDNADBResponseBody &) = default ;
    CreateDNADBResponseBody(CreateDNADBResponseBody &&) = default ;
    CreateDNADBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDNADBResponseBody() = default ;
    CreateDNADBResponseBody& operator=(const CreateDNADBResponseBody &) = default ;
    CreateDNADBResponseBody& operator=(CreateDNADBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBInfo Field Functions 
    bool hasDBInfo() const { return this->DBInfo_ != nullptr;};
    void deleteDBInfo() { this->DBInfo_ = nullptr;};
    inline const CreateDNADBResponseBodyDBInfo & DBInfo() const { DARABONBA_PTR_GET_CONST(DBInfo_, CreateDNADBResponseBodyDBInfo) };
    inline CreateDNADBResponseBodyDBInfo DBInfo() { DARABONBA_PTR_GET(DBInfo_, CreateDNADBResponseBodyDBInfo) };
    inline CreateDNADBResponseBody& setDBInfo(const CreateDNADBResponseBodyDBInfo & DBInfo) { DARABONBA_PTR_SET_VALUE(DBInfo_, DBInfo) };
    inline CreateDNADBResponseBody& setDBInfo(CreateDNADBResponseBodyDBInfo && DBInfo) { DARABONBA_PTR_SET_RVALUE(DBInfo_, DBInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media fingerprint library.
    std::shared_ptr<CreateDNADBResponseBodyDBInfo> DBInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

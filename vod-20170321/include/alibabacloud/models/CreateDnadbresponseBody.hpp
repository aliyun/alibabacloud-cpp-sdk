// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDNADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
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
    virtual bool empty() const override { this->DBId_ != nullptr
        && this->requestId_ != nullptr; };
    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline CreateDNADBResponseBody& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DBId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

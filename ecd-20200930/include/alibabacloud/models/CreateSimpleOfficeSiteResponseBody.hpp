// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMPLEOFFICESITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMPLEOFFICESITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateSimpleOfficeSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimpleOfficeSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimpleOfficeSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSimpleOfficeSiteResponseBody() = default ;
    CreateSimpleOfficeSiteResponseBody(const CreateSimpleOfficeSiteResponseBody &) = default ;
    CreateSimpleOfficeSiteResponseBody(CreateSimpleOfficeSiteResponseBody &&) = default ;
    CreateSimpleOfficeSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimpleOfficeSiteResponseBody() = default ;
    CreateSimpleOfficeSiteResponseBody& operator=(const CreateSimpleOfficeSiteResponseBody &) = default ;
    CreateSimpleOfficeSiteResponseBody& operator=(CreateSimpleOfficeSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->officeSiteId_ != nullptr
        && this->requestId_ != nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateSimpleOfficeSiteResponseBody& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSimpleOfficeSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

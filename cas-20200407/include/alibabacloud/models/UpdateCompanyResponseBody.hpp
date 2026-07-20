// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPANYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPANYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UpdateCompanyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCompanyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCompanyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateCompanyResponseBody() = default ;
    UpdateCompanyResponseBody(const UpdateCompanyResponseBody &) = default ;
    UpdateCompanyResponseBody(UpdateCompanyResponseBody &&) = default ;
    UpdateCompanyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCompanyResponseBody() = default ;
    UpdateCompanyResponseBody& operator=(const UpdateCompanyResponseBody &) = default ;
    UpdateCompanyResponseBody& operator=(UpdateCompanyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->requestId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline UpdateCompanyResponseBody& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCompanyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The company ID.
    shared_ptr<int64_t> companyId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

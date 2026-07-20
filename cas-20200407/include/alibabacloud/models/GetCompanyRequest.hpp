// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPANYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPANYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCompanyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompanyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompanyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
    };
    GetCompanyRequest() = default ;
    GetCompanyRequest(const GetCompanyRequest &) = default ;
    GetCompanyRequest(GetCompanyRequest &&) = default ;
    GetCompanyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompanyRequest() = default ;
    GetCompanyRequest& operator=(const GetCompanyRequest &) = default ;
    GetCompanyRequest& operator=(GetCompanyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline GetCompanyRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


  protected:
    // The company ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

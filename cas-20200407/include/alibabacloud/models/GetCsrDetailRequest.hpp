// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCSRDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCSRDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCsrDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCsrDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsrId, csrId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCsrDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsrId, csrId_);
    };
    GetCsrDetailRequest() = default ;
    GetCsrDetailRequest(const GetCsrDetailRequest &) = default ;
    GetCsrDetailRequest(GetCsrDetailRequest &&) = default ;
    GetCsrDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCsrDetailRequest() = default ;
    GetCsrDetailRequest& operator=(const GetCsrDetailRequest &) = default ;
    GetCsrDetailRequest& operator=(GetCsrDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csrId_ == nullptr; };
    // csrId Field Functions 
    bool hasCsrId() const { return this->csrId_ != nullptr;};
    void deleteCsrId() { this->csrId_ = nullptr;};
    inline int64_t csrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
    inline GetCsrDetailRequest& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


  protected:
    // The ID of the CSR.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> csrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDFINANCETAXDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDFINANCETAXDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindFinanceTaxDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindFinanceTaxDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KpId, kpId_);
    };
    friend void from_json(const Darabonba::Json& j, FindFinanceTaxDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KpId, kpId_);
    };
    FindFinanceTaxDetailRequest() = default ;
    FindFinanceTaxDetailRequest(const FindFinanceTaxDetailRequest &) = default ;
    FindFinanceTaxDetailRequest(FindFinanceTaxDetailRequest &&) = default ;
    FindFinanceTaxDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindFinanceTaxDetailRequest() = default ;
    FindFinanceTaxDetailRequest& operator=(const FindFinanceTaxDetailRequest &) = default ;
    FindFinanceTaxDetailRequest& operator=(FindFinanceTaxDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kpId_ == nullptr; };
    // kpId Field Functions 
    bool hasKpId() const { return this->kpId_ != nullptr;};
    void deleteKpId() { this->kpId_ = nullptr;};
    inline int64_t getKpId() const { DARABONBA_PTR_GET_DEFAULT(kpId_, 0L) };
    inline FindFinanceTaxDetailRequest& setKpId(int64_t kpId) { DARABONBA_PTR_SET_VALUE(kpId_, kpId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> kpId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

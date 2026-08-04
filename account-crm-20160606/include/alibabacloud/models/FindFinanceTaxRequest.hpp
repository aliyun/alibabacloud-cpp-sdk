// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDFINANCETAXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDFINANCETAXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindFinanceTaxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindFinanceTaxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HId, HId_);
      DARABONBA_PTR_TO_JSON(TaxVersion, taxVersion_);
    };
    friend void from_json(const Darabonba::Json& j, FindFinanceTaxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HId, HId_);
      DARABONBA_PTR_FROM_JSON(TaxVersion, taxVersion_);
    };
    FindFinanceTaxRequest() = default ;
    FindFinanceTaxRequest(const FindFinanceTaxRequest &) = default ;
    FindFinanceTaxRequest(FindFinanceTaxRequest &&) = default ;
    FindFinanceTaxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindFinanceTaxRequest() = default ;
    FindFinanceTaxRequest& operator=(const FindFinanceTaxRequest &) = default ;
    FindFinanceTaxRequest& operator=(FindFinanceTaxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->HId_ == nullptr
        && this->taxVersion_ == nullptr; };
    // HId Field Functions 
    bool hasHId() const { return this->HId_ != nullptr;};
    void deleteHId() { this->HId_ = nullptr;};
    inline int64_t getHId() const { DARABONBA_PTR_GET_DEFAULT(HId_, 0L) };
    inline FindFinanceTaxRequest& setHId(int64_t HId) { DARABONBA_PTR_SET_VALUE(HId_, HId) };


    // taxVersion Field Functions 
    bool hasTaxVersion() const { return this->taxVersion_ != nullptr;};
    void deleteTaxVersion() { this->taxVersion_ = nullptr;};
    inline string getTaxVersion() const { DARABONBA_PTR_GET_DEFAULT(taxVersion_, "") };
    inline FindFinanceTaxRequest& setTaxVersion(string taxVersion) { DARABONBA_PTR_SET_VALUE(taxVersion_, taxVersion) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> HId_ {};
    shared_ptr<string> taxVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif

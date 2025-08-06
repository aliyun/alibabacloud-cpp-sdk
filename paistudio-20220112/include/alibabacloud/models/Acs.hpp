// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACS_HPP_
#define ALIBABACLOUD_MODELS_ACS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ACS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ACS& obj) { 
      DARABONBA_PTR_TO_JSON(ACSQuotaId, ACSQuotaId_);
      DARABONBA_PTR_TO_JSON(AssociatedProducts, associatedProducts_);
    };
    friend void from_json(const Darabonba::Json& j, ACS& obj) { 
      DARABONBA_PTR_FROM_JSON(ACSQuotaId, ACSQuotaId_);
      DARABONBA_PTR_FROM_JSON(AssociatedProducts, associatedProducts_);
    };
    ACS() = default ;
    ACS(const ACS &) = default ;
    ACS(ACS &&) = default ;
    ACS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ACS() = default ;
    ACS& operator=(const ACS &) = default ;
    ACS& operator=(ACS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ACSQuotaId_ != nullptr
        && this->associatedProducts_ != nullptr; };
    // ACSQuotaId Field Functions 
    bool hasACSQuotaId() const { return this->ACSQuotaId_ != nullptr;};
    void deleteACSQuotaId() { this->ACSQuotaId_ = nullptr;};
    inline string ACSQuotaId() const { DARABONBA_PTR_GET_DEFAULT(ACSQuotaId_, "") };
    inline ACS& setACSQuotaId(string ACSQuotaId) { DARABONBA_PTR_SET_VALUE(ACSQuotaId_, ACSQuotaId) };


    // associatedProducts Field Functions 
    bool hasAssociatedProducts() const { return this->associatedProducts_ != nullptr;};
    void deleteAssociatedProducts() { this->associatedProducts_ = nullptr;};
    inline const vector<string> & associatedProducts() const { DARABONBA_PTR_GET_CONST(associatedProducts_, vector<string>) };
    inline vector<string> associatedProducts() { DARABONBA_PTR_GET(associatedProducts_, vector<string>) };
    inline ACS& setAssociatedProducts(const vector<string> & associatedProducts) { DARABONBA_PTR_SET_VALUE(associatedProducts_, associatedProducts) };
    inline ACS& setAssociatedProducts(vector<string> && associatedProducts) { DARABONBA_PTR_SET_RVALUE(associatedProducts_, associatedProducts) };


  protected:
    std::shared_ptr<string> ACSQuotaId_ = nullptr;
    std::shared_ptr<vector<string>> associatedProducts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

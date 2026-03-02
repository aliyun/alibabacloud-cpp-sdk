// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCRELATIONITEM_HPP_
#define ALIBABACLOUD_MODELS_PBCRELATIONITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcRelationItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcRelationItem& obj) { 
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(developer, developer_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, PbcRelationItem& obj) { 
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(developer, developer_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    PbcRelationItem() = default ;
    PbcRelationItem(const PbcRelationItem &) = default ;
    PbcRelationItem(PbcRelationItem &&) = default ;
    PbcRelationItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcRelationItem() = default ;
    PbcRelationItem& operator=(const PbcRelationItem &) = default ;
    PbcRelationItem& operator=(PbcRelationItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->company_ == nullptr
        && this->developer_ == nullptr && this->pbcName_ == nullptr && this->pbcVersion_ == nullptr && this->summary_ == nullptr; };
    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline PbcRelationItem& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // developer Field Functions 
    bool hasDeveloper() const { return this->developer_ != nullptr;};
    void deleteDeveloper() { this->developer_ = nullptr;};
    inline string getDeveloper() const { DARABONBA_PTR_GET_DEFAULT(developer_, "") };
    inline PbcRelationItem& setDeveloper(string developer) { DARABONBA_PTR_SET_VALUE(developer_, developer) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PbcRelationItem& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // pbcVersion Field Functions 
    bool hasPbcVersion() const { return this->pbcVersion_ != nullptr;};
    void deletePbcVersion() { this->pbcVersion_ = nullptr;};
    inline string getPbcVersion() const { DARABONBA_PTR_GET_DEFAULT(pbcVersion_, "") };
    inline PbcRelationItem& setPbcVersion(string pbcVersion) { DARABONBA_PTR_SET_VALUE(pbcVersion_, pbcVersion) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PbcRelationItem& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    shared_ptr<string> company_ {};
    shared_ptr<string> developer_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<string> pbcVersion_ {};
    shared_ptr<string> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

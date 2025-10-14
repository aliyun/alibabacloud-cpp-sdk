// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLAUDITINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLAUDITINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlAuditInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlAuditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlAuditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
    };
    DescribeSqlAuditInfoResponseBodyData() = default ;
    DescribeSqlAuditInfoResponseBodyData(const DescribeSqlAuditInfoResponseBodyData &) = default ;
    DescribeSqlAuditInfoResponseBodyData(DescribeSqlAuditInfoResponseBodyData &&) = default ;
    DescribeSqlAuditInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlAuditInfoResponseBodyData() = default ;
    DescribeSqlAuditInfoResponseBodyData& operator=(const DescribeSqlAuditInfoResponseBodyData &) = default ;
    DescribeSqlAuditInfoResponseBodyData& operator=(DescribeSqlAuditInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEnabled_ == nullptr
        && return this->SLSLogStore_ == nullptr && return this->SLSProject_ == nullptr; };
    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline bool isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, false) };
    inline DescribeSqlAuditInfoResponseBodyData& setIsEnabled(bool isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // SLSLogStore Field Functions 
    bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
    void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
    inline string SLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
    inline DescribeSqlAuditInfoResponseBodyData& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline DescribeSqlAuditInfoResponseBodyData& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


  protected:
    std::shared_ptr<bool> isEnabled_ = nullptr;
    std::shared_ptr<string> SLSLogStore_ = nullptr;
    std::shared_ptr<string> SLSProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

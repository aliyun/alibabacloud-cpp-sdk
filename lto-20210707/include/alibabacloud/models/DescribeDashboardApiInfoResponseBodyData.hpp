// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDAPIINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDAPIINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDashboardApiInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDashboardApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDashboardApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
    };
    DescribeDashboardApiInfoResponseBodyData() = default ;
    DescribeDashboardApiInfoResponseBodyData(const DescribeDashboardApiInfoResponseBodyData &) = default ;
    DescribeDashboardApiInfoResponseBodyData(DescribeDashboardApiInfoResponseBodyData &&) = default ;
    DescribeDashboardApiInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDashboardApiInfoResponseBodyData() = default ;
    DescribeDashboardApiInfoResponseBodyData& operator=(const DescribeDashboardApiInfoResponseBodyData &) = default ;
    DescribeDashboardApiInfoResponseBodyData& operator=(DescribeDashboardApiInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->usedCount_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int64_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0L) };
    inline DescribeDashboardApiInfoResponseBodyData& setAuthorizedCount(int64_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int64_t usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0L) };
    inline DescribeDashboardApiInfoResponseBodyData& setUsedCount(int64_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    std::shared_ptr<int64_t> authorizedCount_ = nullptr;
    std::shared_ptr<int64_t> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAccelerateTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAccelerateTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAccelerateTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ListEnterpriseAccelerateTargetsRequest() = default ;
    ListEnterpriseAccelerateTargetsRequest(const ListEnterpriseAccelerateTargetsRequest &) = default ;
    ListEnterpriseAccelerateTargetsRequest(ListEnterpriseAccelerateTargetsRequest &&) = default ;
    ListEnterpriseAccelerateTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAccelerateTargetsRequest() = default ;
    ListEnterpriseAccelerateTargetsRequest& operator=(const ListEnterpriseAccelerateTargetsRequest &) = default ;
    ListEnterpriseAccelerateTargetsRequest& operator=(ListEnterpriseAccelerateTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->eapId_ != nullptr && this->pageSize_ != nullptr && this->target_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListEnterpriseAccelerateTargetsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline ListEnterpriseAccelerateTargetsRequest& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListEnterpriseAccelerateTargetsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListEnterpriseAccelerateTargetsRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eapId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

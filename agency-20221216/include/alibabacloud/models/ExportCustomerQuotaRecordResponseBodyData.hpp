// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCUSTOMERQUOTARECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCUSTOMERQUOTARECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ExportCustomerQuotaRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCustomerQuotaRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCustomerQuotaRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ExportCustomerQuotaRecordResponseBodyData() = default ;
    ExportCustomerQuotaRecordResponseBodyData(const ExportCustomerQuotaRecordResponseBodyData &) = default ;
    ExportCustomerQuotaRecordResponseBodyData(ExportCustomerQuotaRecordResponseBodyData &&) = default ;
    ExportCustomerQuotaRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCustomerQuotaRecordResponseBodyData() = default ;
    ExportCustomerQuotaRecordResponseBodyData& operator=(const ExportCustomerQuotaRecordResponseBodyData &) = default ;
    ExportCustomerQuotaRecordResponseBodyData& operator=(ExportCustomerQuotaRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cost_ == nullptr
        && return this->id_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int32_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
    inline ExportCustomerQuotaRecordResponseBodyData& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportCustomerQuotaRecordResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // Estimated duration, in minutes.
    std::shared_ptr<int32_t> cost_ = nullptr;
    // ID of Export task
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif

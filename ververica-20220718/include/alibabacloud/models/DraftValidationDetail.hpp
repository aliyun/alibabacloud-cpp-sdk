// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRAFTVALIDATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DRAFTVALIDATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DraftMetaInfoErrorDetail.hpp>
#include <alibabacloud/models/ValidationErrorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DraftValidationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DraftValidationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(draftMetaInfoErrorDetails, draftMetaInfoErrorDetails_);
      DARABONBA_PTR_TO_JSON(sqlErrorDetail, sqlErrorDetail_);
      DARABONBA_PTR_TO_JSON(sqlValidationResult, sqlValidationResult_);
    };
    friend void from_json(const Darabonba::Json& j, DraftValidationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(draftMetaInfoErrorDetails, draftMetaInfoErrorDetails_);
      DARABONBA_PTR_FROM_JSON(sqlErrorDetail, sqlErrorDetail_);
      DARABONBA_PTR_FROM_JSON(sqlValidationResult, sqlValidationResult_);
    };
    DraftValidationDetail() = default ;
    DraftValidationDetail(const DraftValidationDetail &) = default ;
    DraftValidationDetail(DraftValidationDetail &&) = default ;
    DraftValidationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DraftValidationDetail() = default ;
    DraftValidationDetail& operator=(const DraftValidationDetail &) = default ;
    DraftValidationDetail& operator=(DraftValidationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftMetaInfoErrorDetails_ == nullptr
        && return this->sqlErrorDetail_ == nullptr && return this->sqlValidationResult_ == nullptr; };
    // draftMetaInfoErrorDetails Field Functions 
    bool hasDraftMetaInfoErrorDetails() const { return this->draftMetaInfoErrorDetails_ != nullptr;};
    void deleteDraftMetaInfoErrorDetails() { this->draftMetaInfoErrorDetails_ = nullptr;};
    inline const vector<DraftMetaInfoErrorDetail> & draftMetaInfoErrorDetails() const { DARABONBA_PTR_GET_CONST(draftMetaInfoErrorDetails_, vector<DraftMetaInfoErrorDetail>) };
    inline vector<DraftMetaInfoErrorDetail> draftMetaInfoErrorDetails() { DARABONBA_PTR_GET(draftMetaInfoErrorDetails_, vector<DraftMetaInfoErrorDetail>) };
    inline DraftValidationDetail& setDraftMetaInfoErrorDetails(const vector<DraftMetaInfoErrorDetail> & draftMetaInfoErrorDetails) { DARABONBA_PTR_SET_VALUE(draftMetaInfoErrorDetails_, draftMetaInfoErrorDetails) };
    inline DraftValidationDetail& setDraftMetaInfoErrorDetails(vector<DraftMetaInfoErrorDetail> && draftMetaInfoErrorDetails) { DARABONBA_PTR_SET_RVALUE(draftMetaInfoErrorDetails_, draftMetaInfoErrorDetails) };


    // sqlErrorDetail Field Functions 
    bool hasSqlErrorDetail() const { return this->sqlErrorDetail_ != nullptr;};
    void deleteSqlErrorDetail() { this->sqlErrorDetail_ = nullptr;};
    inline const ValidationErrorDetails & sqlErrorDetail() const { DARABONBA_PTR_GET_CONST(sqlErrorDetail_, ValidationErrorDetails) };
    inline ValidationErrorDetails sqlErrorDetail() { DARABONBA_PTR_GET(sqlErrorDetail_, ValidationErrorDetails) };
    inline DraftValidationDetail& setSqlErrorDetail(const ValidationErrorDetails & sqlErrorDetail) { DARABONBA_PTR_SET_VALUE(sqlErrorDetail_, sqlErrorDetail) };
    inline DraftValidationDetail& setSqlErrorDetail(ValidationErrorDetails && sqlErrorDetail) { DARABONBA_PTR_SET_RVALUE(sqlErrorDetail_, sqlErrorDetail) };


    // sqlValidationResult Field Functions 
    bool hasSqlValidationResult() const { return this->sqlValidationResult_ != nullptr;};
    void deleteSqlValidationResult() { this->sqlValidationResult_ = nullptr;};
    inline string sqlValidationResult() const { DARABONBA_PTR_GET_DEFAULT(sqlValidationResult_, "") };
    inline DraftValidationDetail& setSqlValidationResult(string sqlValidationResult) { DARABONBA_PTR_SET_VALUE(sqlValidationResult_, sqlValidationResult) };


  protected:
    std::shared_ptr<vector<DraftMetaInfoErrorDetail>> draftMetaInfoErrorDetails_ = nullptr;
    std::shared_ptr<ValidationErrorDetails> sqlErrorDetail_ = nullptr;
    std::shared_ptr<string> sqlValidationResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULTPRECHECKDETAILLISTPRECHECKDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULTPRECHECKDETAILLISTPRECHECKDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
    };
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList(const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList(GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList &&) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& operator=(const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& operator=(GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectRows_ != nullptr
        && this->SQL_ != nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int64_t affectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


  protected:
    // The estimated number of data rows to be affected.
    std::shared_ptr<int64_t> affectRows_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

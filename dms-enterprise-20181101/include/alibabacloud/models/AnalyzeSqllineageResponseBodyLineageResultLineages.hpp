// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTLINEAGES_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTLINEAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnalyzeSQLLineageResponseBodyLineageResultLineages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageResponseBodyLineageResultLineages& obj) { 
      DARABONBA_PTR_TO_JSON(Dst, dst_);
      DARABONBA_PTR_TO_JSON(LineageType, lineageType_);
      DARABONBA_PTR_TO_JSON(OperType, operType_);
      DARABONBA_PTR_TO_JSON(ProcessDetail, processDetail_);
      DARABONBA_PTR_TO_JSON(Src, src_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageResponseBodyLineageResultLineages& obj) { 
      DARABONBA_PTR_FROM_JSON(Dst, dst_);
      DARABONBA_PTR_FROM_JSON(LineageType, lineageType_);
      DARABONBA_PTR_FROM_JSON(OperType, operType_);
      DARABONBA_PTR_FROM_JSON(ProcessDetail, processDetail_);
      DARABONBA_PTR_FROM_JSON(Src, src_);
    };
    AnalyzeSQLLineageResponseBodyLineageResultLineages() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineages(const AnalyzeSQLLineageResponseBodyLineageResultLineages &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineages(AnalyzeSQLLineageResponseBodyLineageResultLineages &&) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageResponseBodyLineageResultLineages() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineages& operator=(const AnalyzeSQLLineageResponseBodyLineageResultLineages &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineages& operator=(AnalyzeSQLLineageResponseBodyLineageResultLineages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dst_ != nullptr
        && this->lineageType_ != nullptr && this->operType_ != nullptr && this->processDetail_ != nullptr && this->src_ != nullptr; };
    // dst Field Functions 
    bool hasDst() const { return this->dst_ != nullptr;};
    void deleteDst() { this->dst_ = nullptr;};
    inline string dst() const { DARABONBA_PTR_GET_DEFAULT(dst_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setDst(string dst) { DARABONBA_PTR_SET_VALUE(dst_, dst) };


    // lineageType Field Functions 
    bool hasLineageType() const { return this->lineageType_ != nullptr;};
    void deleteLineageType() { this->lineageType_ = nullptr;};
    inline string lineageType() const { DARABONBA_PTR_GET_DEFAULT(lineageType_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setLineageType(string lineageType) { DARABONBA_PTR_SET_VALUE(lineageType_, lineageType) };


    // operType Field Functions 
    bool hasOperType() const { return this->operType_ != nullptr;};
    void deleteOperType() { this->operType_ = nullptr;};
    inline string operType() const { DARABONBA_PTR_GET_DEFAULT(operType_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setOperType(string operType) { DARABONBA_PTR_SET_VALUE(operType_, operType) };


    // processDetail Field Functions 
    bool hasProcessDetail() const { return this->processDetail_ != nullptr;};
    void deleteProcessDetail() { this->processDetail_ = nullptr;};
    inline const Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail & processDetail() const { DARABONBA_PTR_GET_CONST(processDetail_, Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail) };
    inline Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail processDetail() { DARABONBA_PTR_GET(processDetail_, Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail) };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setProcessDetail(const Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail & processDetail) { DARABONBA_PTR_SET_VALUE(processDetail_, processDetail) };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setProcessDetail(Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail && processDetail) { DARABONBA_PTR_SET_RVALUE(processDetail_, processDetail) };


    // src Field Functions 
    bool hasSrc() const { return this->src_ != nullptr;};
    void deleteSrc() { this->src_ = nullptr;};
    inline string src() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineages& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


  protected:
    // The target.
    std::shared_ptr<string> dst_ = nullptr;
    // The type of the lineage. Valid values:
    // 
    // *   **FIELD_DEPEND_FIELD**: Fields depend on fields.
    // *   **TABLE_DEPEND_TABLE**: Tables depend on tables.
    // *   **FIELD_INFLU_TABLE**: Fields influence tables.
    // *   **FIELD_INFLU_FIELD**: Fields influence fields.
    // *   **FIELD_INFLU_TABLE**: Tables influence fields.
    // *   **FIELD_JOIN_FIELD**: Fields are associated with fields.
    std::shared_ptr<string> lineageType_ = nullptr;
    // The operation type of the SQL statement in which the data lineage is generated. For example, if the operation type is SELECT, the data lineage is generated from a SELECT statement.
    // 
    // >  This field is an extended field which has no practical use.
    std::shared_ptr<string> operType_ = nullptr;
    // The handling details. This parameter is returned only when LineageType is FIELD_DEPEND_FIELD.
    std::shared_ptr<Models::AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail> processDetail_ = nullptr;
    // The source.
    std::shared_ptr<string> src_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

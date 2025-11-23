// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULTRESULTSSCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULTRESULTSSCRIPTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts &&) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& operator=(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& operator=(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->opType_ == nullptr && return this->tableName_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The content of the SQL script.
    std::shared_ptr<string> content_ = nullptr;
    // The purpose of the SQL script. The value is set to AddIndex.
    std::shared_ptr<string> opType_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

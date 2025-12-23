// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMERGEDTABLERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMERGEDTABLERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GenerateMergedTableResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMergedTableResponseBodyResult& obj) { 
      DARABONBA_ANY_TO_JSON(fromTable, fromTable_);
      DARABONBA_ANY_TO_JSON(mergeTable, mergeTable_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMergedTableResponseBodyResult& obj) { 
      DARABONBA_ANY_FROM_JSON(fromTable, fromTable_);
      DARABONBA_ANY_FROM_JSON(mergeTable, mergeTable_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
    };
    GenerateMergedTableResponseBodyResult() = default ;
    GenerateMergedTableResponseBodyResult(const GenerateMergedTableResponseBodyResult &) = default ;
    GenerateMergedTableResponseBodyResult(GenerateMergedTableResponseBodyResult &&) = default ;
    GenerateMergedTableResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMergedTableResponseBodyResult() = default ;
    GenerateMergedTableResponseBodyResult& operator=(const GenerateMergedTableResponseBodyResult &) = default ;
    GenerateMergedTableResponseBodyResult& operator=(GenerateMergedTableResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromTable_ == nullptr
        && return this->mergeTable_ == nullptr && return this->primaryKey_ == nullptr; };
    // fromTable Field Functions 
    bool hasFromTable() const { return this->fromTable_ != nullptr;};
    void deleteFromTable() { this->fromTable_ = nullptr;};
    inline     const Darabonba::Json & fromTable() const { DARABONBA_GET(fromTable_) };
    Darabonba::Json & fromTable() { DARABONBA_GET(fromTable_) };
    inline GenerateMergedTableResponseBodyResult& setFromTable(const Darabonba::Json & fromTable) { DARABONBA_SET_VALUE(fromTable_, fromTable) };
    inline GenerateMergedTableResponseBodyResult& setFromTable(Darabonba::Json & fromTable) { DARABONBA_SET_RVALUE(fromTable_, fromTable) };


    // mergeTable Field Functions 
    bool hasMergeTable() const { return this->mergeTable_ != nullptr;};
    void deleteMergeTable() { this->mergeTable_ = nullptr;};
    inline     const Darabonba::Json & mergeTable() const { DARABONBA_GET(mergeTable_) };
    Darabonba::Json & mergeTable() { DARABONBA_GET(mergeTable_) };
    inline GenerateMergedTableResponseBodyResult& setMergeTable(const Darabonba::Json & mergeTable) { DARABONBA_SET_VALUE(mergeTable_, mergeTable) };
    inline GenerateMergedTableResponseBodyResult& setMergeTable(Darabonba::Json & mergeTable) { DARABONBA_SET_RVALUE(mergeTable_, mergeTable) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GenerateMergedTableResponseBodyResult& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


  protected:
    // The tables on which the JOIN operation is performed.
    Darabonba::Json fromTable_ = nullptr;
    // The wide table that is generated after the JOIN operation is performed on multiple tables.
    Darabonba::Json mergeTable_ = nullptr;
    // The primary key.
    std::shared_ptr<string> primaryKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTableResponseBodyDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    RecognizeTableResponseBodyData() = default ;
    RecognizeTableResponseBodyData(const RecognizeTableResponseBodyData &) = default ;
    RecognizeTableResponseBodyData(RecognizeTableResponseBodyData &&) = default ;
    RecognizeTableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableResponseBodyData() = default ;
    RecognizeTableResponseBodyData& operator=(const RecognizeTableResponseBodyData &) = default ;
    RecognizeTableResponseBodyData& operator=(RecognizeTableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileContent_ != nullptr
        && this->tables_ != nullptr; };
    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline string fileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
    inline RecognizeTableResponseBodyData& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::RecognizeTableResponseBodyDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::RecognizeTableResponseBodyDataTables>) };
    inline vector<Models::RecognizeTableResponseBodyDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::RecognizeTableResponseBodyDataTables>) };
    inline RecognizeTableResponseBodyData& setTables(const vector<Models::RecognizeTableResponseBodyDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline RecognizeTableResponseBodyData& setTables(vector<Models::RecognizeTableResponseBodyDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<string> fileContent_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTableResponseBodyDataTables>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenDocQaResultResponseBodyDataParseQaResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GenDocQaResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenDocQaResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentStatus, currentStatus_);
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(parseQaResults, parseQaResults_);
    };
    friend void from_json(const Darabonba::Json& j, GenDocQaResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentStatus, currentStatus_);
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(parseQaResults, parseQaResults_);
    };
    GenDocQaResultResponseBodyData() = default ;
    GenDocQaResultResponseBodyData(const GenDocQaResultResponseBodyData &) = default ;
    GenDocQaResultResponseBodyData(GenDocQaResultResponseBodyData &&) = default ;
    GenDocQaResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenDocQaResultResponseBodyData() = default ;
    GenDocQaResultResponseBodyData& operator=(const GenDocQaResultResponseBodyData &) = default ;
    GenDocQaResultResponseBodyData& operator=(GenDocQaResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentStatus_ != nullptr
        && this->docId_ != nullptr && this->libraryId_ != nullptr && this->parseQaResults_ != nullptr; };
    // currentStatus Field Functions 
    bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
    void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
    inline string currentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
    inline GenDocQaResultResponseBodyData& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GenDocQaResultResponseBodyData& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GenDocQaResultResponseBodyData& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // parseQaResults Field Functions 
    bool hasParseQaResults() const { return this->parseQaResults_ != nullptr;};
    void deleteParseQaResults() { this->parseQaResults_ = nullptr;};
    inline const vector<Models::GenDocQaResultResponseBodyDataParseQaResults> & parseQaResults() const { DARABONBA_PTR_GET_CONST(parseQaResults_, vector<Models::GenDocQaResultResponseBodyDataParseQaResults>) };
    inline vector<Models::GenDocQaResultResponseBodyDataParseQaResults> parseQaResults() { DARABONBA_PTR_GET(parseQaResults_, vector<Models::GenDocQaResultResponseBodyDataParseQaResults>) };
    inline GenDocQaResultResponseBodyData& setParseQaResults(const vector<Models::GenDocQaResultResponseBodyDataParseQaResults> & parseQaResults) { DARABONBA_PTR_SET_VALUE(parseQaResults_, parseQaResults) };
    inline GenDocQaResultResponseBodyData& setParseQaResults(vector<Models::GenDocQaResultResponseBodyDataParseQaResults> && parseQaResults) { DARABONBA_PTR_SET_RVALUE(parseQaResults_, parseQaResults) };


  protected:
    std::shared_ptr<string> currentStatus_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<vector<Models::GenDocQaResultResponseBodyDataParseQaResults>> parseQaResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

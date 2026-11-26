// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTHOTWORDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTHOTWORDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryScriptHotWordListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptHotWordListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotWord, hotWord_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptHotWordListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotWord, hotWord_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
    };
    QueryScriptHotWordListRequest() = default ;
    QueryScriptHotWordListRequest(const QueryScriptHotWordListRequest &) = default ;
    QueryScriptHotWordListRequest(QueryScriptHotWordListRequest &&) = default ;
    QueryScriptHotWordListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptHotWordListRequest() = default ;
    QueryScriptHotWordListRequest& operator=(const QueryScriptHotWordListRequest &) = default ;
    QueryScriptHotWordListRequest& operator=(QueryScriptHotWordListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotWord_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scriptRecordId_ == nullptr; };
    // hotWord Field Functions 
    bool hasHotWord() const { return this->hotWord_ != nullptr;};
    void deleteHotWord() { this->hotWord_ = nullptr;};
    inline string getHotWord() const { DARABONBA_PTR_GET_DEFAULT(hotWord_, "") };
    inline QueryScriptHotWordListRequest& setHotWord(string hotWord) { DARABONBA_PTR_SET_VALUE(hotWord_, hotWord) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryScriptHotWordListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryScriptHotWordListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline QueryScriptHotWordListRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


  protected:
    shared_ptr<string> hotWord_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> scriptRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

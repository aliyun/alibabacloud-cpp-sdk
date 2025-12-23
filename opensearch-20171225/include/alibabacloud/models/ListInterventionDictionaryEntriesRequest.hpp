// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(word, word_);
    };
    ListInterventionDictionaryEntriesRequest() = default ;
    ListInterventionDictionaryEntriesRequest(const ListInterventionDictionaryEntriesRequest &) = default ;
    ListInterventionDictionaryEntriesRequest(ListInterventionDictionaryEntriesRequest &&) = default ;
    ListInterventionDictionaryEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryEntriesRequest() = default ;
    ListInterventionDictionaryEntriesRequest& operator=(const ListInterventionDictionaryEntriesRequest &) = default ;
    ListInterventionDictionaryEntriesRequest& operator=(ListInterventionDictionaryEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->word_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInterventionDictionaryEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterventionDictionaryEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ListInterventionDictionaryEntriesRequest& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The intervention entry.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

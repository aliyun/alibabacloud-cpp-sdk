// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(types, types_);
    };
    ListInterventionDictionariesRequest() = default ;
    ListInterventionDictionariesRequest(const ListInterventionDictionariesRequest &) = default ;
    ListInterventionDictionariesRequest(ListInterventionDictionariesRequest &&) = default ;
    ListInterventionDictionariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionariesRequest() = default ;
    ListInterventionDictionariesRequest& operator=(const ListInterventionDictionariesRequest &) = default ;
    ListInterventionDictionariesRequest& operator=(ListInterventionDictionariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->types_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInterventionDictionariesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterventionDictionariesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string types() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ListInterventionDictionariesRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


  protected:
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the intervention dictionary. Valid values:
    // 
    // *   stopword: an intervention dictionary for stop word filtering
    // *   synonym: an intervention dictionary for synonym configuration
    // *   correction: an intervention dictionary for spelling correction
    // *   category_prediction: an intervention dictionary for category prediction
    // *   ner: an intervention dictionary for named entity recognition (NER)
    // *   term_weighting: an intervention dictionary for term weight analysis
    std::shared_ptr<string> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

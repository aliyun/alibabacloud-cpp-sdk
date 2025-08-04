// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchDatasetDocumentsResponseBodyDataDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SearchDatasetDocumentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatasetDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatasetDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
    };
    SearchDatasetDocumentsResponseBodyData() = default ;
    SearchDatasetDocumentsResponseBodyData(const SearchDatasetDocumentsResponseBodyData &) = default ;
    SearchDatasetDocumentsResponseBodyData(SearchDatasetDocumentsResponseBodyData &&) = default ;
    SearchDatasetDocumentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatasetDocumentsResponseBodyData() = default ;
    SearchDatasetDocumentsResponseBodyData& operator=(const SearchDatasetDocumentsResponseBodyData &) = default ;
    SearchDatasetDocumentsResponseBodyData& operator=(SearchDatasetDocumentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->documents_ != nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments>) };
    inline vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments>) };
    inline SearchDatasetDocumentsResponseBodyData& setDocuments(const vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline SearchDatasetDocumentsResponseBodyData& setDocuments(vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


  protected:
    std::shared_ptr<vector<Models::SearchDatasetDocumentsResponseBodyDataDocuments>> documents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

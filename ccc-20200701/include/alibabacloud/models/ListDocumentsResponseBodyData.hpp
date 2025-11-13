// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDocumentsResponseBodyDataSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListDocumentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDocumentsResponseBodyData() = default ;
    ListDocumentsResponseBodyData(const ListDocumentsResponseBodyData &) = default ;
    ListDocumentsResponseBodyData(ListDocumentsResponseBodyData &&) = default ;
    ListDocumentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsResponseBodyData() = default ;
    ListDocumentsResponseBodyData& operator=(const ListDocumentsResponseBodyData &) = default ;
    ListDocumentsResponseBodyData& operator=(ListDocumentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documents_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->schema_ == nullptr && return this->totalCount_ == nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Darabonba::Json> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> documents() { DARABONBA_PTR_GET(documents_, vector<Darabonba::Json>) };
    inline ListDocumentsResponseBodyData& setDocuments(const vector<Darabonba::Json> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline ListDocumentsResponseBodyData& setDocuments(vector<Darabonba::Json> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDocumentsResponseBodyData& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Models::ListDocumentsResponseBodyDataSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Models::ListDocumentsResponseBodyDataSchema) };
    inline Models::ListDocumentsResponseBodyDataSchema schema() { DARABONBA_PTR_GET(schema_, Models::ListDocumentsResponseBodyDataSchema) };
    inline ListDocumentsResponseBodyData& setSchema(const Models::ListDocumentsResponseBodyDataSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline ListDocumentsResponseBodyData& setSchema(Models::ListDocumentsResponseBodyDataSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDocumentsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> documents_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // scheme
    std::shared_ptr<Models::ListDocumentsResponseBodyDataSchema> schema_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

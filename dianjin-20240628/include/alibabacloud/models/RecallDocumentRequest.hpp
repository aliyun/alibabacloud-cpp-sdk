// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecallDocumentRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(rearrangement, rearrangement_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(rearrangement, rearrangement_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    RecallDocumentRequest() = default ;
    RecallDocumentRequest(const RecallDocumentRequest &) = default ;
    RecallDocumentRequest(RecallDocumentRequest &&) = default ;
    RecallDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentRequest() = default ;
    RecallDocumentRequest& operator=(const RecallDocumentRequest &) = default ;
    RecallDocumentRequest& operator=(RecallDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filters_ != nullptr
        && this->query_ != nullptr && this->rearrangement_ != nullptr && this->topK_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<RecallDocumentRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<RecallDocumentRequestFilters>) };
    inline vector<RecallDocumentRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<RecallDocumentRequestFilters>) };
    inline RecallDocumentRequest& setFilters(const vector<RecallDocumentRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline RecallDocumentRequest& setFilters(vector<RecallDocumentRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RecallDocumentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // rearrangement Field Functions 
    bool hasRearrangement() const { return this->rearrangement_ != nullptr;};
    void deleteRearrangement() { this->rearrangement_ = nullptr;};
    inline bool rearrangement() const { DARABONBA_PTR_GET_DEFAULT(rearrangement_, false) };
    inline RecallDocumentRequest& setRearrangement(bool rearrangement) { DARABONBA_PTR_SET_VALUE(rearrangement_, rearrangement) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RecallDocumentRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<vector<RecallDocumentRequestFilters>> filters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<bool> rearrangement_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

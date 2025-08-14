// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReportDefinitionsResponseBodyReportDefinitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListReportDefinitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportDefinitionsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(ReportDefinitions, reportDefinitions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportDefinitionsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(ReportDefinitions, reportDefinitions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListReportDefinitionsResponseBody() = default ;
    ListReportDefinitionsResponseBody(const ListReportDefinitionsResponseBody &) = default ;
    ListReportDefinitionsResponseBody(ListReportDefinitionsResponseBody &&) = default ;
    ListReportDefinitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportDefinitionsResponseBody() = default ;
    ListReportDefinitionsResponseBody& operator=(const ListReportDefinitionsResponseBody &) = default ;
    ListReportDefinitionsResponseBody& operator=(ListReportDefinitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metadata_ != nullptr
        && this->reportDefinitions_ != nullptr && this->requestId_ != nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListReportDefinitionsResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListReportDefinitionsResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // reportDefinitions Field Functions 
    bool hasReportDefinitions() const { return this->reportDefinitions_ != nullptr;};
    void deleteReportDefinitions() { this->reportDefinitions_ = nullptr;};
    inline const vector<ListReportDefinitionsResponseBodyReportDefinitions> & reportDefinitions() const { DARABONBA_PTR_GET_CONST(reportDefinitions_, vector<ListReportDefinitionsResponseBodyReportDefinitions>) };
    inline vector<ListReportDefinitionsResponseBodyReportDefinitions> reportDefinitions() { DARABONBA_PTR_GET(reportDefinitions_, vector<ListReportDefinitionsResponseBodyReportDefinitions>) };
    inline ListReportDefinitionsResponseBody& setReportDefinitions(const vector<ListReportDefinitionsResponseBodyReportDefinitions> & reportDefinitions) { DARABONBA_PTR_SET_VALUE(reportDefinitions_, reportDefinitions) };
    inline ListReportDefinitionsResponseBody& setReportDefinitions(vector<ListReportDefinitionsResponseBodyReportDefinitions> && reportDefinitions) { DARABONBA_PTR_SET_RVALUE(reportDefinitions_, reportDefinitions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReportDefinitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<vector<ListReportDefinitionsResponseBodyReportDefinitions>> reportDefinitions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

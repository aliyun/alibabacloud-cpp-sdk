// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDataServiceListResponseBodyResultDataContentFilter.hpp>
#include <vector>
#include <alibabacloud/models/QueryDataServiceListResponseBodyResultDataContentReturnFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBodyResultDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBodyResultDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(ReturnFields, returnFields_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBodyResultDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(ReturnFields, returnFields_);
    };
    QueryDataServiceListResponseBodyResultDataContent() = default ;
    QueryDataServiceListResponseBodyResultDataContent(const QueryDataServiceListResponseBodyResultDataContent &) = default ;
    QueryDataServiceListResponseBodyResultDataContent(QueryDataServiceListResponseBodyResultDataContent &&) = default ;
    QueryDataServiceListResponseBodyResultDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBodyResultDataContent() = default ;
    QueryDataServiceListResponseBodyResultDataContent& operator=(const QueryDataServiceListResponseBodyResultDataContent &) = default ;
    QueryDataServiceListResponseBodyResultDataContent& operator=(QueryDataServiceListResponseBodyResultDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && return this->cubeName_ == nullptr && return this->detail_ == nullptr && return this->filter_ == nullptr && return this->returnFields_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryDataServiceListResponseBodyResultDataContent& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // cubeName Field Functions 
    bool hasCubeName() const { return this->cubeName_ != nullptr;};
    void deleteCubeName() { this->cubeName_ = nullptr;};
    inline string cubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
    inline QueryDataServiceListResponseBodyResultDataContent& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline bool detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
    inline QueryDataServiceListResponseBodyResultDataContent& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::QueryDataServiceListResponseBodyResultDataContentFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::QueryDataServiceListResponseBodyResultDataContentFilter) };
    inline Models::QueryDataServiceListResponseBodyResultDataContentFilter filter() { DARABONBA_PTR_GET(filter_, Models::QueryDataServiceListResponseBodyResultDataContentFilter) };
    inline QueryDataServiceListResponseBodyResultDataContent& setFilter(const Models::QueryDataServiceListResponseBodyResultDataContentFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline QueryDataServiceListResponseBodyResultDataContent& setFilter(Models::QueryDataServiceListResponseBodyResultDataContentFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // returnFields Field Functions 
    bool hasReturnFields() const { return this->returnFields_ != nullptr;};
    void deleteReturnFields() { this->returnFields_ = nullptr;};
    inline const vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields> & returnFields() const { DARABONBA_PTR_GET_CONST(returnFields_, vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields>) };
    inline vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields> returnFields() { DARABONBA_PTR_GET(returnFields_, vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields>) };
    inline QueryDataServiceListResponseBodyResultDataContent& setReturnFields(const vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields> & returnFields) { DARABONBA_PTR_SET_VALUE(returnFields_, returnFields) };
    inline QueryDataServiceListResponseBodyResultDataContent& setReturnFields(vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields> && returnFields) { DARABONBA_PTR_SET_RVALUE(returnFields_, returnFields) };


  protected:
    // Cube identifier ID.
    std::shared_ptr<string> cubeId_ = nullptr;
    // Dataset name.
    std::shared_ptr<string> cubeName_ = nullptr;
    // Detail or Summary
    std::shared_ptr<bool> detail_ = nullptr;
    // Request parameter information.
    std::shared_ptr<Models::QueryDataServiceListResponseBodyResultDataContentFilter> filter_ = nullptr;
    // Return information.
    std::shared_ptr<vector<Models::QueryDataServiceListResponseBodyResultDataContentReturnFields>> returnFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

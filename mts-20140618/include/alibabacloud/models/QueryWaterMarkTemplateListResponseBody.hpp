// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWATERMARKTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWATERMARKTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryWaterMarkTemplateListResponseBodyNonExistWids.hpp>
#include <alibabacloud/models/QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryWaterMarkTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWaterMarkTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistWids, nonExistWids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplateList, waterMarkTemplateList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWaterMarkTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistWids, nonExistWids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplateList, waterMarkTemplateList_);
    };
    QueryWaterMarkTemplateListResponseBody() = default ;
    QueryWaterMarkTemplateListResponseBody(const QueryWaterMarkTemplateListResponseBody &) = default ;
    QueryWaterMarkTemplateListResponseBody(QueryWaterMarkTemplateListResponseBody &&) = default ;
    QueryWaterMarkTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWaterMarkTemplateListResponseBody() = default ;
    QueryWaterMarkTemplateListResponseBody& operator=(const QueryWaterMarkTemplateListResponseBody &) = default ;
    QueryWaterMarkTemplateListResponseBody& operator=(QueryWaterMarkTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistWids_ == nullptr
        && return this->requestId_ == nullptr && return this->waterMarkTemplateList_ == nullptr; };
    // nonExistWids Field Functions 
    bool hasNonExistWids() const { return this->nonExistWids_ != nullptr;};
    void deleteNonExistWids() { this->nonExistWids_ = nullptr;};
    inline const QueryWaterMarkTemplateListResponseBodyNonExistWids & nonExistWids() const { DARABONBA_PTR_GET_CONST(nonExistWids_, QueryWaterMarkTemplateListResponseBodyNonExistWids) };
    inline QueryWaterMarkTemplateListResponseBodyNonExistWids nonExistWids() { DARABONBA_PTR_GET(nonExistWids_, QueryWaterMarkTemplateListResponseBodyNonExistWids) };
    inline QueryWaterMarkTemplateListResponseBody& setNonExistWids(const QueryWaterMarkTemplateListResponseBodyNonExistWids & nonExistWids) { DARABONBA_PTR_SET_VALUE(nonExistWids_, nonExistWids) };
    inline QueryWaterMarkTemplateListResponseBody& setNonExistWids(QueryWaterMarkTemplateListResponseBodyNonExistWids && nonExistWids) { DARABONBA_PTR_SET_RVALUE(nonExistWids_, nonExistWids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryWaterMarkTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waterMarkTemplateList Field Functions 
    bool hasWaterMarkTemplateList() const { return this->waterMarkTemplateList_ != nullptr;};
    void deleteWaterMarkTemplateList() { this->waterMarkTemplateList_ = nullptr;};
    inline const QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList & waterMarkTemplateList() const { DARABONBA_PTR_GET_CONST(waterMarkTemplateList_, QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList) };
    inline QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList waterMarkTemplateList() { DARABONBA_PTR_GET(waterMarkTemplateList_, QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList) };
    inline QueryWaterMarkTemplateListResponseBody& setWaterMarkTemplateList(const QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList & waterMarkTemplateList) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateList_, waterMarkTemplateList) };
    inline QueryWaterMarkTemplateListResponseBody& setWaterMarkTemplateList(QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList && waterMarkTemplateList) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplateList_, waterMarkTemplateList) };


  protected:
    // The IDs of the templates that do not exist.
    std::shared_ptr<QueryWaterMarkTemplateListResponseBodyNonExistWids> nonExistWids_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the watermark templates.
    std::shared_ptr<QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList> waterMarkTemplateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWATERMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWATERMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWatermarkResponseBodyWatermarkInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListWatermarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWatermarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WatermarkInfos, watermarkInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListWatermarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfos, watermarkInfos_);
    };
    ListWatermarkResponseBody() = default ;
    ListWatermarkResponseBody(const ListWatermarkResponseBody &) = default ;
    ListWatermarkResponseBody(ListWatermarkResponseBody &&) = default ;
    ListWatermarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWatermarkResponseBody() = default ;
    ListWatermarkResponseBody& operator=(const ListWatermarkResponseBody &) = default ;
    ListWatermarkResponseBody& operator=(ListWatermarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->watermarkInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWatermarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermarkInfos Field Functions 
    bool hasWatermarkInfos() const { return this->watermarkInfos_ != nullptr;};
    void deleteWatermarkInfos() { this->watermarkInfos_ = nullptr;};
    inline const vector<ListWatermarkResponseBodyWatermarkInfos> & watermarkInfos() const { DARABONBA_PTR_GET_CONST(watermarkInfos_, vector<ListWatermarkResponseBodyWatermarkInfos>) };
    inline vector<ListWatermarkResponseBodyWatermarkInfos> watermarkInfos() { DARABONBA_PTR_GET(watermarkInfos_, vector<ListWatermarkResponseBodyWatermarkInfos>) };
    inline ListWatermarkResponseBody& setWatermarkInfos(const vector<ListWatermarkResponseBodyWatermarkInfos> & watermarkInfos) { DARABONBA_PTR_SET_VALUE(watermarkInfos_, watermarkInfos) };
    inline ListWatermarkResponseBody& setWatermarkInfos(vector<ListWatermarkResponseBodyWatermarkInfos> && watermarkInfos) { DARABONBA_PTR_SET_RVALUE(watermarkInfos_, watermarkInfos) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the watermark template.
    std::shared_ptr<vector<ListWatermarkResponseBodyWatermarkInfos>> watermarkInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

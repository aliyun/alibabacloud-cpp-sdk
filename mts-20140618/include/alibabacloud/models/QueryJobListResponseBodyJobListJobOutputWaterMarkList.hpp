// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputWaterMarkList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_TO_JSON(WaterMark, waterMark_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_FROM_JSON(WaterMark, waterMark_);
    };
    QueryJobListResponseBodyJobListJobOutputWaterMarkList() = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkList(const QueryJobListResponseBodyJobListJobOutputWaterMarkList &) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkList(QueryJobListResponseBodyJobListJobOutputWaterMarkList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputWaterMarkList() = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkList& operator=(const QueryJobListResponseBodyJobListJobOutputWaterMarkList &) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkList& operator=(QueryJobListResponseBodyJobListJobOutputWaterMarkList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->waterMark_ == nullptr; };
    // waterMark Field Functions 
    bool hasWaterMark() const { return this->waterMark_ != nullptr;};
    void deleteWaterMark() { this->waterMark_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark> & waterMark() const { DARABONBA_PTR_GET_CONST(waterMark_, vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark> waterMark() { DARABONBA_PTR_GET(waterMark_, vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark>) };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkList& setWaterMark(const vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark> & waterMark) { DARABONBA_PTR_SET_VALUE(waterMark_, waterMark) };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkList& setWaterMark(vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark> && waterMark) { DARABONBA_PTR_SET_RVALUE(waterMark_, waterMark) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark>> waterMark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

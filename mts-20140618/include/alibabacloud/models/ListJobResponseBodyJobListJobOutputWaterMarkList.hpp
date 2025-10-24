// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputWaterMarkList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_TO_JSON(WaterMark, waterMark_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputWaterMarkList& obj) { 
      DARABONBA_PTR_FROM_JSON(WaterMark, waterMark_);
    };
    ListJobResponseBodyJobListJobOutputWaterMarkList() = default ;
    ListJobResponseBodyJobListJobOutputWaterMarkList(const ListJobResponseBodyJobListJobOutputWaterMarkList &) = default ;
    ListJobResponseBodyJobListJobOutputWaterMarkList(ListJobResponseBodyJobListJobOutputWaterMarkList &&) = default ;
    ListJobResponseBodyJobListJobOutputWaterMarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputWaterMarkList() = default ;
    ListJobResponseBodyJobListJobOutputWaterMarkList& operator=(const ListJobResponseBodyJobListJobOutputWaterMarkList &) = default ;
    ListJobResponseBodyJobListJobOutputWaterMarkList& operator=(ListJobResponseBodyJobListJobOutputWaterMarkList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->waterMark_ == nullptr; };
    // waterMark Field Functions 
    bool hasWaterMark() const { return this->waterMark_ != nullptr;};
    void deleteWaterMark() { this->waterMark_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark> & waterMark() const { DARABONBA_PTR_GET_CONST(waterMark_, vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark> waterMark() { DARABONBA_PTR_GET(waterMark_, vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark>) };
    inline ListJobResponseBodyJobListJobOutputWaterMarkList& setWaterMark(const vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark> & waterMark) { DARABONBA_PTR_SET_VALUE(waterMark_, waterMark) };
    inline ListJobResponseBodyJobListJobOutputWaterMarkList& setWaterMark(vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark> && waterMark) { DARABONBA_PTR_SET_RVALUE(waterMark_, waterMark) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputWaterMarkListWaterMark>> waterMark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

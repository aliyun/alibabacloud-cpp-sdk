// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseClusterResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseClusterResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(HbaseScore, hbaseScore_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseClusterResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(HbaseScore, hbaseScore_);
    };
    GetDoctorHBaseClusterResponseBodyDataAnalysis() = default ;
    GetDoctorHBaseClusterResponseBodyDataAnalysis(const GetDoctorHBaseClusterResponseBodyDataAnalysis &) = default ;
    GetDoctorHBaseClusterResponseBodyDataAnalysis(GetDoctorHBaseClusterResponseBodyDataAnalysis &&) = default ;
    GetDoctorHBaseClusterResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseClusterResponseBodyDataAnalysis() = default ;
    GetDoctorHBaseClusterResponseBodyDataAnalysis& operator=(const GetDoctorHBaseClusterResponseBodyDataAnalysis &) = default ;
    GetDoctorHBaseClusterResponseBodyDataAnalysis& operator=(GetDoctorHBaseClusterResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hbaseScore_ == nullptr; };
    // hbaseScore Field Functions 
    bool hasHbaseScore() const { return this->hbaseScore_ != nullptr;};
    void deleteHbaseScore() { this->hbaseScore_ = nullptr;};
    inline int32_t hbaseScore() const { DARABONBA_PTR_GET_DEFAULT(hbaseScore_, 0) };
    inline GetDoctorHBaseClusterResponseBodyDataAnalysis& setHbaseScore(int32_t hbaseScore) { DARABONBA_PTR_SET_VALUE(hbaseScore_, hbaseScore) };


  protected:
    // The overall score of the HBase cluster.
    std::shared_ptr<int32_t> hbaseScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

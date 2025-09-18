// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSClusterResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSClusterResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(HdfsScore, hdfsScore_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSClusterResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(HdfsScore, hdfsScore_);
    };
    GetDoctorHDFSClusterResponseBodyDataAnalysis() = default ;
    GetDoctorHDFSClusterResponseBodyDataAnalysis(const GetDoctorHDFSClusterResponseBodyDataAnalysis &) = default ;
    GetDoctorHDFSClusterResponseBodyDataAnalysis(GetDoctorHDFSClusterResponseBodyDataAnalysis &&) = default ;
    GetDoctorHDFSClusterResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSClusterResponseBodyDataAnalysis() = default ;
    GetDoctorHDFSClusterResponseBodyDataAnalysis& operator=(const GetDoctorHDFSClusterResponseBodyDataAnalysis &) = default ;
    GetDoctorHDFSClusterResponseBodyDataAnalysis& operator=(GetDoctorHDFSClusterResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hdfsScore_ != nullptr; };
    // hdfsScore Field Functions 
    bool hasHdfsScore() const { return this->hdfsScore_ != nullptr;};
    void deleteHdfsScore() { this->hdfsScore_ = nullptr;};
    inline int32_t hdfsScore() const { DARABONBA_PTR_GET_DEFAULT(hdfsScore_, 0) };
    inline GetDoctorHDFSClusterResponseBodyDataAnalysis& setHdfsScore(int32_t hdfsScore) { DARABONBA_PTR_SET_VALUE(hdfsScore_, hdfsScore) };


  protected:
    // The overall score of HDFS storage resources.
    std::shared_ptr<int32_t> hdfsScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

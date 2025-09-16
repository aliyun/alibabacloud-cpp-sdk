// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTEND_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTEND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultExtendHdfs.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultExtendOdps.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultExtendOss.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultExtendSaro.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultExtend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultExtend& obj) { 
      DARABONBA_PTR_TO_JSON(hdfs, hdfs_);
      DARABONBA_PTR_TO_JSON(odps, odps_);
      DARABONBA_PTR_TO_JSON(oss, oss_);
      DARABONBA_PTR_TO_JSON(saro, saro_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultExtend& obj) { 
      DARABONBA_PTR_FROM_JSON(hdfs, hdfs_);
      DARABONBA_PTR_FROM_JSON(odps, odps_);
      DARABONBA_PTR_FROM_JSON(oss, oss_);
      DARABONBA_PTR_FROM_JSON(saro, saro_);
    };
    GetDataSourceDeployResponseBodyResultExtend() = default ;
    GetDataSourceDeployResponseBodyResultExtend(const GetDataSourceDeployResponseBodyResultExtend &) = default ;
    GetDataSourceDeployResponseBodyResultExtend(GetDataSourceDeployResponseBodyResultExtend &&) = default ;
    GetDataSourceDeployResponseBodyResultExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultExtend() = default ;
    GetDataSourceDeployResponseBodyResultExtend& operator=(const GetDataSourceDeployResponseBodyResultExtend &) = default ;
    GetDataSourceDeployResponseBodyResultExtend& operator=(GetDataSourceDeployResponseBodyResultExtend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hdfs_ != nullptr
        && this->odps_ != nullptr && this->oss_ != nullptr && this->saro_ != nullptr; };
    // hdfs Field Functions 
    bool hasHdfs() const { return this->hdfs_ != nullptr;};
    void deleteHdfs() { this->hdfs_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultExtendHdfs & hdfs() const { DARABONBA_PTR_GET_CONST(hdfs_, Models::GetDataSourceDeployResponseBodyResultExtendHdfs) };
    inline Models::GetDataSourceDeployResponseBodyResultExtendHdfs hdfs() { DARABONBA_PTR_GET(hdfs_, Models::GetDataSourceDeployResponseBodyResultExtendHdfs) };
    inline GetDataSourceDeployResponseBodyResultExtend& setHdfs(const Models::GetDataSourceDeployResponseBodyResultExtendHdfs & hdfs) { DARABONBA_PTR_SET_VALUE(hdfs_, hdfs) };
    inline GetDataSourceDeployResponseBodyResultExtend& setHdfs(Models::GetDataSourceDeployResponseBodyResultExtendHdfs && hdfs) { DARABONBA_PTR_SET_RVALUE(hdfs_, hdfs) };


    // odps Field Functions 
    bool hasOdps() const { return this->odps_ != nullptr;};
    void deleteOdps() { this->odps_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultExtendOdps & odps() const { DARABONBA_PTR_GET_CONST(odps_, Models::GetDataSourceDeployResponseBodyResultExtendOdps) };
    inline Models::GetDataSourceDeployResponseBodyResultExtendOdps odps() { DARABONBA_PTR_GET(odps_, Models::GetDataSourceDeployResponseBodyResultExtendOdps) };
    inline GetDataSourceDeployResponseBodyResultExtend& setOdps(const Models::GetDataSourceDeployResponseBodyResultExtendOdps & odps) { DARABONBA_PTR_SET_VALUE(odps_, odps) };
    inline GetDataSourceDeployResponseBodyResultExtend& setOdps(Models::GetDataSourceDeployResponseBodyResultExtendOdps && odps) { DARABONBA_PTR_SET_RVALUE(odps_, odps) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultExtendOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::GetDataSourceDeployResponseBodyResultExtendOss) };
    inline Models::GetDataSourceDeployResponseBodyResultExtendOss oss() { DARABONBA_PTR_GET(oss_, Models::GetDataSourceDeployResponseBodyResultExtendOss) };
    inline GetDataSourceDeployResponseBodyResultExtend& setOss(const Models::GetDataSourceDeployResponseBodyResultExtendOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline GetDataSourceDeployResponseBodyResultExtend& setOss(Models::GetDataSourceDeployResponseBodyResultExtendOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


    // saro Field Functions 
    bool hasSaro() const { return this->saro_ != nullptr;};
    void deleteSaro() { this->saro_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultExtendSaro & saro() const { DARABONBA_PTR_GET_CONST(saro_, Models::GetDataSourceDeployResponseBodyResultExtendSaro) };
    inline Models::GetDataSourceDeployResponseBodyResultExtendSaro saro() { DARABONBA_PTR_GET(saro_, Models::GetDataSourceDeployResponseBodyResultExtendSaro) };
    inline GetDataSourceDeployResponseBodyResultExtend& setSaro(const Models::GetDataSourceDeployResponseBodyResultExtendSaro & saro) { DARABONBA_PTR_SET_VALUE(saro_, saro) };
    inline GetDataSourceDeployResponseBodyResultExtend& setSaro(Models::GetDataSourceDeployResponseBodyResultExtendSaro && saro) { DARABONBA_PTR_SET_RVALUE(saro_, saro) };


  protected:
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultExtendHdfs> hdfs_ = nullptr;
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultExtendOdps> odps_ = nullptr;
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultExtendOss> oss_ = nullptr;
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultExtendSaro> saro_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

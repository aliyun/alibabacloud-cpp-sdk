// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTEND_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTEND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestExtendHdfs.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestExtendOdps.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestExtendOss.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestExtendSaro.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyDataSourceDeployRequestExtend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceDeployRequestExtend& obj) { 
      DARABONBA_PTR_TO_JSON(hdfs, hdfs_);
      DARABONBA_PTR_TO_JSON(odps, odps_);
      DARABONBA_PTR_TO_JSON(oss, oss_);
      DARABONBA_PTR_TO_JSON(saro, saro_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceDeployRequestExtend& obj) { 
      DARABONBA_PTR_FROM_JSON(hdfs, hdfs_);
      DARABONBA_PTR_FROM_JSON(odps, odps_);
      DARABONBA_PTR_FROM_JSON(oss, oss_);
      DARABONBA_PTR_FROM_JSON(saro, saro_);
    };
    ModifyDataSourceDeployRequestExtend() = default ;
    ModifyDataSourceDeployRequestExtend(const ModifyDataSourceDeployRequestExtend &) = default ;
    ModifyDataSourceDeployRequestExtend(ModifyDataSourceDeployRequestExtend &&) = default ;
    ModifyDataSourceDeployRequestExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceDeployRequestExtend() = default ;
    ModifyDataSourceDeployRequestExtend& operator=(const ModifyDataSourceDeployRequestExtend &) = default ;
    ModifyDataSourceDeployRequestExtend& operator=(ModifyDataSourceDeployRequestExtend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hdfs_ != nullptr
        && this->odps_ != nullptr && this->oss_ != nullptr && this->saro_ != nullptr; };
    // hdfs Field Functions 
    bool hasHdfs() const { return this->hdfs_ != nullptr;};
    void deleteHdfs() { this->hdfs_ = nullptr;};
    inline const Models::ModifyDataSourceDeployRequestExtendHdfs & hdfs() const { DARABONBA_PTR_GET_CONST(hdfs_, Models::ModifyDataSourceDeployRequestExtendHdfs) };
    inline Models::ModifyDataSourceDeployRequestExtendHdfs hdfs() { DARABONBA_PTR_GET(hdfs_, Models::ModifyDataSourceDeployRequestExtendHdfs) };
    inline ModifyDataSourceDeployRequestExtend& setHdfs(const Models::ModifyDataSourceDeployRequestExtendHdfs & hdfs) { DARABONBA_PTR_SET_VALUE(hdfs_, hdfs) };
    inline ModifyDataSourceDeployRequestExtend& setHdfs(Models::ModifyDataSourceDeployRequestExtendHdfs && hdfs) { DARABONBA_PTR_SET_RVALUE(hdfs_, hdfs) };


    // odps Field Functions 
    bool hasOdps() const { return this->odps_ != nullptr;};
    void deleteOdps() { this->odps_ = nullptr;};
    inline const Models::ModifyDataSourceDeployRequestExtendOdps & odps() const { DARABONBA_PTR_GET_CONST(odps_, Models::ModifyDataSourceDeployRequestExtendOdps) };
    inline Models::ModifyDataSourceDeployRequestExtendOdps odps() { DARABONBA_PTR_GET(odps_, Models::ModifyDataSourceDeployRequestExtendOdps) };
    inline ModifyDataSourceDeployRequestExtend& setOdps(const Models::ModifyDataSourceDeployRequestExtendOdps & odps) { DARABONBA_PTR_SET_VALUE(odps_, odps) };
    inline ModifyDataSourceDeployRequestExtend& setOdps(Models::ModifyDataSourceDeployRequestExtendOdps && odps) { DARABONBA_PTR_SET_RVALUE(odps_, odps) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::ModifyDataSourceDeployRequestExtendOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::ModifyDataSourceDeployRequestExtendOss) };
    inline Models::ModifyDataSourceDeployRequestExtendOss oss() { DARABONBA_PTR_GET(oss_, Models::ModifyDataSourceDeployRequestExtendOss) };
    inline ModifyDataSourceDeployRequestExtend& setOss(const Models::ModifyDataSourceDeployRequestExtendOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline ModifyDataSourceDeployRequestExtend& setOss(Models::ModifyDataSourceDeployRequestExtendOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


    // saro Field Functions 
    bool hasSaro() const { return this->saro_ != nullptr;};
    void deleteSaro() { this->saro_ = nullptr;};
    inline const Models::ModifyDataSourceDeployRequestExtendSaro & saro() const { DARABONBA_PTR_GET_CONST(saro_, Models::ModifyDataSourceDeployRequestExtendSaro) };
    inline Models::ModifyDataSourceDeployRequestExtendSaro saro() { DARABONBA_PTR_GET(saro_, Models::ModifyDataSourceDeployRequestExtendSaro) };
    inline ModifyDataSourceDeployRequestExtend& setSaro(const Models::ModifyDataSourceDeployRequestExtendSaro & saro) { DARABONBA_PTR_SET_VALUE(saro_, saro) };
    inline ModifyDataSourceDeployRequestExtend& setSaro(Models::ModifyDataSourceDeployRequestExtendSaro && saro) { DARABONBA_PTR_SET_RVALUE(saro_, saro) };


  protected:
    // The information about the Apsara File Storage for HDFS data source.
    std::shared_ptr<Models::ModifyDataSourceDeployRequestExtendHdfs> hdfs_ = nullptr;
    // The information about the MaxCompute data source.
    std::shared_ptr<Models::ModifyDataSourceDeployRequestExtendOdps> odps_ = nullptr;
    // The information about the OSS data source.
    std::shared_ptr<Models::ModifyDataSourceDeployRequestExtendOss> oss_ = nullptr;
    // The information about the SARO data source. This parameter is applicable to the SARO data source used in the intranet of Alibaba Group.
    std::shared_ptr<Models::ModifyDataSourceDeployRequestExtendSaro> saro_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

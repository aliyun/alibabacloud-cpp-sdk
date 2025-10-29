// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetPolarFsFileQuotaRequestFilePathQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SetPolarFsFileQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolarFsFileQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilePathQuotas, filePathQuotas_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolarFsFileQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilePathQuotas, filePathQuotas_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    SetPolarFsFileQuotaRequest() = default ;
    SetPolarFsFileQuotaRequest(const SetPolarFsFileQuotaRequest &) = default ;
    SetPolarFsFileQuotaRequest(SetPolarFsFileQuotaRequest &&) = default ;
    SetPolarFsFileQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolarFsFileQuotaRequest() = default ;
    SetPolarFsFileQuotaRequest& operator=(const SetPolarFsFileQuotaRequest &) = default ;
    SetPolarFsFileQuotaRequest& operator=(SetPolarFsFileQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->filePathQuotas_ == nullptr && return this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SetPolarFsFileQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filePathQuotas Field Functions 
    bool hasFilePathQuotas() const { return this->filePathQuotas_ != nullptr;};
    void deleteFilePathQuotas() { this->filePathQuotas_ = nullptr;};
    inline const vector<SetPolarFsFileQuotaRequestFilePathQuotas> & filePathQuotas() const { DARABONBA_PTR_GET_CONST(filePathQuotas_, vector<SetPolarFsFileQuotaRequestFilePathQuotas>) };
    inline vector<SetPolarFsFileQuotaRequestFilePathQuotas> filePathQuotas() { DARABONBA_PTR_GET(filePathQuotas_, vector<SetPolarFsFileQuotaRequestFilePathQuotas>) };
    inline SetPolarFsFileQuotaRequest& setFilePathQuotas(const vector<SetPolarFsFileQuotaRequestFilePathQuotas> & filePathQuotas) { DARABONBA_PTR_SET_VALUE(filePathQuotas_, filePathQuotas) };
    inline SetPolarFsFileQuotaRequest& setFilePathQuotas(vector<SetPolarFsFileQuotaRequestFilePathQuotas> && filePathQuotas) { DARABONBA_PTR_SET_RVALUE(filePathQuotas_, filePathQuotas) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string polarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline SetPolarFsFileQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SetPolarFsFileQuotaRequestFilePathQuotas>> filePathQuotas_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> polarFsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

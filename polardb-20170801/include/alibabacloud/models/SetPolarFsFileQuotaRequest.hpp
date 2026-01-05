// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class FilePathQuotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilePathQuotas& obj) { 
        DARABONBA_PTR_TO_JSON(FilePathId, filePathId_);
        DARABONBA_PTR_TO_JSON(MaxDepth, maxDepth_);
        DARABONBA_PTR_TO_JSON(QuotaIds, quotaIds_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, FilePathQuotas& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePathId, filePathId_);
        DARABONBA_PTR_FROM_JSON(MaxDepth, maxDepth_);
        DARABONBA_PTR_FROM_JSON(QuotaIds, quotaIds_);
        DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      };
      FilePathQuotas() = default ;
      FilePathQuotas(const FilePathQuotas &) = default ;
      FilePathQuotas(FilePathQuotas &&) = default ;
      FilePathQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilePathQuotas() = default ;
      FilePathQuotas& operator=(const FilePathQuotas &) = default ;
      FilePathQuotas& operator=(FilePathQuotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filePathId_ == nullptr
        && this->maxDepth_ == nullptr && this->quotaIds_ == nullptr && this->strategy_ == nullptr; };
      // filePathId Field Functions 
      bool hasFilePathId() const { return this->filePathId_ != nullptr;};
      void deleteFilePathId() { this->filePathId_ = nullptr;};
      inline string getFilePathId() const { DARABONBA_PTR_GET_DEFAULT(filePathId_, "") };
      inline FilePathQuotas& setFilePathId(string filePathId) { DARABONBA_PTR_SET_VALUE(filePathId_, filePathId) };


      // maxDepth Field Functions 
      bool hasMaxDepth() const { return this->maxDepth_ != nullptr;};
      void deleteMaxDepth() { this->maxDepth_ = nullptr;};
      inline int32_t getMaxDepth() const { DARABONBA_PTR_GET_DEFAULT(maxDepth_, 0) };
      inline FilePathQuotas& setMaxDepth(int32_t maxDepth) { DARABONBA_PTR_SET_VALUE(maxDepth_, maxDepth) };


      // quotaIds Field Functions 
      bool hasQuotaIds() const { return this->quotaIds_ != nullptr;};
      void deleteQuotaIds() { this->quotaIds_ = nullptr;};
      inline string getQuotaIds() const { DARABONBA_PTR_GET_DEFAULT(quotaIds_, "") };
      inline FilePathQuotas& setQuotaIds(string quotaIds) { DARABONBA_PTR_SET_VALUE(quotaIds_, quotaIds) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
      inline FilePathQuotas& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    protected:
      shared_ptr<string> filePathId_ {};
      shared_ptr<int32_t> maxDepth_ {};
      shared_ptr<string> quotaIds_ {};
      shared_ptr<string> strategy_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->filePathQuotas_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SetPolarFsFileQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filePathQuotas Field Functions 
    bool hasFilePathQuotas() const { return this->filePathQuotas_ != nullptr;};
    void deleteFilePathQuotas() { this->filePathQuotas_ = nullptr;};
    inline const vector<SetPolarFsFileQuotaRequest::FilePathQuotas> & getFilePathQuotas() const { DARABONBA_PTR_GET_CONST(filePathQuotas_, vector<SetPolarFsFileQuotaRequest::FilePathQuotas>) };
    inline vector<SetPolarFsFileQuotaRequest::FilePathQuotas> getFilePathQuotas() { DARABONBA_PTR_GET(filePathQuotas_, vector<SetPolarFsFileQuotaRequest::FilePathQuotas>) };
    inline SetPolarFsFileQuotaRequest& setFilePathQuotas(const vector<SetPolarFsFileQuotaRequest::FilePathQuotas> & filePathQuotas) { DARABONBA_PTR_SET_VALUE(filePathQuotas_, filePathQuotas) };
    inline SetPolarFsFileQuotaRequest& setFilePathQuotas(vector<SetPolarFsFileQuotaRequest::FilePathQuotas> && filePathQuotas) { DARABONBA_PTR_SET_RVALUE(filePathQuotas_, filePathQuotas) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline SetPolarFsFileQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<vector<SetPolarFsFileQuotaRequest::FilePathQuotas>> filePathQuotas_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

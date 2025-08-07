// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
    };
    UploadDataSyncResponseBodyData() = default ;
    UploadDataSyncResponseBodyData(const UploadDataSyncResponseBodyData &) = default ;
    UploadDataSyncResponseBodyData(UploadDataSyncResponseBodyData &&) = default ;
    UploadDataSyncResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyData() = default ;
    UploadDataSyncResponseBodyData& operator=(const UploadDataSyncResponseBodyData &) = default ;
    UploadDataSyncResponseBodyData& operator=(UploadDataSyncResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultInfo_ != nullptr; };
    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncResponseBodyDataResultInfo> & resultInfo() const { DARABONBA_PTR_GET_CONST(resultInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfo>) };
    inline vector<Models::UploadDataSyncResponseBodyDataResultInfo> resultInfo() { DARABONBA_PTR_GET(resultInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfo>) };
    inline UploadDataSyncResponseBodyData& setResultInfo(const vector<Models::UploadDataSyncResponseBodyDataResultInfo> & resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };
    inline UploadDataSyncResponseBodyData& setResultInfo(vector<Models::UploadDataSyncResponseBodyDataResultInfo> && resultInfo) { DARABONBA_PTR_SET_RVALUE(resultInfo_, resultInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncResponseBodyDataResultInfo>> resultInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

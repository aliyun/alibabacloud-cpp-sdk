// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(SaveType, saveType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpDBId_ == nullptr
        && return this->primaryKey_ == nullptr && return this->saveType_ == nullptr; };
    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // saveType Field Functions 
    bool hasSaveType() const { return this->saveType_ != nullptr;};
    void deleteSaveType() { this->saveType_ = nullptr;};
    inline string saveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


  protected:
    // The ID of the media fingerprint library.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The unique primary key of the video.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   **nosave**: The fingerprints of the job input are not saved to the media fingerprint library.
    // *   **save**: The fingerprints of the job input are saved to the media fingerprint library only if the job input is not duplicated with media content in the media fingerprint library.
    // *   **forcesave**: The fingerprints of the job input are forcibly saved to the media fingerprint library.
    std::shared_ptr<string> saveType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

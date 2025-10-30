// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUESTUPDATECOMMANDSPARKCLIENTINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUESTUPDATECOMMANDSPARKCLIENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskRequestUpdateCommandSparkClientInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskRequestUpdateCommandSparkClientInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SparkClientVersion, sparkClientVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskRequestUpdateCommandSparkClientInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SparkClientVersion, sparkClientVersion_);
    };
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo() = default ;
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo(const UpdateBatchTaskRequestUpdateCommandSparkClientInfo &) = default ;
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo(UpdateBatchTaskRequestUpdateCommandSparkClientInfo &&) = default ;
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskRequestUpdateCommandSparkClientInfo() = default ;
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo& operator=(const UpdateBatchTaskRequestUpdateCommandSparkClientInfo &) = default ;
    UpdateBatchTaskRequestUpdateCommandSparkClientInfo& operator=(UpdateBatchTaskRequestUpdateCommandSparkClientInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sparkClientVersion_ == nullptr; };
    // sparkClientVersion Field Functions 
    bool hasSparkClientVersion() const { return this->sparkClientVersion_ != nullptr;};
    void deleteSparkClientVersion() { this->sparkClientVersion_ = nullptr;};
    inline string sparkClientVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkClientVersion_, "") };
    inline UpdateBatchTaskRequestUpdateCommandSparkClientInfo& setSparkClientVersion(string sparkClientVersion) { DARABONBA_PTR_SET_VALUE(sparkClientVersion_, sparkClientVersion) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sparkClientVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

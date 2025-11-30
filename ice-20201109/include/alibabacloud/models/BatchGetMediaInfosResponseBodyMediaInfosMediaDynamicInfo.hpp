// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSMEDIADYNAMICINFO_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSMEDIADYNAMICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
    };
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo(const BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo(BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& operator=(const BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& operator=(BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicMetaData_ == nullptr; };
    // dynamicMetaData Field Functions 
    bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
    void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
    inline const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData & dynamicMetaData() const { DARABONBA_PTR_GET_CONST(dynamicMetaData_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData) };
    inline Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData dynamicMetaData() { DARABONBA_PTR_GET(dynamicMetaData_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& setDynamicMetaData(const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData & dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };
    inline BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfo& setDynamicMetaData(Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData && dynamicMetaData) { DARABONBA_PTR_SET_RVALUE(dynamicMetaData_, dynamicMetaData) };


  protected:
    std::shared_ptr<Models::BatchGetMediaInfosResponseBodyMediaInfosMediaDynamicInfoDynamicMetaData> dynamicMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

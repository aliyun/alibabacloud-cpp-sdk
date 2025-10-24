// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMSDATASOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMSDATASOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateMmsDataSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmsDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(asyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmsDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    UpdateMmsDataSourceResponseBodyData() = default ;
    UpdateMmsDataSourceResponseBodyData(const UpdateMmsDataSourceResponseBodyData &) = default ;
    UpdateMmsDataSourceResponseBodyData(UpdateMmsDataSourceResponseBodyData &&) = default ;
    UpdateMmsDataSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmsDataSourceResponseBodyData() = default ;
    UpdateMmsDataSourceResponseBodyData& operator=(const UpdateMmsDataSourceResponseBodyData &) = default ;
    UpdateMmsDataSourceResponseBodyData& operator=(UpdateMmsDataSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->sourceId_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline int64_t asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, 0L) };
    inline UpdateMmsDataSourceResponseBodyData& setAsyncTaskId(int64_t asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline UpdateMmsDataSourceResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    std::shared_ptr<int64_t> asyncTaskId_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateRecallManagementTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(IndexVersionId, indexVersionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(IndexVersionId, indexVersionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
    };
    UpdateRecallManagementTableRequest() = default ;
    UpdateRecallManagementTableRequest(const UpdateRecallManagementTableRequest &) = default ;
    UpdateRecallManagementTableRequest(UpdateRecallManagementTableRequest &&) = default ;
    UpdateRecallManagementTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecallManagementTableRequest() = default ;
    UpdateRecallManagementTableRequest& operator=(const UpdateRecallManagementTableRequest &) = default ;
    UpdateRecallManagementTableRequest& operator=(UpdateRecallManagementTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableDataSizeFluctuationThreshold_ == nullptr
        && this->enableRowCountFluctuationThreshold_ == nullptr && this->indexVersionId_ == nullptr && this->instanceId_ == nullptr && this->maxDataSizeFluctuationThreshold_ == nullptr && this->maxRowCountFluctuationThreshold_ == nullptr
        && this->minDataSizeFluctuationThreshold_ == nullptr && this->minRowCountFluctuationThreshold_ == nullptr; };
    // enableDataSizeFluctuationThreshold Field Functions 
    bool hasEnableDataSizeFluctuationThreshold() const { return this->enableDataSizeFluctuationThreshold_ != nullptr;};
    void deleteEnableDataSizeFluctuationThreshold() { this->enableDataSizeFluctuationThreshold_ = nullptr;};
    inline bool getEnableDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableDataSizeFluctuationThreshold_, false) };
    inline UpdateRecallManagementTableRequest& setEnableDataSizeFluctuationThreshold(bool enableDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableDataSizeFluctuationThreshold_, enableDataSizeFluctuationThreshold) };


    // enableRowCountFluctuationThreshold Field Functions 
    bool hasEnableRowCountFluctuationThreshold() const { return this->enableRowCountFluctuationThreshold_ != nullptr;};
    void deleteEnableRowCountFluctuationThreshold() { this->enableRowCountFluctuationThreshold_ = nullptr;};
    inline bool getEnableRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableRowCountFluctuationThreshold_, false) };
    inline UpdateRecallManagementTableRequest& setEnableRowCountFluctuationThreshold(bool enableRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableRowCountFluctuationThreshold_, enableRowCountFluctuationThreshold) };


    // indexVersionId Field Functions 
    bool hasIndexVersionId() const { return this->indexVersionId_ != nullptr;};
    void deleteIndexVersionId() { this->indexVersionId_ = nullptr;};
    inline string getIndexVersionId() const { DARABONBA_PTR_GET_DEFAULT(indexVersionId_, "") };
    inline UpdateRecallManagementTableRequest& setIndexVersionId(string indexVersionId) { DARABONBA_PTR_SET_VALUE(indexVersionId_, indexVersionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRecallManagementTableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxDataSizeFluctuationThreshold Field Functions 
    bool hasMaxDataSizeFluctuationThreshold() const { return this->maxDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMaxDataSizeFluctuationThreshold() { this->maxDataSizeFluctuationThreshold_ = nullptr;};
    inline int32_t getMaxDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxDataSizeFluctuationThreshold_, 0) };
    inline UpdateRecallManagementTableRequest& setMaxDataSizeFluctuationThreshold(int32_t maxDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxDataSizeFluctuationThreshold_, maxDataSizeFluctuationThreshold) };


    // maxRowCountFluctuationThreshold Field Functions 
    bool hasMaxRowCountFluctuationThreshold() const { return this->maxRowCountFluctuationThreshold_ != nullptr;};
    void deleteMaxRowCountFluctuationThreshold() { this->maxRowCountFluctuationThreshold_ = nullptr;};
    inline int32_t getMaxRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxRowCountFluctuationThreshold_, 0) };
    inline UpdateRecallManagementTableRequest& setMaxRowCountFluctuationThreshold(int32_t maxRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxRowCountFluctuationThreshold_, maxRowCountFluctuationThreshold) };


    // minDataSizeFluctuationThreshold Field Functions 
    bool hasMinDataSizeFluctuationThreshold() const { return this->minDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMinDataSizeFluctuationThreshold() { this->minDataSizeFluctuationThreshold_ = nullptr;};
    inline int32_t getMinDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minDataSizeFluctuationThreshold_, 0) };
    inline UpdateRecallManagementTableRequest& setMinDataSizeFluctuationThreshold(int32_t minDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minDataSizeFluctuationThreshold_, minDataSizeFluctuationThreshold) };


    // minRowCountFluctuationThreshold Field Functions 
    bool hasMinRowCountFluctuationThreshold() const { return this->minRowCountFluctuationThreshold_ != nullptr;};
    void deleteMinRowCountFluctuationThreshold() { this->minRowCountFluctuationThreshold_ = nullptr;};
    inline int32_t getMinRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minRowCountFluctuationThreshold_, 0) };
    inline UpdateRecallManagementTableRequest& setMinRowCountFluctuationThreshold(int32_t minRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minRowCountFluctuationThreshold_, minRowCountFluctuationThreshold) };


  protected:
    shared_ptr<bool> enableDataSizeFluctuationThreshold_ {};
    shared_ptr<bool> enableRowCountFluctuationThreshold_ {};
    shared_ptr<string> indexVersionId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> maxDataSizeFluctuationThreshold_ {};
    shared_ptr<int32_t> maxRowCountFluctuationThreshold_ {};
    shared_ptr<int32_t> minDataSizeFluctuationThreshold_ {};
    shared_ptr<int32_t> minRowCountFluctuationThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

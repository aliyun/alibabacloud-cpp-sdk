// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    UpdateDatasetVersionRequest() = default ;
    UpdateDatasetVersionRequest(const UpdateDatasetVersionRequest &) = default ;
    UpdateDatasetVersionRequest(UpdateDatasetVersionRequest &&) = default ;
    UpdateDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetVersionRequest() = default ;
    UpdateDatasetVersionRequest& operator=(const UpdateDatasetVersionRequest &) = default ;
    UpdateDatasetVersionRequest& operator=(UpdateDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && return this->dataSize_ == nullptr && return this->description_ == nullptr && return this->options_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t dataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline UpdateDatasetVersionRequest& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline UpdateDatasetVersionRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDatasetVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateDatasetVersionRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    std::shared_ptr<int64_t> dataCount_ = nullptr;
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

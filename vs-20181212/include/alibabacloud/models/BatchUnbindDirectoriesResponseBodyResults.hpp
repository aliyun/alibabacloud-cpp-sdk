// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUNBINDDIRECTORIESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHUNBINDDIRECTORIESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchUnbindDirectoriesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUnbindDirectoriesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Error, error_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUnbindDirectoriesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
    };
    BatchUnbindDirectoriesResponseBodyResults() = default ;
    BatchUnbindDirectoriesResponseBodyResults(const BatchUnbindDirectoriesResponseBodyResults &) = default ;
    BatchUnbindDirectoriesResponseBodyResults(BatchUnbindDirectoriesResponseBodyResults &&) = default ;
    BatchUnbindDirectoriesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUnbindDirectoriesResponseBodyResults() = default ;
    BatchUnbindDirectoriesResponseBodyResults& operator=(const BatchUnbindDirectoriesResponseBodyResults &) = default ;
    BatchUnbindDirectoriesResponseBodyResults& operator=(BatchUnbindDirectoriesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->directoryId_ == nullptr && return this->error_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BatchUnbindDirectoriesResponseBodyResults& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline BatchUnbindDirectoriesResponseBodyResults& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline BatchUnbindDirectoriesResponseBodyResults& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


  protected:
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

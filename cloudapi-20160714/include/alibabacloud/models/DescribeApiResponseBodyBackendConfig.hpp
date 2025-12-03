// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
    };
    DescribeApiResponseBodyBackendConfig() = default ;
    DescribeApiResponseBodyBackendConfig(const DescribeApiResponseBodyBackendConfig &) = default ;
    DescribeApiResponseBodyBackendConfig(DescribeApiResponseBodyBackendConfig &&) = default ;
    DescribeApiResponseBodyBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyBackendConfig() = default ;
    DescribeApiResponseBodyBackendConfig& operator=(const DescribeApiResponseBodyBackendConfig &) = default ;
    DescribeApiResponseBodyBackendConfig& operator=(DescribeApiResponseBodyBackendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendName_ == nullptr && return this->backendType_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DescribeApiResponseBodyBackendConfig& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline DescribeApiResponseBodyBackendConfig& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline DescribeApiResponseBodyBackendConfig& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
    // The name of the backend service.
    std::shared_ptr<string> backendName_ = nullptr;
    // Backend service type
    std::shared_ptr<string> backendType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

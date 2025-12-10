// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetServiceStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HasRamPermissions, hasRamPermissions_);
      DARABONBA_PTR_TO_JSON(IsDlfServiceOpen, isDlfServiceOpen_);
      DARABONBA_PTR_TO_JSON(IsOssOpen, isOssOpen_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HasRamPermissions, hasRamPermissions_);
      DARABONBA_PTR_FROM_JSON(IsDlfServiceOpen, isDlfServiceOpen_);
      DARABONBA_PTR_FROM_JSON(IsOssOpen, isOssOpen_);
    };
    GetServiceStatusResponseBodyData() = default ;
    GetServiceStatusResponseBodyData(const GetServiceStatusResponseBodyData &) = default ;
    GetServiceStatusResponseBodyData(GetServiceStatusResponseBodyData &&) = default ;
    GetServiceStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceStatusResponseBodyData() = default ;
    GetServiceStatusResponseBodyData& operator=(const GetServiceStatusResponseBodyData &) = default ;
    GetServiceStatusResponseBodyData& operator=(GetServiceStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasRamPermissions_ == nullptr
        && return this->isDlfServiceOpen_ == nullptr && return this->isOssOpen_ == nullptr; };
    // hasRamPermissions Field Functions 
    bool hasHasRamPermissions() const { return this->hasRamPermissions_ != nullptr;};
    void deleteHasRamPermissions() { this->hasRamPermissions_ = nullptr;};
    inline bool hasRamPermissions() const { DARABONBA_PTR_GET_DEFAULT(hasRamPermissions_, false) };
    inline GetServiceStatusResponseBodyData& setHasRamPermissions(bool hasRamPermissions) { DARABONBA_PTR_SET_VALUE(hasRamPermissions_, hasRamPermissions) };


    // isDlfServiceOpen Field Functions 
    bool hasIsDlfServiceOpen() const { return this->isDlfServiceOpen_ != nullptr;};
    void deleteIsDlfServiceOpen() { this->isDlfServiceOpen_ = nullptr;};
    inline bool isDlfServiceOpen() const { DARABONBA_PTR_GET_DEFAULT(isDlfServiceOpen_, false) };
    inline GetServiceStatusResponseBodyData& setIsDlfServiceOpen(bool isDlfServiceOpen) { DARABONBA_PTR_SET_VALUE(isDlfServiceOpen_, isDlfServiceOpen) };


    // isOssOpen Field Functions 
    bool hasIsOssOpen() const { return this->isOssOpen_ != nullptr;};
    void deleteIsOssOpen() { this->isOssOpen_ = nullptr;};
    inline bool isOssOpen() const { DARABONBA_PTR_GET_DEFAULT(isOssOpen_, false) };
    inline GetServiceStatusResponseBodyData& setIsOssOpen(bool isOssOpen) { DARABONBA_PTR_SET_VALUE(isOssOpen_, isOssOpen) };


  protected:
    // Whether to complete RAM authorization
    std::shared_ptr<bool> hasRamPermissions_ = nullptr;
    // Whether the DLF service is activated
    std::shared_ptr<bool> isDlfServiceOpen_ = nullptr;
    // Whether the OSS service is enabled
    std::shared_ptr<bool> isOssOpen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif

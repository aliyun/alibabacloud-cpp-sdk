// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODYITEMSCONFIGUSERFREEZECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTRESPONSEBODYITEMSCONFIGUSERFREEZECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
    };
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig() = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig(const GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig &) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig(GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig &&) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig() = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& operator=(const GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig &) = default ;
    GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& operator=(GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->freezeRestorePath_ == nullptr
        && return this->freezeType_ == nullptr; };
    // freezeRestorePath Field Functions 
    bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
    void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
    inline string freezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string freezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline GetStockOssCheckTasksListResponseBodyItemsConfigUserFreezeConfig& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


  protected:
    // Storage path for transfer
    std::shared_ptr<string> freezeRestorePath_ = nullptr;
    // Freeze type
    std::shared_ptr<string> freezeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

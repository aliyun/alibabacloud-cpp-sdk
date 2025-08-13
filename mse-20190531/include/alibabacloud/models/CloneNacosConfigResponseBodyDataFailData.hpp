// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATAFAILDATA_HPP_
#define ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATAFAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneNacosConfigResponseBodyDataFailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneNacosConfigResponseBodyDataFailData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CloneNacosConfigResponseBodyDataFailData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    CloneNacosConfigResponseBodyDataFailData() = default ;
    CloneNacosConfigResponseBodyDataFailData(const CloneNacosConfigResponseBodyDataFailData &) = default ;
    CloneNacosConfigResponseBodyDataFailData(CloneNacosConfigResponseBodyDataFailData &&) = default ;
    CloneNacosConfigResponseBodyDataFailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneNacosConfigResponseBodyDataFailData() = default ;
    CloneNacosConfigResponseBodyDataFailData& operator=(const CloneNacosConfigResponseBodyDataFailData &) = default ;
    CloneNacosConfigResponseBodyDataFailData& operator=(CloneNacosConfigResponseBodyDataFailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->group_ != nullptr && this->reason_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline CloneNacosConfigResponseBodyDataFailData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline CloneNacosConfigResponseBodyDataFailData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CloneNacosConfigResponseBodyDataFailData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Data ID.
    std::shared_ptr<string> dataId_ = nullptr;
    // Group ID.
    std::shared_ptr<string> group_ = nullptr;
    // The reason for the current operation.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATASKIPDATA_HPP_
#define ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATASKIPDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneNacosConfigResponseBodyDataSkipData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, CloneNacosConfigResponseBodyDataSkipData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    CloneNacosConfigResponseBodyDataSkipData() = default ;
    CloneNacosConfigResponseBodyDataSkipData(const CloneNacosConfigResponseBodyDataSkipData &) = default ;
    CloneNacosConfigResponseBodyDataSkipData(CloneNacosConfigResponseBodyDataSkipData &&) = default ;
    CloneNacosConfigResponseBodyDataSkipData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneNacosConfigResponseBodyDataSkipData() = default ;
    CloneNacosConfigResponseBodyDataSkipData& operator=(const CloneNacosConfigResponseBodyDataSkipData &) = default ;
    CloneNacosConfigResponseBodyDataSkipData& operator=(CloneNacosConfigResponseBodyDataSkipData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && return this->group_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline CloneNacosConfigResponseBodyDataSkipData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline CloneNacosConfigResponseBodyDataSkipData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


  protected:
    // Data ID.
    std::shared_ptr<string> dataId_ = nullptr;
    // Group ID.
    std::shared_ptr<string> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

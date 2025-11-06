// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODYDATASKIPDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODYDATASKIPDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ImportNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNacosConfigResponseBodyDataSkipData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNacosConfigResponseBodyDataSkipData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    ImportNacosConfigResponseBodyDataSkipData() = default ;
    ImportNacosConfigResponseBodyDataSkipData(const ImportNacosConfigResponseBodyDataSkipData &) = default ;
    ImportNacosConfigResponseBodyDataSkipData(ImportNacosConfigResponseBodyDataSkipData &&) = default ;
    ImportNacosConfigResponseBodyDataSkipData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNacosConfigResponseBodyDataSkipData() = default ;
    ImportNacosConfigResponseBodyDataSkipData& operator=(const ImportNacosConfigResponseBodyDataSkipData &) = default ;
    ImportNacosConfigResponseBodyDataSkipData& operator=(ImportNacosConfigResponseBodyDataSkipData &&) = default ;
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
    inline ImportNacosConfigResponseBodyDataSkipData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ImportNacosConfigResponseBodyDataSkipData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


  protected:
    // The ID of the group.
    std::shared_ptr<string> dataId_ = nullptr;
    // The information about configurations that are failed to be imported.
    std::shared_ptr<string> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

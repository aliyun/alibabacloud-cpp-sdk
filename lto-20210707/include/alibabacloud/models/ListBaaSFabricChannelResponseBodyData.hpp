// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASFABRICCHANNELRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASFABRICCHANNELRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSFabricChannelResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSFabricChannelResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_TO_JSON(BaaSFabricChannelName, baaSFabricChannelName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSFabricChannelResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_FROM_JSON(BaaSFabricChannelName, baaSFabricChannelName_);
    };
    ListBaaSFabricChannelResponseBodyData() = default ;
    ListBaaSFabricChannelResponseBodyData(const ListBaaSFabricChannelResponseBodyData &) = default ;
    ListBaaSFabricChannelResponseBodyData(ListBaaSFabricChannelResponseBodyData &&) = default ;
    ListBaaSFabricChannelResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSFabricChannelResponseBodyData() = default ;
    ListBaaSFabricChannelResponseBodyData& operator=(const ListBaaSFabricChannelResponseBodyData &) = default ;
    ListBaaSFabricChannelResponseBodyData& operator=(ListBaaSFabricChannelResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSFabricChannelId_ == nullptr
        && return this->baaSFabricChannelName_ == nullptr; };
    // baaSFabricChannelId Field Functions 
    bool hasBaaSFabricChannelId() const { return this->baaSFabricChannelId_ != nullptr;};
    void deleteBaaSFabricChannelId() { this->baaSFabricChannelId_ = nullptr;};
    inline string baaSFabricChannelId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricChannelId_, "") };
    inline ListBaaSFabricChannelResponseBodyData& setBaaSFabricChannelId(string baaSFabricChannelId) { DARABONBA_PTR_SET_VALUE(baaSFabricChannelId_, baaSFabricChannelId) };


    // baaSFabricChannelName Field Functions 
    bool hasBaaSFabricChannelName() const { return this->baaSFabricChannelName_ != nullptr;};
    void deleteBaaSFabricChannelName() { this->baaSFabricChannelName_ = nullptr;};
    inline string baaSFabricChannelName() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricChannelName_, "") };
    inline ListBaaSFabricChannelResponseBodyData& setBaaSFabricChannelName(string baaSFabricChannelName) { DARABONBA_PTR_SET_VALUE(baaSFabricChannelName_, baaSFabricChannelName) };


  protected:
    std::shared_ptr<string> baaSFabricChannelId_ = nullptr;
    std::shared_ptr<string> baaSFabricChannelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif

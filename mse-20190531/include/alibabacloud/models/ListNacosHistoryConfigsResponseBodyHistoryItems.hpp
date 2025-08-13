// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSHISTORYCONFIGSRESPONSEBODYHISTORYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSHISTORYCONFIGSRESPONSEBODYHISTORYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosHistoryConfigsResponseBodyHistoryItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosHistoryConfigsResponseBodyHistoryItems& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(SrcUser, srcUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosHistoryConfigsResponseBodyHistoryItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(SrcUser, srcUser_);
    };
    ListNacosHistoryConfigsResponseBodyHistoryItems() = default ;
    ListNacosHistoryConfigsResponseBodyHistoryItems(const ListNacosHistoryConfigsResponseBodyHistoryItems &) = default ;
    ListNacosHistoryConfigsResponseBodyHistoryItems(ListNacosHistoryConfigsResponseBodyHistoryItems &&) = default ;
    ListNacosHistoryConfigsResponseBodyHistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosHistoryConfigsResponseBodyHistoryItems() = default ;
    ListNacosHistoryConfigsResponseBodyHistoryItems& operator=(const ListNacosHistoryConfigsResponseBodyHistoryItems &) = default ;
    ListNacosHistoryConfigsResponseBodyHistoryItems& operator=(ListNacosHistoryConfigsResponseBodyHistoryItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->dataId_ != nullptr && this->group_ != nullptr && this->id_ != nullptr && this->lastModifiedTime_ != nullptr && this->opType_ != nullptr
        && this->srcUser_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // srcUser Field Functions 
    bool hasSrcUser() const { return this->srcUser_ != nullptr;};
    void deleteSrcUser() { this->srcUser_ = nullptr;};
    inline string srcUser() const { DARABONBA_PTR_GET_DEFAULT(srcUser_, "") };
    inline ListNacosHistoryConfigsResponseBodyHistoryItems& setSrcUser(string srcUser) { DARABONBA_PTR_SET_VALUE(srcUser_, srcUser) };


  protected:
    // The application tag.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the data.
    std::shared_ptr<string> dataId_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the configuration.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The timestamp when the configuration was last modified.
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    // The format of the configuration file.
    std::shared_ptr<string> opType_ = nullptr;
    std::shared_ptr<string> srcUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYIPRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYIPRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListListenersByIpResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersByIpResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersByIpResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListListenersByIpResponseBodyListeners() = default ;
    ListListenersByIpResponseBodyListeners(const ListListenersByIpResponseBodyListeners &) = default ;
    ListListenersByIpResponseBodyListeners(ListListenersByIpResponseBodyListeners &&) = default ;
    ListListenersByIpResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersByIpResponseBodyListeners() = default ;
    ListListenersByIpResponseBodyListeners& operator=(const ListListenersByIpResponseBodyListeners &) = default ;
    ListListenersByIpResponseBodyListeners& operator=(ListListenersByIpResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->group_ != nullptr && this->md5_ != nullptr && this->namespaceId_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListListenersByIpResponseBodyListeners& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListListenersByIpResponseBodyListeners& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListListenersByIpResponseBodyListeners& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListListenersByIpResponseBodyListeners& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of the data.
    std::shared_ptr<string> dataId_ = nullptr;
    // The group.
    std::shared_ptr<string> group_ = nullptr;
    // The verification string.
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

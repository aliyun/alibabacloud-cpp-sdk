// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODYDATAPAGEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODYDATAPAGEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNacosMcpServersResponseBodyDataPageItemsVersionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosMcpServersResponseBodyDataPageItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosMcpServersResponseBodyDataPageItems& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrontProtocol, frontProtocol_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosMcpServersResponseBodyDataPageItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrontProtocol, frontProtocol_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
    };
    ListNacosMcpServersResponseBodyDataPageItems() = default ;
    ListNacosMcpServersResponseBodyDataPageItems(const ListNacosMcpServersResponseBodyDataPageItems &) = default ;
    ListNacosMcpServersResponseBodyDataPageItems(ListNacosMcpServersResponseBodyDataPageItems &&) = default ;
    ListNacosMcpServersResponseBodyDataPageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosMcpServersResponseBodyDataPageItems() = default ;
    ListNacosMcpServersResponseBodyDataPageItems& operator=(const ListNacosMcpServersResponseBodyDataPageItems &) = default ;
    ListNacosMcpServersResponseBodyDataPageItems& operator=(ListNacosMcpServersResponseBodyDataPageItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capabilities_ != nullptr
        && this->description_ != nullptr && this->frontProtocol_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->protocol_ != nullptr
        && this->version_ != nullptr && this->versionDetail_ != nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & capabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> capabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline ListNacosMcpServersResponseBodyDataPageItems& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline ListNacosMcpServersResponseBodyDataPageItems& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frontProtocol Field Functions 
    bool hasFrontProtocol() const { return this->frontProtocol_ != nullptr;};
    void deleteFrontProtocol() { this->frontProtocol_ = nullptr;};
    inline string frontProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontProtocol_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setFrontProtocol(string frontProtocol) { DARABONBA_PTR_SET_VALUE(frontProtocol_, frontProtocol) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListNacosMcpServersResponseBodyDataPageItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDetail Field Functions 
    bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
    void deleteVersionDetail() { this->versionDetail_ = nullptr;};
    inline const Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail & versionDetail() const { DARABONBA_PTR_GET_CONST(versionDetail_, Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail) };
    inline Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail versionDetail() { DARABONBA_PTR_GET(versionDetail_, Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail) };
    inline ListNacosMcpServersResponseBodyDataPageItems& setVersionDetail(const Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail & versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };
    inline ListNacosMcpServersResponseBodyDataPageItems& setVersionDetail(Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail && versionDetail) { DARABONBA_PTR_SET_RVALUE(versionDetail_, versionDetail) };


  protected:
    std::shared_ptr<vector<string>> capabilities_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> frontProtocol_ = nullptr;
    // ID。
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<Models::ListNacosMcpServersResponseBodyDataPageItemsVersionDetail> versionDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

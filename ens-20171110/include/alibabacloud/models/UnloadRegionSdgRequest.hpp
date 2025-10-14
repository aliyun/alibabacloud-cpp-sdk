// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOADREGIONSDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNLOADREGIONSDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnloadRegionSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnloadRegionSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, UnloadRegionSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    UnloadRegionSDGRequest() = default ;
    UnloadRegionSDGRequest(const UnloadRegionSDGRequest &) = default ;
    UnloadRegionSDGRequest(UnloadRegionSDGRequest &&) = default ;
    UnloadRegionSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnloadRegionSDGRequest() = default ;
    UnloadRegionSDGRequest& operator=(const UnloadRegionSDGRequest &) = default ;
    UnloadRegionSDGRequest& operator=(UnloadRegionSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionIds_ == nullptr
        && return this->namespaces_ == nullptr && return this->SDGId_ == nullptr; };
    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const vector<string> & destinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
    inline vector<string> destinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
    inline UnloadRegionSDGRequest& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline UnloadRegionSDGRequest& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline UnloadRegionSDGRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline UnloadRegionSDGRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline UnloadRegionSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> destinationRegionIds_ = nullptr;
    // An array that consists of queried namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // Deletes the shared data group (SDG) ID of the preloaded data.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
